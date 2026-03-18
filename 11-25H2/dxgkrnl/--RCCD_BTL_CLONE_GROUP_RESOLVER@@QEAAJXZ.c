/*
 * XREFs of ??RCCD_BTL_CLONE_GROUP_RESOLVER@@QEAAJXZ @ 0x14036CDF0
 * Callers:
 *     ?_ResolveTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCCD_TOPOLOGY@@_N@Z @ 0x14036CD34 (-_ResolveTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCCD_TOPOLOGY@@_N@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x140295218 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall CCD_BTL_CLONE_GROUP_RESOLVER::operator()(__int64 a1)
{
  _QWORD *v1; // rdi
  unsigned int i; // edx
  __int64 v4; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 result; // rax
  unsigned int j; // ecx
  unsigned int v8; // edx
  _DWORD *v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r9

  v1 = (_QWORD *)(a1 + 8);
  for ( i = 0; i < *(unsigned __int16 *)(*(_QWORD *)a1 + 32LL); *(_QWORD *)(v4 + *v1 + 56) &= 0xFFFF0FFFFFFFFFFFuLL )
    v4 = 296LL * i++;
  Global = DXGGLOBAL::GetGlobal();
  result = DXGGLOBAL::IterateAdaptersWithCallback(
             (__int64)Global,
             (__int64 (__fastcall *)(_QWORD *, __int64))BtlPreAcquireSharedAccess__CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_0_1_,
             a1,
             4);
  if ( (_DWORD)result == -2147483622 )
  {
    for ( j = 0; j < *(unsigned __int16 *)(*(_QWORD *)a1 + 32LL); ++j )
    {
      v8 = 0;
      if ( j )
      {
        v9 = (_DWORD *)(*v1 + 240LL);
        do
        {
          if ( *v9 == *(_DWORD *)(296LL * j + *v1 + 240) )
            break;
          ++v8;
          v9 += 74;
        }
        while ( v8 < j );
        if ( v8 < j )
        {
          v10 = *v1;
          v11 = 296LL * v8;
          v12 = 296LL * j;
          if ( ((*(_BYTE *)(v12 + *v1 + 185) ^ *(_BYTE *)(v11 + *v1 + 185)) & 3) != 0
            || !*(_BYTE *)(v11 + *v1 + 185)
            && (*(_DWORD *)(v11 + v10 + 72) != *(_DWORD *)(v12 + v10 + 72)
             || *(_DWORD *)(v11 + v10 + 76) != *(_DWORD *)(v12 + v10 + 76)) )
          {
            return 3221226021LL;
          }
        }
      }
    }
    return 0LL;
  }
  else if ( !(_DWORD)result )
  {
    return 3221226021LL;
  }
  return result;
}
