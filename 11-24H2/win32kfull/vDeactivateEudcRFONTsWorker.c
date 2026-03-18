/*
 * XREFs of vDeactivateEudcRFONTsWorker @ 0x14030C94C
 * Callers:
 *     ?prfntDeactivateEudcRFONTs@@YAXPEBQEAVPFE@@PEAU_LIST_ENTRY@@@Z @ 0x1400BB798 (-prfntDeactivateEudcRFONTs@@YAXPEBQEAVPFE@@PEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14005CE04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?prfntActive@PDEVOBJ@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1401554FC (-prfntActive@PDEVOBJ@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?cInactive@PDEVOBJ@@QEAAII@Z @ 0x14019DFE0 (-cInactive@PDEVOBJ@@QEAAII@Z.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x14030DCEC (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 */

struct PFF *__fastcall vDeactivateEudcRFONTsWorker(__int64 a1, _QWORD *a2, struct PFF *a3, __int64 *a4)
{
  int v4; // esi
  char *v8; // r14
  int *i; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 **v13; // rdx
  struct _LIST_ENTRY *v14; // rax
  struct _LIST_ENTRY *v15; // r9
  struct _LIST_ENTRY *Blink; // rcx
  int v17; // edx
  _QWORD *v18; // r9
  __int64 v19; // rax
  struct PFF *result; // rax
  struct PFF *v21; // rdi
  __int64 v22; // [rsp+40h] [rbp+8h] BYREF

  HIDWORD(v22) = HIDWORD(a1);
  v4 = 0;
  LODWORD(v22) = 0;
  while ( 1 )
  {
    result = SkipInvalidPff(a3);
    v21 = result;
    if ( !result )
      return result;
    if ( (*((_DWORD *)result + 13) & 8) != 0 )
    {
      v8 = (char *)result + 72;
      for ( i = (int *)*((_QWORD *)result + 9); i != (int *)v8; i = *(int **)i )
      {
        v10 = *((_QWORD *)i - 46);
        if ( v10 == *a2 || v10 == a2[1] )
        {
          v11 = *((_QWORD *)i - 48);
          v12 = *((_QWORD *)i + 23);
          v22 = v11;
          if ( *(int **)(v12 + 8) != i + 46 )
            goto LABEL_24;
          v13 = (__int64 **)*((_QWORD *)i + 24);
          if ( *v13 != (__int64 *)(i + 46) )
            goto LABEL_24;
          *v13 = (__int64 *)v12;
          *(_QWORD *)(v12 + 8) = v13;
          if ( i[45] <= 0 )
          {
            if ( (*(_DWORD *)(v11 + 40) & 0x800000) != 0 )
            {
              v4 |= 1u;
              v17 = *(_DWORD *)(*(_QWORD *)(v11 + 3512) + 1552LL);
            }
            else
            {
              v17 = *(_DWORD *)(v11 + 1552);
            }
            if ( (v4 & 1) != 0 )
              v4 &= ~1u;
            PDEVOBJ::cInactive((PDEVOBJ *)&v22, v17 - 1);
            v19 = *a4;
            if ( *(__int64 **)(*a4 + 8) != a4 )
LABEL_24:
              __fastfail(3u);
            *v18 = v19;
            v18[1] = a4;
            *(_QWORD *)(v19 + 8) = v18;
            *a4 = (__int64)v18;
          }
          else
          {
            v14 = PDEVOBJ::prfntActive((PDEVOBJ *)&v22);
            Blink = v14->Blink;
            if ( Blink->Flink != v14 )
              goto LABEL_24;
            v15->Flink = v14;
            v15->Blink = Blink;
            Blink->Flink = v15;
            v14->Blink = v15;
          }
          v22 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v22);
        }
      }
    }
    a3 = (struct PFF *)*((_QWORD *)v21 + 1);
  }
}
