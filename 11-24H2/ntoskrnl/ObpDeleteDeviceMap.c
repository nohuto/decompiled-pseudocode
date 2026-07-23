/*
 * XREFs of ObpDeleteDeviceMap @ 0x140742944
 * Callers:
 *     ObDereferenceDeviceMap @ 0x14096DDE4 (ObDereferenceDeviceMap.c)
 *     ObpSetDeviceMap @ 0x140A73E78 (ObpSetDeviceMap.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ObFastReplaceObject @ 0x14044674C (ObFastReplaceObject.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     ObDereferenceDeviceMap @ 0x14096DDE4 (ObDereferenceDeviceMap.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall ObpDeleteDeviceMap(char *P)
{
  void *v2; // rcx
  unsigned int v3; // edi
  _QWORD *v4; // rsi
  void *v5; // rax
  void *v6; // rcx

  v2 = (void *)*((_QWORD *)P + 2);
  if ( v2 )
    ObfDereferenceObjectWithTag(v2, 0x6D44624Fu);
  ObCloseHandle(*((HANDLE *)P + 31), 0);
  ObfDereferenceObject(*(PVOID *)P);
  v3 = 0;
  v4 = P + 32;
  do
  {
    if ( *v4 )
    {
      v5 = (void *)ObFastReplaceObject((volatile __int64 *)&P[8 * v3 + 32], 0LL);
      ObfDereferenceObject(v5);
    }
    ++v3;
    ++v4;
  }
  while ( v3 < 0x1A );
  v6 = (void *)*((_QWORD *)P + 3);
  if ( v6 )
    ObDereferenceDeviceMap(v6);
  ExFreePoolWithTag(P, 0x6D44624Fu);
}
