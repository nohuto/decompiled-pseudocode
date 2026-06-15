/*
 * XREFs of ?GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x180003160
 * Callers:
 *     ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z @ 0x180002F00 (-AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z.c)
 * Callees:
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008660 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCHostedAppInteractivity@@@Z @ 0x180018D34 (-AddHead@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@@.c)
 *     ??_GCHostedAppInteractivity@@QEAAPEAXI@Z @ 0x18001F3C4 (--_GCHostedAppInteractivity@@QEAAPEAXI@Z.c)
 *     WPP_SF_d @ 0x18002B464 (WPP_SF_d.c)
 *     ?CreateInstance@CHostedAppInteractivity@@SAJPEBG_KKPEAPEAV1@@Z @ 0x18003A2CC (-CreateInstance@CHostedAppInteractivity@@SAJPEBG_KKPEAPEAV1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPickerHostContext::GetHostedAppInteractivity(
        CPickerHostContext *this,
        const unsigned __int16 *a2,
        unsigned __int64 a3,
        unsigned int a4,
        struct CHostedAppInteractivity **a5)
{
  const unsigned __int16 *v7; // r10
  CHostedAppInteractivity *v9; // r12
  int v10; // r15d
  _QWORD *v11; // rbx
  struct CHostedAppInteractivity *v12; // rdi
  __int64 *v13; // rdx
  __int64 result; // rax
  int *v15; // rbx
  __int64 v16; // [rsp+0h] [rbp-58h] BYREF
  struct CHostedAppInteractivity *v17; // [rsp+20h] [rbp-38h] BYREF
  ATL::CAtlException *v18; // [rsp+28h] [rbp-30h] BYREF

  v7 = a2;
  v9 = 0LL;
  v10 = 0;
  v17 = 0LL;
  v11 = *(_QWORD **)this;
  while ( v11 )
  {
    v12 = (struct CHostedAppInteractivity *)v11[2];
    v11 = (_QWORD *)*v11;
    v17 = v12;
    if ( *((_DWORD *)v12 + 2) == a4 && *((_QWORD *)v12 + 2) == a3 )
    {
      if ( !(unsigned int)_o__wcsicmp(*(_QWORD *)v12, v7) )
        goto LABEL_12;
      v7 = a2;
    }
  }
  v10 = CHostedAppInteractivity::CreateInstance(v7, a3, a4, &v17);
  if ( v10 < 0 )
    goto LABEL_13;
  try
  {
    v10 = 0;
    ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::AddHead(this, &v17);
  }
  catch ( ATL::CAtlException *v18 )
  {
    v13 = &v16;
    v15 = (int *)v18;
    if ( *(_DWORD *)v18 == -1073741571 )
      _o__resetstkoflw();
    v10 = *v15;
    if ( *v15 >= 0 )
    {
      v9 = 0LL;
      goto LABEL_11;
    }
LABEL_13:
    v9 = v17;
LABEL_14:
    if ( v9 )
      CHostedAppInteractivity::`scalar deleting destructor'(v9, (unsigned int)v13);
    if ( v10 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          13LL,
          &WPP_1c004e7844a83aef02453228989ecd61_Traceguids,
          (unsigned int)v10);
      }
      AudPolicyLogError("CPickerHostContext::GetHostedAppInteractivity", 254, v10);
    }
    result = (unsigned int)v10;
  }
LABEL_11:
  v12 = v17;
LABEL_12:
  *a5 = v12;
  goto LABEL_14;
}
