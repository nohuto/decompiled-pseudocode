/*
 * XREFs of WriteFieldObj @ 0x14000B3B0
 * Callers:
 *     <none>
 * Callees:
 *     HeapFree @ 0x140004AB0 (HeapFree.c)
 *     AccessFieldData @ 0x14000BEC0 (AccessFieldData.c)
 *     PushAccFieldObj @ 0x140011520 (PushAccFieldObj.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 *     memmove @ 0x140070C40 (memmove.c)
 */

__int64 __fastcall WriteFieldObj(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edi
  int v6; // eax
  _DWORD *v7; // rdx
  int v8; // eax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 result; // rax
  int v13; // eax
  int v14; // ecx
  int v15; // ecx
  unsigned int v16; // eax
  int v17; // ecx
  int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rdi
  size_t v22; // rbp
  __int64 v23; // r15
  int (__fastcall *v24)(_QWORD, unsigned __int64, __int64 *, _QWORD, int *); // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 *v27; // r15
  size_t v28; // rbp
  size_t v29; // r12
  __int64 v30; // r13
  int (__fastcall *v31)(_QWORD, size_t, __int64 *, _QWORD, int *); // rax
  __int64 v32; // rax
  int v33; // eax
  _QWORD *v34; // rcx
  int v35; // [rsp+80h] [rbp+18h] BYREF
  __int64 v36; // [rsp+88h] [rbp+20h] BYREF

  v3 = a3;
  if ( a3 )
    goto LABEL_36;
  v6 = *(_DWORD *)(a2 + 16) & 0xF;
  v7 = (_DWORD *)(a2 + 16);
  if ( v6 == 1 )
    goto LABEL_15;
  if ( !v6 )
    goto LABEL_12;
  v8 = v6 - 2;
  if ( !v8 )
  {
    while ( 1 )
    {
      v13 = *(_DWORD *)(a2 + 56);
      *(_DWORD *)(a2 + 96) += v13;
      v14 = *(_DWORD *)(a2 + 100);
      ++*(_DWORD *)(a2 + 80);
      *(_DWORD *)(a2 + 100) = 0;
      v15 = v14 - 8 * v13;
      v16 = *(_DWORD *)(a2 + 80);
      *(_DWORD *)(a2 + 104) += v15;
      v17 = *(_DWORD *)(a2 + 16);
      if ( v16 >= *(_DWORD *)(a2 + 60) )
      {
        v33 = v17 + 1;
LABEL_35:
        *(_DWORD *)(a2 + 16) = v33;
        goto LABEL_36;
      }
      *(_DWORD *)(a2 + 16) = v17 - 2;
LABEL_12:
      v7 = (_DWORD *)(a2 + 16);
      v18 = *(_DWORD *)(a2 + 16);
      if ( *(_DWORD *)(a2 + 80) >= *(_DWORD *)(a2 + 60) )
      {
        v33 = v18 + 3;
        goto LABEL_35;
      }
      *(_DWORD *)(a2 + 16) = v18 + 1;
      v19 = *(_QWORD *)(a2 + 32);
      if ( *(_WORD *)(v19 + 2) == 5 )
      {
        v20 = **(_QWORD **)(v19 + 32);
        if ( *(_WORD *)(v20 + 66) == 132 )
          return PushAccFieldObj(
                   a1,
                   WriteFieldObj,
                   **(_QWORD **)(v20 + 96) + 64LL,
                   *(_QWORD *)(**(_QWORD **)(v20 + 96) + 96LL) + 8LL,
                   a2 + 96,
                   4);
      }
LABEL_15:
      ++*v7;
      v21 = *(_QWORD *)(a2 + 40);
      if ( v21 >= *(_QWORD *)(a2 + 48) )
      {
        v26 = 0LL;
      }
      else
      {
        v22 = *(unsigned int *)(a2 + 56);
        v23 = *(_QWORD *)(a2 + 64);
        v35 = 0;
        v36 = 0LL;
        if ( (unsigned int)v22 > 8 )
        {
          v26 = -1LL;
        }
        else
        {
          if ( BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink)
            && (v24 = *(int (__fastcall **)(_QWORD, unsigned __int64, __int64 *, _QWORD, int *))(PmHalDispatchTable + 144)) != 0LL
            && v24(0LL, v21, &v36, (unsigned int)v22, &v35) >= 0 )
          {
            v25 = v36;
          }
          else if ( v21 % v22 )
          {
            memmove(&v36, (const void *)v21, v22);
            v25 = v36;
          }
          else
          {
            switch ( (_DWORD)v22 )
            {
              case 1:
                v25 = *(unsigned __int8 *)v21;
                break;
              case 4:
                v25 = *(unsigned int *)v21;
                break;
              case 2:
                v25 = *(unsigned __int16 *)v21;
                break;
              case 8:
                v25 = *(_QWORD *)v21;
                break;
              default:
                v25 = -1LL;
                break;
            }
          }
          v26 = v23 & v25;
        }
      }
      v27 = (__int64 *)(a2 + 64);
      if ( !*(_DWORD *)(a2 + 80) )
      {
        v9 = 0LL;
        goto LABEL_8;
      }
      v28 = *(unsigned int *)(a2 + 56);
      v29 = v28 + *(_QWORD *)(a2 + 40);
      v9 = v26 >> *(_DWORD *)(a2 + 72);
      *(_QWORD *)(a2 + 88) = v9;
      *(_QWORD *)(a2 + 40) = v29;
      if ( v29 >= *(_QWORD *)(a2 + 48) )
      {
        v26 = 0LL;
      }
      else
      {
        v30 = *v27;
        v35 = 0;
        v36 = 0LL;
        if ( (unsigned int)v28 > 8 )
        {
          v26 = -1LL;
        }
        else if ( BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink)
               && (v31 = *(int (__fastcall **)(_QWORD, size_t, __int64 *, _QWORD, int *))(PmHalDispatchTable + 144)) != 0LL
               && v31(0LL, v29, &v36, (unsigned int)v28, &v35) >= 0 )
        {
          v9 = *(_QWORD *)(a2 + 88);
          v26 = v30 & v36;
        }
        else if ( v29 % v28 )
        {
          memmove(&v36, (const void *)v29, v28);
          v9 = *(_QWORD *)(a2 + 88);
          v26 = v30 & v36;
        }
        else
        {
          switch ( (_DWORD)v28 )
          {
            case 1:
              v32 = *(unsigned __int8 *)v29;
LABEL_33:
              v9 = *(_QWORD *)(a2 + 88);
              v26 = v30 & v32;
              break;
            case 4:
              v9 = *(_QWORD *)(a2 + 88);
              v26 = (unsigned int)v30 & *(_DWORD *)v29;
              break;
            case 2:
              v9 = *(_QWORD *)(a2 + 88);
              v26 = (unsigned __int16)(v30 & *(_WORD *)v29);
              break;
            case 8:
              v9 = *(_QWORD *)(a2 + 88);
              v26 = v30 & *(_QWORD *)v29;
              break;
            default:
              v32 = -1LL;
              goto LABEL_33;
          }
        }
      }
LABEL_8:
      v10 = v9 | *v27 & (v26 << *(_DWORD *)(a2 + 76));
      v11 = *(_QWORD *)(a2 + 32);
      *(_QWORD *)(a2 + 88) = v10;
      result = AccessFieldData(a1, v11, (int)a2 + 96, (int)a2 + 88, 0);
      v3 = result;
      if ( (_DWORD)result == 32772 || a2 != *(_QWORD *)(a1 + 416) )
        return result;
    }
  }
  if ( v8 == 1 )
  {
LABEL_36:
    v34 = *(_QWORD **)(a1 + 416);
    *(_QWORD *)(a1 + 416) = v34[1];
    HeapFree(v34);
  }
  return v3;
}
