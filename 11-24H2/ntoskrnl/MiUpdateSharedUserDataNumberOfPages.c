/*
 * XREFs of MiUpdateSharedUserDataNumberOfPages @ 0x1407EA1D0
 * Callers:
 *     MiPerformMemoryChange @ 0x14066E094 (MiPerformMemoryChange.c)
 *     MiInitSystem @ 0x140C4DC40 (MiInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 MiUpdateSharedUserDataNumberOfPages()
{
  int v0; // ecx
  __int64 result; // rax

  *(_QWORD *)(MmWriteableSharedUserData + 784) = qword_140E3D450;
  v0 = -1;
  if ( qword_140E3D450 <= 0xFFFFFFFF )
    v0 = qword_140E3D450;
  result = MmWriteableSharedUserData;
  *(_DWORD *)(MmWriteableSharedUserData + 744) = v0;
  return result;
}
