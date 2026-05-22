/*
 * XREFs of ?OnKeyProcessed@KeyboardOverriderDispatcher@@UEAAJ_N@Z @ 0x1800F4650
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateKeyboardInputInfo@Win32kInterop@@SA?AUKeyboardInputInfo@@PEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x1800618D0 (-CreateKeyboardInputInfo@Win32kInterop@@SA-AUKeyboardInputInfo@@PEBU_MIT_KEYBOARD_INPUT_MESSAGE@.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ?ReturnMessageToInputProcessing@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z @ 0x1800F489C (-ReturnMessageToInputProcessing@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_OVERRIDER_IN.c)
 *     ?SendMessageToNarrator@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_INPUT_MESSAGE@@AEBUKeyboardInputInfo@@@Z @ 0x1800F4B34 (-SendMessageToNarrator@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_INPUT_MESSAGE@@AEBUKe.c)
 */

__int64 __fastcall KeyboardOverriderDispatcher::OnKeyProcessed(KeyboardOverriderDispatcher *this, char a2)
{
  __int64 v2; // r8
  __int64 v5; // rsi
  _OWORD *v6; // rdx
  _OWORD *v7; // rax
  __int64 v8; // rcx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  _OWORD *v22; // rax
  _OWORD *v23; // rcx
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int64 v37; // rdi
  _DWORD v41[92]; // [rsp+20h] [rbp-188h] BYREF

  v2 = *((_QWORD *)this + 7);
  if ( v2 )
  {
    v5 = 2LL;
    v6 = *(_OWORD **)(*((_QWORD *)this + 4) + 8 * (*((_QWORD *)this + 6) & (*((_QWORD *)this + 5) - 1LL)));
    v7 = v41;
    v8 = 2LL;
    do
    {
      v9 = v6[1];
      *v7 = *v6;
      v10 = v6[2];
      v7[1] = v9;
      v11 = v6[3];
      v7[2] = v10;
      v12 = v6[4];
      v7[3] = v11;
      v13 = v6[5];
      v7[4] = v12;
      v14 = v6[6];
      v7[5] = v13;
      v15 = v6[7];
      v6 += 8;
      v7[6] = v14;
      v7 += 8;
      *(v7 - 1) = v15;
      --v8;
    }
    while ( v8 );
    v16 = v6[1];
    *v7 = *v6;
    v17 = v6[2];
    v7[1] = v16;
    v18 = v6[3];
    v7[2] = v17;
    v19 = v6[4];
    v7[3] = v18;
    v20 = v6[5];
    v7[4] = v19;
    v21 = v6[6];
    v7[5] = v20;
    v7[6] = v21;
    *((_QWORD *)this + 7) = v2 - 1;
    if ( v2 == 1 )
      *((_QWORD *)this + 6) &= v2 - 1;
    else
      ++*((_QWORD *)this + 6);
    if ( !a2 )
      KeyboardOverriderDispatcher::ReturnMessageToInputProcessing(
        this,
        (const struct _MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE *)v41);
    *((_BYTE *)this + 704) = 0;
    *((_BYTE *)this + 432) = a2;
    if ( a2 )
    {
      v22 = (_OWORD *)((char *)this + 64);
      v23 = v41;
      do
      {
        v24 = v23[1];
        *v22 = *v23;
        v25 = v23[2];
        v22[1] = v24;
        v26 = v23[3];
        v22[2] = v25;
        v27 = v23[4];
        v22[3] = v26;
        v28 = v23[5];
        v22[4] = v27;
        v29 = v23[6];
        v22[5] = v28;
        v30 = v23[7];
        v23 += 8;
        v22[6] = v29;
        v22 += 8;
        *(v22 - 1) = v30;
        --v5;
      }
      while ( v5 );
      v31 = v23[1];
      *v22 = *v23;
      v32 = v23[2];
      v22[1] = v31;
      v33 = v23[3];
      v22[2] = v32;
      v34 = v23[4];
      v22[3] = v33;
      v35 = v23[5];
      v22[4] = v34;
      v36 = v23[6];
      v22[5] = v35;
      v22[6] = v36;
    }
    while ( *((_QWORD *)this + 7) )
    {
      v37 = *(_QWORD *)(*((_QWORD *)this + 4) + 8 * (*((_QWORD *)this + 6) & (*((_QWORD *)this + 5) - 1LL)));
      if ( (*(_BYTE *)(v37 + 270) & 0x80) == 0 && *((_QWORD *)this + 55) )
      {
        Win32kInterop::CreateKeyboardInputInfo(v41, v37);
        KeyboardOverriderDispatcher::SendMessageToNarrator(
          this,
          (const struct _MIT_KEYBOARD_INPUT_MESSAGE *)v37,
          (const struct KeyboardInputInfo *)v41);
        return 0LL;
      }
      KeyboardOverriderDispatcher::ReturnMessageToInputProcessing(
        this,
        (const struct _MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE *)v37);
      if ( (*((_QWORD *)this + 7))-- == 1LL )
        *((_QWORD *)this + 6) = 0LL;
      else
        ++*((_QWORD *)this + 6);
    }
  }
  return 0LL;
}
