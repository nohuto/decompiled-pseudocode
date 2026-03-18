/*
 * XREFs of GreSfmOpenTokenEvent @ 0x140087600
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x140024300 (UserIsCurrentProcessDwm.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140087714 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140087764 (--$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall GreSfmOpenTokenEvent(PHANDLE Handle)
{
  __int64 *v2; // rbx
  __int64 v3; // rdi
  NTSTATUS v4; // eax
  PVOID v5; // rsi
  unsigned int v6; // ebx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(__int64 **)(W32GetSessionState(Handle) + 88);
  v3 = *v2;
  GreAcquireSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(EngAcquireSemaphoreShared, *v2 + 520);
  if ( UserIsCurrentProcessDwm() )
  {
    Object = 0LL;
    v4 = ObReferenceObjectByHandle(
           *(HANDLE *)(v2[529] + 24),
           0x1F0003u,
           (POBJECT_TYPE)ExEventObjectType,
           0,
           &Object,
           0LL);
    v5 = Object;
    v6 = v4;
    if ( v4 >= 0 )
    {
      v6 = ObOpenObjectByPointer(Object, 0x40u, 0LL, 0x100000u, (POBJECT_TYPE)ExEventObjectType, 0, Handle);
      ObfDereferenceObject(v5);
    }
  }
  else
  {
    v6 = -1073741790;
  }
  GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v3 + 520);
  return v6;
}
