/*
 * XREFs of SymCryptFdefRawSquareMulx1024 @ 0x14052DF50
 * Callers:
 *     SymCryptFdefModSquareMontgomeryMulx1024 @ 0x140530FF0 (SymCryptFdefModSquareMontgomeryMulx1024.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefRawSquareMulx1024(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  __int128 v12; // rdx
  unsigned __int64 v14; // rt2
  __int128 v59; // rdx
  __int128 v96; // rdx
  unsigned __int64 v102; // rt2
  __int128 v139; // rdx
  __int128 v175; // rdx
  __int128 v211; // rdx
  __int128 v247; // rdx
  __int128 v283; // rdx
  __int128 v319; // rdx
  __int128 v355; // rdx
  __int128 v391; // rdx
  __int128 v554; // rdx
  __int128 v563; // rdx
  __int128 v572; // rdx
  __int128 v581; // rdx
  __int128 v590; // rdx
  __int128 v599; // rdx
  __int128 v608; // rdx
  __int128 v617; // rdx
  __int128 v626; // rdx
  __int128 v635; // rdx
  __int128 v644; // rdx
  __int128 v653; // rdx
  __int128 v662; // rdx
  __int128 v671; // rdx
  __int128 v680; // rdx
  __int64 result; // rax
  __int128 v689; // rdx

  *(_OWORD *)a3 = 0LL;
  *(_OWORD *)(a3 + 16) = 0LL;
  *(_OWORD *)(a3 + 32) = 0LL;
  *(_OWORD *)(a3 + 48) = 0LL;
  *(_OWORD *)(a3 + 64) = 0LL;
  *(_OWORD *)(a3 + 80) = 0LL;
  *(_OWORD *)(a3 + 96) = 0LL;
  *(_OWORD *)(a3 + 112) = 0LL;
  _RSI = *(_QWORD *)(a3 + 8);
  _RDI = *(_QWORD *)(a3 + 16);
  _RBP = *(_QWORD *)(a3 + 24);
  _RBX = *(_QWORD *)(a3 + 32);
  _R12 = *(_QWORD *)(a3 + 40);
  _R13 = *(_QWORD *)(a3 + 48);
  _R14 = *(_QWORD *)(a3 + 56);
  _R11 = 0LL;
  v14 = a1[1];
  v12 = *a1;
  _R10 = (v12 * (unsigned __int128)v14) >> 64;
  _RAX = v12 * v14;
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r10
  }
  _R10 = ((unsigned __int64)v12 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v12 + 1) + 16LL)) >> 64;
  _RAX = v12 * *(_QWORD *)(*((_QWORD *)&v12 + 1) + 16LL);
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r10
  }
  _R10 = ((unsigned __int64)v12 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v12 * MEMORY[0x18];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r10
  }
  _R10 = ((unsigned __int64)v12 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v12 * MEMORY[0x20];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r10
  }
  _R10 = ((unsigned __int64)v12 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v12 * MEMORY[0x28];
  __asm
  {
    adcx    r12, rax
    adox    r13, r10
  }
  _R10 = ((unsigned __int64)v12 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v12 * MEMORY[0x30];
  __asm
  {
    adcx    r13, rax
    adox    r14, r10
  }
  _R10 = ((unsigned __int64)v12 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v12 * MEMORY[0x38];
  __asm { adcx    r14, rax }
  *(_QWORD *)(a3 + 8) = _RSI;
  __asm
  {
    adox    r11, r11
    adcx    r11, r10
  }
  *(_QWORD *)(a3 + 16) = _RDI;
  _R10 = (MEMORY[8] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = MEMORY[8] * MEMORY[0x10];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r10
  }
  _R10 = (MEMORY[8] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = MEMORY[8] * MEMORY[0x18];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r10
  }
  _R10 = (MEMORY[8] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = MEMORY[8] * MEMORY[0x20];
  __asm
  {
    adcx    r12, rax
    adox    r13, r10
  }
  _R10 = (MEMORY[8] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = MEMORY[8] * MEMORY[0x28];
  __asm
  {
    adcx    r13, rax
    adox    r14, r10
  }
  v59 = MEMORY[8];
  _R10 = (MEMORY[8] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = MEMORY[8] * MEMORY[0x30];
  __asm
  {
    adcx    r14, rax
    adox    r11, r10
  }
  *(_QWORD *)&v59 = MEMORY[0x38];
  _RSI = 0LL;
  _RDI = 0LL;
  *(_QWORD *)(a3 + 24) = _RBP;
  _R10 = ((unsigned __int64)v59 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v59 + 1) + 8LL)) >> 64;
  _RAX = v59 * *(_QWORD *)(*((_QWORD *)&v59 + 1) + 8LL);
  __asm
  {
    adcx    r11, rax
    adox    rsi, r10
  }
  _R10 = ((unsigned __int64)v59 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v59 * MEMORY[0x10];
  __asm { adcx    rsi, rax }
  *(_QWORD *)(a3 + 32) = _RBX;
  __asm { adcx    rdi, r10 }
  _R10 = (MEMORY[0x10] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = MEMORY[0x10] * MEMORY[0x18];
  __asm
  {
    adcx    r12, rax
    adox    r13, r10
  }
  _R10 = (MEMORY[0x10] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = MEMORY[0x10] * MEMORY[0x20];
  __asm
  {
    adcx    r13, rax
    adox    r14, r10
  }
  _R10 = (MEMORY[0x10] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = MEMORY[0x10] * MEMORY[0x28];
  __asm
  {
    adcx    r14, rax
    adox    r11, r10
  }
  _R10 = (MEMORY[0x10] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = MEMORY[0x10] * MEMORY[0x30];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r10
  }
  _RBP = 0LL;
  _RBX = 0LL;
  _R10 = (MEMORY[0x20] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = MEMORY[0x20] * MEMORY[0x28];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r10
  }
  v96 = MEMORY[0x20];
  _R10 = (MEMORY[0x20] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = MEMORY[0x20] * MEMORY[0x30];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r10
  }
  *(_QWORD *)&v96 = MEMORY[0x28];
  *(_QWORD *)(a3 + 40) = _R12;
  v102 = *(_QWORD *)(*((_QWORD *)&v96 + 1) + 48LL);
  v96 = (unsigned __int64)v96;
  _R10 = ((unsigned __int64)v96 * (unsigned __int128)v102) >> 64;
  _RAX = v96 * v102;
  __asm
  {
    adcx    rbp, rax
    adcx    rbx, r10
  }
  *(_QWORD *)&v96 = MEMORY[0x18];
  *(_QWORD *)(a3 + 48) = _R13;
  _R10 = ((unsigned __int64)v96 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v96 + 1) + 32LL)) >> 64;
  _RAX = v96 * *(_QWORD *)(*((_QWORD *)&v96 + 1) + 32LL);
  __asm
  {
    adcx    r14, rax
    adox    r11, r10
  }
  _R10 = ((unsigned __int64)v96 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v96 * MEMORY[0x28];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r10
  }
  _R10 = ((unsigned __int64)v96 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v96 * MEMORY[0x30];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r10
  }
  v96 = (unsigned __int64)v96;
  _R10 = ((unsigned __int64)v96 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v96 * MEMORY[0x38];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r10
  }
  *(_QWORD *)&v96 = MEMORY[0x38];
  _R12 = 0LL;
  _R13 = 0LL;
  *(_QWORD *)(a3 + 56) = _R14;
  _R10 = ((unsigned __int64)v96 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v96 + 1) + 32LL)) >> 64;
  _RAX = v96 * *(_QWORD *)(*((_QWORD *)&v96 + 1) + 32LL);
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r10
  }
  _R10 = ((unsigned __int64)v96 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v96 * MEMORY[0x28];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r10
  }
  _R10 = ((unsigned __int64)v96 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v96 * MEMORY[0x30];
  __asm
  {
    adcx    r12, rax
    adcx    r13, r10
  }
  _R14 = 0LL;
  _R8 = (__int64 *)(a3 + 64);
  __asm { adox    r11, [r8] }
  v139 = MEMORY[0x40];
  _R10 = (MEMORY[0x40] * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = MEMORY[0x40] * MEMORY[0];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r10
  }
  *_R8 = _R11;
  _R10 = ((unsigned __int64)v139 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v139 + 1) + 8LL)) >> 64;
  _RAX = v139 * *(_QWORD *)(*((_QWORD *)&v139 + 1) + 8LL);
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r10
  }
  _R10 = ((unsigned __int64)v139 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v139 * MEMORY[0x10];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r10
  }
  _R10 = ((unsigned __int64)v139 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v139 * MEMORY[0x18];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r10
  }
  _R10 = ((unsigned __int64)v139 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v139 * MEMORY[0x20];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r10
  }
  _R10 = ((unsigned __int64)v139 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v139 * MEMORY[0x28];
  __asm
  {
    adcx    r12, rax
    adox    r13, r10
  }
  _R10 = ((unsigned __int64)v139 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v139 * MEMORY[0x30];
  __asm
  {
    adcx    r13, rax
    adox    r14, r10
  }
  _R10 = ((unsigned __int64)v139 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v139 * MEMORY[0x38];
  __asm { adcx    r14, rax }
  _R11 = 0LL;
  __asm
  {
    adox    r11, r11
    adcx    r11, r10
  }
  __asm { adox    rsi, [r8+8] }
  v175 = MEMORY[0x48];
  _R10 = (MEMORY[0x48] * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = MEMORY[0x48] * MEMORY[0];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r10
  }
  _R8[1] = _RSI;
  _R10 = ((unsigned __int64)v175 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v175 + 1) + 8LL)) >> 64;
  _RAX = v175 * *(_QWORD *)(*((_QWORD *)&v175 + 1) + 8LL);
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r10
  }
  _R10 = ((unsigned __int64)v175 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v175 * MEMORY[0x10];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r10
  }
  _R10 = ((unsigned __int64)v175 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v175 * MEMORY[0x18];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r10
  }
  _R10 = ((unsigned __int64)v175 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v175 * MEMORY[0x20];
  __asm
  {
    adcx    r12, rax
    adox    r13, r10
  }
  _R10 = ((unsigned __int64)v175 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v175 * MEMORY[0x28];
  __asm
  {
    adcx    r13, rax
    adox    r14, r10
  }
  _R10 = ((unsigned __int64)v175 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v175 * MEMORY[0x30];
  __asm
  {
    adcx    r14, rax
    adox    r11, r10
  }
  _R10 = ((unsigned __int64)v175 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v175 * MEMORY[0x38];
  __asm { adcx    r11, rax }
  _RSI = 0LL;
  __asm
  {
    adox    rsi, rsi
    adcx    rsi, r10
  }
  __asm { adox    rdi, [r8+10h] }
  v211 = MEMORY[0x50];
  _R10 = (MEMORY[0x50] * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = MEMORY[0x50] * MEMORY[0];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r10
  }
  _R8[2] = _RDI;
  _R10 = ((unsigned __int64)v211 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v211 + 1) + 8LL)) >> 64;
  _RAX = v211 * *(_QWORD *)(*((_QWORD *)&v211 + 1) + 8LL);
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r10
  }
  _R10 = ((unsigned __int64)v211 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v211 * MEMORY[0x10];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r10
  }
  _R10 = ((unsigned __int64)v211 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v211 * MEMORY[0x18];
  __asm
  {
    adcx    r12, rax
    adox    r13, r10
  }
  _R10 = ((unsigned __int64)v211 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v211 * MEMORY[0x20];
  __asm
  {
    adcx    r13, rax
    adox    r14, r10
  }
  _R10 = ((unsigned __int64)v211 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v211 * MEMORY[0x28];
  __asm
  {
    adcx    r14, rax
    adox    r11, r10
  }
  _R10 = ((unsigned __int64)v211 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v211 * MEMORY[0x30];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r10
  }
  _R10 = ((unsigned __int64)v211 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v211 * MEMORY[0x38];
  __asm { adcx    rsi, rax }
  _RDI = 0LL;
  __asm
  {
    adox    rdi, rdi
    adcx    rdi, r10
  }
  __asm { adox    rbp, [r8+18h] }
  v247 = MEMORY[0x58];
  _R10 = (MEMORY[0x58] * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = MEMORY[0x58] * MEMORY[0];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r10
  }
  _R8[3] = _RBP;
  _R10 = ((unsigned __int64)v247 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v247 + 1) + 8LL)) >> 64;
  _RAX = v247 * *(_QWORD *)(*((_QWORD *)&v247 + 1) + 8LL);
  __asm
  {
    adcx    rbx, rax
    adox    r12, r10
  }
  _R10 = ((unsigned __int64)v247 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v247 * MEMORY[0x10];
  __asm
  {
    adcx    r12, rax
    adox    r13, r10
  }
  _R10 = ((unsigned __int64)v247 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v247 * MEMORY[0x18];
  __asm
  {
    adcx    r13, rax
    adox    r14, r10
  }
  _R10 = ((unsigned __int64)v247 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v247 * MEMORY[0x20];
  __asm
  {
    adcx    r14, rax
    adox    r11, r10
  }
  _R10 = ((unsigned __int64)v247 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v247 * MEMORY[0x28];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r10
  }
  _R10 = ((unsigned __int64)v247 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v247 * MEMORY[0x30];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r10
  }
  _R10 = ((unsigned __int64)v247 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v247 * MEMORY[0x38];
  __asm { adcx    rdi, rax }
  _RBP = 0LL;
  __asm
  {
    adox    rbp, rbp
    adcx    rbp, r10
  }
  __asm { adox    rbx, [r8+20h] }
  v283 = MEMORY[0x60];
  _R10 = (MEMORY[0x60] * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = MEMORY[0x60] * MEMORY[0];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r10
  }
  _R8[4] = _RBX;
  _R10 = ((unsigned __int64)v283 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v283 + 1) + 8LL)) >> 64;
  _RAX = v283 * *(_QWORD *)(*((_QWORD *)&v283 + 1) + 8LL);
  __asm
  {
    adcx    r12, rax
    adox    r13, r10
  }
  _R10 = ((unsigned __int64)v283 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v283 * MEMORY[0x10];
  __asm
  {
    adcx    r13, rax
    adox    r14, r10
  }
  _R10 = ((unsigned __int64)v283 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v283 * MEMORY[0x18];
  __asm
  {
    adcx    r14, rax
    adox    r11, r10
  }
  _R10 = ((unsigned __int64)v283 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v283 * MEMORY[0x20];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r10
  }
  _R10 = ((unsigned __int64)v283 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v283 * MEMORY[0x28];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r10
  }
  _R10 = ((unsigned __int64)v283 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v283 * MEMORY[0x30];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r10
  }
  _R10 = ((unsigned __int64)v283 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v283 * MEMORY[0x38];
  __asm { adcx    rbp, rax }
  _RBX = 0LL;
  __asm
  {
    adox    rbx, rbx
    adcx    rbx, r10
  }
  __asm { adox    r12, [r8+28h] }
  v319 = MEMORY[0x68];
  _R10 = (MEMORY[0x68] * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = MEMORY[0x68] * MEMORY[0];
  __asm
  {
    adcx    r12, rax
    adox    r13, r10
  }
  _R8[5] = _R12;
  _R10 = ((unsigned __int64)v319 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v319 + 1) + 8LL)) >> 64;
  _RAX = v319 * *(_QWORD *)(*((_QWORD *)&v319 + 1) + 8LL);
  __asm
  {
    adcx    r13, rax
    adox    r14, r10
  }
  _R10 = ((unsigned __int64)v319 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v319 * MEMORY[0x10];
  __asm
  {
    adcx    r14, rax
    adox    r11, r10
  }
  _R10 = ((unsigned __int64)v319 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v319 * MEMORY[0x18];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r10
  }
  _R10 = ((unsigned __int64)v319 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v319 * MEMORY[0x20];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r10
  }
  _R10 = ((unsigned __int64)v319 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v319 * MEMORY[0x28];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r10
  }
  _R10 = ((unsigned __int64)v319 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v319 * MEMORY[0x30];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r10
  }
  _R10 = ((unsigned __int64)v319 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v319 * MEMORY[0x38];
  __asm { adcx    rbx, rax }
  _R12 = 0LL;
  __asm
  {
    adox    r12, r12
    adcx    r12, r10
  }
  __asm { adox    r13, [r8+30h] }
  v355 = MEMORY[0x70];
  _R10 = (MEMORY[0x70] * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = MEMORY[0x70] * MEMORY[0];
  __asm
  {
    adcx    r13, rax
    adox    r14, r10
  }
  _R8[6] = _R13;
  _R10 = ((unsigned __int64)v355 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v355 + 1) + 8LL)) >> 64;
  _RAX = v355 * *(_QWORD *)(*((_QWORD *)&v355 + 1) + 8LL);
  __asm
  {
    adcx    r14, rax
    adox    r11, r10
  }
  _R10 = ((unsigned __int64)v355 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v355 * MEMORY[0x10];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r10
  }
  _R10 = ((unsigned __int64)v355 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v355 * MEMORY[0x18];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r10
  }
  _R10 = ((unsigned __int64)v355 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v355 * MEMORY[0x20];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r10
  }
  _R10 = ((unsigned __int64)v355 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v355 * MEMORY[0x28];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r10
  }
  _R10 = ((unsigned __int64)v355 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v355 * MEMORY[0x30];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r10
  }
  _R10 = ((unsigned __int64)v355 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v355 * MEMORY[0x38];
  __asm { adcx    r12, rax }
  _R13 = 0LL;
  __asm
  {
    adox    r13, r13
    adcx    r13, r10
  }
  __asm { adox    r14, [r8+38h] }
  v391 = MEMORY[0x78];
  _R10 = (MEMORY[0x78] * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = MEMORY[0x78] * MEMORY[0];
  __asm
  {
    adcx    r14, rax
    adox    r11, r10
  }
  _R8[7] = _R14;
  _R10 = ((unsigned __int64)v391 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v391 + 1) + 8LL)) >> 64;
  _RAX = v391 * *(_QWORD *)(*((_QWORD *)&v391 + 1) + 8LL);
  __asm
  {
    adcx    r11, rax
    adox    rsi, r10
  }
  _R10 = ((unsigned __int64)v391 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v391 * MEMORY[0x10];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r10
  }
  _R10 = ((unsigned __int64)v391 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v391 * MEMORY[0x18];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r10
  }
  _R10 = ((unsigned __int64)v391 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v391 * MEMORY[0x20];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r10
  }
  _R10 = ((unsigned __int64)v391 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v391 * MEMORY[0x28];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r10
  }
  _R10 = ((unsigned __int64)v391 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v391 * MEMORY[0x30];
  __asm
  {
    adcx    r12, rax
    adox    r13, r10
  }
  _R10 = ((unsigned __int64)v391 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v391 * MEMORY[0x38];
  __asm { adcx    r13, rax }
  _R14 = 0LL;
  __asm
  {
    adox    r14, r14
    adcx    r14, r10
  }
  _R8 += 8;
  *_R8 = _R11;
  _R8[1] = _RSI;
  _R8[2] = _RDI;
  _R8[3] = _RBP;
  _R8[4] = _RBX;
  _R8[5] = _R12;
  _R8[6] = _R13;
  _R8[7] = _R14;
  _RSI = _R8[1];
  _RDI = _R8[2];
  _RBP = _R8[3];
  _RBX = _R8[4];
  _R12 = _R8[5];
  _R13 = _R8[6];
  _R14 = _R8[7];
  _R11 = 0LL;
  _R10 = (MEMORY[0x40] * (unsigned __int128)MEMORY[0x48]) >> 64;
  _RAX = MEMORY[0x40] * MEMORY[0x48];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r10
  }
  _R10 = (MEMORY[0x40] * (unsigned __int128)MEMORY[0x50]) >> 64;
  _RAX = MEMORY[0x40] * MEMORY[0x50];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r10
  }
  _R10 = (MEMORY[0x40] * (unsigned __int128)MEMORY[0x58]) >> 64;
  _RAX = MEMORY[0x40] * MEMORY[0x58];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r10
  }
  _R10 = (MEMORY[0x40] * (unsigned __int128)MEMORY[0x60]) >> 64;
  _RAX = MEMORY[0x40] * MEMORY[0x60];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r10
  }
  _R10 = (MEMORY[0x40] * (unsigned __int128)MEMORY[0x68]) >> 64;
  _RAX = MEMORY[0x40] * MEMORY[0x68];
  __asm
  {
    adcx    r12, rax
    adox    r13, r10
  }
  _R10 = (MEMORY[0x40] * (unsigned __int128)MEMORY[0x70]) >> 64;
  _RAX = MEMORY[0x40] * MEMORY[0x70];
  __asm
  {
    adcx    r13, rax
    adox    r14, r10
  }
  _R10 = (MEMORY[0x40] * (unsigned __int128)MEMORY[0x78]) >> 64;
  _RAX = MEMORY[0x40] * MEMORY[0x78];
  __asm { adcx    r14, rax }
  _R8[1] = _RSI;
  __asm
  {
    adox    r11, r11
    adcx    r11, r10
  }
  _R8[2] = _RDI;
  _R10 = (MEMORY[0x48] * (unsigned __int128)MEMORY[0x50]) >> 64;
  _RAX = MEMORY[0x48] * MEMORY[0x50];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r10
  }
  _R10 = (MEMORY[0x48] * (unsigned __int128)MEMORY[0x58]) >> 64;
  _RAX = MEMORY[0x48] * MEMORY[0x58];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r10
  }
  _R10 = (MEMORY[0x48] * (unsigned __int128)MEMORY[0x60]) >> 64;
  _RAX = MEMORY[0x48] * MEMORY[0x60];
  __asm
  {
    adcx    r12, rax
    adox    r13, r10
  }
  _R10 = (MEMORY[0x48] * (unsigned __int128)MEMORY[0x68]) >> 64;
  _RAX = MEMORY[0x48] * MEMORY[0x68];
  __asm
  {
    adcx    r13, rax
    adox    r14, r10
  }
  _R10 = (MEMORY[0x48] * (unsigned __int128)MEMORY[0x70]) >> 64;
  _RAX = MEMORY[0x48] * MEMORY[0x70];
  __asm
  {
    adcx    r14, rax
    adox    r11, r10
  }
  *(_QWORD *)&v391 = MEMORY[0x78];
  _RSI = 0LL;
  _RDI = 0LL;
  _R8[3] = _RBP;
  _R10 = ((unsigned __int64)v391 * (unsigned __int128)MEMORY[0x48]) >> 64;
  _RAX = v391 * MEMORY[0x48];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r10
  }
  _R10 = ((unsigned __int64)v391 * (unsigned __int128)MEMORY[0x50]) >> 64;
  _RAX = v391 * MEMORY[0x50];
  __asm { adcx    rsi, rax }
  _R8[4] = _RBX;
  __asm { adcx    rdi, r10 }
  _R10 = (MEMORY[0x50] * (unsigned __int128)MEMORY[0x58]) >> 64;
  _RAX = MEMORY[0x50] * MEMORY[0x58];
  __asm
  {
    adcx    r12, rax
    adox    r13, r10
  }
  _R10 = (MEMORY[0x50] * (unsigned __int128)MEMORY[0x60]) >> 64;
  _RAX = MEMORY[0x50] * MEMORY[0x60];
  __asm
  {
    adcx    r13, rax
    adox    r14, r10
  }
  _R10 = (MEMORY[0x50] * (unsigned __int128)MEMORY[0x68]) >> 64;
  _RAX = MEMORY[0x50] * MEMORY[0x68];
  __asm
  {
    adcx    r14, rax
    adox    r11, r10
  }
  _R10 = (MEMORY[0x50] * (unsigned __int128)MEMORY[0x70]) >> 64;
  _RAX = MEMORY[0x50] * MEMORY[0x70];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r10
  }
  _RBP = 0LL;
  _RBX = 0LL;
  _R10 = (MEMORY[0x60] * (unsigned __int128)MEMORY[0x68]) >> 64;
  _RAX = MEMORY[0x60] * MEMORY[0x68];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r10
  }
  _R10 = (MEMORY[0x60] * (unsigned __int128)MEMORY[0x70]) >> 64;
  _RAX = MEMORY[0x60] * MEMORY[0x70];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r10
  }
  *(_QWORD *)&v391 = MEMORY[0x68];
  _R8[5] = _R12;
  _R10 = ((unsigned __int64)v391 * (unsigned __int128)MEMORY[0x70]) >> 64;
  _RAX = v391 * MEMORY[0x70];
  __asm
  {
    adcx    rbp, rax
    adcx    rbx, r10
  }
  *(_QWORD *)&v391 = MEMORY[0x58];
  _R8[6] = _R13;
  _R10 = ((unsigned __int64)v391 * (unsigned __int128)MEMORY[0x60]) >> 64;
  _RAX = v391 * MEMORY[0x60];
  __asm
  {
    adcx    r14, rax
    adox    r11, r10
  }
  _R10 = ((unsigned __int64)v391 * (unsigned __int128)MEMORY[0x68]) >> 64;
  _RAX = v391 * MEMORY[0x68];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r10
  }
  _R10 = ((unsigned __int64)v391 * (unsigned __int128)MEMORY[0x70]) >> 64;
  _RAX = v391 * MEMORY[0x70];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r10
  }
  _R10 = ((unsigned __int64)v391 * (unsigned __int128)MEMORY[0x78]) >> 64;
  _RAX = v391 * MEMORY[0x78];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r10
  }
  *(_QWORD *)&v391 = MEMORY[0x78];
  _R12 = 0LL;
  _R13 = 0LL;
  _R8[7] = _R14;
  _R10 = ((unsigned __int64)v391 * (unsigned __int128)MEMORY[0x60]) >> 64;
  _RAX = v391 * MEMORY[0x60];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r10
  }
  _R10 = ((unsigned __int64)v391 * (unsigned __int128)MEMORY[0x68]) >> 64;
  _RAX = v391 * MEMORY[0x68];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r10
  }
  _R10 = ((unsigned __int64)v391 * (unsigned __int128)MEMORY[0x70]) >> 64;
  _RAX = v391 * MEMORY[0x70];
  __asm
  {
    adcx    r12, rax
    adcx    r13, r10
  }
  _R8[8] = _R11;
  _R8[9] = _RSI;
  _R8[10] = _RDI;
  _R8[11] = _RBP;
  _R8[12] = _RBX;
  _R8[13] = _R12;
  _R8[14] = _R13;
  _R8[15] = 0LL;
  _R8 -= 16;
  _RAX = *_R8;
  _R10 = _R8[1];
  v554 = MEMORY[0];
  _R11 = (MEMORY[0] * (unsigned __int128)MEMORY[0]) >> 64;
  _R9 = MEMORY[0] * MEMORY[0];
  __asm
  {
    adcx    r9, rax
    adox    r9, rax
    adcx    r11, r10
    adox    r11, r10
  }
  *_R8 = _R9;
  _R8[1] = _R11;
  _RAX = _R8[2];
  _R10 = _R8[3];
  v563 = *(unsigned __int64 *)(*((_QWORD *)&v554 + 1) + 8LL);
  _R11 = (unsigned __int128)(v563 * v563) >> 64;
  _R9 = v563 * v563;
  __asm
  {
    adcx    r9, rax
    adox    r9, rax
    adcx    r11, r10
    adox    r11, r10
  }
  _R8[2] = _R9;
  _R8[3] = _R11;
  _RAX = _R8[4];
  _R10 = _R8[5];
  v572 = *(unsigned __int64 *)(*((_QWORD *)&v563 + 1) + 16LL);
  _R11 = (unsigned __int128)(v572 * v572) >> 64;
  _R9 = v572 * v572;
  __asm
  {
    adcx    r9, rax
    adox    r9, rax
    adcx    r11, r10
    adox    r11, r10
  }
  _R8[4] = _R9;
  _R8[5] = _R11;
  _RAX = _R8[6];
  _R10 = _R8[7];
  v581 = *(unsigned __int64 *)(*((_QWORD *)&v572 + 1) + 24LL);
  _R11 = (unsigned __int128)(v581 * v581) >> 64;
  _R9 = v581 * v581;
  __asm
  {
    adcx    r9, rax
    adox    r9, rax
    adcx    r11, r10
    adox    r11, r10
  }
  _R8[6] = _R9;
  _R8[7] = _R11;
  _RAX = _R8[8];
  _R10 = _R8[9];
  v590 = *(unsigned __int64 *)(*((_QWORD *)&v581 + 1) + 32LL);
  _R11 = (unsigned __int128)(v590 * v590) >> 64;
  _R9 = v590 * v590;
  __asm
  {
    adcx    r9, rax
    adox    r9, rax
    adcx    r11, r10
    adox    r11, r10
  }
  _R8[8] = _R9;
  _R8[9] = _R11;
  _RAX = _R8[10];
  _R10 = _R8[11];
  v599 = *(unsigned __int64 *)(*((_QWORD *)&v590 + 1) + 40LL);
  _R11 = (unsigned __int128)(v599 * v599) >> 64;
  _R9 = v599 * v599;
  __asm
  {
    adcx    r9, rax
    adox    r9, rax
    adcx    r11, r10
    adox    r11, r10
  }
  _R8[10] = _R9;
  _R8[11] = _R11;
  _RAX = _R8[12];
  _R10 = _R8[13];
  v608 = *(unsigned __int64 *)(*((_QWORD *)&v599 + 1) + 48LL);
  _R11 = (unsigned __int128)(v608 * v608) >> 64;
  _R9 = v608 * v608;
  __asm
  {
    adcx    r9, rax
    adox    r9, rax
    adcx    r11, r10
    adox    r11, r10
  }
  _R8[12] = _R9;
  _R8[13] = _R11;
  _RAX = _R8[14];
  _R10 = _R8[15];
  v617 = *(unsigned __int64 *)(*((_QWORD *)&v608 + 1) + 56LL);
  _R11 = (unsigned __int128)(v617 * v617) >> 64;
  _R9 = v617 * v617;
  __asm
  {
    adcx    r9, rax
    adox    r9, rax
    adcx    r11, r10
    adox    r11, r10
  }
  _R8[14] = _R9;
  _R8[15] = _R11;
  _RAX = _R8[16];
  _R10 = _R8[17];
  v626 = *(unsigned __int64 *)(*((_QWORD *)&v617 + 1) + 64LL);
  _R11 = (unsigned __int128)(v626 * v626) >> 64;
  _R9 = v626 * v626;
  __asm
  {
    adcx    r9, rax
    adox    r9, rax
    adcx    r11, r10
    adox    r11, r10
  }
  _R8[16] = _R9;
  _R8[17] = _R11;
  _RAX = _R8[18];
  _R10 = _R8[19];
  v635 = *(unsigned __int64 *)(*((_QWORD *)&v626 + 1) + 72LL);
  _R11 = (unsigned __int128)(v635 * v635) >> 64;
  _R9 = v635 * v635;
  __asm
  {
    adcx    r9, rax
    adox    r9, rax
    adcx    r11, r10
    adox    r11, r10
  }
  _R8[18] = _R9;
  _R8[19] = _R11;
  _RAX = _R8[20];
  _R10 = _R8[21];
  v644 = *(unsigned __int64 *)(*((_QWORD *)&v635 + 1) + 80LL);
  _R11 = (unsigned __int128)(v644 * v644) >> 64;
  _R9 = v644 * v644;
  __asm
  {
    adcx    r9, rax
    adox    r9, rax
    adcx    r11, r10
    adox    r11, r10
  }
  _R8[20] = _R9;
  _R8[21] = _R11;
  _RAX = _R8[22];
  _R10 = _R8[23];
  v653 = *(unsigned __int64 *)(*((_QWORD *)&v644 + 1) + 88LL);
  _R11 = (unsigned __int128)(v653 * v653) >> 64;
  _R9 = v653 * v653;
  __asm
  {
    adcx    r9, rax
    adox    r9, rax
    adcx    r11, r10
    adox    r11, r10
  }
  _R8[22] = _R9;
  _R8[23] = _R11;
  _RAX = _R8[24];
  _R10 = _R8[25];
  v662 = *(unsigned __int64 *)(*((_QWORD *)&v653 + 1) + 96LL);
  _R11 = (unsigned __int128)(v662 * v662) >> 64;
  _R9 = v662 * v662;
  __asm
  {
    adcx    r9, rax
    adox    r9, rax
    adcx    r11, r10
    adox    r11, r10
  }
  _R8[24] = _R9;
  _R8[25] = _R11;
  _RAX = _R8[26];
  _R10 = _R8[27];
  v671 = *(unsigned __int64 *)(*((_QWORD *)&v662 + 1) + 104LL);
  _R11 = (unsigned __int128)(v671 * v671) >> 64;
  _R9 = v671 * v671;
  __asm
  {
    adcx    r9, rax
    adox    r9, rax
    adcx    r11, r10
    adox    r11, r10
  }
  _R8[26] = _R9;
  _R8[27] = _R11;
  _RAX = _R8[28];
  _R10 = _R8[29];
  v680 = *(unsigned __int64 *)(*((_QWORD *)&v671 + 1) + 112LL);
  _R11 = (unsigned __int128)(v680 * v680) >> 64;
  _R9 = v680 * v680;
  __asm
  {
    adcx    r9, rax
    adox    r9, rax
    adcx    r11, r10
    adox    r11, r10
  }
  _R8[28] = _R9;
  _R8[29] = _R11;
  result = _R8[30];
  _R10 = _R8[31];
  v689 = *(unsigned __int64 *)(*((_QWORD *)&v680 + 1) + 120LL);
  _R11 = (unsigned __int128)(v689 * v689) >> 64;
  _R9 = v689 * v689;
  __asm
  {
    adcx    r9, rax
    adox    r9, rax
    adcx    r11, r10
    adox    r11, r10
  }
  _R8[30] = _R9;
  _R8[31] = _R11;
  return result;
}
