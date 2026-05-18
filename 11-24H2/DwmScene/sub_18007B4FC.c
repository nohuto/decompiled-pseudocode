/*
 * XREFs of sub_18007B4FC @ 0x18007B4FC
 * Callers:
 *     sub_1800413CC @ 0x1800413CC (sub_1800413CC.c)
 *     sub_180049390 @ 0x180049390 (sub_180049390.c)
 *     sub_18007D8CC @ 0x18007D8CC (sub_18007D8CC.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 *     sub_180039344 @ 0x180039344 (sub_180039344.c)
 *     sub_180050600 @ 0x180050600 (sub_180050600.c)
 *     sub_180050A58 @ 0x180050A58 (sub_180050A58.c)
 *     sub_1800516E0 @ 0x1800516E0 (sub_1800516E0.c)
 *     sub_180052358 @ 0x180052358 (sub_180052358.c)
 *     sub_18007AF54 @ 0x18007AF54 (sub_18007AF54.c)
 *     sub_18007B850 @ 0x18007B850 (sub_18007B850.c)
 *     sub_18007BBF0 @ 0x18007BBF0 (sub_18007BBF0.c)
 *     sub_18007BFA8 @ 0x18007BFA8 (sub_18007BFA8.c)
 *     sub_180093434 @ 0x180093434 (sub_180093434.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
unsigned __int64 __fastcall sub_18007B4FC(__int64 a1, _QWORD *a2, int a3)
{
  int v3; // ebx
  unsigned int v6; // r12d
  _QWORD *v7; // r14
  _QWORD *v8; // rax
  __int64 v9; // r14
  __int64 v10; // rsi
  unsigned int v11; // edi
  int v12; // edi
  unsigned __int64 result; // rax
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // [rsp+20h] [rbp-59h]
  __int64 v24; // [rsp+28h] [rbp-51h]
  __int64 v25; // [rsp+30h] [rbp-49h]
  __int64 v26; // [rsp+30h] [rbp-49h]
  __int64 v27; // [rsp+38h] [rbp-41h] BYREF
  __int64 v28; // [rsp+40h] [rbp-39h]
  __int64 v29; // [rsp+48h] [rbp-31h] BYREF
  __int64 v30; // [rsp+50h] [rbp-29h]
  __int64 v31; // [rsp+58h] [rbp-21h] BYREF
  __int64 v32; // [rsp+60h] [rbp-19h]
  __int64 v33; // [rsp+68h] [rbp-11h] BYREF
  __int64 v34; // [rsp+70h] [rbp-9h]
  __int64 v35; // [rsp+78h] [rbp-1h] BYREF
  __int64 v36; // [rsp+80h] [rbp+7h]
  unsigned int v37; // [rsp+E0h] [rbp+67h] BYREF
  _QWORD *v38; // [rsp+E8h] [rbp+6Fh]
  int v39; // [rsp+F0h] [rbp+77h]
  int v40; // [rsp+F8h] [rbp+7Fh] BYREF

  v39 = a3;
  v3 = a3;
  v6 = *(_DWORD *)(*a2 + 88LL);
  sub_180011C04(*a2 + 72LL, &v27);
  v7 = (_QWORD *)(a1 + 128);
  if ( *(_QWORD *)(a1 + 32) != *(_QWORD *)(a1 + 40) )
  {
    v38 = (_QWORD *)(a1 + 128);
    if ( !*v7 || !(unsigned __int8)sub_18007BBF0(*v7, v6) )
    {
      v8 = unknown_libname_81(&v31, &v27);
      sub_18007B850(a1, v8);
    }
    sub_18007BFA8(a1);
    v37 = v6;
    if ( *(_DWORD *)(a1 + 80) != *(_DWORD *)(*(_QWORD *)sub_18007AF54((_QWORD *)(a1 + 88), (__int64)&v35, &v37) + 32LL) )
    {
      v9 = *a2;
      v10 = *(_QWORD *)(a1 + 32);
      v11 = 4 * ((*(_QWORD *)(a1 + 40) - v10) >> 2);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a2 + 96LL) + 8LL))(*(_QWORD *)(*a2 + 96LL), *a2);
      (*(void (__fastcall **)(__int64, _QWORD *, __int64, _QWORD))(*(_QWORD *)v9 + 288LL))(v9, v38, v10, v11);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 296LL))(v9);
      v12 = *(_DWORD *)(a1 + 80);
      v37 = v6;
      *(_DWORD *)(*(_QWORD *)sub_18007AF54((_QWORD *)(a1 + 88), (__int64)&v35, &v37) + 32LL) = v12;
      v7 = v38;
    }
  }
  result = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v27 + 200LL))(v27, &v40);
  v14 = 0LL;
  do
  {
    if ( ((1 << v14) & v3) != 0 )
    {
      if ( *v7 )
        result = (unsigned __int64)sub_180039344(
                                     (_QWORD *)(*(_QWORD *)(*a2 + 96LL)
                                              + 16 * (*(unsigned int *)(a1 + 144) + 12 * v14 + 73)),
                                     v7);
      if ( ((1 << v14) & v40) != 0 )
      {
        LODWORD(v38) = 0;
        v15 = *(_QWORD *)(a1 + 56);
        result = 0xCCCCCCCCCCCCCCCDuLL * ((*(_QWORD *)(a1 + 64) - v15) >> 3);
        if ( result )
        {
          v16 = 0LL;
          do
          {
            unknown_libname_81(&v31, (_QWORD *)(v15 + 40 * v16));
            unknown_libname_81(&v29, (_QWORD *)(v17 + 16));
            v37 = *(_DWORD *)(v18 + 32);
            v19 = v31;
            if ( v31 )
            {
              v20 = *sub_180052358(v31, &v33, v6);
              v25 = v20;
              if ( v34 )
              {
                sub_18001060C(v34);
                v20 = v25;
              }
              if ( !v20 )
                sub_1800516E0(v19, &v27);
              sub_180093434(*(_QWORD *)(*a2 + 96LL) + 4632LL, (unsigned int)v14, &v31, v37, v23, v24);
              v21 = v29;
              if ( v29 )
              {
                v22 = *sub_180050A58(v29, &v35, v6);
                v26 = v22;
                if ( v36 )
                {
                  sub_18001060C(v36);
                  v22 = v26;
                }
                if ( !v22 )
                  sub_180050600(v21, &v27);
                sub_18001254C(
                  (__int64 *)(*(_QWORD *)(*a2 + 96LL) + 16 * (v37 + 616LL + 16LL * (unsigned int)v14)),
                  &v29);
              }
            }
            if ( v30 )
              sub_18001060C(v30);
            if ( v32 )
              sub_18001060C(v32);
            LODWORD(v38) = (_DWORD)v38 + 1;
            v15 = *(_QWORD *)(a1 + 56);
            result = 0xCCCCCCCCCCCCCCCDuLL * ((*(_QWORD *)(a1 + 64) - v15) >> 3);
            v16 = (unsigned int)v38;
          }
          while ( (unsigned int)v38 < result );
          v3 = v39;
        }
      }
    }
    v14 = (unsigned int)(v14 + 1);
  }
  while ( (unsigned int)v14 < 6 );
  if ( v28 )
    return sub_18001060C(v28);
  return result;
}
