/*
 * XREFs of ?OnInteractivityNotification@CHostedAppInteractivity@@QEAAXHPEAH0@Z @ 0x180017CF0
 * Callers:
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z @ 0x18000277C (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z.c)
 *     ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z @ 0x180002F00 (-AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CHostedAppInteractivity::OnInteractivityNotification(
        CHostedAppInteractivity *this,
        int a2,
        int *a3,
        int *a4)
{
  int v5; // ecx
  int v6; // eax

  v5 = *((_DWORD *)this + 3);
  if ( a2 )
  {
    v6 = v5 + 1;
LABEL_5:
    *((_DWORD *)this + 3) = v6;
    goto LABEL_6;
  }
  v6 = v5;
  if ( v5 )
  {
    v6 = v5 - 1;
    goto LABEL_5;
  }
LABEL_6:
  *a3 = (v6 != 0) ^ (v5 != 0);
  *a4 = *((_DWORD *)this + 3) != 0;
}
