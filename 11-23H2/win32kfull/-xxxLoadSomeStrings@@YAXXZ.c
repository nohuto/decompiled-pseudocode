/*
 * XREFs of ?xxxLoadSomeStrings@@YAXXZ @ 0x1C00DFDE4
 * Callers:
 *     xxxInitWindowStation @ 0x1C0096B94 (xxxInitWindowStation.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C00D433C (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     xxxClientLoadStringW @ 0x1C00DFF3C (xxxClientLoadStringW.c)
 *     Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage @ 0x1C0139A10 (Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage.c)
 */

/*
 * Hex-Rays decompilation failed for ?xxxLoadSomeStrings@@YAXXZ @ 0x1C00DFDE4
 * Reason: Hex-Rays returned no pseudocode for 0x1C00DFDE4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00DFDE4: mov     rax, rsp
 * 00000001C00DFDE7: mov     [rax+8], rbx
 * 00000001C00DFDEB: mov     [rax+10h], rbp
 * 00000001C00DFDEF: mov     [rax+18h], rsi
 * 00000001C00DFDF3: mov     [rax+20h], rdi
 * 00000001C00DFDF7: push    r14
 * 00000001C00DFDF9: sub     rsp, 20h
 * 00000001C00DFDFD: xor     edx, edx
 * 00000001C00DFDFF: xor     edi, edi
 * 00000001C00DFE01: mov     r8, cs:__imp_gpsi
 * 00000001C00DFE08: lea     ecx, [rdx+320h]
 * 00000001C00DFE0E: lea     ebx, [rdx+1]
 * 00000001C00DFE11: mov     rax, [r8]
 * 00000001C00DFE14: mov     [rdi+rax+3C8h], ecx
 * 00000001C00DFE1B: mov     rax, [r8]
 * 00000001C00DFE1E: mov     [rdi+rax+3C4h], ebx
 * 00000001C00DFE25: movsxd  rax, edx
 * 00000001C00DFE28: lea     rdx, [rax+rax*4]
 * 00000001C00DFE2C: lea     rdx, ds:3A4h[rdx*8]
 * 00000001C00DFE34: add     rdx, [r8]
 * 00000001C00DFE37: mov     r8d, 0Fh
 * 00000001C00DFE3D: call    xxxClientLoadStringW
 * 00000001C00DFE42: lea     rdi, [rdi+28h]
 * 00000001C00DFE46: mov     edx, ebx
 * 00000001C00DFE48: cmp     ebx, 0Bh
 * 00000001C00DFE4B: jl      short loc_1C00DFE01
 * 00000001C00DFE4D: call    Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage
 * 00000001C00DFE52: test    eax, eax
 * 00000001C00DFE54: jz      short loc_1C00DFE83
 * 00000001C00DFE56: mov     rax, cs:__imp_gpsi
 * 00000001C00DFE5D: mov     rdx, [rax]
 * 00000001C00DFE60: add     rdx, 1BB0h
 * 00000001C00DFE67: lea     rbx, [rdx+8Ch]
 * 00000001C00DFE6E: lea     rdi, [rdx+0B4h]
 * 00000001C00DFE75: lea     rsi, [rdx+64h]
 * 00000001C00DFE79: lea     rbp, [rdx+3Ch]
 * 00000001C00DFE7D: lea     r14, [rdx+1Eh]
 * 00000001C00DFE81: jmp     short loc_1C00DFEAD
 * 00000001C00DFE83: lea     rbx, gszHELP
 * 00000001C00DFE8A: lea     rdi, gszSCLOSE
 * 00000001C00DFE91: lea     rsi, gszRESDOWN
 * 00000001C00DFE98: lea     rbp, gszRESUP
 * 00000001C00DFE9F: lea     r14, gszMAX
 * 00000001C00DFEA6: lea     rdx, gszMIN
 * 00000001C00DFEAD: mov     ecx, 384h
 * 00000001C00DFEB2: mov     r8d, 0Fh
 * 00000001C00DFEB8: call    xxxClientLoadStringW
 * 00000001C00DFEBD: mov     r8d, 0Fh
 * 00000001C00DFEC3: mov     rdx, r14
 * 00000001C00DFEC6: mov     ecx, 385h
 * 00000001C00DFECB: call    xxxClientLoadStringW
 * 00000001C00DFED0: mov     r14d, 14h
 * 00000001C00DFED6: mov     rdx, rbp
 * 00000001C00DFED9: mov     r8d, r14d
 * 00000001C00DFEDC: mov     ecx, 386h
 * 00000001C00DFEE1: call    xxxClientLoadStringW
 * 00000001C00DFEE6: mov     r8d, r14d
 * 00000001C00DFEE9: mov     rdx, rsi
 * 00000001C00DFEEC: mov     ecx, 387h
 * 00000001C00DFEF1: call    xxxClientLoadStringW
 * 00000001C00DFEF6: lea     r8d, [r14-5]
 * 00000001C00DFEFA: mov     rdx, rdi
 * 00000001C00DFEFD: mov     ecx, 389h
 * 00000001C00DFF02: call    xxxClientLoadStringW
 * 00000001C00DFF07: mov     r8d, r14d
 * 00000001C00DFF0A: mov     rdx, rbx
 * 00000001C00DFF0D: mov     ecx, 388h
 * 00000001C00DFF12: call    xxxClientLoadStringW
 * 00000001C00DFF17: mov     rbx, [rsp+28h+arg_0]
 * 00000001C00DFF1C: mov     rbp, [rsp+28h+arg_8]
 * 00000001C00DFF21: mov     rsi, [rsp+28h+arg_10]
 * 00000001C00DFF26: mov     rdi, [rsp+28h+arg_18]
 * 00000001C00DFF2B: add     rsp, 20h
 * 00000001C00DFF2F: pop     r14
 * 00000001C00DFF31: retn
 */
