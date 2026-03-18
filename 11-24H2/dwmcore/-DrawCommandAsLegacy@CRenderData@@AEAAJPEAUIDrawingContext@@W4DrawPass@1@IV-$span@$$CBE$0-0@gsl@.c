/*
 * XREFs of ?DrawCommandAsLegacy@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@IV?$span@$$CBE$0?0@gsl@@@Z @ 0x18013A48C
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x18013A760 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderData::DrawCommandAsLegacy(__int64 a1, __int64 *a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v5; // ebx
  int v8; // r9d
  int v9; // r9d
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 (__fastcall *v17)(__int64 *, _QWORD, __int128 *, __int64, int); // r10
  __int64 v18; // rax
  int v19; // xmm1_4
  int v20; // eax
  __int64 v21; // r8
  __int64 (__fastcall *v22)(__int64 *, __int128 *, __int64); // rax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  __int128 v33; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0;
  v8 = a4 - 428;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 2;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            v13 = v12 - 1;
            if ( v13 )
            {
              v14 = v13 - 1;
              if ( v14 )
              {
                if ( v14 == 1 )
                  (*(void (__fastcall **)(__int64 *, _QWORD))(*a2 + 88))(
                    a2,
                    *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * *(unsigned int *)(*(_QWORD *)(a5 + 8) + 4LL)));
                else
                  return (unsigned int)-2003303421;
              }
              else
              {
                v15 = *(_QWORD *)(a5 + 8);
                v16 = *(unsigned int *)(v15 + 4);
                v17 = *(__int64 (__fastcall **)(__int64 *, _QWORD, __int128 *, __int64, int))(*a2 + 40);
                v18 = *(_QWORD *)(a1 + 136);
                v19 = *(_DWORD *)(v15 + 24);
                v33 = *(_OWORD *)(v15 + 8);
                v20 = v17(a2, *(_QWORD *)(v18 + 8 * v16), &v33, v15 + 28, v19);
                v5 = v20;
                if ( v20 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0x36Bu, 0LL);
              }
            }
            else
            {
              v21 = *(_QWORD *)(a5 + 8);
              v22 = *(__int64 (__fastcall **)(__int64 *, __int128 *, __int64))(*a2 + 16);
              v33 = *(_OWORD *)(v21 + 4);
              v23 = v22(a2, &v33, v21 + 20);
              v5 = v23;
              if ( v23 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v23, 0x361u, 0LL);
            }
          }
          else
          {
            v24 = *(_QWORD *)(a5 + 8);
            v25 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * *(unsigned int *)(v24 + 4));
            v26 = *a2;
            v33 = *(_OWORD *)(v24 + 8);
            v27 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64))(v26 + 8))(a2, &v33, v25);
            v5 = v27;
            if ( v27 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v27, 0x358u, 0LL);
          }
        }
        else
        {
          v28 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a2 + 80))(
                  a2,
                  *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * *(unsigned int *)(*(_QWORD *)(a5 + 8) + 4LL)),
                  *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * *(unsigned int *)(*(_QWORD *)(a5 + 8) + 8LL)));
          v5 = v28;
          if ( v28 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v28, 0x394u, 0LL);
        }
      }
      else
      {
        v29 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64))(*a2 + 24))(
                a2,
                *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * *(unsigned int *)(*(_QWORD *)(a5 + 8) + 4LL)),
                *(_QWORD *)(a5 + 8) + 8LL);
        v5 = v29;
        if ( v29 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v29, 0x375u, 0LL);
      }
    }
    else
    {
      v30 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a2 + 32))(
              a2,
              *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * *(unsigned int *)(*(_QWORD *)(a5 + 8) + 4LL)),
              *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * *(unsigned int *)(*(_QWORD *)(a5 + 8) + 8LL)));
      v5 = v30;
      if ( v30 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v30, 0x389u, 0LL);
    }
  }
  else
  {
    v31 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a2 + 48))(
            a2,
            *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * *(unsigned int *)(*(_QWORD *)(a5 + 8) + 4LL)));
    v5 = v31;
    if ( v31 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v31, 0x37Eu, 0LL);
  }
  return v5;
}
