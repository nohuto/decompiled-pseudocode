/*
 * XREFs of ??1CStandardEvent@@UEAA@XZ @ 0x140044B9C
 * Callers:
 *     ??_GCStandardEvent@@UEAAPEAXI@Z @ 0x140044B60 (--_GCStandardEvent@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x14001D314 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall CStandardEvent::~CStandardEvent(CStandardEvent *this, void *a2)
{
  wil::details *v3; // rcx

  v3 = (wil::details *)*((_QWORD *)this + 2);
  if ( v3 )
    wil::details::CloseHandle(v3, a2);
  *((_DWORD *)this + 3) = -1073741823;
}
