/*
 * XREFs of IopLiveDumpValidateParameters @ 0x14059B550
 * Callers:
 *     IoCaptureLiveDump @ 0x1404DC764 (IoCaptureLiveDump.c)
 * Callees:
 *     IopLiveDumpValidateDumpFileHandle @ 0x14059B4EC (IopLiveDumpValidateDumpFileHandle.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall IopLiveDumpValidateParameters(__int64 a1, __int64 a2)
{
  NTSTATUS result; // eax
  unsigned int v5; // ecx
  __int64 v6; // rax
  ULONG_PTR v7; // rdx
  void *Pool2; // rax
  __int64 i; // rax
  unsigned int v10; // eax
  __int64 v11; // r8
  POBJECT_TYPE *v12; // rax

  if ( !a2 )
    return -1073741811;
  if ( *(_DWORD *)a2 != 2 )
    return -1073741811;
  if ( *(_DWORD *)(a2 + 4) < 0x38u )
    return -1073741811;
  v5 = *(_DWORD *)(a2 + 28);
  if ( v5 >= 4 )
    return -1073741811;
  if ( (*(_DWORD *)(a2 + 24) & 0x20) == 0 )
    goto LABEL_15;
  v6 = *(_QWORD *)(a2 + 48);
  if ( !v6 )
    return -1073741811;
  if ( *(_DWORD *)v6 != 1 )
    return -1073741811;
  v7 = *(unsigned int *)(v6 + 4);
  if ( (_DWORD)v7 != 48 || *(_QWORD *)(v6 + 8) >= 2uLL || v5 )
    return -1073741811;
  Pool2 = (void *)ExAllocatePool2(0x40uLL, v7, 0x706D644Cu);
  *(_QWORD *)(a1 + 1168) = Pool2;
  if ( !Pool2 )
    return -1073741801;
  memmove(Pool2, *(const void **)(a2 + 48), *(unsigned int *)(*(_QWORD *)(a2 + 48) + 4LL));
LABEL_15:
  *(_DWORD *)(a1 + 44) = *(_DWORD *)(a2 + 28);
  if ( *(_DWORD *)(a2 + 36) || *(_DWORD *)(a2 + 32) )
    return -1073741811;
  for ( i = *(_QWORD *)(a2 + 40); i; i = *(_QWORD *)(i + 32) )
  {
    if ( *(_DWORD *)(i + 28) || !*(_QWORD *)(i + 16) || !*(_DWORD *)(i + 24) )
      return -1073741811;
  }
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 32);
  v10 = *(_DWORD *)(a2 + 24);
  if ( v10 >= 0x40 )
    return -1073741811;
  if ( (v10 & 3) != 0 )
    return -1073741822;
  *(_DWORD *)(a1 + 40) = v10;
  if ( (v10 & 8) == 0 )
  {
    result = IopLiveDumpValidateDumpFileHandle(*(void **)(a2 + 8));
    if ( result < 0 )
    {
      *(_QWORD *)(a1 + 64) = 0LL;
      return result;
    }
    *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 8);
  }
  v11 = *(_QWORD *)(a2 + 16);
  if ( !v11 )
  {
    result = 0;
LABEL_38:
    *(_QWORD *)(a1 + 72) = v11;
    return result;
  }
  v12 = (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v11 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v11 - 48) >> 8)];
  if ( v12 == ExEventObjectType
    || v12 == PsProcessType
    || v12 == PsThreadType
    || v12 == (POBJECT_TYPE *)ExTimerObjectType )
  {
    result = 0;
  }
  else
  {
    result = -1073741811;
  }
  if ( result >= 0 )
    goto LABEL_38;
  *(_QWORD *)(a1 + 72) = 0LL;
  return result;
}
