/*
 * XREFs of ?GrowUMPDHeap@UMPDOBJ@@AEAAHPEAU_UMPDHEAP@@K@Z @ 0x14025DED4
 * Callers:
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1400D91A8 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 * Callees:
 *     Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline @ 0x140325560 (Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall UMPDOBJ::GrowUMPDHeap(UMPDOBJ *this, struct _UMPDHEAP *a2, unsigned int a3)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v5; // rdx
  NTSTATUS v6; // edi
  HANDLE v7; // rax
  HANDLE v8; // rdi
  int IsEnabledDeviceUsageNoInline; // eax
  void *v10; // rcx
  __int64 result; // rax
  SIZE_T Size; // [rsp+40h] [rbp+8h] BYREF
  PVOID Address; // [rsp+48h] [rbp+10h] BYREF

  Size = (SIZE_T)this;
  v3 = *((_QWORD *)a2 + 2);
  v5 = v3 + a3;
  if ( v5 < v3 )
    return 0LL;
  if ( v5 + 4095 < v5 )
    return 0LL;
  Size = (v5 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( Size > 0x400000 )
    return 0LL;
  Address = *(PVOID *)a2;
  v6 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &Address, 0LL, &Size, 0x1000u, 4u);
  if ( (unsigned int)Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v6 < 0 )
    {
      v8 = 0LL;
      goto LABEL_11;
    }
    v7 = GrepSecureVirtualMemory(Address, Size, 4u);
  }
  else
  {
    if ( v6 < 0 )
      return 0LL;
    v7 = MmSecureVirtualMemory(Address, Size, 4u);
  }
  v8 = v7;
LABEL_11:
  if ( !v8 )
    return 0LL;
  if ( *((_QWORD *)a2 + 1) )
  {
    IsEnabledDeviceUsageNoInline = Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline();
    v10 = (void *)*((_QWORD *)a2 + 1);
    if ( IsEnabledDeviceUsageNoInline )
      GrepUnsecureVirtualMemory(v10);
    else
      MmUnsecureVirtualMemory(v10);
  }
  *((_QWORD *)a2 + 2) = Size;
  result = 1LL;
  *((_QWORD *)a2 + 1) = v8;
  return result;
}
