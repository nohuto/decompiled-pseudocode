/*
 * XREFs of ??_GCHostedAppInteractivity@@QEAAPEAXI@Z @ 0x18001F3C4
 * Callers:
 *     ?GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x180003160 (-GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z.c)
 *     ?GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x1800032A4 (-GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedA.c)
 *     ??1CPickerHostContext@@QEAA@XZ @ 0x18003A228 (--1CPickerHostContext@@QEAA@XZ.c)
 *     ?CreateInstance@CHostedAppInteractivity@@SAJPEBG_KKPEAPEAV1@@Z @ 0x18003A2CC (-CreateInstance@CHostedAppInteractivity@@SAJPEBG_KKPEAPEAV1@@Z.c)
 *     ?RemoveCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAXPEAVCHostedAppInteractivity@@@Z @ 0x18003A53C (-RemoveCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAXPEAVCHostedAppInter.c)
 * Callees:
 *     ??1CHostedAppInteractivity@@QEAA@XZ @ 0x18001F3F0 (--1CHostedAppInteractivity@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002067C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CHostedAppInteractivity *__fastcall CHostedAppInteractivity::`scalar deleting destructor'(
        CHostedAppInteractivity *this)
{
  CHostedAppInteractivity::~CHostedAppInteractivity(this);
  operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
