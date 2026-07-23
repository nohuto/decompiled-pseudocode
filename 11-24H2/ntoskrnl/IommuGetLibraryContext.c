/*
 * XREFs of IommuGetLibraryContext @ 0x140561F90
 * Callers:
 *     IommupPasidDeviceCreate @ 0x14054BED8 (IommupPasidDeviceCreate.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x1402EA1C8 (HalpMmAllocCtxFree.c)
 *     Feature_Test57481295__private_IsEnabledDeviceUsageNoInline @ 0x140539A0C (Feature_Test57481295__private_IsEnabledDeviceUsageNoInline.c)
 *     IommupGetSystemContext @ 0x140562910 (IommupGetSystemContext.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall IommuGetLibraryContext(int a1, unsigned int a2, char a3, _QWORD *a4)
{
  __int64 SystemContext; // r14
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 result; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rdi

  *a4 = 0LL;
  SystemContext = IommupGetSystemContext(a2);
  v11 = HalpMmAllocCtxAlloc(v9, 64LL);
  if ( !v11 )
    return 3221225626LL;
  v14 = (_QWORD *)HalpMmAllocCtxAlloc(v10, 16LL);
  if ( !v14 )
  {
    HalpMmAllocCtxFree(v13, v11);
    return 3221225626LL;
  }
  memset_0((void *)v11, 0, 0x40uLL);
  *(_DWORD *)(v11 + 16) = a1;
  *(_DWORD *)(v11 + 20) = a2;
  if ( (unsigned int)Feature_Test57481295__private_IsEnabledDeviceUsageNoInline() )
    *(_BYTE *)(v11 + 56) = a3;
  *(_QWORD *)(v11 + 24) = 0LL;
  *(_QWORD *)(v11 + 48) = v11 + 40;
  *(_QWORD *)(v11 + 40) = v11 + 40;
  result = 0LL;
  *v14 = SystemContext;
  v14[1] = v11;
  *a4 = v14;
  return result;
}
