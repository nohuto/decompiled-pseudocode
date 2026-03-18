/*
 * XREFs of ?ShouldDefer@CBatch@DirectComposition@@QEAA_N_KPEA_NPEAW4DeferReason@12@@Z @ 0x1400DCB0C
 * Callers:
 *     ?KeepOrDeferBatches@CConnection@DirectComposition@@AEAAX_KPEAPEAVCBatch@2@@Z @ 0x1400746F0 (-KeepOrDeferBatches@CConnection@DirectComposition@@AEAAX_KPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?IsWaitingForChannelEvent@CApplicationChannel@DirectComposition@@QEAA_NXZ @ 0x14006DCF4 (-IsWaitingForChannelEvent@CApplicationChannel@DirectComposition@@QEAA_NXZ.c)
 *     ?ShouldDeferUntilEventsSignaled@CBatch@DirectComposition@@AEAA_NXZ @ 0x14006E45C (-ShouldDeferUntilEventsSignaled@CBatch@DirectComposition@@AEAA_NXZ.c)
 *     ?WaitingForEffectCompile@CBatch@DirectComposition@@AEAA_NXZ @ 0x14022578C (-WaitingForEffectCompile@CBatch@DirectComposition@@AEAA_NXZ.c)
 */

char __fastcall DirectComposition::CBatch::ShouldDefer(
        DirectComposition::CBatch *this,
        unsigned __int64 a2,
        bool *a3,
        enum DirectComposition::CBatch::DeferReason *a4)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  char v12; // dl

  if ( (*((_BYTE *)this + 32) & 1) == 0 )
  {
    v7 = *((_QWORD *)this + 1);
    v8 = *(_QWORD *)(v7 + 2776);
    *(_QWORD *)(v7 + 2776) = 0LL;
    if ( v8 )
      *((_QWORD *)this + 12) = v8;
  }
  if ( *((_DWORD *)this + 5) != 5 )
  {
    if ( *(_BYTE *)(*((_QWORD *)this + 1) + 49LL) )
    {
      *(_DWORD *)a4 = 1;
      return 1;
    }
    if ( *(_BYTE *)(*((_QWORD *)this + 1) + 266LL) )
    {
      *(_DWORD *)a4 = 2;
      goto LABEL_27;
    }
    if ( (*((_BYTE *)this + 32) & 9) == 0 )
    {
      v9 = *((_QWORD *)this + 7);
      if ( v9 )
      {
        if ( a2 && v9 > a2 )
        {
          *(_DWORD *)a4 = 3;
          goto LABEL_27;
        }
      }
    }
    v10 = *((_QWORD *)this + 5);
    if ( v10 && *(_DWORD *)(v10 + 16) )
    {
      *(_DWORD *)a4 = 4;
      return 1;
    }
    if ( DirectComposition::CBatch::WaitingForEffectCompile(this) )
    {
      *(_DWORD *)a4 = 9;
      return 1;
    }
    if ( DirectComposition::CApplicationChannel::IsWaitingForChannelEvent(*((DirectComposition::CApplicationChannel **)this
                                                                          + 1)) )
    {
      *(_DWORD *)a4 = 8;
      return 1;
    }
    if ( DirectComposition::CBatch::ShouldDeferUntilEventsSignaled(this) )
    {
      *(_DWORD *)a4 = 5;
      goto LABEL_27;
    }
    v11 = *((_QWORD *)this + 10);
    if ( v11 )
    {
      v12 = *(_BYTE *)(v11 + 33);
      if ( !v12 || *(int *)(v11 + 36) > 0 )
      {
        *(_DWORD *)a4 = 6;
        if ( v12 )
          return 1;
LABEL_27:
        *a3 = 1;
        return 1;
      }
    }
  }
  *(_DWORD *)a4 = 0;
  return 0;
}
