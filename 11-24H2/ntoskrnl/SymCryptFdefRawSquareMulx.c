/*
 * XREFs of SymCryptFdefRawSquareMulx @ 0x14052A420
 * Callers:
 *     SymCryptFdefRawSquare @ 0x140529C58 (SymCryptFdefRawSquare.c)
 *     SymCryptFdefModSquareMontgomeryMulx @ 0x140530FA0 (SymCryptFdefModSquareMontgomeryMulx.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
int __fastcall SymCryptFdefRawSquareMulx(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // r10
  __int64 *v4; // r11
  __int64 v5; // r9
  __int128 v15; // rdx
  unsigned __int64 v17; // rt2
  __int128 v62; // rdx
  __int128 v99; // rdx
  unsigned __int64 v105; // rt2
  unsigned __int64 *v135; // rcx OVERLAPPED
  __int64 v140; // r10
  __int64 v141; // r11
  __int128 v145; // rdx
  unsigned __int64 v147; // rt2
  __int128 v182; // rdx
  __int128 v218; // rdx
  __int128 v254; // rdx
  __int128 v290; // rdx
  __int128 v326; // rdx
  __int128 v362; // rdx
  __int128 v398; // rdx
  unsigned __int64 *v424; // rcx
  __int64 v425; // r10
  __int64 *v426; // r8
  __int128 v431; // rdx
  __int128 v442; // rdx
  __int128 v451; // rdx
  __int128 v460; // rdx
  __int128 v469; // rdx
  __int128 v478; // rdx
  __int128 v487; // rdx
  __int128 v496; // rdx
  unsigned __int64 *v504; // [rsp+48h] [rbp+8h]
  __int64 *v506; // [rsp+58h] [rbp+18h]
  __int64 v507; // [rsp+60h] [rbp+20h]

  v504 = (unsigned __int64 *)a1;
  v506 = a3;
  v3 = a2 << 6;
  v507 = a2 << 6;
  v4 = a3;
  v5 = a2 << 6;
  do
  {
    *v4 = 0LL;
    v4[1] = 0LL;
    v4[2] = 0LL;
    v4[3] = 0LL;
    v4[4] = 0LL;
    v4[5] = 0LL;
    v4[6] = 0LL;
    v4[7] = 0LL;
    v4 += 8;
    v5 -= 64LL;
  }
  while ( v5 );
  while ( 1 )
  {
    _RDI = a3[1];
    _RBP = a3[2];
    _RBX = a3[3];
    _R12 = a3[4];
    _R13 = a3[5];
    _R14 = a3[6];
    _R15 = a3[7];
    _RSI = 0LL;
    v17 = *(_QWORD *)(a1 + 8);
    v15 = *(unsigned __int64 *)a1;
    _R9 = (v15 * (unsigned __int128)v17) >> 64;
    _RAX = v15 * v17;
    __asm
    {
      adcx    rdi, rax
      adox    rbp, r9
    }
    _R9 = ((unsigned __int64)v15 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v15 + 1) + 16LL)) >> 64;
    _RAX = v15 * *(_QWORD *)(*((_QWORD *)&v15 + 1) + 16LL);
    __asm
    {
      adcx    rbp, rax
      adox    rbx, r9
    }
    _R9 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v15 * MEMORY[0x18];
    __asm
    {
      adcx    rbx, rax
      adox    r12, r9
    }
    _R9 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v15 * MEMORY[0x20];
    __asm
    {
      adcx    r12, rax
      adox    r13, r9
    }
    _R9 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v15 * MEMORY[0x28];
    __asm
    {
      adcx    r13, rax
      adox    r14, r9
    }
    _R9 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v15 * MEMORY[0x30];
    __asm
    {
      adcx    r14, rax
      adox    r15, r9
    }
    _R9 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v15 * MEMORY[0x38];
    __asm { adcx    r15, rax }
    a3[1] = _RDI;
    __asm
    {
      adox    rsi, rsi
      adcx    rsi, r9
    }
    a3[2] = _RBP;
    _R9 = (MEMORY[8] * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = MEMORY[8] * MEMORY[0x10];
    __asm
    {
      adcx    rbx, rax
      adox    r12, r9
    }
    _R9 = (MEMORY[8] * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = MEMORY[8] * MEMORY[0x18];
    __asm
    {
      adcx    r12, rax
      adox    r13, r9
    }
    _R9 = (MEMORY[8] * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = MEMORY[8] * MEMORY[0x20];
    __asm
    {
      adcx    r13, rax
      adox    r14, r9
    }
    _R9 = (MEMORY[8] * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = MEMORY[8] * MEMORY[0x28];
    __asm
    {
      adcx    r14, rax
      adox    r15, r9
    }
    v62 = MEMORY[8];
    _R9 = (MEMORY[8] * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = MEMORY[8] * MEMORY[0x30];
    __asm
    {
      adcx    r15, rax
      adox    rsi, r9
    }
    *(_QWORD *)&v62 = MEMORY[0x38];
    _RDI = 0LL;
    _RBP = 0LL;
    a3[3] = _RBX;
    _R9 = ((unsigned __int64)v62 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v62 + 1) + 8LL)) >> 64;
    _RAX = v62 * *(_QWORD *)(*((_QWORD *)&v62 + 1) + 8LL);
    __asm
    {
      adcx    rsi, rax
      adox    rdi, r9
    }
    _R9 = ((unsigned __int64)v62 * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v62 * MEMORY[0x10];
    __asm { adcx    rdi, rax }
    a3[4] = _R12;
    __asm { adcx    rbp, r9 }
    _R9 = (MEMORY[0x10] * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = MEMORY[0x10] * MEMORY[0x18];
    __asm
    {
      adcx    r13, rax
      adox    r14, r9
    }
    _R9 = (MEMORY[0x10] * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = MEMORY[0x10] * MEMORY[0x20];
    __asm
    {
      adcx    r14, rax
      adox    r15, r9
    }
    _R9 = (MEMORY[0x10] * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = MEMORY[0x10] * MEMORY[0x28];
    __asm
    {
      adcx    r15, rax
      adox    rsi, r9
    }
    _R9 = (MEMORY[0x10] * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = MEMORY[0x10] * MEMORY[0x30];
    __asm
    {
      adcx    rsi, rax
      adox    rdi, r9
    }
    _RBX = 0LL;
    _R12 = 0LL;
    _R9 = (MEMORY[0x20] * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = MEMORY[0x20] * MEMORY[0x28];
    __asm
    {
      adcx    rdi, rax
      adox    rbp, r9
    }
    v99 = MEMORY[0x20];
    _R9 = (MEMORY[0x20] * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = MEMORY[0x20] * MEMORY[0x30];
    __asm
    {
      adcx    rbp, rax
      adox    rbx, r9
    }
    *(_QWORD *)&v99 = MEMORY[0x28];
    a3[5] = _R13;
    v105 = *(_QWORD *)(*((_QWORD *)&v99 + 1) + 48LL);
    v99 = (unsigned __int64)v99;
    _R9 = ((unsigned __int64)v99 * (unsigned __int128)v105) >> 64;
    _RAX = v99 * v105;
    __asm
    {
      adcx    rbx, rax
      adcx    r12, r9
    }
    *(_QWORD *)&v99 = MEMORY[0x18];
    a3[6] = _R14;
    _R9 = ((unsigned __int64)v99 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v99 + 1) + 32LL)) >> 64;
    _RAX = v99 * *(_QWORD *)(*((_QWORD *)&v99 + 1) + 32LL);
    __asm
    {
      adcx    r15, rax
      adox    rsi, r9
    }
    _R9 = ((unsigned __int64)v99 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v99 * MEMORY[0x28];
    __asm
    {
      adcx    rsi, rax
      adox    rdi, r9
    }
    _R9 = ((unsigned __int64)v99 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v99 * MEMORY[0x30];
    __asm
    {
      adcx    rdi, rax
      adox    rbp, r9
    }
    v99 = (unsigned __int64)v99;
    _R9 = ((unsigned __int64)v99 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v99 * MEMORY[0x38];
    __asm
    {
      adcx    rbp, rax
      adox    rbx, r9
    }
    *(_QWORD *)&v99 = MEMORY[0x38];
    _R13 = 0LL;
    _R14 = 0LL;
    a3[7] = _R15;
    _R9 = ((unsigned __int64)v99 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v99 + 1) + 32LL)) >> 64;
    _RAX = v99 * *(_QWORD *)(*((_QWORD *)&v99 + 1) + 32LL);
    __asm
    {
      adcx    rbx, rax
      adox    r12, r9
    }
    _R9 = ((unsigned __int64)v99 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v99 * MEMORY[0x28];
    __asm
    {
      adcx    r12, rax
      adox    r13, r9
    }
    *(_OWORD *)(&v135 - 1) = (unsigned __int64)v99;
    _R9 = ((unsigned __int64)v99 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v99 * MEMORY[0x30];
    __asm
    {
      adcx    r13, rax
      adcx    r14, r9
    }
    _R15 = 0LL;
    v140 = v3 - 64;
    if ( !v140 )
      break;
    v141 = 64LL;
    _R8 = a3 + 8;
    do
    {
      __asm { adox    rsi, [r8] }
      v147 = *v135;
      v145 = *(unsigned __int64 *)v141;
      _R9 = (v145 * (unsigned __int128)v147) >> 64;
      _RAX = *(_QWORD *)v141 * v147;
      __asm
      {
        adcx    rsi, rax
        adox    rdi, r9
      }
      *_R8 = _RSI;
      _R9 = ((unsigned __int64)v145 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v145 + 1) + 8LL)) >> 64;
      _RAX = v145 * *(_QWORD *)(*((_QWORD *)&v145 + 1) + 8LL);
      __asm
      {
        adcx    rdi, rax
        adox    rbp, r9
      }
      _R9 = ((unsigned __int64)v145 * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = v145 * MEMORY[0x10];
      __asm
      {
        adcx    rbp, rax
        adox    rbx, r9
      }
      _R9 = ((unsigned __int64)v145 * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = v145 * MEMORY[0x18];
      __asm
      {
        adcx    rbx, rax
        adox    r12, r9
      }
      _R9 = ((unsigned __int64)v145 * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = v145 * MEMORY[0x20];
      __asm
      {
        adcx    r12, rax
        adox    r13, r9
      }
      _R9 = ((unsigned __int64)v145 * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = v145 * MEMORY[0x28];
      __asm
      {
        adcx    r13, rax
        adox    r14, r9
      }
      _R9 = ((unsigned __int64)v145 * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = v145 * MEMORY[0x30];
      __asm
      {
        adcx    r14, rax
        adox    r15, r9
      }
      _R9 = ((unsigned __int64)v145 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = v145 * MEMORY[0x38];
      __asm { adcx    r15, rax }
      _RSI = 0LL;
      __asm
      {
        adox    rsi, rsi
        adcx    rsi, r9
      }
      __asm { adox    rdi, [r8+8] }
      v182 = *(unsigned __int64 *)(v141 + 8);
      _R9 = (v182 * (unsigned __int128)MEMORY[0]) >> 64;
      _RAX = *(_QWORD *)(v141 + 8) * MEMORY[0];
      __asm
      {
        adcx    rdi, rax
        adox    rbp, r9
      }
      _R8[1] = _RDI;
      _R9 = ((unsigned __int64)v182 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v182 + 1) + 8LL)) >> 64;
      _RAX = v182 * *(_QWORD *)(*((_QWORD *)&v182 + 1) + 8LL);
      __asm
      {
        adcx    rbp, rax
        adox    rbx, r9
      }
      _R9 = ((unsigned __int64)v182 * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = v182 * MEMORY[0x10];
      __asm
      {
        adcx    rbx, rax
        adox    r12, r9
      }
      _R9 = ((unsigned __int64)v182 * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = v182 * MEMORY[0x18];
      __asm
      {
        adcx    r12, rax
        adox    r13, r9
      }
      _R9 = ((unsigned __int64)v182 * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = v182 * MEMORY[0x20];
      __asm
      {
        adcx    r13, rax
        adox    r14, r9
      }
      _R9 = ((unsigned __int64)v182 * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = v182 * MEMORY[0x28];
      __asm
      {
        adcx    r14, rax
        adox    r15, r9
      }
      _R9 = ((unsigned __int64)v182 * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = v182 * MEMORY[0x30];
      __asm
      {
        adcx    r15, rax
        adox    rsi, r9
      }
      _R9 = ((unsigned __int64)v182 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = v182 * MEMORY[0x38];
      __asm { adcx    rsi, rax }
      _RDI = 0LL;
      __asm
      {
        adox    rdi, rdi
        adcx    rdi, r9
      }
      __asm { adox    rbp, [r8+10h] }
      v218 = *(unsigned __int64 *)(v141 + 16);
      _R9 = (v218 * (unsigned __int128)MEMORY[0]) >> 64;
      _RAX = *(_QWORD *)(v141 + 16) * MEMORY[0];
      __asm
      {
        adcx    rbp, rax
        adox    rbx, r9
      }
      _R8[2] = _RBP;
      _R9 = ((unsigned __int64)v218 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v218 + 1) + 8LL)) >> 64;
      _RAX = v218 * *(_QWORD *)(*((_QWORD *)&v218 + 1) + 8LL);
      __asm
      {
        adcx    rbx, rax
        adox    r12, r9
      }
      _R9 = ((unsigned __int64)v218 * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = v218 * MEMORY[0x10];
      __asm
      {
        adcx    r12, rax
        adox    r13, r9
      }
      _R9 = ((unsigned __int64)v218 * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = v218 * MEMORY[0x18];
      __asm
      {
        adcx    r13, rax
        adox    r14, r9
      }
      _R9 = ((unsigned __int64)v218 * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = v218 * MEMORY[0x20];
      __asm
      {
        adcx    r14, rax
        adox    r15, r9
      }
      _R9 = ((unsigned __int64)v218 * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = v218 * MEMORY[0x28];
      __asm
      {
        adcx    r15, rax
        adox    rsi, r9
      }
      _R9 = ((unsigned __int64)v218 * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = v218 * MEMORY[0x30];
      __asm
      {
        adcx    rsi, rax
        adox    rdi, r9
      }
      _R9 = ((unsigned __int64)v218 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = v218 * MEMORY[0x38];
      __asm { adcx    rdi, rax }
      _RBP = 0LL;
      __asm
      {
        adox    rbp, rbp
        adcx    rbp, r9
      }
      __asm { adox    rbx, [r8+18h] }
      v254 = *(unsigned __int64 *)(v141 + 24);
      _R9 = (v254 * (unsigned __int128)MEMORY[0]) >> 64;
      _RAX = *(_QWORD *)(v141 + 24) * MEMORY[0];
      __asm
      {
        adcx    rbx, rax
        adox    r12, r9
      }
      _R8[3] = _RBX;
      _R9 = ((unsigned __int64)v254 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v254 + 1) + 8LL)) >> 64;
      _RAX = v254 * *(_QWORD *)(*((_QWORD *)&v254 + 1) + 8LL);
      __asm
      {
        adcx    r12, rax
        adox    r13, r9
      }
      _R9 = ((unsigned __int64)v254 * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = v254 * MEMORY[0x10];
      __asm
      {
        adcx    r13, rax
        adox    r14, r9
      }
      _R9 = ((unsigned __int64)v254 * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = v254 * MEMORY[0x18];
      __asm
      {
        adcx    r14, rax
        adox    r15, r9
      }
      _R9 = ((unsigned __int64)v254 * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = v254 * MEMORY[0x20];
      __asm
      {
        adcx    r15, rax
        adox    rsi, r9
      }
      _R9 = ((unsigned __int64)v254 * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = v254 * MEMORY[0x28];
      __asm
      {
        adcx    rsi, rax
        adox    rdi, r9
      }
      _R9 = ((unsigned __int64)v254 * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = v254 * MEMORY[0x30];
      __asm
      {
        adcx    rdi, rax
        adox    rbp, r9
      }
      _R9 = ((unsigned __int64)v254 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = v254 * MEMORY[0x38];
      __asm { adcx    rbp, rax }
      _RBX = 0LL;
      __asm
      {
        adox    rbx, rbx
        adcx    rbx, r9
      }
      __asm { adox    r12, [r8+20h] }
      v290 = *(unsigned __int64 *)(v141 + 32);
      _R9 = (v290 * (unsigned __int128)MEMORY[0]) >> 64;
      _RAX = *(_QWORD *)(v141 + 32) * MEMORY[0];
      __asm
      {
        adcx    r12, rax
        adox    r13, r9
      }
      _R8[4] = _R12;
      _R9 = ((unsigned __int64)v290 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v290 + 1) + 8LL)) >> 64;
      _RAX = v290 * *(_QWORD *)(*((_QWORD *)&v290 + 1) + 8LL);
      __asm
      {
        adcx    r13, rax
        adox    r14, r9
      }
      _R9 = ((unsigned __int64)v290 * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = v290 * MEMORY[0x10];
      __asm
      {
        adcx    r14, rax
        adox    r15, r9
      }
      _R9 = ((unsigned __int64)v290 * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = v290 * MEMORY[0x18];
      __asm
      {
        adcx    r15, rax
        adox    rsi, r9
      }
      _R9 = ((unsigned __int64)v290 * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = v290 * MEMORY[0x20];
      __asm
      {
        adcx    rsi, rax
        adox    rdi, r9
      }
      _R9 = ((unsigned __int64)v290 * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = v290 * MEMORY[0x28];
      __asm
      {
        adcx    rdi, rax
        adox    rbp, r9
      }
      _R9 = ((unsigned __int64)v290 * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = v290 * MEMORY[0x30];
      __asm
      {
        adcx    rbp, rax
        adox    rbx, r9
      }
      _R9 = ((unsigned __int64)v290 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = v290 * MEMORY[0x38];
      __asm { adcx    rbx, rax }
      _R12 = 0LL;
      __asm
      {
        adox    r12, r12
        adcx    r12, r9
      }
      __asm { adox    r13, [r8+28h] }
      v326 = *(unsigned __int64 *)(v141 + 40);
      _R9 = (v326 * (unsigned __int128)MEMORY[0]) >> 64;
      _RAX = *(_QWORD *)(v141 + 40) * MEMORY[0];
      __asm
      {
        adcx    r13, rax
        adox    r14, r9
      }
      _R8[5] = _R13;
      _R9 = ((unsigned __int64)v326 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v326 + 1) + 8LL)) >> 64;
      _RAX = v326 * *(_QWORD *)(*((_QWORD *)&v326 + 1) + 8LL);
      __asm
      {
        adcx    r14, rax
        adox    r15, r9
      }
      _R9 = ((unsigned __int64)v326 * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = v326 * MEMORY[0x10];
      __asm
      {
        adcx    r15, rax
        adox    rsi, r9
      }
      _R9 = ((unsigned __int64)v326 * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = v326 * MEMORY[0x18];
      __asm
      {
        adcx    rsi, rax
        adox    rdi, r9
      }
      _R9 = ((unsigned __int64)v326 * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = v326 * MEMORY[0x20];
      __asm
      {
        adcx    rdi, rax
        adox    rbp, r9
      }
      _R9 = ((unsigned __int64)v326 * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = v326 * MEMORY[0x28];
      __asm
      {
        adcx    rbp, rax
        adox    rbx, r9
      }
      _R9 = ((unsigned __int64)v326 * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = v326 * MEMORY[0x30];
      __asm
      {
        adcx    rbx, rax
        adox    r12, r9
      }
      _R9 = ((unsigned __int64)v326 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = v326 * MEMORY[0x38];
      __asm { adcx    r12, rax }
      _R13 = 0LL;
      __asm
      {
        adox    r13, r13
        adcx    r13, r9
      }
      __asm { adox    r14, [r8+30h] }
      v362 = *(unsigned __int64 *)(v141 + 48);
      _R9 = (v362 * (unsigned __int128)MEMORY[0]) >> 64;
      _RAX = *(_QWORD *)(v141 + 48) * MEMORY[0];
      __asm
      {
        adcx    r14, rax
        adox    r15, r9
      }
      _R8[6] = _R14;
      _R9 = ((unsigned __int64)v362 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v362 + 1) + 8LL)) >> 64;
      _RAX = v362 * *(_QWORD *)(*((_QWORD *)&v362 + 1) + 8LL);
      __asm
      {
        adcx    r15, rax
        adox    rsi, r9
      }
      _R9 = ((unsigned __int64)v362 * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = v362 * MEMORY[0x10];
      __asm
      {
        adcx    rsi, rax
        adox    rdi, r9
      }
      _R9 = ((unsigned __int64)v362 * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = v362 * MEMORY[0x18];
      __asm
      {
        adcx    rdi, rax
        adox    rbp, r9
      }
      _R9 = ((unsigned __int64)v362 * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = v362 * MEMORY[0x20];
      __asm
      {
        adcx    rbp, rax
        adox    rbx, r9
      }
      _R9 = ((unsigned __int64)v362 * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = v362 * MEMORY[0x28];
      __asm
      {
        adcx    rbx, rax
        adox    r12, r9
      }
      _R9 = ((unsigned __int64)v362 * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = v362 * MEMORY[0x30];
      __asm
      {
        adcx    r12, rax
        adox    r13, r9
      }
      _R9 = ((unsigned __int64)v362 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = v362 * MEMORY[0x38];
      __asm { adcx    r13, rax }
      _R14 = 0LL;
      __asm
      {
        adox    r14, r14
        adcx    r14, r9
      }
      __asm { adox    r15, [r8+38h] }
      v398 = *(unsigned __int64 *)(v141 + 56);
      _R9 = (v398 * (unsigned __int128)MEMORY[0]) >> 64;
      _RAX = *(_QWORD *)(v141 + 56) * MEMORY[0];
      __asm
      {
        adcx    r15, rax
        adox    rsi, r9
      }
      _R8[7] = _R15;
      _R9 = ((unsigned __int64)v398 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v398 + 1) + 8LL)) >> 64;
      _RAX = v398 * *(_QWORD *)(*((_QWORD *)&v398 + 1) + 8LL);
      __asm
      {
        adcx    rsi, rax
        adox    rdi, r9
      }
      _R9 = ((unsigned __int64)v398 * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = v398 * MEMORY[0x10];
      __asm
      {
        adcx    rdi, rax
        adox    rbp, r9
      }
      _R9 = ((unsigned __int64)v398 * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = v398 * MEMORY[0x18];
      __asm
      {
        adcx    rbp, rax
        adox    rbx, r9
      }
      _R9 = ((unsigned __int64)v398 * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = v398 * MEMORY[0x20];
      __asm
      {
        adcx    rbx, rax
        adox    r12, r9
      }
      _R9 = ((unsigned __int64)v398 * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = v398 * MEMORY[0x28];
      __asm
      {
        adcx    r12, rax
        adox    r13, r9
      }
      _R9 = ((unsigned __int64)v398 * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = v398 * MEMORY[0x30];
      __asm
      {
        adcx    r13, rax
        adox    r14, r9
      }
      *(_OWORD *)(&v135 - 1) = (unsigned __int64)v398;
      _R9 = ((unsigned __int64)v398 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = v398 * MEMORY[0x38];
      __asm { adcx    r14, rax }
      _R15 = 0LL;
      __asm
      {
        adox    r15, r15
        adcx    r15, r9
      }
      _R8 += 8;
      v141 += 64LL;
      v140 -= 64LL;
    }
    while ( v140 );
    *_R8 = _RSI;
    _R8[1] = _RDI;
    _R8[2] = _RBP;
    _R8[3] = _RBX;
    _R8[4] = _R12;
    _R8[5] = _R13;
    _R8[6] = _R14;
    _R8[7] = _R15;
    a1 = 64LL;
    a3 = (_QWORD *)((char *)_R8 - v507 + 128);
    v3 = v507 - 64;
    v507 -= 64LL;
  }
  a3[8] = _RSI;
  a3[9] = _RDI;
  a3[10] = _RBP;
  a3[11] = _RBX;
  a3[12] = _R12;
  a3[13] = _R13;
  a3[14] = _R14;
  a3[15] = 0LL;
  v424 = v504;
  v425 = a2;
  v426 = v506;
  _RAX = 0LL;
  _R9 = 0LL;
  do
  {
    _R11 = *v426;
    _RSI = v426[1];
    v431 = *v424;
    _RBP = (unsigned __int128)(v431 * v431) >> 64;
    _RDI = v431 * v431;
    __asm
    {
      adcx    rdi, rax
      adcx    rbp, r9
      adcx    rdi, r11
      adox    rdi, r11
      adcx    rbp, rsi
      adox    rbp, rsi
    }
    *v426 = _RDI;
    v426[1] = _RBP;
    _R11 = v426[2];
    _RSI = v426[3];
    v442 = *(unsigned __int64 *)(*((_QWORD *)&v431 + 1) + 8LL);
    _RBP = (unsigned __int128)(v442 * v442) >> 64;
    _RDI = v442 * v442;
    __asm
    {
      adcx    rdi, r11
      adox    rdi, r11
      adcx    rbp, rsi
      adox    rbp, rsi
    }
    v426[2] = _RDI;
    v426[3] = _RBP;
    _R11 = v426[4];
    _RSI = v426[5];
    v451 = *(unsigned __int64 *)(*((_QWORD *)&v442 + 1) + 16LL);
    _RBP = (unsigned __int128)(v451 * v451) >> 64;
    _RDI = v451 * v451;
    __asm
    {
      adcx    rdi, r11
      adox    rdi, r11
      adcx    rbp, rsi
      adox    rbp, rsi
    }
    v426[4] = _RDI;
    v426[5] = _RBP;
    _R11 = v426[6];
    _RSI = v426[7];
    v460 = *(unsigned __int64 *)(*((_QWORD *)&v451 + 1) + 24LL);
    _RBP = (unsigned __int128)(v460 * v460) >> 64;
    _RDI = v460 * v460;
    __asm
    {
      adcx    rdi, r11
      adox    rdi, r11
      adcx    rbp, rsi
      adox    rbp, rsi
    }
    v426[6] = _RDI;
    v426[7] = _RBP;
    _R11 = v426[8];
    _RSI = v426[9];
    v469 = *(unsigned __int64 *)(*((_QWORD *)&v460 + 1) + 32LL);
    _RBP = (unsigned __int128)(v469 * v469) >> 64;
    _RDI = v469 * v469;
    __asm
    {
      adcx    rdi, r11
      adox    rdi, r11
      adcx    rbp, rsi
      adox    rbp, rsi
    }
    v426[8] = _RDI;
    v426[9] = _RBP;
    _R11 = v426[10];
    _RSI = v426[11];
    v478 = *(unsigned __int64 *)(*((_QWORD *)&v469 + 1) + 40LL);
    _RBP = (unsigned __int128)(v478 * v478) >> 64;
    _RDI = v478 * v478;
    __asm
    {
      adcx    rdi, r11
      adox    rdi, r11
      adcx    rbp, rsi
      adox    rbp, rsi
    }
    v426[10] = _RDI;
    v426[11] = _RBP;
    _R11 = v426[12];
    _RSI = v426[13];
    v487 = *(unsigned __int64 *)(*((_QWORD *)&v478 + 1) + 48LL);
    _RBP = (unsigned __int128)(v487 * v487) >> 64;
    _RDI = v487 * v487;
    __asm
    {
      adcx    rdi, r11
      adox    rdi, r11
      adcx    rbp, rsi
      adox    rbp, rsi
    }
    v426[12] = _RDI;
    v426[13] = _RBP;
    _R11 = v426[14];
    _RSI = v426[15];
    v496 = *(unsigned __int64 *)(*((_QWORD *)&v487 + 1) + 56LL);
    _RBP = (unsigned __int128)(v496 * v496) >> 64;
    _RDI = v496 * v496;
    __asm
    {
      adcx    rdi, r11
      adox    rdi, r11
      adcx    rbp, rsi
      adox    rbp, rsi
    }
    v426[14] = _RDI;
    v426[15] = _RBP;
    _RAX = 0LL;
    __asm { adox    eax, r9d }
    v424 = (unsigned __int64 *)(*((_QWORD *)&v496 + 1) + 64LL);
    v426 += 16;
    --v425;
  }
  while ( v425 );
  return _RAX;
}
