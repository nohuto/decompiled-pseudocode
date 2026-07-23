/*
 * XREFs of WheapLogInitEvent @ 0x1407C8808
 * Callers:
 *     WheaInitialize @ 0x140C4624C (WheaInitialize.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     Feature_3388731705__private_IsEnabledDeviceUsageNoInline @ 0x14065C4FC (Feature_3388731705__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_692318521__private_IsEnabledDeviceUsageNoInline @ 0x14065C550 (Feature_692318521__private_IsEnabledDeviceUsageNoInline.c)
 *     WheaLogInternalEvent @ 0x14065C840 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void WheapLogInitEvent()
{
  char *Pool2; // rdi
  __int64 *v1; // rdx
  int i; // r8d
  __int64 *v3; // rcx
  __int64 v4; // r9
  char *v5; // rax
  __int128 v6; // xmm1
  int v7; // esi
  ULONG_PTR v8; // rdx
  _DWORD *v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // rdx
  unsigned int Size; // [rsp+38h] [rbp-9h] BYREF
  int Size_4; // [rsp+3Ch] [rbp-5h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp+7h] BYREF
  int *p_Size_4; // [rsp+58h] [rbp+17h]
  int v16; // [rsp+60h] [rbp+1Fh]
  int v17; // [rsp+64h] [rbp+23h]
  unsigned int *p_Size; // [rsp+68h] [rbp+27h]
  int v19; // [rsp+70h] [rbp+2Fh]
  int v20; // [rsp+74h] [rbp+33h]
  char *v21; // [rsp+78h] [rbp+37h]
  unsigned int v22; // [rsp+80h] [rbp+3Fh]
  int v23; // [rsp+84h] [rbp+43h]

  Size = 1072 * dword_140EEEF14;
  Pool2 = (char *)ExAllocatePool2(0x42uLL, (unsigned int)(1072 * dword_140EEEF14), 0x61656857u);
  if ( Pool2 )
  {
    if ( (unsigned int)Feature_692318521__private_IsEnabledDeviceUsageNoInline() )
    {
      memset_0(Pool2, 0, Size);
    }
    else
    {
      v1 = (__int64 *)qword_140EEEF20;
      for ( i = 0; v1 != &qword_140EEEF20; v1 = (__int64 *)*v1 )
      {
        v3 = v1;
        v4 = 8LL;
        v5 = &Pool2[1072 * i];
        do
        {
          *(_OWORD *)v5 = *(_OWORD *)v3;
          *((_OWORD *)v5 + 1) = *((_OWORD *)v3 + 1);
          *((_OWORD *)v5 + 2) = *((_OWORD *)v3 + 2);
          *((_OWORD *)v5 + 3) = *((_OWORD *)v3 + 3);
          *((_OWORD *)v5 + 4) = *((_OWORD *)v3 + 4);
          *((_OWORD *)v5 + 5) = *((_OWORD *)v3 + 5);
          *((_OWORD *)v5 + 6) = *((_OWORD *)v3 + 6);
          v5 += 128;
          v6 = *((_OWORD *)v3 + 7);
          v3 += 16;
          *((_OWORD *)v5 - 1) = v6;
          --v4;
        }
        while ( v4 );
        ++i;
        *(_OWORD *)v5 = *(_OWORD *)v3;
        *((_OWORD *)v5 + 1) = *((_OWORD *)v3 + 1);
        *((_OWORD *)v5 + 2) = *((_OWORD *)v3 + 2);
      }
    }
    UserData.Reserved = 0;
    v17 = 0;
    v20 = 0;
    v23 = 0;
    UserData.Ptr = (ULONGLONG)&dword_140EEEF14;
    p_Size_4 = &Size_4;
    p_Size = &Size;
    v22 = Size;
    UserData.Size = 4;
    Size_4 = 10;
    v16 = 4;
    v19 = 4;
    v21 = Pool2;
    if ( EtwEventEnabled((REGHANDLE)WheapDispatchPtr.Dpc.DpcData, &EVENT_WHEA_INIT_OP) == 1 )
      EtwWrite((REGHANDLE)WheapDispatchPtr.Dpc.DpcData, &EVENT_WHEA_INIT_OP, 0LL, 4u, &UserData);
    v7 = 32;
    if ( (unsigned int)Feature_3388731705__private_IsEnabledDeviceUsageNoInline() )
      v8 = 32LL;
    else
      v8 = Size + 32LL;
    v9 = (_DWORD *)ExAllocatePool2(0x42uLL, v8, 0x61656857u);
    if ( v9 )
    {
      if ( (unsigned int)Feature_3388731705__private_IsEnabledDeviceUsageNoInline() )
      {
        v10 = 0;
      }
      else
      {
        v10 = Size;
        v7 = Size + 32;
      }
      *v9 = 1733060695;
      v9[1] = 1;
      v9[2] = v7;
      v9[3] = 0;
      v9[5] = -2147483646;
      v9[4] = 1280201291;
      v9[6] = 2;
      v9[7] = v10;
      if ( !(unsigned int)Feature_3388731705__private_IsEnabledDeviceUsageNoInline() )
        memmove(v9 + 8, Pool2, Size);
      WheaLogInternalEvent(v9, v11);
      ExFreePoolWithTag(v9, 0x61656857u);
    }
    ExFreePoolWithTag(Pool2, 0x61656857u);
  }
}
