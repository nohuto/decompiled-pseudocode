/*
 * XREFs of ?StartVSync@BLTQUEUE_EMULATED_VSYNC_SOURCE@@UEAAJU_D3DDDI_RATIONAL@@I@Z @ 0x1403D1810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for ?StartVSync@BLTQUEUE_EMULATED_VSYNC_SOURCE@@UEAAJU_D3DDDI_RATIONAL@@I@Z @ 0x1403D1810
 * Reason: Hex-Rays returned no pseudocode for 0x1403D1810
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403D1810: sub     rsp, 28h
 * 00000001403D1814: xor     r10d, r10d
 * 00000001403D1817: mov     r8, rdx
 * 00000001403D181A: mov     r11, rcx
 * 00000001403D181D: cmp     [rcx+8], r10b
 * 00000001403D1821: jz      short loc_1403D185A
 * 00000001403D1823: mov     ecx, r8d
 * 00000001403D1826: mov     rax, r8
 * 00000001403D1829: shr     rax, 20h
 * 00000001403D182D: xor     r9d, r9d
 * 00000001403D1830: imul    rax, 0FFFFFFFFFF676980h
 * 00000001403D1837: mov     r8, r10
 * 00000001403D183A: cqo
 * 00000001403D183C: idiv    rcx
 * 00000001403D183F: mov     rcx, [r11+10h]
 * 00000001403D1843: mov     rdx, rax
 * 00000001403D1846: call    cs:__imp_ExSetTimer
 * 00000001403D184D: nop     dword ptr [rax+rax+00h]
 * 00000001403D1852: xor     eax, eax
 * 00000001403D1854: add     rsp, 28h
 * 00000001403D1858: retn
 * 00000001403D185A: mov     rax, r8
 * 00000001403D185D: xor     edx, edx
 * 00000001403D185F: shr     rax, 20h
 * 00000001403D1863: imul    eax, 989680h
 * 00000001403D1869: div     r8d
 * 00000001403D186C: mov     r10d, eax
 * 00000001403D186F: jmp     short loc_1403D1823
 */
