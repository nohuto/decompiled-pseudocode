/*
 * XREFs of MiSetPageTablePfnBuddy @ 0x140492B70
 * Callers:
 *     MiSetSystemCacheReverseMap @ 0x14020A5D0 (MiSetSystemCacheReverseMap.c)
 *     MmInSwapProcess @ 0x1402DFEE4 (MmInSwapProcess.c)
 *     MiReadPagefilePage @ 0x14066B64C (MiReadPagefilePage.c)
 *     MiCreatePfnTemplate @ 0x14066D6E0 (MiCreatePfnTemplate.c)
 *     MiAllocateTopLevelPage @ 0x140A51BBC (MiAllocateTopLevelPage.c)
 *     MiInitializeBootProcess @ 0x140C50588 (MiInitializeBootProcess.c)
 *     MxInsertEnclaveBootPages @ 0x140C5A354 (MxInsertEnclaveBootPages.c)
 * Callees:
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiSetPageTablePfnBuddy(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  unsigned __int8 v6; // bp
  int v7; // r14d
  unsigned int v8; // esi
  __int64 result; // rax

  v4 = a2;
  v6 = 17;
  v7 = a3 & 1;
  if ( (a3 & 1) == 0 )
  {
    if ( (a3 & 0x10) != 0 )
    {
      v8 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v8 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v8);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(a1 + 24) < 0 );
      }
    }
    else
    {
      v6 = MiLockPageInline(a1, a2, a3, a4);
    }
  }
  if ( (v4 & 0xFFFFFEFFFFFFFFFEuLL) != 0 || v4 == 1 )
    v4 = ((v4 - qword_140E38BF8) >> 4) + 1;
  *(_QWORD *)a1 = (2 * v4) ^ (*(_QWORD *)a1 ^ (2 * v4)) & 0xFFFFFFFF00000001uLL;
  result = *(unsigned int *)(a1 + 36);
  *(_DWORD *)(a1 + 36) = ((unsigned int)(v4 >> 31) << 16) ^ (result ^ ((unsigned int)(v4 >> 31) << 16)) & 0xFC00FFFF;
  if ( !v7 )
  {
    if ( v6 == 17 )
    {
      result = 0x7FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      return MiUnlockPage(a1, v6);
    }
  }
  return result;
}
