/*
 * XREFs of ?Yield@CAudioPump@@AEAA?AW4TEventType@1@PEA_K@Z @ 0x140020CC0
 * Callers:
 *     ?InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14001F050 (-InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 *     ?OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x140020130 (-OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 * Callees:
 *     McTemplateU0pqq_EtwEventWriteTransfer @ 0x14001FFE0 (McTemplateU0pqq_EtwEventWriteTransfer.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x1400213E0 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioPump::Yield(__int64 a1, __int64 a2)
{
  void (__fastcall *v3)(CAudioPump *__hidden, unsigned __int64 *); // r8
  unsigned int v5; // r15d
  void (__fastcall *v6)(CAudioPump *__hidden, unsigned __int64 *); // rcx
  void *v7; // rax
  int v8; // esi
  DWORD v9; // r14d
  char v10; // al
  __int64 v11; // rax
  __int64 v12; // rax
  void *v13; // rax
  void *v14; // rax
  char *v15; // rdx
  DWORD v16; // eax
  int v17; // ecx
  __int64 v18; // rsi
  int v19; // r8d
  __int64 v20; // rcx
  double v21; // xmm0_8
  int v22; // ecx
  double v23; // xmm0_8
  double v24; // xmm1_8
  __int128 v26; // xmm0
  __int64 v27; // rax
  __int64 v28; // rax
  DWORD LastError; // eax
  int v30; // ecx
  int v31; // r8d
  __int128 v32; // xmm0
  __int64 v33; // rax
  __int128 v34; // xmm0
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int128 v38; // xmm0
  __int64 bAlertable; // [rsp+20h] [rbp-E0h]
  int v40; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v41; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v42; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v43; // [rsp+48h] [rbp-B8h]
  __int128 v44; // [rsp+58h] [rbp-A8h]
  __int128 v45; // [rsp+68h] [rbp-98h]
  __int128 v46; // [rsp+78h] [rbp-88h]
  __int128 v47; // [rsp+88h] [rbp-78h]
  __int128 v48; // [rsp+98h] [rbp-68h]
  __int128 v49; // [rsp+A8h] [rbp-58h]
  __int128 v50; // [rsp+B8h] [rbp-48h]
  __int128 v51; // [rsp+D0h] [rbp-30h]
  __int128 v52; // [rsp+E0h] [rbp-20h]
  __int128 v53; // [rsp+F0h] [rbp-10h]
  __int128 v54; // [rsp+100h] [rbp+0h]
  __int128 v55; // [rsp+110h] [rbp+10h]
  __int128 v56; // [rsp+120h] [rbp+20h]
  _BYTE v57[16]; // [rsp+130h] [rbp+30h] BYREF
  __int64 *v58; // [rsp+140h] [rbp+40h]
  __int64 v59; // [rsp+148h] [rbp+48h]
  int *v60; // [rsp+150h] [rbp+50h]
  __int64 v61; // [rsp+158h] [rbp+58h]
  int *v62; // [rsp+160h] [rbp+60h]
  __int64 v63; // [rsp+168h] [rbp+68h]
  int v64; // [rsp+170h] [rbp+70h]
  int v65; // [rsp+174h] [rbp+74h]
  HANDLE Handles; // [rsp+188h] [rbp+88h] BYREF
  __int128 v67; // [rsp+190h] [rbp+90h]
  __int128 v68; // [rsp+1A0h] [rbp+A0h]
  __int64 v69; // [rsp+1B0h] [rbp+B0h]

  *(_BYTE *)(a1 + 272) = 1;
  v3 = CAudioPump::EventHandlerBufferComplete;
  v5 = 0;
  v6 = CAudioPump::EventHandlerPausePump;
  do
  {
    v7 = *(void **)(a1 + 280);
    v52 = 0LL;
    v8 = 1;
    v53 = 0LL;
    v9 = 1;
    v54 = 0LL;
    v67 = 0LL;
    *(_QWORD *)&v43 = CAudioPump::EventHandlerPausePump;
    v55 = 0LL;
    v56 = 0LL;
    DWORD2(v43) = 0;
    v69 = 0LL;
    v68 = 0LL;
    Handles = v7;
    v51 = v43;
    v64 = 1;
    if ( CAudioPump::InputPumpWorkRoutine == *(__int64 (__fastcall **)(CAudioPump *))(a1 + 216) )
    {
      v10 = *(_BYTE *)(a1 + 4681);
      if ( v10 )
      {
        if ( v10 == 1 )
        {
          v6 = *(void (__fastcall **)(CAudioPump *__hidden, unsigned __int64 *))(a1 + 408);
          if ( v6 )
          {
            v11 = (*(__int64 (__fastcall **)(void (__fastcall *)(CAudioPump *__hidden, unsigned __int64 *), __int64 (__fastcall *)(CAudioPump *), void (__fastcall *)(CAudioPump *__hidden, unsigned __int64 *), void (__fastcall *)(CAudioPump *__hidden, unsigned __int64 *)))(*(_QWORD *)v6 + 24LL))(
                    v6,
                    CAudioPump::InputPumpWorkRoutine,
                    CAudioPump::EventHandlerBufferComplete,
                    CAudioPump::EventHandlerPausePump);
            *(_QWORD *)&v45 = CAudioPump::EventHandlerBufferRelease;
            DWORD2(v45) = 0;
            v8 = 5;
            *(_QWORD *)&v67 = v11;
            v65 = 4;
            v52 = v45;
            v9 = 2;
          }
        }
      }
      else
      {
        v28 = *(_QWORD *)(a1 + 312);
        if ( v28 )
        {
          *(_QWORD *)&v44 = CAudioPump::EventHandlerBufferComplete;
          v8 = 3;
          DWORD2(v44) = 0;
          *(_QWORD *)&v67 = v28;
          v9 = 2;
          v65 = 2;
          v52 = v44;
        }
      }
    }
    else
    {
      v12 = *(_QWORD *)(a1 + 288);
      if ( v12 )
      {
        *(_QWORD *)&v46 = CAudioPump::EventHandlerPausePump;
        v8 = 33;
        DWORD2(v46) = 0;
        *(_QWORD *)&v67 = v12;
        v9 = 2;
        v65 = 32;
        v52 = v46;
      }
      v13 = *(void **)(a1 + 416);
      if ( v13 )
      {
        v8 |= 0x10u;
        *(_QWORD *)&v47 = CAudioPump::EventHandlerPausePump;
        DWORD2(v47) = 0;
        v34 = v47;
        *(&Handles + v9) = v13;
        v35 = 2LL * v9;
        *(&v64 + v9++) = 16;
        *(__int128 *)((char *)&v51 + 8 * v35) = v34;
      }
      if ( !*(_BYTE *)(a1 + 4681) )
      {
        v14 = *(void **)(a1 + 312);
        if ( v14 )
        {
          v8 |= 2u;
          *(_QWORD *)&v48 = CAudioPump::EventHandlerBufferComplete;
          DWORD2(v48) = 0;
          v26 = v48;
          *(&Handles + v9) = v14;
          v27 = 2LL * v9;
          *(&v64 + v9++) = 2;
          *(__int128 *)((char *)&v51 + 8 * v27) = v26;
        }
      }
      v6 = *(void (__fastcall **)(CAudioPump *__hidden, unsigned __int64 *))(a1 + 408);
      if ( v6 )
      {
        *(&Handles + v9) = (HANDLE)(*(__int64 (__fastcall **)(void (__fastcall *)(CAudioPump *__hidden, unsigned __int64 *), __int64 (__fastcall *)(CAudioPump *), void (__fastcall *)(CAudioPump *__hidden, unsigned __int64 *), void (__fastcall *)(CAudioPump *__hidden, unsigned __int64 *)))(*(_QWORD *)v6 + 24LL))(
                                     v6,
                                     CAudioPump::InputPumpWorkRoutine,
                                     CAudioPump::EventHandlerBufferComplete,
                                     CAudioPump::EventHandlerPausePump);
        DWORD2(v49) = 0;
        *(_QWORD *)&v49 = CAudioPump::EventHandlerBufferRelease;
        v8 |= 4u;
        v32 = v49;
        v33 = 2LL * v9;
        *(&v64 + v9++) = 4;
        *(__int128 *)((char *)&v51 + 8 * v33) = v32;
      }
    }
    v15 = *(char **)(a1 + 296);
    if ( (unsigned __int64)(v15 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v6 = (void (__fastcall *)(CAudioPump *__hidden, unsigned __int64 *))v9;
      v8 |= 8u;
      v37 = 2LL * v9;
      *(_QWORD *)&v50 = CAudioPump::EventHandlerTimer;
      DWORD2(v50) = 0;
      ++v9;
      v38 = v50;
      *(&Handles + (_QWORD)v6) = v15;
      *(&v64 + (_QWORD)v6) = 8;
      *(__int128 *)((char *)&v51 + 8 * v37) = v38;
    }
    if ( (byte_1400C45C1 & 8) != 0 )
    {
      v40 = v8;
      v58 = &v41;
      v41 = a1;
      v60 = &v40;
      v59 = 8LL;
      v61 = 4LL;
      McGenEventWrite_EtwEventWriteTransfer(
        (_DWORD)v6,
        (unsigned int)&AudioCore_Pump_YieldStart,
        (_DWORD)v3,
        3,
        (__int64)v57);
    }
    v16 = WaitForMultipleObjectsEx(v9, &Handles, 0, 0xFFFFFFFF, 0);
    v18 = v16;
    if ( v16 == -1 )
    {
      LastError = GetLastError();
      if ( (byte_1400C45C1 & 8) != 0 )
      {
        LODWORD(v41) = LastError;
        v40 = -1;
        v58 = &v42;
        v42 = a1;
        v60 = &v40;
        v62 = (int *)&v41;
        v59 = 8LL;
        v61 = 4LL;
        v63 = 4LL;
        McGenEventWrite_EtwEventWriteTransfer(v30, (unsigned int)&AudioCore_Pump_YieldStop, v31, 4, (__int64)v57);
      }
    }
    else if ( v9 <= v16 )
    {
      if ( (byte_1400C45C1 & 8) != 0 )
      {
        LODWORD(bAlertable) = v16;
        McTemplateU0pqq_EtwEventWriteTransfer(v17, (int)&AudioCore_Pump_YieldStop, a1, -2, bAlertable);
      }
    }
    else
    {
      QueryPerformanceCounter((LARGE_INTEGER *)(a1 + 4672));
      v20 = *(_QWORD *)(a1 + 4672);
      if ( v20 < 0 )
      {
        v36 = *(_QWORD *)(a1 + 4672) & 1LL | (*(_QWORD *)(a1 + 4672) >> 1);
        v21 = (double)(int)v36 + (double)(int)v36;
      }
      else
      {
        v21 = (double)(int)v20;
      }
      v22 = g_u64QPCFrequency;
      v23 = v21 * 10000000.0;
      if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
      {
        v22 = g_u64QPCFrequency & 1;
        v24 = (double)(int)(v22 | (g_u64QPCFrequency >> 1)) + (double)(int)(v22 | (g_u64QPCFrequency >> 1));
      }
      else
      {
        v24 = (double)(int)g_u64QPCFrequency;
      }
      v5 = *(&v64 + v18);
      *(_QWORD *)(a1 + 4664) = (unsigned int)(int)(v23 / v24);
      if ( (byte_1400C45C1 & 8) != 0 )
      {
        v40 = v5;
        v58 = &v42;
        LODWORD(v41) = 0;
        v60 = (int *)&v41;
        v42 = a1;
        v62 = &v40;
        v59 = 8LL;
        v61 = 4LL;
        v63 = 4LL;
        McGenEventWrite_EtwEventWriteTransfer(v22, (unsigned int)&AudioCore_Pump_YieldStop, v19, 4, (__int64)v57);
      }
      (*((void (__fastcall **)(__int64, __int64))&v51 + 2 * v18))(a1 + *((int *)&v51 + 4 * v18 + 2), a2);
    }
    v6 = CAudioPump::EventHandlerPausePump;
    v3 = CAudioPump::EventHandlerBufferComplete;
  }
  while ( *(_BYTE *)(a1 + 272) );
  return v5;
}
