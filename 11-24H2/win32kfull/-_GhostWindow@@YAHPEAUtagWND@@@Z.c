/*
 * XREFs of ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1402AD010
 * Callers:
 *     ?_GhostOwnerWindowAndOwnees@@YAXPEAUtagWND@@@Z @ 0x140148B98 (-_GhostOwnerWindowAndOwnees@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x140148FEC (IsNonImmersiveBand.c)
 *     ?RemoveGhostProp@@YAPEAUHWND__@@PEAUtagWND@@@Z @ 0x14017CDB0 (-RemoveGhostProp@@YAPEAUHWND__@@PEAUtagWND@@@Z.c)
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x140221DA4 (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?SendAsyncSGHOSTINFO@@YAHQEAU_GHOSTINFO@@@Z @ 0x1402ACF34 (-SendAsyncSGHOSTINFO@@YAHQEAU_GHOSTINFO@@@Z.c)
 */

_BOOL8 __fastcall _GhostWindow(struct tagWND *a1)
{
  BOOL v2; // esi
  __int64 v3; // rdi
  __int64 v4; // rax
  struct _KTHREAD *v5; // rcx
  unsigned int ThreadProcessId; // eax
  struct _KTHREAD *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  int v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+24h] [rbp-34h]
  unsigned int v14; // [rsp+2Ch] [rbp-2Ch]
  unsigned int ThreadId; // [rsp+30h] [rbp-28h]
  __int128 v16; // [rsp+34h] [rbp-24h]
  __int64 v17; // [rsp+68h] [rbp+10h] BYREF

  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
  {
    LODWORD(v17) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 670);
  }
  v2 = 0;
  if ( (unsigned int)SetGhostProp(a1, (HWND)0xFFFFFFFFFFFFFFFFLL) )
  {
    v3 = *((_QWORD *)a1 + 2);
    v2 = 1;
    if ( !IsNonImmersiveBand((__int64)a1) )
      goto LABEL_7;
    v4 = *(_QWORD *)a1;
    v5 = *(struct _KTHREAD **)v3;
    v16 = 0LL;
    v13 = v4;
    v12 = 1;
    ThreadProcessId = (unsigned int)PsGetThreadProcessId(v5);
    v7 = *(struct _KTHREAD **)v3;
    v14 = ThreadProcessId;
    ThreadId = (unsigned int)PsGetThreadId(v7);
    v2 = SendAsyncSGHOSTINFO((struct _GHOSTINFO *const)&v12, v8);
    if ( v2 )
    {
LABEL_7:
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 528), 0, 0) >= 0 )
      {
        v10 = *(_QWORD **)(v3 + 464);
        v17 = 4LL;
        PsSetProcessFaultInformation(*v10, &v17);
        _InterlockedOr((volatile signed __int32 *)(v3 + 528), 0x80000000);
      }
    }
    else
    {
      RemoveGhostProp(a1, v9);
    }
  }
  return v2;
}
