/*
 * XREFs of ?DrainMessageQueue@KeyboardOverriderDispatcher@@AEAAXXZ @ 0x1800F4184
 * Callers:
 *     ?DestroyOverriderProxy@KeyboardOverriderDispatcher@@AEAAJXZ @ 0x1800F4130 (-DestroyOverriderProxy@KeyboardOverriderDispatcher@@AEAAJXZ.c)
 * Callees:
 *     ?ReturnMessageToInputProcessing@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z @ 0x1800F489C (-ReturnMessageToInputProcessing@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_OVERRIDER_IN.c)
 */

void __fastcall KeyboardOverriderDispatcher::DrainMessageQueue(KeyboardOverriderDispatcher *this)
{
  __int64 v2; // r8
  __int128 *v3; // rdx
  __int128 *v4; // rax
  __int64 v5; // rcx
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  _BYTE v20[376]; // [rsp+20h] [rbp-178h] BYREF

  while ( 1 )
  {
    v2 = *((_QWORD *)this + 7);
    if ( !v2 )
      break;
    v3 = *(__int128 **)(*((_QWORD *)this + 4) + 8 * (*((_QWORD *)this + 6) & (*((_QWORD *)this + 5) - 1LL)));
    v4 = (__int128 *)v20;
    v5 = 2LL;
    do
    {
      v6 = *v3;
      v7 = v3[1];
      v3 += 8;
      *v4 = v6;
      v8 = *(v3 - 6);
      v4[1] = v7;
      v9 = *(v3 - 5);
      v4[2] = v8;
      v10 = *(v3 - 4);
      v4[3] = v9;
      v11 = *(v3 - 3);
      v4[4] = v10;
      v12 = *(v3 - 2);
      v4[5] = v11;
      v13 = *(v3 - 1);
      v4[6] = v12;
      v4 += 8;
      *(v4 - 1) = v13;
      --v5;
    }
    while ( v5 );
    v14 = v3[1];
    *v4 = *v3;
    v15 = v3[2];
    v4[1] = v14;
    v16 = v3[3];
    v4[2] = v15;
    v17 = v3[4];
    v4[3] = v16;
    v18 = v3[5];
    v4[4] = v17;
    v19 = v3[6];
    v4[5] = v18;
    v4[6] = v19;
    *((_QWORD *)this + 7) = v2 - 1;
    if ( v2 == 1 )
      *((_QWORD *)this + 6) &= v2 - 1;
    else
      ++*((_QWORD *)this + 6);
    KeyboardOverriderDispatcher::ReturnMessageToInputProcessing(
      this,
      (const struct _MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE *)v20);
  }
}
