/*
 * XREFs of ReadFieldObj @ 0x14000B7E0
 * Callers:
 *     <none>
 * Callees:
 *     HeapFree @ 0x140004AB0 (HeapFree.c)
 *     AccessFieldData @ 0x14000BEC0 (AccessFieldData.c)
 *     PushAccFieldObj @ 0x140011520 (PushAccFieldObj.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 *     memmove @ 0x140070C40 (memmove.c)
 */

__int64 __fastcall ReadFieldObj(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // esi
  int *v6; // rcx
  int v7; // eax
  int v8; // eax
  __int64 result; // rax
  __int64 v10; // rdi
  size_t v11; // r14
  unsigned __int64 v12; // r12
  __int64 v13; // rdi
  __int64 v14; // r8
  bool v15; // r13
  int (__fastcall *v16)(_QWORD, unsigned __int64, __int64 *, _QWORD, _DWORD *); // rax
  _DWORD *v17; // rcx
  int v18; // ecx
  int v19; // eax
  int v20; // edx
  int v21; // ecx
  unsigned int v22; // eax
  int v23; // edx
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned int v26; // ecx
  __int64 v27; // rax
  __int64 v28; // rdi
  bool v29; // cf
  unsigned int v30; // ecx
  __int64 v31; // rax
  size_t v32; // r13
  __int64 v33; // r8
  unsigned __int64 v34; // r12
  __int64 v35; // rdi
  __int64 v36; // rcx
  size_t v37; // r9
  bool v38; // r14
  int (__fastcall *v39)(_QWORD, unsigned __int64, __int64 *, _QWORD, int *); // rax
  __int64 v40; // rax
  int *v41; // rcx
  unsigned __int64 v42; // rdx
  int v43; // r9d
  unsigned int v44; // r10d
  unsigned int v45; // edx
  __int64 v46; // r8
  int v47; // eax
  _QWORD *v48; // rcx
  __int64 v49; // rcx
  signed __int32 v50[8]; // [rsp+0h] [rbp-100h] BYREF
  _DWORD *v51; // [rsp+20h] [rbp-E0h]
  __int64 v52; // [rsp+30h] [rbp-D0h] BYREF
  __int64 Src; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v54; // [rsp+40h] [rbp-C0h]
  int v55; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v56[5]; // [rsp+4Ch] [rbp-B4h] BYREF
  _QWORD v57[10]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v58[10]; // [rsp+B0h] [rbp-50h] BYREF

  v3 = a3;
  if ( a3 )
  {
LABEL_54:
    v48 = *(_QWORD **)(a1 + 416);
    *(_QWORD *)(a1 + 416) = v48[1];
    HeapFree(v48);
    return v3;
  }
  v6 = (int *)(a2 + 16);
  v7 = *(_DWORD *)(a2 + 16) & 0xF;
  if ( v7 == 1 )
    goto LABEL_27;
  if ( !v7 )
    goto LABEL_24;
  v8 = v7 - 2;
  if ( !v8 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(a2 + 80) )
        goto LABEL_49;
      v26 = *(_DWORD *)(a2 + 76);
      v27 = 1LL << v26;
      v28 = 0LL;
      v29 = v26 < 0x40;
      v30 = *(_DWORD *)(a2 + 72);
      if ( v29 )
        v28 = v27;
      if ( v30 >= 0x40 )
        v31 = 0LL;
      else
        v31 = *(_QWORD *)(a2 + 88) << v30;
      v32 = *(unsigned int *)(a2 + 56);
      v33 = v31 & *(_QWORD *)(a2 + 64);
      v34 = *(_QWORD *)(a2 + 40);
      v35 = (v28 - 1) << v30;
      v36 = 0LL;
      v57[4] = 0xFFFFFFFFLL;
      v54 = v33;
      v55 = 0;
      v52 = 0LL;
      v57[0] = 0LL;
      v57[1] = 255LL;
      v57[2] = 0xFFFFLL;
      v57[3] = 0LL;
      memset(&v57[5], 0, 24);
      v57[8] = -1LL;
      if ( (unsigned int)v32 > 8 )
        goto LABEL_48;
      v37 = (unsigned int)v32;
      v38 = v35 == v57[v32];
      if ( BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink) )
      {
        v39 = *(int (__fastcall **)(_QWORD, unsigned __int64, __int64 *, _QWORD, int *))(PmHalDispatchTable + 144);
        if ( v39 )
          break;
      }
LABEL_42:
      if ( v34 % v37 )
      {
        if ( !v38 )
        {
          memmove(&v52, (const void *)v34, v37);
          v36 = v52;
          v37 = v32;
          v33 = v54;
        }
        v52 = v33 | v36 & ~v35;
        memmove((void *)v34, &v52, v37);
      }
      else
      {
        switch ( (_DWORD)v32 )
        {
          case 1:
            if ( !v38 )
              v36 = *(unsigned __int8 *)v34;
            v52 = v33 | v36 & ~v35;
            *(_BYTE *)v34 = v52;
LABEL_47:
            _InterlockedOr(v50, 0);
            break;
          case 4:
            if ( !v38 )
              v36 = *(unsigned int *)v34;
            v52 = v33 | v36 & ~v35;
            *(_DWORD *)v34 = v52;
            goto LABEL_47;
          case 2:
            if ( !v38 )
              v36 = *(unsigned __int16 *)v34;
            v52 = v33 | v36 & ~v35;
            *(_WORD *)v34 = v52;
            goto LABEL_47;
          case 8:
            if ( !v38 )
              v36 = *(_QWORD *)v34;
            v52 = v33 | v36 & ~v35;
            *(_QWORD *)v34 = v52;
            KeFlushWriteBuffer();
            break;
        }
      }
LABEL_48:
      v42 = *(unsigned int *)(a2 + 56) + *(_QWORD *)(a2 + 40);
      *(_QWORD *)(a2 + 40) = v42;
      if ( v42 >= *(_QWORD *)(a2 + 48) )
      {
        ++*(_DWORD *)(a2 + 16);
        goto LABEL_54;
      }
LABEL_49:
      v43 = *(_DWORD *)(a2 + 76);
      v44 = *(_DWORD *)(a2 + 104);
      v45 = *(_DWORD *)(a2 + 72);
      v46 = *(_QWORD *)(a2 + 88) >> v43;
      v54 = v46;
      *(_QWORD *)(a2 + 88) = v46;
      if ( v44 < v45 )
      {
        v49 = 0LL;
        if ( v44 < 0x40 )
          v49 = 1LL << v44;
        v54 = v46 & (v49 - 1);
        *(_QWORD *)(a2 + 88) = v54;
      }
      if ( v45 >= 0x40 )
        v10 = 0LL;
      else
        v10 = 1LL << v45;
      v11 = *(unsigned int *)(a2 + 56);
      v12 = *(_QWORD *)(a2 + 40);
      v56[0] = 0;
      v13 = (v10 - 1) >> v43;
      v14 = 0LL;
      Src = 0LL;
      v58[0] = 0LL;
      v58[1] = 255LL;
      v58[2] = 0xFFFFLL;
      v58[3] = 0LL;
      v58[4] = 0xFFFFFFFFLL;
      memset(&v58[5], 0, 24);
      v58[8] = -1LL;
      if ( (unsigned int)v11 > 8 )
        goto LABEL_22;
      v15 = v13 == v58[v11];
      if ( BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink) )
      {
        v16 = *(int (__fastcall **)(_QWORD, unsigned __int64, __int64 *, _QWORD, _DWORD *))(PmHalDispatchTable + 144);
        if ( v16 )
        {
          if ( v13 == v58[v11] )
          {
LABEL_14:
            v17 = v56;
            v51 = v56;
            Src = v54 | v14 & ~v13;
            LOBYTE(v17) = 1;
            if ( (*(int (__fastcall **)(_DWORD *, unsigned __int64, __int64 *, _QWORD, _DWORD *))(PmHalDispatchTable
                                                                                                + 144))(
                   v17,
                   v12,
                   &Src,
                   (unsigned int)v11,
                   v56) >= 0 )
              goto LABEL_22;
          }
          else if ( v16(0LL, v12, &Src, (unsigned int)v11, v56) >= 0 )
          {
            v14 = Src;
            goto LABEL_14;
          }
          v14 = Src;
        }
      }
      if ( v12 % v11 )
      {
        if ( !v15 )
        {
          memmove(&Src, (const void *)v12, v11);
          v14 = Src;
        }
        Src = v54 | v14 & ~v13;
        memmove((void *)v12, &Src, v11);
      }
      else
      {
        switch ( (_DWORD)v11 )
        {
          case 1:
            if ( !v15 )
              v14 = *(unsigned __int8 *)v12;
            Src = v54 | v14 & ~v13;
            *(_BYTE *)v12 = Src;
LABEL_21:
            _InterlockedOr(v50, 0);
            break;
          case 4:
            if ( !v15 )
              v14 = *(unsigned int *)v12;
            Src = v54 | v14 & ~v13;
            *(_DWORD *)v12 = Src;
            goto LABEL_21;
          case 2:
            if ( !v15 )
              v14 = *(unsigned __int16 *)v12;
            Src = v54 | v14 & ~v13;
            *(_WORD *)v12 = Src;
            goto LABEL_21;
          case 8:
            if ( !v15 )
              v14 = *(_QWORD *)v12;
            Src = v54 | v14 & ~v13;
            *(_QWORD *)v12 = Src;
            KeFlushWriteBuffer();
            break;
        }
      }
LABEL_22:
      v18 = *(_DWORD *)(a2 + 104);
      v19 = *(_DWORD *)(a2 + 56);
      *(_DWORD *)(a2 + 96) += v19;
      v20 = *(_DWORD *)(a2 + 16);
      v21 = v18 - 8 * v19;
      v22 = *(_DWORD *)(a2 + 80) + 1;
      *(_DWORD *)(a2 + 104) = *(_DWORD *)(a2 + 100) + v21;
      v6 = (int *)(a2 + 16);
      *(_DWORD *)(a2 + 100) = 0;
      *(_DWORD *)(a2 + 80) = v22;
      if ( v22 >= *(_DWORD *)(a2 + 60) )
      {
        v47 = v20 + 1;
LABEL_53:
        *v6 = v47;
        goto LABEL_54;
      }
      *v6 = v20 - 2;
LABEL_24:
      v23 = *v6;
      if ( *(_DWORD *)(a2 + 80) >= *(_DWORD *)(a2 + 60) )
      {
        v47 = v23 + 3;
        goto LABEL_53;
      }
      *v6 = v23 + 1;
      v24 = *(_QWORD *)(a2 + 32);
      if ( *(_WORD *)(v24 + 2) == 5 )
      {
        v25 = **(_QWORD **)(v24 + 32);
        if ( *(_WORD *)(v25 + 66) == 132 )
          return PushAccFieldObj(
                   a1,
                   WriteFieldObj,
                   **(_QWORD **)(v25 + 96) + 64LL,
                   *(_QWORD *)(**(_QWORD **)(v25 + 96) + 96LL) + 8LL,
                   a2 + 96,
                   4);
      }
LABEL_27:
      ++*v6;
      result = AccessFieldData(a1, *(_QWORD *)(a2 + 32), (int)a2 + 96, (int)a2 + 88, 1);
      v3 = result;
      if ( (_DWORD)result || a2 != *(_QWORD *)(a1 + 416) )
        return result;
    }
    if ( v35 != v57[v32] )
    {
      if ( v39(0LL, v34, &v52, (unsigned int)v32, &v55) < 0 )
      {
LABEL_41:
        v36 = v52;
        v37 = v32;
        v33 = v54;
        goto LABEL_42;
      }
      v36 = v52;
      v33 = v54;
    }
    v40 = v36 & ~v35;
    v41 = &v55;
    v52 = v33 | v40;
    LOBYTE(v41) = 1;
    if ( (*(int (__fastcall **)(int *, unsigned __int64, __int64 *, _QWORD, int *))(PmHalDispatchTable + 144))(
           v41,
           v34,
           &v52,
           (unsigned int)v32,
           &v55) >= 0 )
      goto LABEL_48;
    goto LABEL_41;
  }
  if ( v8 == 1 )
    goto LABEL_54;
  return 0LL;
}
