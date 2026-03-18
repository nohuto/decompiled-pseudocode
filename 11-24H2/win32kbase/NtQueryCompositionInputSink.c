/*
 * XREFs of NtQueryCompositionInputSink @ 0x14004A590
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x140024300 (UserIsCurrentProcessDwm.c)
 *     RIMLockShared @ 0x1400410B0 (RIMLockShared.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140047450 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x14004A450 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?QueryInputQueueTypes@CInputSink@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z @ 0x14004B0B4 (-QueryInputQueueTypes@CInputSink@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14023F410 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtQueryCompositionInputSink(void *a1, void *a2)
{
  void *v2; // r14
  BOOL IsCurrentProcessDwm; // eax
  signed int InputQueueTypes; // esi
  const void *v6; // rdx
  const void *v7; // rdx
  const void *v8; // rdx
  char *v9; // rdi
  size_t v10; // r8
  int v12; // [rsp+20h] [rbp-58h] BYREF
  PVOID Object; // [rsp+28h] [rbp-50h] BYREF
  int v14; // [rsp+30h] [rbp-48h]
  void *v15; // [rsp+38h] [rbp-40h]
  __int128 Src; // [rsp+40h] [rbp-38h] BYREF
  __int64 v17; // [rsp+50h] [rbp-28h]

  v2 = a2;
  Object = a1;
  v15 = a2;
  Src = 0LL;
  v17 = 0LL;
  v12 = 0;
  IsCurrentProcessDwm = UserIsCurrentProcessDwm();
  InputQueueTypes = !IsCurrentProcessDwm ? 0xC0000022 : 0;
  if ( IsCurrentProcessDwm )
  {
    v6 = v2;
    if ( (unsigned __int64)v2 >= MmUserProbeAddress )
      v6 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&v12, v6, 4uLL);
    if ( v12 == 20 )
    {
      v8 = v2;
      if ( (unsigned __int64)v2 >= MmUserProbeAddress )
        v8 = (const void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(&Src, v8, 0x14uLL);
      HIDWORD(v17) = 0;
    }
    else if ( v12 == 24 )
    {
      v7 = v2;
      if ( (unsigned __int64)v2 >= MmUserProbeAddress )
        v7 = (const void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(&Src, v7, 0x18uLL);
    }
    else
    {
      InputQueueTypes = -1073741811;
      v14 = -1073741811;
    }
  }
  if ( InputQueueTypes >= 0 )
  {
    Object = 0LL;
    InputQueueTypes = CompositionInputObject::ResolveHandle(a1, 1u, 1, (struct CompositionInputObject **)&Object);
    if ( InputQueueTypes >= 0 )
    {
      v9 = (char *)Object;
      RIMLockShared((__int64)Object + 32);
      InputQueueTypes = CInputSink::QueryInputQueueTypes(
                          (CInputSink *)(v9 + 24),
                          (struct COMPOSITION_INPUT_SINK_QUERY_V2 *)&Src);
      CPushLock::ReleaseLock((CPushLock *)(v9 + 32));
      ObfDereferenceObject(v9);
    }
    if ( InputQueueTypes >= 0 )
    {
      if ( v12 == 20 )
      {
        if ( (unsigned __int64)v2 >= MmUserProbeAddress )
          v2 = (void *)MmUserProbeAddress;
        v10 = 20LL;
        goto LABEL_22;
      }
      if ( v12 == 24 )
      {
        if ( (unsigned __int64)v2 >= MmUserProbeAddress )
          v2 = (void *)MmUserProbeAddress;
        v10 = 24LL;
LABEL_22:
        RtlCopyVolatileMemory(v2, &Src, v10);
      }
    }
  }
  return (unsigned int)InputQueueTypes;
}
