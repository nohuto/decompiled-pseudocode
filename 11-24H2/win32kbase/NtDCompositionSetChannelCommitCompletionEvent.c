/*
 * XREFs of NtDCompositionSetChannelCommitCompletionEvent @ 0x14006DD50
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x14006DF90 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z @ 0x14006E1B8 (-SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtDCompositionSetChannelCommitCompletionEvent(unsigned int a1, void *a2, int a3)
{
  int v5; // edi
  void *v6; // rdx
  DirectComposition::CApplicationChannel *v7; // rbx
  DirectComposition::CApplicationChannel *v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0LL;
  if ( a2 )
  {
    v5 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v9);
    if ( v5 >= 0 )
    {
      v6 = a2;
      v7 = v9;
      v5 = DirectComposition::CApplicationChannel::SetCommitCompletionEvent(v9, v6, a3 != 0);
      (**(void (__fastcall ***)(DirectComposition::CApplicationChannel *))v7)(v7);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}
