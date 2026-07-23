/*
 * XREFs of ViThunkFindSharedExports @ 0x140B997F8
 * Callers:
 *     ViThunkFindAllSharedExports @ 0x140B9956C (ViThunkFindAllSharedExports.c)
 * Callees:
 *     <none>
 */

void __fastcall ViThunkFindSharedExports(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  _QWORD *v5; // r10
  __int64 v6; // r11
  int v7; // r8d
  __int64 v8; // rax
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax

  if ( a1 && a2 )
  {
    v5 = (_QWORD *)(a1 + 16);
    v6 = a2;
    do
    {
      v7 = *((_DWORD *)v5 - 2);
      if ( v7 != -1 )
      {
        v8 = *v5;
        if ( *v5 )
        {
          v9 = *(_DWORD *)(v8 + 32);
          if ( (v9 & 1) != 0 )
          {
            if ( (v9 & 4) != 0 )
              v10 = *(_QWORD *)(v8 + 8);
            else
              v10 = **(_QWORD **)(v8 + 40);
            if ( v10 )
            {
              v11 = (unsigned int)*a4;
              v12 = 3 * v11;
              *(_DWORD *)(a3 + 8 * v12) = v7;
              *(_QWORD *)(a3 + 8 * v12 + 8) = v10;
              *a4 = v11 + 1;
            }
          }
        }
      }
      v5 += 3;
      --v6;
    }
    while ( v6 );
  }
}
