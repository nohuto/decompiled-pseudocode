/*
 * XREFs of ?reserve@?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAA_N_K@Z @ 0x1800E2FA4
 * Callers:
 *     ?push_back@?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAA_N$$QEAVStoredFailureInfo@wil@@@Z @ 0x1800E2D10 (-push_back@-$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAA_N$$QEAVStoredFailureInfo@wil@@@Z.c)
 * Callees:
 *     ??_GStoredFailureInfo@wil@@QEAAPEAXI@Z @ 0x1800E07AC (--_GStoredFailureInfo@wil@@QEAAPEAXI@Z.c)
 */

char __fastcall tip2::vector_nothrow<wil::StoredFailureInfo>::reserve(void **a1, unsigned __int64 a2)
{
  HANDLE ProcessHeap; // rax
  char *v5; // rax
  char *v6; // rsi
  unsigned __int64 v7; // r15
  _QWORD *v8; // r14
  __int64 v9; // rbx
  _QWORD *v10; // rcx
  char *v11; // rdx
  void *v12; // rbx
  HANDLE v13; // rax

  if ( a2 <= (unsigned __int64)a1[1] )
  {
LABEL_9:
    LOBYTE(v5) = 1;
    return (char)v5;
  }
  ProcessHeap = GetProcessHeap();
  v5 = (char *)HeapAlloc(ProcessHeap, 0, 168 * a2);
  v6 = v5;
  if ( v5 )
  {
    if ( *a1 )
    {
      v7 = 0LL;
      if ( a1[2] )
      {
        v8 = v5 + 152;
        v9 = -152LL - (_QWORD)v5;
        do
        {
          v10 = v8 - 19;
          v11 = (char *)*a1 + (_QWORD)v8 + v9;
          *(_OWORD *)v10 = *(_OWORD *)v11;
          *((_OWORD *)v10 + 1) = *((_OWORD *)v11 + 1);
          *((_OWORD *)v10 + 2) = *((_OWORD *)v11 + 2);
          *((_OWORD *)v10 + 3) = *((_OWORD *)v11 + 3);
          *((_OWORD *)v10 + 4) = *((_OWORD *)v11 + 4);
          *((_OWORD *)v10 + 5) = *((_OWORD *)v11 + 5);
          *((_OWORD *)v10 + 6) = *((_OWORD *)v11 + 6);
          *((_OWORD *)v10 + 7) = *((_OWORD *)v11 + 7);
          *((_OWORD *)v10 + 8) = *((_OWORD *)v11 + 8);
          v10[18] = *((_QWORD *)v11 + 18);
          *v8 = *((_QWORD *)v11 + 19);
          v8[1] = *((_QWORD *)v11 + 20);
          *((_QWORD *)v11 + 19) = 0LL;
          *((_QWORD *)v11 + 20) = 0LL;
          wil::StoredFailureInfo::`scalar deleting destructor'((volatile signed __int32 **)((char *)*a1 + (_QWORD)v8 + v9));
          ++v7;
          v8 += 21;
        }
        while ( v7 < (unsigned __int64)a1[2] );
      }
      v12 = *a1;
      v13 = GetProcessHeap();
      HeapFree(v13, 0, v12);
    }
    *a1 = v6;
    a1[1] = (void *)a2;
    goto LABEL_9;
  }
  return (char)v5;
}
