/*
 * XREFs of ?RemoveCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAXPEAVCHostedAppInteractivity@@@Z @ 0x18003A53C
 * Callers:
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z @ 0x18000277C (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z.c)
 *     ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z @ 0x180002F00 (-AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z.c)
 * Callees:
 *     ?FreeNode@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18001EF2C (-FreeNode@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@.c)
 *     ??_GCHostedAppInteractivity@@QEAAPEAXI@Z @ 0x18001F3C4 (--_GCHostedAppInteractivity@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CHostedAppInteractivityManager::RemoveCumulativeHostedAppInteractivity(
        CHostedAppInteractivityManager *this,
        struct CHostedAppInteractivity *a2)
{
  __int64 i; // rdx
  _QWORD **v4; // r8

  for ( i = qword_180064A48; i; i = *(_QWORD *)i )
  {
    if ( *(struct CHostedAppInteractivity **)(i + 16) == a2 )
    {
      v4 = (_QWORD **)(i + 8);
      if ( i == qword_180064A48 )
        qword_180064A48 = *(_QWORD *)i;
      else
        **v4 = *(_QWORD *)i;
      if ( i == (_QWORD)xmmword_180064A50 )
        *(_QWORD *)&xmmword_180064A50 = *v4;
      else
        *(_QWORD *)(*(_QWORD *)i + 8LL) = *v4;
      ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::FreeNode(
        (__int64)&qword_180064A48,
        (__int64 *)i);
      if ( a2 )
        CHostedAppInteractivity::`scalar deleting destructor'(a2);
      return;
    }
  }
}
