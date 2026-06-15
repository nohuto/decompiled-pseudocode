/*
 * XREFs of ??1CApplicationTracker@@EEAA@XZ @ 0x1800A2340
 * Callers:
 *     ??_GCApplicationTracker@@EEAAPEAXI@Z @ 0x180074850 (--_GCApplicationTracker@@EEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CApplicationTracker::~CApplicationTracker(CApplicationTracker *this)
{
  *(_QWORD *)this = &CApplicationTracker::`vftable';
  *((_QWORD *)this + 1) = &CApplicationTracker::`vftable'{for `IHostedApplicationTracker'};
  *((_QWORD *)this + 2) = &CApplicationTracker::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IFastRundown>'};
  if ( *((_QWORD *)this + 4) && (unsigned int)IsHHostEdappManagerContextRundownSupported() )
    HHOSTEDAPPMANAGERCONTEXTRundown(*((void **)this + 4));
  *((_DWORD *)this + 7) = -1073741823;
}
