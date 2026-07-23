/*
 * XREFs of SymCryptFdefModMulMontgomeryMulx256Asm @ 0x14052BE80
 * Callers:
 *     SymCryptFdefModSetPostMontgomeryMulx256 @ 0x140530D30 (SymCryptFdefModSetPostMontgomeryMulx256.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall SymCryptFdefModMulMontgomeryMulx256Asm(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  __int64 v7; // rbp
  unsigned __int64 v9; // rax
  __int64 v10; // rbx
  bool v11; // cf
  unsigned __int64 v13; // rax
  _BOOL8 v15; // rtt
  __int128 v73; // rdx
  __int128 v111; // rdx
  __int128 v132; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v152; // r8
  unsigned __int64 v153; // r11
  unsigned __int128 v154; // kr30_16

  _R13 = 0LL;
  _RSI = *a2 * *a3;
  v7 = (*a2 * (unsigned __int128)a3[1]) >> 64;
  _RDI = (*(_OWORD *)a3 * *a2) >> 64;
  v10 = (*a2 * (unsigned __int128)a3[2]) >> 64;
  v9 = *a2 * a3[2];
  v11 = __CFADD__(__CFADD__(*a2 * a3[1], (*a2 * (unsigned __int128)*a3) >> 64), v7);
  _RBP = __CFADD__(*a2 * a3[1], (*a2 * (unsigned __int128)*a3) >> 64) + v7;
  v11 |= __CFADD__(v9, _RBP);
  _RBP += v9;
  v13 = *a2 * a3[3];
  v15 = v11;
  v11 = __CFADD__(v11, v10);
  _RBX = v15 + v10;
  v11 |= __CFADD__(v13, _RBX);
  _RBX += v13;
  _R12 = v11 + ((*a2 * (unsigned __int128)a3[3]) >> 64);
  _R11 = (a2[1] * (unsigned __int128)*a3) >> 64;
  _RAX = a2[1] * *a3;
  __asm
  {
    adox    rdi, rax
    adcx    rbp, r11
  }
  _R11 = (a2[1] * (unsigned __int128)a3[1]) >> 64;
  _RAX = a2[1] * a3[1];
  __asm
  {
    adox    rbp, rax
    adcx    rbx, r11
  }
  _R11 = (a2[1] * (unsigned __int128)a3[2]) >> 64;
  _RAX = a2[1] * a3[2];
  __asm
  {
    adox    rbx, rax
    adcx    r12, r11
  }
  _R11 = (a2[1] * (unsigned __int128)a3[3]) >> 64;
  _RAX = a2[1] * a3[3];
  __asm { adox    r12, rax }
  _RAX = 0LL;
  __asm
  {
    adcx    r11, rax
    adox    r13, rax
  }
  _R14 = (MEMORY[0x18] * _RSI * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = MEMORY[0x18] * _RSI * MEMORY[0];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r14
  }
  _R14 = (MEMORY[0x18] * *a2 * *a3 * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = MEMORY[0x18] * *a2 * *a3 * MEMORY[8];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r14
  }
  _R14 = (MEMORY[0x18] * *a2 * *a3 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = MEMORY[0x18] * *a2 * *a3 * MEMORY[0x10];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r14
  }
  _R14 = (MEMORY[0x18] * *a2 * *a3 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = MEMORY[0x18] * *a2 * *a3 * MEMORY[0x18];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r14
    adcx    r12, rsi
    adox    r13, rsi
  }
  _KR00_16 = __PAIR128__(_RSI, _R11) + __PAIR128__(_RSI, _R13);
  _R11 = (a2[2] * (unsigned __int128)*a3) >> 64;
  _RAX = a2[2] * *a3;
  __asm
  {
    adox    rbp, rax
    adcx    rbx, r11
  }
  _R11 = (a2[2] * (unsigned __int128)a3[1]) >> 64;
  _RAX = a2[2] * a3[1];
  __asm
  {
    adox    rbx, rax
    adcx    r12, r11
  }
  _R11 = (a2[2] * (unsigned __int128)a3[2]) >> 64;
  _RAX = a2[2] * a3[2];
  __asm
  {
    adox    r12, rax
    adcx    r13, r11
  }
  _R11 = (a2[2] * (unsigned __int128)a3[3]) >> 64;
  _RAX = a2[2] * a3[3];
  __asm { adox    r13, rax }
  _RAX = 0LL;
  __asm
  {
    adcx    r11, rax
    adox    rsi, rax
  }
  v73 = (unsigned __int64)(MEMORY[0xFFFFFFFFFFFFFF98] * _RDI);
  _R14 = (v73 * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = MEMORY[0xFFFFFFFFFFFFFF98] * _RDI * MEMORY[0];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r14
  }
  _R14 = ((unsigned __int64)v73 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v73 + 1) + 8LL)) >> 64;
  _RAX = v73 * *(_QWORD *)(*((_QWORD *)&v73 + 1) + 8LL);
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r14
  }
  _R14 = ((unsigned __int64)v73 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v73 * MEMORY[0x10];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r14
  }
  _R14 = ((unsigned __int64)v73 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v73 * MEMORY[0x18];
  __asm
  {
    adcx    r12, rax
    adox    r13, r14
    adcx    r13, rdi
    adox    rsi, rdi
  }
  _KR10_16 = __PAIR128__(_RDI, _R11) + __PAIR128__(_RDI, _RSI);
  _R11 = (a2[3] * (unsigned __int128)*a3) >> 64;
  _RAX = a2[3] * *a3;
  __asm
  {
    adox    rbx, rax
    adcx    r12, r11
  }
  _R11 = (a2[3] * (unsigned __int128)a3[1]) >> 64;
  _RAX = a2[3] * a3[1];
  __asm
  {
    adox    r12, rax
    adcx    r13, r11
  }
  _R11 = (a2[3] * (unsigned __int128)a3[2]) >> 64;
  _RAX = a2[3] * a3[2];
  __asm
  {
    adox    r13, rax
    adcx    rsi, r11
  }
  _R11 = (a2[3] * (unsigned __int128)a3[3]) >> 64;
  _RAX = a2[3] * a3[3];
  __asm { adox    rsi, rax }
  _RAX = 0LL;
  __asm
  {
    adcx    r11, rax
    adox    rdi, rax
  }
  v111 = (unsigned __int64)(MEMORY[0xFFFFFFFFFFFFFF98] * _RBP);
  _R14 = (v111 * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = MEMORY[0xFFFFFFFFFFFFFF98] * _RBP * MEMORY[0];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r14
  }
  _R14 = ((unsigned __int64)v111 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v111 + 1) + 8LL)) >> 64;
  _RAX = v111 * *(_QWORD *)(*((_QWORD *)&v111 + 1) + 8LL);
  __asm
  {
    adcx    rbx, rax
    adox    r12, r14
  }
  _R14 = ((unsigned __int64)v111 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v111 * MEMORY[0x10];
  __asm
  {
    adcx    r12, rax
    adox    r13, r14
  }
  _R14 = ((unsigned __int64)v111 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v111 * MEMORY[0x18];
  __asm
  {
    adcx    r13, rax
    adox    rsi, r14
    adcx    rsi, rbp
    adox    rdi, rbp
  }
  _RBP = (__PAIR128__(_RBP, _R11) + __PAIR128__(_RBP, _RDI)) >> 64;
  _RDI = _R11 + _RDI;
  v132 = (unsigned __int64)(MEMORY[0xFFFFFFFFFFFFFF98] * _RBX);
  _R11 = (v132 * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = MEMORY[0xFFFFFFFFFFFFFF98] * _RBX * MEMORY[0];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r11
  }
  _R11 = ((unsigned __int64)v132 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v132 + 1) + 8LL)) >> 64;
  _RAX = v132 * *(_QWORD *)(*((_QWORD *)&v132 + 1) + 8LL);
  __asm
  {
    adcx    r12, rax
    adox    r13, r11
  }
  _R11 = ((unsigned __int64)v132 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v132 * MEMORY[0x10];
  __asm
  {
    adcx    r13, rax
    adox    rsi, r11
  }
  _R11 = ((unsigned __int64)v132 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v132 * MEMORY[0x18];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r11
  }
  _RAX = 0LL;
  __asm
  {
    adcx    rdi, rax
    adox    rbp, rax
  }
  result = _R12 + MEMORY[0x80];
  v152 = _RSI
       + (__CFADD__(__CFADD__(_R12, MEMORY[0x80]), MEMORY[0x88]) | (unsigned __int8)__CFADD__(
                                                                                      _R13,
                                                                                      (__PAIR128__(_R13, _R12)
                                                                                     + MEMORY[0x80]) >> 64))
       + MEMORY[0x90];
  v153 = _RDI
       + (__CFADD__(
            __CFADD__(__CFADD__(_R12, MEMORY[0x80]), MEMORY[0x88]) | (unsigned __int8)__CFADD__(
                                                                                        _R13,
                                                                                        (__PAIR128__(_R13, _R12)
                                                                                       + MEMORY[0x80]) >> 64),
            MEMORY[0x90]) | (unsigned __int8)__CFADD__(
                                               _RSI,
                                               (__CFADD__(__CFADD__(_R12, MEMORY[0x80]), MEMORY[0x88]) | (unsigned __int8)__CFADD__(_R13, (__PAIR128__(_R13, _R12) + MEMORY[0x80]) >> 64))
                                             + MEMORY[0x90]))
       + MEMORY[0x98];
  if ( _RBP
     + (__CFADD__(
          __CFADD__(
            __CFADD__(__CFADD__(_R12, MEMORY[0x80]), MEMORY[0x88]) | (unsigned __int8)__CFADD__(
                                                                                        _R13,
                                                                                        (__PAIR128__(_R13, _R12)
                                                                                       + MEMORY[0x80]) >> 64),
            MEMORY[0x90]) | (unsigned __int8)__CFADD__(
                                               _RSI,
                                               (__CFADD__(__CFADD__(_R12, MEMORY[0x80]), MEMORY[0x88]) | (unsigned __int8)__CFADD__(_R13, (__PAIR128__(_R13, _R12) + MEMORY[0x80]) >> 64))
                                             + MEMORY[0x90]),
          MEMORY[0x98]) | (unsigned __int8)__CFADD__(
                                             _RDI,
                                             (__CFADD__(
                                                __CFADD__(__CFADD__(_R12, MEMORY[0x80]), MEMORY[0x88]) | (unsigned __int8)__CFADD__(_R13, (__PAIR128__(_R13, _R12) + MEMORY[0x80]) >> 64),
                                                MEMORY[0x90]) | (unsigned __int8)__CFADD__(
                                                                                   _RSI,
                                                                                   (__CFADD__(
                                                                                      __CFADD__(_R12, MEMORY[0x80]),
                                                                                      MEMORY[0x88]) | (unsigned __int8)__CFADD__(_R13, (__PAIR128__(_R13, _R12) + MEMORY[0x80]) >> 64))
                                                                                 + MEMORY[0x90]))
                                           + MEMORY[0x98]))
     + _RBP )
  {
    v154 = __PAIR128__(_R13, _R12) + MEMORY[0x80];
    _R13 = v154 >> 64;
    _R12 = v154;
    _RSI = v152;
    _RDI = v153;
  }
  *a4 = _R12;
  a4[1] = _R13;
  a4[2] = _RSI;
  a4[3] = _RDI;
  return result;
}
