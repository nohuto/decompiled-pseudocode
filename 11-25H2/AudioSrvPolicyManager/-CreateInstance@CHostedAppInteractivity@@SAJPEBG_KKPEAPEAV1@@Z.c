/*
 * XREFs of ?CreateInstance@CHostedAppInteractivity@@SAJPEBG_KKPEAPEAV1@@Z @ 0x18003CAE8
 * Callers:
 *     ?GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x18000B6A0 (-GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z.c)
 *     ?GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x18000B7E4 (-GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedA.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180007070 (--2@YAPEAX_K@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18000A860 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800192D4 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ??_GCHostedAppInteractivity@@QEAAPEAXI@Z @ 0x18001F4E4 (--_GCHostedAppInteractivity@@QEAAPEAXI@Z.c)
 *     WPP_SF_d @ 0x18002DA54 (WPP_SF_d.c)
 */

__int64 __fastcall CHostedAppInteractivity::CreateInstance(
        const unsigned __int16 *a1,
        __int64 a2,
        int a3,
        struct CHostedAppInteractivity **a4)
{
  struct CHostedAppInteractivity *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct CHostedAppInteractivity *v11; // rdi
  unsigned __int64 v12; // r9
  int v13; // ebx
  __int64 v15; // [rsp+20h] [rbp-38h]

  v8 = (struct CHostedAppInteractivity *)operator new(0x18uLL);
  v11 = v8;
  if ( v8 )
  {
    *((_DWORD *)v8 + 2) = -1;
    *(_QWORD *)v8 = 0LL;
    *((_DWORD *)v8 + 3) = 0;
    *((_DWORD *)v8 + 2) = a3;
    v12 = -1LL;
    *((_QWORD *)v8 + 2) = a2;
    do
      ++v12;
    while ( a1[v12] );
    v13 = _AllocStringWorker<CTCoAllocPolicy>(v10, v9, a1, v12, v15, (char **)v8);
    if ( v13 >= 0 )
    {
      *a4 = v11;
      return (unsigned int)v13;
    }
    CHostedAppInteractivity::`scalar deleting destructor'(v11);
  }
  else
  {
    v13 = -2147024882;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xFu, &WPP_1c004e7844a83aef02453228989ecd61_Traceguids, v13);
  }
  AudPolicyLogError("CHostedAppInteractivity::CreateInstance", 322, v13);
  return (unsigned int)v13;
}
