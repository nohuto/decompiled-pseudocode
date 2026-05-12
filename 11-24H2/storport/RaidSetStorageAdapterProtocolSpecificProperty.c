/*
 * XREFs of RaidSetStorageAdapterProtocolSpecificProperty @ 0x14006651C
 * Callers:
 *     RaidAdapterStorageSetPropertyIoctl @ 0x14006484C (RaidAdapterStorageSetPropertyIoctl.c)
 * Callees:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x140010664 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     Feature_Servicing_StorageSetProperty_BufferCheck__private_IsEnabledDeviceUsageNoInline @ 0x1400565A0 (Feature_Servicing_StorageSetProperty_BufferCheck__private_IsEnabledDeviceUsageNoInline.c)
 *     RaBuildSetProtocolSpecificPropertyBufferForMiniport @ 0x140089944 (RaBuildSetProtocolSpecificPropertyBufferForMiniport.c)
 *     memmove @ 0x140143780 (memmove.c)
 */

__int64 __fastcall RaidSetStorageAdapterProtocolSpecificProperty(__int64 a1, IRP *a2, _QWORD *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int *p_Type; // rsi
  unsigned int *v6; // r14
  unsigned int Options; // ecx
  unsigned __int64 Length; // rdi
  int v9; // r12d
  int v10; // eax
  int v11; // edi
  char v12; // r15
  unsigned int v13; // eax
  _DWORD *v14; // rbx
  __int64 v15; // rax
  unsigned int v16; // ecx
  unsigned int v17; // ebx
  int v18; // eax
  ULONG v20; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v21; // [rsp+44h] [rbp-14h]
  unsigned int *v22; // [rsp+48h] [rbp-10h] BYREF
  char v25; // [rsp+B0h] [rbp+58h] BYREF
  char v26; // [rsp+B8h] [rbp+60h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  p_Type = (int *)&a2->AssociatedIrp.MasterIrp->Type;
  v6 = 0LL;
  v22 = 0LL;
  v20 = 0;
  Options = CurrentStackLocation->Parameters.Create.Options;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v9 = 1;
  v10 = *p_Type;
  v26 = 0;
  v25 = 0;
  v21 = Options;
  *a3 = 0LL;
  if ( v10 == 49 )
  {
    v12 = 0;
    v13 = 72;
  }
  else
  {
    if ( v10 != 67 )
      return (unsigned int)-1073741585;
    v12 = 1;
    v13 = 80;
  }
  if ( Options < v13 )
    return (unsigned int)-1073741585;
  v14 = p_Type + 2;
  if ( v12 )
  {
    if ( *v14 != 1 || p_Type[3] != 72 )
      return (unsigned int)-1073741585;
    v14 = p_Type + 4;
  }
  if ( (unsigned int)Feature_Servicing_StorageSetProperty_BufferCheck__private_IsEnabledDeviceUsageNoInline()
    && v21 < (unsigned __int64)v14 + (unsigned int)v14[4] + (unsigned __int64)(unsigned int)v14[5] - (_QWORD)p_Type )
  {
    return (unsigned int)-1073741585;
  }
  if ( *v14 && v14[1] && ((v15 = (unsigned int)v14[4], !(_DWORD)v15) || (unsigned int)v15 >= 0x40 && v14[5]) )
  {
    if ( (unsigned int)Length >= 0x48 )
    {
      if ( Length < (unsigned __int64)(unsigned int)v14[5] + v15 + 8 )
        return (unsigned int)-1073741585;
      v11 = RaBuildSetProtocolSpecificPropertyBufferForMiniport(
              *(_QWORD *)(a1 + 8),
              (_DWORD)a2,
              (unsigned int)&v22,
              (unsigned int)&v20,
              (__int64)&v26,
              (__int64)&v25);
      if ( v11 < 0 )
      {
        v6 = v22;
      }
      else
      {
        v6 = v22;
        v11 = RaidAdapterSendSrbIoControlSynchronously(a1, a2, v22, v20, 0LL, v25, 64, 0);
        if ( v11 >= 0 )
        {
          if ( v12 )
            memmove(p_Type + 2, v14, 0x40uLL);
          else
            v9 = 72;
          *p_Type = v9;
          v16 = p_Type[7];
          p_Type[1] = 72;
          p_Type[8] = v6[15];
          if ( v16 )
          {
            if ( v16 >= v6[14] )
              v16 = v6[14];
            v17 = v16;
            memmove((char *)p_Type + (unsigned int)p_Type[6] + 8, (char *)v6 + v6[13] + 36, v16);
            v18 = p_Type[6] + 8;
            p_Type[7] = v17;
            *a3 = v17 + v18;
          }
          else
          {
            *a3 = 72LL;
          }
        }
      }
    }
    else
    {
      if ( (unsigned int)Length < 8 )
        return (unsigned int)-1073741789;
      *p_Type = v12 != 0 ? 1 : 72;
      v11 = 0;
      p_Type[1] = 72;
      *a3 = 8LL;
    }
  }
  else
  {
    v11 = -1073741585;
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0x72536152u);
  return (unsigned int)v11;
}
