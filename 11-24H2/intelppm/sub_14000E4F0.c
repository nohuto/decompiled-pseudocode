/*
 * XREFs of sub_14000E4F0 @ 0x14000E4F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000E0DC @ 0x14000E0DC (sub_14000E0DC.c)
 */

__int64 __fastcall sub_14000E4F0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r10
  unsigned int v3; // r8d
  unsigned __int64 v4; // r10
  __int64 v5; // r10
  unsigned __int64 v6; // rax
  __int64 v7; // rcx

  v2 = a2[4];
  v3 = 0;
  if ( v2 )
    v4 = a2[2] | __readmsr(*(_DWORD *)(a1 + 4)) & v2;
  else
    v4 = a2[2];
  __writemsr(*(_DWORD *)(a1 + 4), v4);
  if ( *(_QWORD *)(a1 + 16) )
  {
    v5 = a2[3];
    if ( v5 )
    {
      v6 = __readmsr(*(_DWORD *)(a1 + 16));
      v7 = a2[5];
      if ( v7 )
        v6 &= v7;
      if ( v6 != v5 )
      {
        if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
          sub_14000E0DC((__int64)off_140018050->DeviceExtension, 3u, 3u, 0x19u, (__int64)&unk_140013160, v5, v6);
        return (unsigned int)-1073741823;
      }
    }
  }
  return v3;
}
