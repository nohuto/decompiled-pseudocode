/*
 * XREFs of ?Initialize@DISPLAY_SOURCE@@AEAAJPEAVADAPTER_DISPLAY@@I@Z @ 0x14019716C
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x140382BE0 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     ?DxgCreateEvent@@YAJPEAPEAU_KEVENT@@W4_EVENT_TYPE@@E@Z @ 0x1400676FC (-DxgCreateEvent@@YAJPEAPEAU_KEVENT@@W4_EVENT_TYPE@@E@Z.c)
 */

NTSTATUS __fastcall DISPLAY_SOURCE::Initialize(DISPLAY_SOURCE *this, struct ADAPTER_DISPLAY *a2, int a3)
{
  NTSTATUS result; // eax
  enum _EVENT_TYPE v5; // edx
  int v6; // ebx
  NTSTATUS Event; // eax

  *((_QWORD *)this + 1) = a2;
  *((_DWORD *)this + 4) = a3;
  *((_DWORD *)this + 198) = a3;
  *((_DWORD *)this + 210) = a3;
  *((_DWORD *)this + 220) = a3;
  result = DxgCreateEvent((PVOID *)this + 113, (enum _EVENT_TYPE)a2);
  v6 = 0;
  if ( result >= 0 )
  {
    Event = DxgCreateEvent((PVOID *)this + 114, v5);
    if ( Event < 0 )
      return Event;
    return v6;
  }
  return result;
}
