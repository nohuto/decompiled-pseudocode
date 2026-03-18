/*
 * XREFs of ?RemoveAt@?$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAXI@Z @ 0x14006CD18
 * Callers:
 *     ?ClearPointerListEntries@CInputManager@@SAXI@Z @ 0x14006B3D4 (-ClearPointerListEntries@CInputManager@@SAXI@Z.c)
 *     ?UpdatePointerCapture@CInputManager@@SAJII@Z @ 0x14006C7C0 (-UpdatePointerCapture@CInputManager@@SAJII@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 */

__int64 __fastcall CStructDynamicArray<CInputManager::PointerCaptureInfo>::RemoveAt(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ebx
  __int64 result; // rax
  __int64 v5; // rcx

  v3 = a2;
  GreDeleteFastMutex(*(char **)(*(_QWORD *)a1 + 8LL * a2));
  result = (unsigned int)(*(_DWORD *)(a1 + 8) - 1);
  for ( *(_DWORD *)(a1 + 8) = result; v3 < *(_DWORD *)(a1 + 8); *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) = result )
  {
    v5 = v3++;
    result = *(_QWORD *)(*(_QWORD *)a1 + 8LL * v3);
  }
  return result;
}
