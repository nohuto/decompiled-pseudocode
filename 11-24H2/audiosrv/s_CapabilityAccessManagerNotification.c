/*
 * XREFs of s_CapabilityAccessManagerNotification @ 0x1800C7F10
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HandleAccessChangeNotification@@YAJPEBG0@Z @ 0x1800C76D4 (-HandleAccessChangeNotification@@YAJPEBG0@Z.c)
 */

__int64 __fastcall s_CapabilityAccessManagerNotification(
        __int64 a1,
        const unsigned __int16 *a2,
        __int64 a3,
        const unsigned __int16 *a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = HandleAccessChangeNotification(a2, a4);
  v5 = v4;
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      92LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
      (const char *)(unsigned int)v4);
  return v5;
}
