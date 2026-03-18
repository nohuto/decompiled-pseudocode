/*
 * XREFs of HalpSaveAndDisableEnlightenment @ 0x1405494B0
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x1404469AC (HalpInterruptModel.c)
 *     HalpTimerUpdateApiConsumers @ 0x14055EDF8 (HalpTimerUpdateApiConsumers.c)
 */

__int64 HalpSaveAndDisableEnlightenment()
{
  __int64 result; // rax
  char v1; // dl

  result = HalpInterruptModel();
  if ( (_DWORD)result == 1 )
  {
    dword_140FC099C = dword_140FC071C;
    qword_140FC09A0 = qword_140FC0720;
    dword_140FC0984 = dword_140FC0704;
    qword_140FC09B0 = qword_140FC0730;
    qword_140FC09B8 = qword_140FC0738;
    qword_140FC09C0 = qword_140FC0740;
    qword_140FC09C8 = qword_140FC0748;
    qword_140FC09D0 = qword_140FC0750;
    qword_140FC09D8 = qword_140FC0758;
    qword_140FC09F0 = qword_140FC0770;
    qword_140FC0A18 = qword_140FC0798;
    qword_140FC0A20 = qword_140FC07A0;
    qword_140FC0A28 = qword_140FC07A8;
    qword_140FC0A30 = qword_140FC07B0;
    qword_140FC0A38 = qword_140FC07B8;
    qword_140FC0A40 = qword_140FC07C0;
    HalpEnlightenmentHbSaved = HalpEnlightenment;
    qword_140FC0B08 = qword_140FC0888;
    qword_140FC0B10 = qword_140FC0890;
    qword_140FC0A80 = qword_140FC0800;
    qword_140FC0A68 = qword_140FC07E8;
    qword_140FC0A70 = qword_140FC07F0;
    xmmword_140FC0988 = xmmword_140FC0708;
    qword_140FC09E0 = qword_140FC0760;
    qword_140FC09E8 = qword_140FC0768;
    qword_140FC09F8 = qword_140FC0778;
    qword_140FC0A00 = qword_140FC0780;
    qword_140FC0A08 = qword_140FC0788;
    qword_140FC0A10 = qword_140FC0790;
    qword_140FC0A50 = qword_140FC07D0;
    qword_140FC0A58 = qword_140FC07D8;
    qword_140FC0A60 = qword_140FC07E0;
    qword_140FC0A78 = qword_140FC07F8;
    qword_140FC0A88 = qword_140FC0808;
    qword_140FC0A90 = qword_140FC0810;
    qword_140FC0A98 = qword_140FC0818;
    qword_140FC0AA0 = qword_140FC0820;
    qword_140FC0AA8 = qword_140FC0828;
    qword_140FC0AB0 = qword_140FC0830;
    qword_140FC0AB8 = qword_140FC0838;
    qword_140FC0AC0 = qword_140FC0840;
    qword_140FC0AC8 = qword_140FC0848;
    qword_140FC0AD0 = qword_140FC0850;
    qword_140FC0AD8 = qword_140FC0858;
    qword_140FC0AE0 = qword_140FC0860;
    qword_140FC0AE8 = qword_140FC0868;
    qword_140FC0AF0 = qword_140FC0870;
    qword_140FC0AF8 = qword_140FC0878;
    qword_140FC0B00 = qword_140FC0880;
    HalpEnlightenment = 0;
    dword_140FC071C = -1;
    qword_140FC0720 = 0LL;
    dword_140FC0704 = 0;
    qword_140FC0730 = 0LL;
    qword_140FC0738 = 0LL;
    qword_140FC0740 = 0LL;
    qword_140FC0748 = 0LL;
    qword_140FC0750 = 0LL;
    qword_140FC0758 = 0LL;
    qword_140FC0770 = 0LL;
    qword_140FC0798 = 0LL;
    qword_140FC07A0 = 0LL;
    qword_140FC07A8 = 0LL;
    qword_140FC07B0 = 0LL;
    qword_140FC07B8 = 0LL;
    qword_140FC07C0 = 0LL;
    qword_140FC0888 = 0LL;
    qword_140FC0800 = 0LL;
    if ( !v1 )
      qword_140FC07E8 = 0LL;
    qword_140FC07F0 = 0LL;
    xmmword_140FC0708 = 0uLL;
    qword_140FC0760 = 0LL;
    qword_140FC0768 = 0LL;
    qword_140FC0778 = 0LL;
    qword_140FC0780 = 0LL;
    qword_140FC0788 = 0LL;
    qword_140FC0790 = 0LL;
    qword_140FC07D0 = 0LL;
    qword_140FC07D8 = 0LL;
    qword_140FC07E0 = 0LL;
    qword_140FC07F8 = 0LL;
    qword_140FC0808 = 0LL;
    qword_140FC0810 = 0LL;
    qword_140FC0818 = 0LL;
    qword_140FC0820 = 0LL;
    qword_140FC0828 = 0LL;
    qword_140FC0830 = 0LL;
    qword_140FC0838 = 0LL;
    qword_140FC0840 = 0LL;
    qword_140FC0848 = 0LL;
    qword_140FC0850 = 0LL;
    qword_140FC0858 = 0LL;
    qword_140FC0860 = 0LL;
    qword_140FC0868 = 0LL;
    qword_140FC0870 = 0LL;
    qword_140FC0878 = 0LL;
    qword_140FC0880 = 0LL;
    return HalpTimerUpdateApiConsumers();
  }
  return result;
}
