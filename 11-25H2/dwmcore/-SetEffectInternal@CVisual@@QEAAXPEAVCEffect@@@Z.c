/*
 * XREFs of ?SetEffectInternal@CVisual@@QEAAXPEAVCEffect@@@Z @ 0x180131CB0
 * Callers:
 *     ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z @ 0x18013179C (-SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z.c)
 * Callees:
 *     ?ReserveSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@SAAEAT?$_Align_type@N$07@std@@PEAPEAV12@I@Z @ 0x1801082B4 (-ReserveSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@SAAEAT-$_Align_type@N$07@std@@PEAP.c)
 */

void __fastcall CVisual::SetEffectInternal(CVisual *this, struct CEffect *a2)
{
  __int64 **v2; // rcx
  char *v3; // rax
  __int64 *v5; // r8
  __int64 v6; // rdx
  _BYTE *v7; // r9
  __int64 i; // rcx

  v2 = (__int64 **)((char *)this + 232);
  v3 = 0LL;
  v5 = *v2;
  if ( a2 )
  {
    if ( (*(_DWORD *)v5 & 0x800000) != 0 )
    {
      v6 = *((unsigned int *)v5 + 1);
      v7 = v5 + 1;
      for ( i = 0LL; (unsigned int)i < (unsigned int)v6; ++v7 )
      {
        if ( *v7 == 9 )
          break;
        i = (unsigned int)(i + 1);
      }
      if ( (unsigned int)i < (unsigned int)v6 )
        v3 = (char *)v5 + 8 * i - (((_BYTE)v6 + 15) & 7) + v6 + 15;
    }
    else
    {
      v3 = CSparseAlignedStorage<8,8>::AllocatedStorage::ReserveSlot(v2, 9);
    }
    *(_QWORD *)v3 = a2;
  }
  else if ( (*(_DWORD *)v5 & 0x800000) != 0 )
  {
    CSparseAlignedStorage<8,8>::AllocatedStorage::ClearData(*v2, 9LL);
  }
}
