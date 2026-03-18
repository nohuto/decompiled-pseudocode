/*
 * XREFs of ?CreateKeyboardInputMessage@CKeyboardProcessor@@CAX_NGGGPEAXK0G_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@PEAU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x140048550
 * Callers:
 *     ?ForwardInputToISM@CKeyboardProcessor@@SAX_NGGGPEAXK0_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x140048470 (-ForwardInputToISM@CKeyboardProcessor@@SAX_NGGGPEAXK0_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z.c)
 *     ?ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x14015B610 (-ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_.c)
 * Callees:
 *     ?SendToUserMode@Keyboard@InputTraceLogging@@SAXHPEAXH@Z @ 0x140048960 (-SendToUserMode@Keyboard@InputTraceLogging@@SAXHPEAXH@Z.c)
 *     GetActiveHKL @ 0x1400489F0 (GetActiveHKL.c)
 *     HMValidateHandleNoSecure @ 0x140048B90 (HMValidateHandleNoSecure.c)
 *     InternalMapVirtualKeyEx @ 0x1400969C0 (InternalMapVirtualKeyEx.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void __fastcall CKeyboardProcessor::CreateKeyboardInputMessage(
        unsigned __int8 a1,
        __int16 a2,
        unsigned __int16 a3,
        __int16 a4,
        void *a5,
        unsigned int a6,
        bool a7,
        unsigned __int16 a8,
        __int16 a9,
        struct _KEYBOARD_VIRTUAL_DEVICE_INFO *a10,
        struct _MIT_KEYBOARD_INPUT_MESSAGE *a11)
{
  int v13; // esi
  __int64 v15; // rdx
  int v16; // esi
  _QWORD *v17; // rax
  __int16 v18; // ax
  unsigned __int128 v19; // rax
  __int64 v20; // rcx
  __int16 v21; // bx
  __int16 v22; // dx
  __int64 v23; // r15
  __int64 v24; // rcx
  _BYTE *v25; // rbx
  unsigned __int64 v26; // r13
  __int64 v27; // rax
  __int16 v28; // ax
  _OWORD *v29; // rax
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int64 UserSessionState; // rax
  _BYTE *i; // rax
  __int64 v44; // rax
  int v47; // [rsp+24h] [rbp-DCh]
  _OWORD v48[22]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v49; // [rsp+190h] [rbp+90h]

  v13 = a1;
  memset(v48, 0, sizeof(v48));
  if ( (_BYTE)a3 == 19 && a2 == 69 )
    a2 = -7907;
  InputTraceLogging::Keyboard::SendToUserMode(a3 & 0x8000, a5, v13);
  v16 = 0;
  if ( a5 )
  {
    LOBYTE(v15) = 19;
    v17 = (_QWORD *)HMValidateHandleNoSecure(a5, v15);
    if ( v17 )
      *(_QWORD *)&v48[0] = *v17;
  }
  if ( a10 )
    v49 = *(_OWORD *)a10;
  else
    v49 = 0LL;
  v18 = WORD6(v48[20]);
  v48[21] = v49;
  if ( a1 )
    v18 = a9;
  WORD6(v48[20]) = v18;
  DWORD2(v48[20]) = a7;
  if ( a6 )
    *((_QWORD *)&v19 + 1) = a6;
  else
    v19 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
        * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
  *((_QWORD *)&v48[19] + 1) = *((_QWORD *)&v19 + 1);
  *(LARGE_INTEGER *)&v48[20] = KeQueryPerformanceCounter(0LL);
  v20 = 1LL;
  WORD4(v48[0]) = a4;
  v21 = (a3 & 0x8000) != 0;
  v22 = 256;
  if ( (a8 & 0x100) != 0 || (v22 = 512, (a8 & 0x200) != 0) )
    v21 |= v22;
  if ( (a8 & 0x80u) != 0 )
    v21 |= 0x80u;
  v23 = 2LL;
  if ( (a3 & 0x2000) != 0 )
  {
    if ( (unsigned __int8)(a3 - 127) > 1u )
    {
      UserSessionState = W32GetUserSessionState(1LL);
      a2 = InternalMapVirtualKeyEx((unsigned __int8)a3, 4LL, *(_QWORD *)(UserSessionState + 14064));
      for ( i = &ausNumPadCvt; *(_WORD *)i; i += 2 )
      {
        if ( *i == (_BYTE)a3 )
        {
          v21 |= 2u;
          break;
        }
      }
    }
    v21 |= 0x40u;
  }
  else if ( (a3 & 0x1000) != 0 )
  {
    v21 |= 0x20u;
  }
  if ( ((GetActiveHKL(v20) & 0x3FF) == 0x11 || (GetActiveHKL(v24) & 0x3FF) == 0x12) && (a3 & 0x400) != 0 )
  {
    v44 = W32GetUserSessionState(v24);
    if ( (unsigned __int8)InternalMapVirtualKeyEx((unsigned __int8)a3, 4LL, *(_QWORD *)(v44 + 14064)) != (_BYTE)a2 )
      a2 = 0;
  }
  WORD6(v48[0]) = (unsigned __int8)a3;
  WORD5(v48[0]) = a2;
  HIWORD(v48[16]) = (a3 >> 7) & 2 | v21;
  v25 = (char *)v48 + 14;
  do
  {
    v26 = (unsigned __int64)(unsigned __int8)v16 >> 2;
    v47 = v16 & 3;
    if ( ((unsigned __int8)(1 << (2 * v47)) & *(_BYTE *)(W32GetUserSessionState(v24) + v26 + 14336)) != 0 )
      *v25 |= 0x80u;
    v27 = W32GetUserSessionState((unsigned int)(2 * v47));
    v24 = (unsigned int)(2 * v47 + 1);
    if ( ((unsigned __int8)(1 << (2 * v47 + 1)) & *(_BYTE *)(v27 + v26 + 14336)) != 0 )
      *v25 |= 1u;
    ++v16;
    ++v25;
  }
  while ( v16 < 256 );
  v28 = WORD2(v48[17]);
  if ( (_BYTE)a3 == 0xE7 )
    v28 = a2;
  WORD2(v48[17]) = v28;
  v29 = v48;
  do
  {
    v30 = v29[1];
    *(_OWORD *)a11 = *v29;
    v31 = v29[2];
    *((_OWORD *)a11 + 1) = v30;
    v32 = v29[3];
    *((_OWORD *)a11 + 2) = v31;
    v33 = v29[4];
    *((_OWORD *)a11 + 3) = v32;
    v34 = v29[5];
    *((_OWORD *)a11 + 4) = v33;
    v35 = v29[6];
    *((_OWORD *)a11 + 5) = v34;
    v36 = v29[7];
    v29 += 8;
    *((_OWORD *)a11 + 6) = v35;
    a11 = (struct _MIT_KEYBOARD_INPUT_MESSAGE *)((char *)a11 + 128);
    *((_OWORD *)a11 - 1) = v36;
    --v23;
  }
  while ( v23 );
  v37 = v29[1];
  *(_OWORD *)a11 = *v29;
  v38 = v29[2];
  *((_OWORD *)a11 + 1) = v37;
  v39 = v29[3];
  *((_OWORD *)a11 + 2) = v38;
  v40 = v29[4];
  *((_OWORD *)a11 + 3) = v39;
  v41 = v29[5];
  *((_OWORD *)a11 + 4) = v40;
  *((_OWORD *)a11 + 5) = v41;
}
