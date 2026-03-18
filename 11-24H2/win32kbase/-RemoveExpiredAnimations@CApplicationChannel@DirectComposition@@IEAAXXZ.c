/*
 * XREFs of ?RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x14007DF6C
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatchParser@12@PEAII@Z @ 0x14007E0B8 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatc.c)
 *     ?BuildNinjaBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K@Z @ 0x1400B85F4 (-BuildNinjaBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K@Z.c)
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x14004AFA4 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1400B9284 (-DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?DiscardRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x140156F34 (-DiscardRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     ?DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x14019E534 (-DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall DirectComposition::CApplicationChannel::RemoveExpiredAnimations(
        DirectComposition::CApplicationChannel *this)
{
  char *v1; // r14
  char *v2; // rsi
  LARGE_INTEGER PerformanceCounter; // r15
  char *v5; // rbx
  __int64 v6; // r8
  int v7; // edx
  __int64 v8; // rbx
  __int64 v9; // rbp
  int v10; // eax
  __int64 v11; // rcx
  char v12; // [rsp+60h] [rbp+8h] BYREF

  v1 = (char *)this + 360;
  v2 = (char *)*((_QWORD *)this + 45);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  while ( v2 != v1 )
  {
    v5 = v2;
    v2 = *(char **)v2;
    v6 = *((unsigned int *)v5 - 24);
    v7 = *((_DWORD *)v5 - 24);
    if ( (v7 & 0x120) == 0x20 && (v5[72] & 2) == 0 )
    {
      v11 = *((_QWORD *)v5 - 2);
      if ( v11 )
      {
        if ( PerformanceCounter.QuadPart >= (unsigned __int64)(*((_QWORD *)v5 - 1) + v11) )
        {
          v7 |= 0x100u;
          *((_DWORD *)v5 - 24) = v7;
        }
      }
    }
    if ( (v7 & 0x100) != 0 )
    {
      v8 = *((_QWORD *)v5 - 15);
      if ( v8 )
      {
        do
        {
          v9 = *(_QWORD *)(v8 + 40);
          v12 = 0;
          v10 = *(_DWORD *)(v8 + 8);
          if ( (v10 & 2) != 0 )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD, __int64, char *))(**(_QWORD **)(v8 + 16) + 248LL))(
              *(_QWORD *)(v8 + 16),
              *(unsigned int *)(v8 + 12),
              v6,
              &v12);
            if ( v12 )
              DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(
                this,
                *(struct DirectComposition::CResourceMarshaler **)(v8 + 16));
            DirectComposition::CApplicationChannel::DeleteAddingBinding(this, (PVOID)v8);
          }
          else
          {
            if ( (v10 & 4) != 0 )
              DirectComposition::CApplicationChannel::DiscardRemovingBinding(
                this,
                (struct DirectComposition::CAnimationBinding *)v8);
            else
              (*(void (__fastcall **)(_QWORD, _QWORD, __int64, char *))(**(_QWORD **)(v8 + 16) + 248LL))(
                *(_QWORD *)(v8 + 16),
                *(unsigned int *)(v8 + 12),
                v6,
                &v12);
            DirectComposition::CAnimationBinding::DetachAndDelete((PVOID)v8, this);
          }
          v8 = v9;
        }
        while ( v9 );
      }
    }
  }
}
