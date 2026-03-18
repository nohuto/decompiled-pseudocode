/*
 * XREFs of CleanupVaRangeReference @ 0x140092D94
 * Callers:
 *     ?UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z @ 0x1400FBE4C (-UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z.c)
 *     ?CleanupVadReference@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@@Z @ 0x14011175C (-CleanupVadReference@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@@Z.c)
 * Callees:
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x140037628 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x140037894 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 */

__int64 __fastcall CleanupVaRangeReference(VIDMM_MAPPED_VA_RANGE *this, _QWORD *a2)
{
  VIDMM_MAPPED_VA_RANGE *v2; // r8
  int v3; // ecx
  _QWORD *v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  __int64 v8; // rcx

  v2 = this;
  v3 = *((_DWORD *)this + 18);
  if ( (v3 & 0x8000) != 0 )
  {
    if ( GetVidMmAllocFromOwner(v3 & 0xF, *((_QWORD *)v2 + 8)) )
    {
      v4 = (_QWORD *)((char *)v2 + 32);
      v5 = *((_QWORD *)v2 + 4);
      if ( *(VIDMM_MAPPED_VA_RANGE **)(v5 + 8) != (VIDMM_MAPPED_VA_RANGE *)((char *)v2 + 32) )
        goto LABEL_10;
      v6 = (_QWORD *)*((_QWORD *)v2 + 5);
      if ( (_QWORD *)*v6 != v4 )
        goto LABEL_10;
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      *v4 = 0LL;
      *((_QWORD *)v2 + 5) = 0LL;
    }
    v7 = (_QWORD *)((char *)v2 + 8);
    v8 = *((_QWORD *)v2 + 1);
    if ( *(VIDMM_MAPPED_VA_RANGE **)(v8 + 8) == (VIDMM_MAPPED_VA_RANGE *)((char *)v2 + 8) )
    {
      a2 = (_QWORD *)*((_QWORD *)v2 + 2);
      if ( (_QWORD *)*a2 == v7 )
      {
        *a2 = v8;
        *(_QWORD *)(v8 + 8) = a2;
        *((_DWORD *)v2 + 18) &= ~0x8000u;
        *v7 = 0LL;
        *((_QWORD *)v2 + 2) = 0LL;
        return VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v2, (unsigned int)a2);
      }
    }
LABEL_10:
    __fastfail(3u);
  }
  return VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v2, (unsigned int)a2);
}
