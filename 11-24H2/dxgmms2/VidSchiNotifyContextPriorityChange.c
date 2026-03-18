/*
 * XREFs of VidSchiNotifyContextPriorityChange @ 0x14010442C
 * Callers:
 *     VidSchiSetInProcessPriorityContext @ 0x140043594 (VidSchiSetInProcessPriorityContext.c)
 *     VidSchiSetPriorityContext @ 0x140047D78 (VidSchiSetPriorityContext.c)
 * Callees:
 *     ?DdiNotifyContextPriorityChange@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_NOTIFYCONTEXTPRIORITYCHANGE@@@Z @ 0x14004B5C0 (-DdiNotifyContextPriorityChange@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_NOTIFYCONTEXTPRIORITYCHANGE@@@.c)
 */

__int64 __fastcall VidSchiNotifyContextPriorityChange(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r8
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]
  int v5; // [rsp+2Ch] [rbp-Ch]

  result = *(_QWORD *)(a1 + 96);
  v2 = *(_QWORD *)(result + 24);
  if ( *(_BYTE *)(v2 + 7060) )
  {
    result = *(_QWORD *)(a1 + 64);
    if ( result )
    {
      v3 = *(_QWORD *)(a1 + 64);
      v4 = *(_DWORD *)(a1 + 404);
      v5 = *(_DWORD *)(a1 + 408);
      return ADAPTER_RENDER::DdiNotifyContextPriorityChange(
               *(ADAPTER_RENDER **)(v2 + 8),
               (const struct _DXGKARG_NOTIFYCONTEXTPRIORITYCHANGE *)&v3);
    }
  }
  return result;
}
