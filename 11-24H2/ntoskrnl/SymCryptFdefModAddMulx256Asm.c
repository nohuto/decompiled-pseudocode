/*
 * XREFs of SymCryptFdefModAddMulx256Asm @ 0x14052BDE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefModAddMulx256Asm(__int64 a1, __int64 *a2, __int64 _R8, _QWORD *a4)
{
  __int64 *v4; // rcx
  __int64 result; // rax

  v4 = (__int64 *)(a1 + 256);
  _RAX = *a2;
  __asm { adcx    rax, [r8] }
  _R10 = a2[1];
  __asm { adcx    r10, [r8+8] }
  _R11 = a2[2];
  __asm { adcx    r11, [r8+10h] }
  _RDX = a2[3];
  __asm { adcx    rdx, [r8+18h] }
  _RSI = *v4;
  __asm { adox    rsi, rax }
  _RDI = v4[1];
  __asm { adox    rdi, r10 }
  _R8 = v4[2];
  __asm { adox    r8, r11 }
  _RCX = v4[3];
  __asm { adox    rcx, rdx }
  *a4 = result;
  a4[1] = _R10;
  a4[2] = _R11;
  a4[3] = _RDX;
  return result;
}
