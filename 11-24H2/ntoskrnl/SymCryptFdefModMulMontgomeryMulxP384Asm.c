/*
 * XREFs of SymCryptFdefModMulMontgomeryMulxP384Asm @ 0x14052C2F0
 * Callers:
 *     SymCryptFdefModSetPostMontgomeryMulxP384 @ 0x140530D50 (SymCryptFdefModSetPostMontgomeryMulxP384.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall SymCryptFdefModMulMontgomeryMulxP384Asm(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        _QWORD *a4)
{
  __int64 v6; // rbp
  unsigned __int64 v8; // rax
  __int64 v9; // rbx
  bool v10; // cf
  unsigned __int64 v12; // rax
  __int64 v13; // r12
  unsigned __int64 v14; // rbx
  _BOOL8 v15; // rtt
  unsigned __int64 v16; // rax
  __int64 v17; // r13
  _BOOL8 v19; // rtt
  unsigned __int64 v20; // rax
  _BOOL8 v22; // rtt
  __int64 v39; // r9
  unsigned __int64 v65; // rsi
  unsigned __int64 v66; // r15
  __int128 v69; // rdx
  __int64 v83; // r9
  __int128 v111; // rdx
  __int64 v125; // r9
  unsigned __int64 v153; // kr90_8
  __int128 v155; // rdx
  __int64 v169; // r9
  unsigned __int64 v197; // krC0_8
  __int128 v199; // rdx
  __int64 v213; // r9
  unsigned __int64 v241; // krF0_8
  __int128 v243; // rdx
  __int64 v264; // r8
  __int64 v265; // r11
  unsigned __int64 result; // rax
  unsigned __int128 v267; // kr110_16
  unsigned __int64 v268; // r13

  _RSI = *a2 * *a3;
  v6 = (*a2 * (unsigned __int128)a3[1]) >> 64;
  _RDI = (*(_OWORD *)a3 * *a2) >> 64;
  v9 = (*a2 * (unsigned __int128)a3[2]) >> 64;
  v8 = *a2 * a3[2];
  v10 = __CFADD__(__CFADD__(*a2 * a3[1], (*a2 * (unsigned __int128)*a3) >> 64), v6);
  _RBP = __CFADD__(*a2 * a3[1], (*a2 * (unsigned __int128)*a3) >> 64) + v6;
  v10 |= __CFADD__(v8, _RBP);
  _RBP += v8;
  v13 = (*a2 * (unsigned __int128)a3[3]) >> 64;
  v12 = *a2 * a3[3];
  v15 = v10;
  v10 = __CFADD__(v10, v9);
  v14 = v15 + v9;
  v10 |= __CFADD__(v12, v14);
  v14 += v12;
  v17 = (*a2 * (unsigned __int128)a3[4]) >> 64;
  v16 = *a2 * a3[4];
  v19 = v10;
  v10 = __CFADD__(v10, v13);
  _R12 = v19 + v13;
  v10 |= __CFADD__(v16, _R12);
  _R12 += v16;
  v20 = *a2 * a3[5];
  v22 = v10;
  v10 = __CFADD__(v10, v17);
  _R13 = v22 + v17;
  v10 |= __CFADD__(v20, _R13);
  _R13 += v20;
  _R9 = (v14 - (unsigned __int128)(MEMORY[0x18] * _RSI)) >> 64;
  _RBX = v14 - MEMORY[0x18] * _RSI;
  _R11 = (MEMORY[0x18] * _RSI * (unsigned __int128)MEMORY[0x80]) >> 64;
  _RAX = MEMORY[0x18] * _RSI * MEMORY[0x80];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r11
  }
  _R11 = (MEMORY[0x18] * *a2 * *a3 * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = MEMORY[0x18] * *a2 * *a3 * MEMORY[8];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r11
  }
  _R11 = (MEMORY[0x18] * *a2 * *a3 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = MEMORY[0x18] * *a2 * *a3 * MEMORY[0x10];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r11
    adcx    rbx, rsi
    adox    r9, rsi
  }
  v39 = _RSI + _R9;
  _KR10_16 = __PAIR128__(_RSI, MEMORY[0x18] * *a2 * *a3)
           + (unsigned __int64)(v10 + ((*a2 * (unsigned __int128)a3[5]) >> 64));
  _RSI = 0LL;
  _R11 = (a2[1] * (unsigned __int128)*a3) >> 64;
  _RAX = a2[1] * *a3;
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r11
  }
  _R11 = (a2[1] * (unsigned __int128)a3[1]) >> 64;
  _RAX = a2[1] * a3[1];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r11
  }
  _R11 = (a2[1] * (unsigned __int128)a3[2]) >> 64;
  _RAX = a2[1] * a3[2];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r11
  }
  _R11 = (a2[1] * (unsigned __int128)a3[3]) >> 64;
  _RAX = a2[1] * a3[3];
  __asm
  {
    adcx    r12, rax
    adox    r13, r11
  }
  _R11 = (a2[1] * (unsigned __int128)a3[4]) >> 64;
  _RAX = a2[1] * a3[4];
  __asm
  {
    adcx    r13, rax
    adox    r14, r11
  }
  _RAX = a2[1] * a3[5];
  __asm
  {
    adcx    r14, rax
    adox    r15, rsi
  }
  v65 = (((a2[1] * (unsigned __int128)a3[5]) >> 64) + _R15) >> 64;
  v66 = ((a2[1] * (unsigned __int128)a3[5]) >> 64) + _R15;
  _KR30_16 = _R12 - (unsigned __int128)((unsigned __int64)(v39 != 0) + MEMORY[0xFFFFFFFFFFFFFF98] * _RDI);
  v69 = (unsigned __int64)(MEMORY[0xFFFFFFFFFFFFFF98] * _RDI);
  _R11 = (v69 * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = MEMORY[0xFFFFFFFFFFFFFF98] * _RDI * MEMORY[0];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r11
  }
  _R11 = ((unsigned __int64)v69 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v69 + 1) + 8LL)) >> 64;
  _RAX = v69 * *(_QWORD *)(*((_QWORD *)&v69 + 1) + 8LL);
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r11
  }
  _R11 = ((unsigned __int64)v69 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v69 * MEMORY[0x10];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r11
    adcx    r12, rdi
    adox    r9, rdi
  }
  v83 = _RDI + _R9;
  _KR40_16 = __PAIR128__(v65, v69) + __PAIR128__(_RDI, v66);
  _RDI = 0LL;
  _R11 = (a2[2] * (unsigned __int128)*a3) >> 64;
  _RAX = a2[2] * *a3;
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r11
  }
  _R11 = (a2[2] * (unsigned __int128)a3[1]) >> 64;
  _RAX = a2[2] * a3[1];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r11
  }
  _R11 = (a2[2] * (unsigned __int128)a3[2]) >> 64;
  _RAX = a2[2] * a3[2];
  __asm
  {
    adcx    r12, rax
    adox    r13, r11
  }
  _R11 = (a2[2] * (unsigned __int128)a3[3]) >> 64;
  _RAX = a2[2] * a3[3];
  __asm
  {
    adcx    r13, rax
    adox    r14, r11
  }
  _R11 = (a2[2] * (unsigned __int128)a3[4]) >> 64;
  _RAX = a2[2] * a3[4];
  __asm
  {
    adcx    r14, rax
    adox    r15, r11
  }
  _RAX = a2[2] * a3[5];
  __asm
  {
    adcx    r15, rax
    adox    rsi, rdi
  }
  _KR60_16 = _R13 - (unsigned __int128)((unsigned __int64)(v83 != 0) + MEMORY[0xFFFFFFFFFFFFFF98] * _RBP);
  v111 = (unsigned __int64)(MEMORY[0xFFFFFFFFFFFFFF98] * _RBP);
  _R11 = (v111 * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = MEMORY[0xFFFFFFFFFFFFFF98] * _RBP * MEMORY[0];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r11
  }
  _R11 = ((unsigned __int64)v111 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v111 + 1) + 8LL)) >> 64;
  _RAX = v111 * *(_QWORD *)(*((_QWORD *)&v111 + 1) + 8LL);
  __asm
  {
    adcx    rbx, rax
    adox    r12, r11
  }
  _R11 = ((unsigned __int64)v111 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v111 * MEMORY[0x10];
  __asm
  {
    adcx    r12, rax
    adox    r13, r11
    adcx    r13, rbp
    adox    r9, rbp
  }
  v125 = _RBP + _R9;
  _KR70_16 = __PAIR128__(_RBP, v111) + ((a2[2] * (unsigned __int128)a3[5]) >> 64) + _RSI;
  _RBP = 0LL;
  _R11 = (a2[3] * (unsigned __int128)*a3) >> 64;
  _RAX = a2[3] * *a3;
  __asm
  {
    adcx    rbx, rax
    adox    r12, r11
  }
  _R11 = (a2[3] * (unsigned __int128)a3[1]) >> 64;
  _RAX = a2[3] * a3[1];
  __asm
  {
    adcx    r12, rax
    adox    r13, r11
  }
  _R11 = (a2[3] * (unsigned __int128)a3[2]) >> 64;
  _RAX = a2[3] * a3[2];
  __asm
  {
    adcx    r13, rax
    adox    r14, r11
  }
  _R11 = (a2[3] * (unsigned __int128)a3[3]) >> 64;
  _RAX = a2[3] * a3[3];
  __asm
  {
    adcx    r14, rax
    adox    r15, r11
  }
  _R11 = (a2[3] * (unsigned __int128)a3[4]) >> 64;
  _RAX = a2[3] * a3[4];
  __asm
  {
    adcx    r15, rax
    adox    rsi, r11
  }
  _RAX = a2[3] * a3[5];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, rbp
  }
  v153 = _R14 - ((v125 != 0) + MEMORY[0xFFFFFFFFFFFFFF98] * _RBX);
  _R9 = (_R14 - (unsigned __int128)((unsigned __int64)(v125 != 0) + MEMORY[0xFFFFFFFFFFFFFF98] * _RBX)) >> 64;
  _R14 = v153;
  v155 = (unsigned __int64)(MEMORY[0xFFFFFFFFFFFFFF98] * _RBX);
  _R11 = (v155 * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = MEMORY[0xFFFFFFFFFFFFFF98] * _RBX * MEMORY[0];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r11
  }
  _R11 = ((unsigned __int64)v155 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v155 + 1) + 8LL)) >> 64;
  _RAX = v155 * *(_QWORD *)(*((_QWORD *)&v155 + 1) + 8LL);
  __asm
  {
    adcx    r12, rax
    adox    r13, r11
  }
  _R11 = ((unsigned __int64)v155 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v155 * MEMORY[0x10];
  __asm
  {
    adcx    r13, rax
    adox    r14, r11
    adcx    r14, rbx
    adox    r9, rbx
  }
  v169 = _RBX + _R9;
  _KRA0_16 = __PAIR128__(_RBX, v155) + ((a2[3] * (unsigned __int128)a3[5]) >> 64) + _RDI;
  _RBX = 0LL;
  _R11 = (a2[4] * (unsigned __int128)*a3) >> 64;
  _RAX = a2[4] * *a3;
  __asm
  {
    adcx    r12, rax
    adox    r13, r11
  }
  _R11 = (a2[4] * (unsigned __int128)a3[1]) >> 64;
  _RAX = a2[4] * a3[1];
  __asm
  {
    adcx    r13, rax
    adox    r14, r11
  }
  _R11 = (a2[4] * (unsigned __int128)a3[2]) >> 64;
  _RAX = a2[4] * a3[2];
  __asm
  {
    adcx    r14, rax
    adox    r15, r11
  }
  _R11 = (a2[4] * (unsigned __int128)a3[3]) >> 64;
  _RAX = a2[4] * a3[3];
  __asm
  {
    adcx    r15, rax
    adox    rsi, r11
  }
  _R11 = (a2[4] * (unsigned __int128)a3[4]) >> 64;
  _RAX = a2[4] * a3[4];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r11
  }
  _RAX = a2[4] * a3[5];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, rbx
  }
  v197 = _R15 - ((v169 != 0) + MEMORY[0xFFFFFFFFFFFFFF98] * _R12);
  _R9 = (_R15 - (unsigned __int128)((unsigned __int64)(v169 != 0) + MEMORY[0xFFFFFFFFFFFFFF98] * _R12)) >> 64;
  _R15 = v197;
  v199 = (unsigned __int64)(MEMORY[0xFFFFFFFFFFFFFF98] * _R12);
  _R11 = (v199 * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = MEMORY[0xFFFFFFFFFFFFFF98] * _R12 * MEMORY[0];
  __asm
  {
    adcx    r12, rax
    adox    r13, r11
  }
  _R11 = ((unsigned __int64)v199 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v199 + 1) + 8LL)) >> 64;
  _RAX = v199 * *(_QWORD *)(*((_QWORD *)&v199 + 1) + 8LL);
  __asm
  {
    adcx    r13, rax
    adox    r14, r11
  }
  _R11 = ((unsigned __int64)v199 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v199 * MEMORY[0x10];
  __asm
  {
    adcx    r14, rax
    adox    r15, r11
    adcx    r15, r12
    adox    r9, r12
  }
  v213 = _R12 + _R9;
  _KRD0_16 = __PAIR128__(_R12, v199) + ((a2[4] * (unsigned __int128)a3[5]) >> 64) + _RBP;
  _R12 = 0LL;
  _R11 = (a2[5] * (unsigned __int128)*a3) >> 64;
  _RAX = a2[5] * *a3;
  __asm
  {
    adcx    r13, rax
    adox    r14, r11
  }
  _R11 = (a2[5] * (unsigned __int128)a3[1]) >> 64;
  _RAX = a2[5] * a3[1];
  __asm
  {
    adcx    r14, rax
    adox    r15, r11
  }
  _R11 = (a2[5] * (unsigned __int128)a3[2]) >> 64;
  _RAX = a2[5] * a3[2];
  __asm
  {
    adcx    r15, rax
    adox    rsi, r11
  }
  _R11 = (a2[5] * (unsigned __int128)a3[3]) >> 64;
  _RAX = a2[5] * a3[3];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r11
  }
  _R11 = (a2[5] * (unsigned __int128)a3[4]) >> 64;
  _RAX = a2[5] * a3[4];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r11
  }
  _RAX = a2[5] * a3[5];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r12
  }
  v241 = _RSI - ((v213 != 0) + MEMORY[0xFFFFFFFFFFFFFF98] * _R13);
  _R9 = (_RSI - (unsigned __int128)((unsigned __int64)(v213 != 0) + MEMORY[0xFFFFFFFFFFFFFF98] * _R13)) >> 64;
  _RSI = v241;
  v243 = (unsigned __int64)(MEMORY[0xFFFFFFFFFFFFFF98] * _R13);
  _R11 = (v243 * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = MEMORY[0xFFFFFFFFFFFFFF98] * _R13 * MEMORY[0];
  __asm
  {
    adcx    r13, rax
    adox    r14, r11
  }
  _R11 = ((unsigned __int64)v243 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v243 + 1) + 8LL)) >> 64;
  _RAX = v243 * *(_QWORD *)(*((_QWORD *)&v243 + 1) + 8LL);
  __asm
  {
    adcx    r14, rax
    adox    r15, r11
  }
  _R11 = ((unsigned __int64)v243 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v243 * MEMORY[0x10];
  __asm
  {
    adcx    r15, rax
    adox    rsi, r11
    adcx    rsi, r13
    adox    r9, r13
  }
  _R9 = _R13 + _R9;
  _R12 = (__PAIR128__(_R13, v243) + ((a2[5] * (unsigned __int128)a3[5]) >> 64) + _RBX) >> 64;
  _RBX = v243 + ((a2[5] * (unsigned __int128)a3[5]) >> 64) + _RBX;
  __asm
  {
    adox    rdi, r9
    adox    rbp, r9
    adox    rbx, r9
    adox    r12, r9
  }
  v264 = _R15 + __CFADD__(_R14, MEMORY[0x80]) + MEMORY[0];
  v265 = _RSI
       + (__CFADD__(__CFADD__(_R14, MEMORY[0x80]), MEMORY[0]) | (unsigned __int8)__CFADD__(
                                                                                   _R15,
                                                                                   __CFADD__(_R14, MEMORY[0x80])
                                                                                 + MEMORY[0]))
       + 1LL;
  v267 = __PAIR128__(_RBP, _RDI)
       + (__CFADD__(
            __CFADD__(__CFADD__(_R14, MEMORY[0x80]), MEMORY[0]) | (unsigned __int8)__CFADD__(
                                                                                     _R15,
                                                                                     __CFADD__(_R14, MEMORY[0x80])
                                                                                   + MEMORY[0]),
            1LL) | (unsigned __int8)__CFADD__(
                                      _RSI,
                                      (__CFADD__(__CFADD__(_R14, MEMORY[0x80]), MEMORY[0]) | (unsigned __int8)__CFADD__(_R15, __CFADD__(_R14, MEMORY[0x80]) + MEMORY[0]))
                                    + 1LL));
  result = _RDI
         + (__CFADD__(
              __CFADD__(__CFADD__(_R14, MEMORY[0x80]), MEMORY[0]) | (unsigned __int8)__CFADD__(
                                                                                       _R15,
                                                                                       __CFADD__(_R14, MEMORY[0x80])
                                                                                     + MEMORY[0]),
              1LL) | (unsigned __int8)__CFADD__(
                                        _RSI,
                                        (__CFADD__(__CFADD__(_R14, MEMORY[0x80]), MEMORY[0]) | (unsigned __int8)__CFADD__(_R15, __CFADD__(_R14, MEMORY[0x80]) + MEMORY[0]))
                                      + 1LL));
  v10 = __CFADD__(__CFADD__(_RBP, *((_QWORD *)&v267 + 1)), _R13);
  v268 = __CFADD__(_RBP, *((_QWORD *)&v267 + 1)) + _R13;
  v10 |= __CFADD__(_RBX, v268);
  v268 += _RBX;
  if ( _R12 + v10 + _R12 )
  {
    _R14 += MEMORY[0x80];
    _R15 = v264;
    _RSI = v265;
    _RBP = *((_QWORD *)&v267 + 1);
    _RDI = v267;
    _RBX = v268;
  }
  *a4 = _R14;
  a4[1] = _R15;
  a4[2] = _RSI;
  a4[3] = _RDI;
  a4[4] = _RBP;
  a4[5] = _RBX;
  return result;
}
