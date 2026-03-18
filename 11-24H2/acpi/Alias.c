/*
 * XREFs of Alias @ 0x14006F250
 * Callers:
 *     <none>
 * Callees:
 *     CreateNameSpaceObject @ 0x140009050 (CreateNameSpaceObject.c)
 *     GetNameSpaceObject @ 0x140009900 (GetNameSpaceObject.c)
 *     DereferenceObjectEx @ 0x14000C640 (DereferenceObjectEx.c)
 */

__int64 __fastcall Alias(__int64 *a1, __int64 a2)
{
  unsigned int NameSpaceObject; // edi
  __int64 v5; // rbx
  unsigned int v6; // eax
  __int64 v7; // rcx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  NameSpaceObject = GetNameSpaceObject(*(_BYTE **)(*(_QWORD *)(a2 + 80) + 32LL), a1[10], (__int64)&v9, 0x80000000);
  if ( !NameSpaceObject )
  {
    v5 = a2 + 64;
    v6 = CreateNameSpaceObject(a1[40], *(_QWORD *)(*(_QWORD *)(a2 + 80) + 72LL), a1[10], a1[11], (_QWORD *)(a2 + 64), 0);
    v7 = v9;
    NameSpaceObject = v6;
    if ( !v6 )
    {
      *(_WORD *)(*(_QWORD *)v5 + 66LL) = 128;
      *(_QWORD *)(*(_QWORD *)v5 + 80LL) = v7;
    }
    DereferenceObjectEx(v7);
  }
  return NameSpaceObject;
}
