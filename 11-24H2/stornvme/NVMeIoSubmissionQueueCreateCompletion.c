/*
 * XREFs of NVMeIoSubmissionQueueCreateCompletion @ 0x140029520
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140005060 (GetSrbExtension.c)
 */

__int64 __fastcall NVMeIoSubmissionQueueCreateCompletion(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rbx

  result = GetSrbExtension(a2);
  v5 = result;
  if ( *(_BYTE *)(v4 + 3) != 1 )
  {
    *(_DWORD *)(v3 + 28) = 22;
LABEL_5:
    result = StorPortExtendedFunction(101LL, v3, v3 + 3912, v3);
    goto LABEL_6;
  }
  if ( _InterlockedIncrement((volatile signed __int32 *)(v3 + 984)) == *(unsigned __int16 *)(v3 + 330) )
    goto LABEL_5;
LABEL_6:
  *(_BYTE *)(v5 + 4225) |= 8u;
  return result;
}
