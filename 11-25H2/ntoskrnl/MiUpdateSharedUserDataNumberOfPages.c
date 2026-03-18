/*
 * XREFs of MiUpdateSharedUserDataNumberOfPages @ 0x1407DA310
 * Callers:
 *     MiPerformMemoryChange @ 0x140662554 (MiPerformMemoryChange.c)
 *     MiInitSystem @ 0x140C3C930 (MiInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 MiUpdateSharedUserDataNumberOfPages()
{
  int v0; // ecx
  __int64 result; // rax

  *(_QWORD *)(MmWriteableSharedUserData + 784) = qword_140E3D210;
  v0 = -1;
  if ( qword_140E3D210 <= 0xFFFFFFFF )
    v0 = qword_140E3D210;
  result = MmWriteableSharedUserData;
  *(_DWORD *)(MmWriteableSharedUserData + 744) = v0;
  return result;
}
