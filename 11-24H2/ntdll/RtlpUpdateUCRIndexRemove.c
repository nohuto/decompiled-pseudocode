/*
 * XREFs of RtlpUpdateUCRIndexRemove @ 0x1800E31C4
 * Callers:
 *     RtlpRemoveUCRBlock @ 0x1800E311C (RtlpRemoveUCRBlock.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpUpdateUCRIndexRemove(__int64 a1, __int64 *a2)
{
  __int64 *v2; // r8
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // r11
  unsigned int v7; // edx
  __int64 v8; // rdi
  unsigned int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 *v12; // rax
  __int64 v13; // rax

  v2 = *(__int64 **)(a1 + 320);
  if ( v2 )
  {
    v4 = a2[5];
    v5 = v4 >> 12;
    while ( 1 )
    {
      v6 = *((unsigned int *)v2 + 2);
      if ( v5 < v6 )
      {
        v7 = v6 - 1;
        goto LABEL_7;
      }
      if ( !*v2 )
        break;
      v2 = (__int64 *)*v2;
    }
    v7 = v6 - 1;
    LODWORD(v5) = v6 - 1;
LABEL_7:
    v8 = v2[6];
    v9 = v5 - *((_DWORD *)v2 + 6);
    v10 = 2 * v9;
    if ( !*((_DWORD *)v2 + 3) )
      v10 = v9;
    v11 = (unsigned int)v10;
    v12 = *(__int64 **)(v8 + 8 * v10);
    --*((_DWORD *)v2 + 4);
    if ( (_DWORD)v5 == v7 )
      --*((_DWORD *)v2 + 5);
    if ( v12 == a2 )
    {
      v13 = *a2;
      if ( *v2 )
        v7 = v6;
      if ( (unsigned int)v5 >= v7 )
      {
        if ( v13 == v2[4] )
        {
LABEL_17:
          *(_QWORD *)(v8 + 8 * v11) = 0LL;
          *(_DWORD *)(v2[5] + 4 * ((unsigned __int64)v9 >> 5)) &= ~(1 << (v9 & 0x1F));
          return;
        }
      }
      else if ( v13 == v2[4] || (_DWORD)v4 != *(_DWORD *)(v13 + 40) )
      {
        goto LABEL_17;
      }
      *(_QWORD *)(v8 + 8 * v11) = v13;
    }
  }
}
