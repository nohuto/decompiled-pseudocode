/*
 * XREFs of ?GetDifferenceInMinutes@BroadcastDVRComponent@@AEAAJPEBU_SYSTEMTIME@@PEBU_FILETIME@@PEA_K@Z @ 0x180317238
 * Callers:
 *     ?QueueNotifyGameBarForKGLUpdateIfNecessary@BroadcastDVRComponent@@AEAAJPEAK0@Z @ 0x180059574 (-QueueNotifyGameBarForKGLUpdateIfNecessary@BroadcastDVRComponent@@AEAAJPEAK0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall BroadcastDVRComponent::GetDifferenceInMinutes(
        BroadcastDVRComponent *this,
        const struct _SYSTEMTIME *a2,
        const struct _FILETIME *a3,
        unsigned __int64 *a4)
{
  __int64 v6; // rdx
  const char *v8; // r9
  struct _FILETIME v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _FILETIME FileTime; // [rsp+30h] [rbp+8h] BYREF

  FileTime = (struct _FILETIME)this;
  if ( !a2 )
  {
    v6 = 894LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  if ( !a3 )
  {
    v6 = 895LL;
    goto LABEL_3;
  }
  if ( !a4 )
  {
    v6 = 896LL;
    goto LABEL_3;
  }
  FileTime = 0LL;
  if ( !SystemTimeToFileTime(a2, &FileTime) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x384,
             (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
             v8);
  v9 = FileTime;
  FileTime = *a3;
  *a4 = (*(_QWORD *)&v9 - *(_QWORD *)&FileTime) / 0x23C34600uLL;
  return 0LL;
}
