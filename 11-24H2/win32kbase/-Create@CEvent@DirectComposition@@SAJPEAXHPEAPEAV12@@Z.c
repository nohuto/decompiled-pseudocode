/*
 * XREFs of ?Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z @ 0x14006E390
 * Callers:
 *     ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z @ 0x14006E1B8 (-SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z.c)
 *     ?Connect@CConnection@DirectComposition@@QEAAJ_NPEAX@Z @ 0x140223EAC (-Connect@CConnection@DirectComposition@@QEAAJ_NPEAX@Z.c)
 *     ?SetHandleProperty@CBatchDeferralMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z @ 0x140239960 (-SetHandleProperty@CBatchDeferralMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z.c)
 * Callees:
 *     DirectComposition::Memory::AllocateAndClear_0 @ 0x1400183A0 (DirectComposition--Memory--AllocateAndClear_0.c)
 *     ?Initialize@CEvent@DirectComposition@@AEAAJPEAX_N@Z @ 0x14006E400 (-Initialize@CEvent@DirectComposition@@AEAAJPEAX_N@Z.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x14006E4EC (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall DirectComposition::CEvent::Create(void *a1, __int64 a2, struct DirectComposition::CEvent **a3)
{
  DirectComposition::CEvent *v5; // rax
  DirectComposition::CEvent *v6; // rdi
  unsigned int v7; // edx
  int v8; // ebx

  v5 = (DirectComposition::CEvent *)DirectComposition::Memory::AllocateAndClear_0(0x10uLL, 0x76654344u, 1);
  v6 = v5;
  if ( v5 )
  {
    v8 = DirectComposition::CEvent::Initialize(v5, a1, 0);
    if ( v8 < 0 )
      DirectComposition::CEvent::`scalar deleting destructor'(v6, v7);
    else
      *a3 = v6;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v8;
}
