/*
 * XREFs of FsRtlMdlReadCompleteDevEx @ 0x140BC1010
 * Callers:
 *     KiDecodeMcaFault @ 0x1405080F0 (KiDecodeMcaFault.c)
 *     sub_140519060 @ 0x140519060 (sub_140519060.c)
 *     FsRtlUninitializeSmallMcb @ 0x140BDA800 (FsRtlUninitializeSmallMcb.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     sub_14051927C @ 0x14051927C (sub_14051927C.c)
 *     sub_140519364 @ 0x140519364 (sub_140519364.c)
 *     sub_14051A468 @ 0x14051A468 (sub_14051A468.c)
 *     sub_140BD60B0 @ 0x140BD60B0 (sub_140BD60B0.c)
 *     sub_140BD7AF8 @ 0x140BD7AF8 (sub_140BD7AF8.c)
 *     sub_140BD8384 @ 0x140BD8384 (sub_140BD8384.c)
 *     sub_140BD84C8 @ 0x140BD84C8 (sub_140BD84C8.c)
 *     sub_140BD8680 @ 0x140BD8680 (sub_140BD8680.c)
 *     sub_140BD8D30 @ 0x140BD8D30 (sub_140BD8D30.c)
 *     KiGetGdtIdt @ 0x140BDA690 (KiGetGdtIdt.c)
 *     KiGetLdtr @ 0x140BDA6A0 (KiGetLdtr.c)
 *     KiGetSs @ 0x140BDA6B0 (KiGetSs.c)
 *     KiGetTr @ 0x140BDA6C0 (KiGetTr.c)
 *     KiErrata361Present @ 0x140BDA6D0 (KiErrata361Present.c)
 *     KiErrataSkx55Present @ 0x140BDA6F0 (KiErrataSkx55Present.c)
 *     KiErrata704Present @ 0x140BDA700 (KiErrata704Present.c)
 *     SdbpCheckDll @ 0x140BDA7B0 (SdbpCheckDll.c)
 *     KeGuardDispatchICall @ 0x140BDAA60 (KeGuardDispatchICall.c)
 *     KeGuardCheckICall @ 0x140BDAA70 (KeGuardCheckICall.c)
 *     RtlInitMinimalBarrier @ 0x140BDABD4 (RtlInitMinimalBarrier.c)
 *     sub_140BDF96C @ 0x140BDF96C (sub_140BDF96C.c)
 */

/*
 * Hex-Rays decompilation failed for FsRtlMdlReadCompleteDevEx @ 0x140BC1010
 * Reason: Hex-Rays returned no pseudocode for 0x140BC1010
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140BC1010: mov     [rsp-8+arg_0], rcx
 * 0000000140BC1015: push    rbp
 * 0000000140BC1016: push    rbx
 * 0000000140BC1017: push    rsi
 * 0000000140BC1018: push    rdi
 * 0000000140BC1019: push    r12
 * 0000000140BC101B: push    r13
 * 0000000140BC101D: push    r14
 * 0000000140BC101F: push    r15
 * 0000000140BC1021: lea     rbp, [rsp-898h]
 * 0000000140BC1029: sub     rsp, 998h
 * 0000000140BC1030: mov     eax, [rcx+9D8h]
 * 0000000140BC1036: xor     r9d, r9d
 * 0000000140BC1039: mov     r13, rcx
 * 0000000140BC103C: mov     edi, 0FFFFFFF8h
 * 0000000140BC1041: mov     ecx, 88000h
 * 0000000140BC1046: mov     r11d, 0FFFFFFFFh
 * 0000000140BC104C: and     eax, ecx
 * 0000000140BC104E: mov     r10d, 12Fh
 * 0000000140BC1054: lea     r14d, [r9+1]
 * 0000000140BC1058: cmp     eax, ecx
 * 0000000140BC105A: jz      loc_140BC1115
 * 0000000140BC1060: mov     rdx, [r13+900h]
 * 0000000140BC1067: lea     ecx, [r10+1]
 * 0000000140BC106B: mov     rax, rdx
 * 0000000140BC106E: lea     r8d, [r9+26h]
 * 0000000140BC1072: mov     [rax], r9
 * 0000000140BC1075: add     ecx, edi
 * 0000000140BC1077: add     rax, 8
 * 0000000140BC107B: sub     r8, r14
 * 0000000140BC107E: jnz     short loc_140BC1072
 * 0000000140BC1080: test    ecx, ecx
 * 0000000140BC1082: jz      short loc_140BC108F
 * 0000000140BC1084: mov     [rax], r9b
 * 0000000140BC1087: add     rax, r14
 * 0000000140BC108A: add     ecx, r11d
 * 0000000140BC108D: jnz     short loc_140BC1084
 * 0000000140BC108F: movups  xmm0, xmmword ptr [r13+868h]
 * 0000000140BC1097: lea     rax, [r13+898h]
 * 0000000140BC109E: mov     rcx, rax
 * 0000000140BC10A1: movdqu  xmmword ptr [rdx+10h], xmm0
 * 0000000140BC10A6: shr     rcx, 10h
 * 0000000140BC10AA: movups  xmm1, xmmword ptr [r13+878h]
 * 0000000140BC10B2: movdqu  xmmword ptr [rdx+20h], xmm1
 * 0000000140BC10B7: movups  xmm0, xmmword ptr [r13+888h]
 * 0000000140BC10BF: movdqu  xmmword ptr [rdx+120h], xmm0
 * 0000000140BC10C7: mov     [rbp+152h], rdx
 * 0000000140BC10CE: mov     word ptr [rbp+8D0h+var_780], r10w
 * 0000000140BC10D6: mov     [rdx+10h], ax
 * 0000000140BC10DA: shr     rax, 20h
 * 0000000140BC10DE: mov     [rdx+16h], cx
 * 0000000140BC10E2: mov     [rdx+18h], eax
 * 0000000140BC10E5: cli
 * 0000000140BC10E6: test    dword ptr [r13+9D8h], 40000000h
 * 0000000140BC10F1: jz      short loc_140BC10FB
 * 0000000140BC10F3: xor     eax, eax
 * 0000000140BC10F5: mov     dr7, rax
 * 0000000140BC10F8: sti
 * 0000000140BC10F9: jmp     short loc_140BC1117
 * 0000000140BC10FB: sidt    fword ptr [rbp+8D0h+var_698]
 * 0000000140BC1102: lidt    fword ptr [rbp+8D0h+var_780]
 * 0000000140BC1109: mov     dr7, r9
 * 0000000140BC110D: lidt    fword ptr [rbp+8D0h+var_698]
 * 0000000140BC1114: sti
 * 0000000140BC1115: xor     eax, eax
 * 0000000140BC1117: test    dword ptr [r13+9DCh], 100h
 * 0000000140BC1122: mov     [rbp+8D0h+var_8D0], rax
 * 0000000140BC1126: jz      short loc_140BC113E
 * 0000000140BC1128: mov     rax, [rbp+8D8h]
 * 0000000140BC112F: mov     [rbp+8D0h+var_8D0], rax
 * 0000000140BC1133: xor     eax, eax
 * 0000000140BC1135: mov     [rbp+8D8h], rax
 * 0000000140BC113C: jmp     short loc_140BC1140
 * 0000000140BC113E: xor     eax, eax
 * 0000000140BC1140: mov     r15d, 20h ; ' '
 * 0000000140BC1146: mov     [r13+848h], eax
 * 0000000140BC114D: xor     esi, esi
 * 0000000140BC114F: mov     rbx, 7010008004002001h
 * 0000000140BC1159: test    dword ptr [r13+9D8h], 20000000h
 * 0000000140BC1164: lea     r12d, [r15-1Ch]
 * 0000000140BC1168: jz      short loc_140BC1177
 * 0000000140BC116A: cmp     [r13+0AC0h], rsi
 * 0000000140BC1171: jnz     loc_140BC14BA
 * 0000000140BC1177: mov     r14, [r13+7D8h]
 * 0000000140BC117E: lea     rbx, [r13+7B8h]
 * 0000000140BC1185: mov     [rbp+8D0h+arg_8], r14
 * 0000000140BC118C: lea     rdx, [rbp+8D0h+var_148]
 * 0000000140BC1193: mov     rcx, rbx
 * 0000000140BC1196: mov     r8d, r15d
 * 0000000140BC1199: mov     r9, r12
 * 0000000140BC119C: mov     r10d, 1
 * 0000000140BC11A2: mov     rax, [rcx]
 * 0000000140BC11A5: add     r8d, edi
 * 0000000140BC11A8: mov     [rdx], rax
 * 0000000140BC11AB: add     rcx, 8
 * 0000000140BC11AF: add     rdx, 8
 * 0000000140BC11B3: sub     r9, r10
 * 0000000140BC11B6: jnz     short loc_140BC11A2
 * 0000000140BC11B8: test    r8d, r8d
 * 0000000140BC11BB: jz      short loc_140BC11CC
 * 0000000140BC11BD: mov     al, [rcx]
 * 0000000140BC11BF: add     rcx, r10
 * 0000000140BC11C2: mov     [rdx], al
 * 0000000140BC11C4: add     rdx, r10
 * 0000000140BC11C7: add     r8d, r11d
 * 0000000140BC11CA: jnz     short loc_140BC11BD
 * 0000000140BC11CC: mov     [r13+7D8h], rsi
 * 0000000140BC11D3: mov     ecx, r15d
 * 0000000140BC11D6: mov     [r13+848h], esi
 * 0000000140BC11DD: mov     rax, rbx
 * 0000000140BC11E0: mov     rdx, r12
 * 0000000140BC11E3: mov     [rax], rsi
 * 0000000140BC11E6: add     ecx, edi
 * 0000000140BC11E8: add     rax, 8
 * 0000000140BC11EC: sub     rdx, r10
 * 0000000140BC11EF: jnz     short loc_140BC11E3
 * 0000000140BC11F1: test    ecx, ecx
 * 0000000140BC11F3: jz      short loc_140BC1200
 * 0000000140BC11F5: mov     [rax], sil
 * 0000000140BC11F8: add     rax, r10
 * 0000000140BC11FB: add     ecx, r11d
 * 0000000140BC11FE: jnz     short loc_140BC11F5
 * 0000000140BC1200: mov     r10d, [r13+804h]
 * 0000000140BC1207: mov     r9, r13
 * 0000000140BC120A: add     [r13+848h], r10d
 * 0000000140BC1211: mov     rax, r13
 * 0000000140BC1214: mov     r11d, [r13+834h]
 * 0000000140BC121B: mov     rsi, [r13+838h]
 * 0000000140BC1222: lea     rcx, [r10+r13]
 * 0000000140BC1226: cmp     r13, rcx
 * 0000000140BC1229: jnb     short loc_140BC123B
 * 0000000140BC122B: mov     edx, 40h ; '@'
 * 0000000140BC1230: prefetchnta byte ptr [rax]
 * 0000000140BC1233: add     rax, rdx
 * 0000000140BC1236: cmp     rax, rcx
 * 0000000140BC1239: jb      short loc_140BC1230
 * 0000000140BC123B: mov     edi, r10d
 * 0000000140BC123E: mov     r8, rsi
 * 0000000140BC1241: shr     edi, 7
 * 0000000140BC1244: mov     edx, 1
 * 0000000140BC1249: test    edi, edi
 * 0000000140BC124B: jz      short loc_140BC12C0
 * 0000000140BC124D: mov     rbx, 7010008004002001h
 * 0000000140BC1257: mov     r14d, 0FFFFFFFFh
 * 0000000140BC125D: mov     eax, 8
 * 0000000140BC1262: xor     r8, [r9]
 * 0000000140BC1265: mov     ecx, r11d
 * 0000000140BC1268: rol     r8, cl
 * 0000000140BC126B: xor     r8, [r9+8]
 * 0000000140BC126F: add     r9, 10h
 * 0000000140BC1273: rol     r8, cl
 * 0000000140BC1276: sub     rax, rdx
 * 0000000140BC1279: jnz     short loc_140BC1262
 * 0000000140BC127B: mov     rcx, r9
 * 0000000140BC127E: sub     rcx, r13
 * 0000000140BC1281: xor     rcx, rsi
 * 0000000140BC1284: mov     rax, rcx
 * 0000000140BC1287: rol     rax, 11h
 * 0000000140BC128B: xor     rcx, rax
 * 0000000140BC128E: mov     rax, rbx
 * 0000000140BC1291: mul     rcx
 * 0000000140BC1294: mov     [rbp+8D0h+var_3B8], rdx
 * 0000000140BC129B: xor     edx, eax
 * 0000000140BC129D: xor     r11d, edx
 * 0000000140BC12A0: mov     edx, 1
 * 0000000140BC12A5: and     r11d, 3Fh
 * 0000000140BC12A9: cmovz   r11d, edx
 * 0000000140BC12AD: add     edi, r14d
 * 0000000140BC12B0: jnz     short loc_140BC125D
 * 0000000140BC12B2: mov     r14, [rbp+8D0h+arg_8]
 * 0000000140BC12B9: lea     rbx, [r13+7B8h]
 * 0000000140BC12C0: and     r10d, 7Fh
 * 0000000140BC12C4: cmp     r10d, 8
 * 0000000140BC12C8: jb      short loc_140BC12E7
 * 0000000140BC12CA: mov     eax, r10d
 * 0000000140BC12CD: shr     rax, 3
 * 0000000140BC12D1: xor     r8, [r9]
 * 0000000140BC12D4: mov     ecx, r11d
 * 0000000140BC12D7: rol     r8, cl
 * 0000000140BC12DA: add     r9, 8
 * 0000000140BC12DE: add     r10d, 0FFFFFFF8h
 * 0000000140BC12E2: sub     rax, rdx
 * 0000000140BC12E5: jnz     short loc_140BC12D1
 * 0000000140BC12E7: xor     esi, esi
 * 0000000140BC12E9: test    r10d, r10d
 * 0000000140BC12EC: jz      short loc_140BC1310
 * 0000000140BC12EE: mov     r13d, 0FFFFFFFFh
 * 0000000140BC12F4: movzx   eax, byte ptr [r9]
 * 0000000140BC12F8: mov     ecx, r11d
 * 0000000140BC12FB: xor     r8, rax
 * 0000000140BC12FE: add     r9, rdx
 * 0000000140BC1301: rol     r8, cl
 * 0000000140BC1304: add     r10d, r13d
 * 0000000140BC1307: jnz     short loc_140BC12F4
 * 0000000140BC1309: mov     r13, [rbp+8D0h+arg_0]
 * 0000000140BC1310: mov     [r13+7D8h], r14
 * 0000000140BC1317: lea     rcx, [rbp+8D0h+var_148]
 * 0000000140BC131E: mov     r14d, 1
 * 0000000140BC1324: mov     edx, r15d
 * 0000000140BC1327: mov     r9, r12
 * 0000000140BC132A: mov     rax, [rcx]
 * 0000000140BC132D: add     edx, 0FFFFFFF8h
 * 0000000140BC1330: mov     [rbx], rax
 * 0000000140BC1333: add     rcx, 8
 * 0000000140BC1337: add     rbx, 8
 * 0000000140BC133B: sub     r9, r14
 * 0000000140BC133E: jnz     short loc_140BC132A
 * 0000000140BC1340: test    edx, edx
 * 0000000140BC1342: jz      short loc_140BC1359
 * 0000000140BC1344: mov     r11d, 0FFFFFFFFh
 * 0000000140BC134A: mov     al, [rcx]
 * 0000000140BC134C: add     rcx, r14
 * 0000000140BC134F: mov     [rbx], al
 * 0000000140BC1351: add     rbx, r14
 * 0000000140BC1354: add     edx, r11d
 * 0000000140BC1357: jnz     short loc_140BC134A
 * 0000000140BC1359: cmp     [r13+7D8h], r8
 * 0000000140BC1360: jz      loc_140BC14B0
 * 0000000140BC1366: mov     ecx, [r13+804h]
 * 0000000140BC136D: mov     rax, [r13+588h]
 * 0000000140BC1374: mov     [rax], r13
 * 0000000140BC1377: mov     [rax+10h], ecx
 * 0000000140BC137A: mov     rcx, [r13+7D8h]
 * 0000000140BC1381: cmp     [r13+918h], esi
 * 0000000140BC1388: jnz     loc_140BC14B0
 * 0000000140BC138E: mov     rax, [r13+588h]
 * 0000000140BC1395: xor     rcx, r8
 * 0000000140BC1398: mov     [rax+18h], rcx
 * 0000000140BC139C: cmp     [r13+918h], esi
 * 0000000140BC13A3: jnz     loc_140BC14B0
 * 0000000140BC13A9: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC13B3: add     rax, r13
 * 0000000140BC13B6: mov     [r13+920h], rax
 * 0000000140BC13BD: mov     [r13+928h], rsi
 * 0000000140BC13C4: mov     qword ptr [r13+930h], 101h
 * 0000000140BC13CF: mov     [r13+938h], r8
 * 0000000140BC13D6: mov     [r13+918h], r14d
 * 0000000140BC13DD: mov     ecx, [r13+9D8h]
 * 0000000140BC13E4: bt      ecx, 1Dh
 * 0000000140BC13E8: jb      loc_140BC14B0
 * 0000000140BC13EE: test    dword ptr [r13+9DCh], 200000h
 * 0000000140BC13F9: jz      loc_140BC14B0
 * 0000000140BC13FF: test    r14b, cl
 * 0000000140BC1402: jz      loc_140BC14B0
 * 0000000140BC1408: mov     ecx, [r13+0A74h]
 * 0000000140BC140F: mov     eax, [r13+804h]
 * 0000000140BC1416: mov     r10, [r13+838h]
 * 0000000140BC141D: sub     eax, ecx
 * 0000000140BC141F: mov     r8, [r13+0A78h]
 * 0000000140BC1426: lea     rdx, [rcx+r13]
 * 0000000140BC142A: mov     ecx, eax
 * 0000000140BC142C: shr     rcx, 3
 * 0000000140BC1430: lea     r9, [rdx+rcx*8]
 * 0000000140BC1434: jmp     short loc_140BC1457
 * 0000000140BC1436: xor     [rdx], r8
 * 0000000140BC1439: mov     rax, [rdx]
 * 0000000140BC143C: movzx   ecx, r8b
 * 0000000140BC1440: xor     rax, r10
 * 0000000140BC1443: and     ecx, 3Fh
 * 0000000140BC1446: ror     r8, cl
 * 0000000140BC1449: add     r8, rax
 * 0000000140BC144C: xor     r8, 0EFAh
 * 0000000140BC1453: add     rdx, 8
 * 0000000140BC1457: cmp     rdx, r9
 * 0000000140BC145A: jnz     short loc_140BC1436
 * 0000000140BC145C: btr     dword ptr [r13+9DCh], 15h
 * 0000000140BC1465: cmp     r8, [r13+0A80h]
 * 0000000140BC146C: jz      short loc_140BC14B0
 * 0000000140BC146E: mov     ecx, [r13+804h]
 * 0000000140BC1475: mov     rax, [r13+588h]
 * 0000000140BC147C: mov     [rax], r13
 * 0000000140BC147F: mov     [rax+10h], ecx
 * 0000000140BC1482: mov     rcx, [r13+0A80h]
 * 0000000140BC1489: cmp     [r13+918h], esi
 * 0000000140BC1490: jnz     short loc_140BC14A0
 * 0000000140BC1492: mov     rax, [r13+588h]
 * 0000000140BC1499: xor     rcx, r8
 * 0000000140BC149C: mov     [rax+18h], rcx
 * 0000000140BC14A0: xor     edx, edx
 * 0000000140BC14A2: mov     r9d, 100h
 * 0000000140BC14A8: mov     rcx, r13
 * 0000000140BC14AB: call    sub_140BD8384
 * 0000000140BC14B0: mov     rbx, 7010008004002001h
 * 0000000140BC14BA: mov     r8d, [r13+9D8h]
 * 0000000140BC14C1: mov     ecx, 2
 * 0000000140BC14C6: or      r8d, ecx
 * 0000000140BC14C9: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC14D0: mov     [r13+9D8h], r8d
 * 0000000140BC14D7: mov     r9, 0ABCC77118461CEFDh
 * 0000000140BC14E1: add     [r13+854h], r14d
 * 0000000140BC14E8: test    r12b, r8b
 * 0000000140BC14EB: jz      loc_140BC19AC
 * 0000000140BC14F1: bt      r8d, 16h
 * 0000000140BC14F6: jb      loc_140BC19AC
 * 0000000140BC14FC: mov     r10, [r13+0AB8h]
 * 0000000140BC1503: mov     eax, [r13+9DCh]
 * 0000000140BC150A: mov     esi, [r13+804h]
 * 0000000140BC1511: mov     r11, [r13+0A40h]
 * 0000000140BC1518: mov     r15d, [r13+828h]
 * 0000000140BC151F: mov     [rbp+8D0h+arg_8], r10
 * 0000000140BC1526: test    cl, al
 * 0000000140BC1528: jz      short loc_140BC1531
 * 0000000140BC152A: mov     r11, [r13+5D0h]
 * 0000000140BC1531: mov     rax, [r13+2C8h]
 * 0000000140BC1538: mov     r12, [r13+170h]
 * 0000000140BC153F: mov     [rbp+8D0h+var_940], rax
 * 0000000140BC1543: mov     rax, [r13+340h]
 * 0000000140BC154A: mov     [rsp+9D0h+var_968], rax
 * 0000000140BC154F: mov     [rsp+9D0h+var_978], r12
 * 0000000140BC1554: rdtsc
 * 0000000140BC1556: shl     rdx, 20h
 * 0000000140BC155A: or      rax, rdx
 * 0000000140BC155D: mov     rcx, rax
 * 0000000140BC1560: ror     rax, 3
 * 0000000140BC1564: xor     rcx, rax
 * 0000000140BC1567: mov     rax, rbx
 * 0000000140BC156A: mul     rcx
 * 0000000140BC156D: mov     rcx, rdx
 * 0000000140BC1570: mov     [rbp+8D0h+var_3A0], rdx
 * 0000000140BC1577: xor     rcx, rax
 * 0000000140BC157A: mov     rax, r9
 * 0000000140BC157D: mul     rcx
 * 0000000140BC1580: mov     r9, rdi
 * 0000000140BC1583: shr     rdx, 1Ah
 * 0000000140BC1587: imul    rax, rdx, 5F5E100h
 * 0000000140BC158E: sub     rcx, rax
 * 0000000140BC1591: sub     r9, rcx
 * 0000000140BC1594: mov     [rbp+8D0h+var_840], r9
 * 0000000140BC159B: bt      r8d, 19h
 * 0000000140BC15A0: jnb     loc_140BC163C
 * 0000000140BC15A6: rdtsc
 * 0000000140BC15A8: shl     rdx, 20h
 * 0000000140BC15AC: mov     r13, 0CCCCCCCCCCCCCCCDh
 * 0000000140BC15B6: or      rax, rdx
 * 0000000140BC15B9: mov     rcx, rax
 * 0000000140BC15BC: ror     rax, 3
 * 0000000140BC15C0: xor     rcx, rax
 * 0000000140BC15C3: mov     rax, rbx
 * 0000000140BC15C6: mul     rcx
 * 0000000140BC15C9: mov     rcx, rdx
 * 0000000140BC15CC: mov     [rbp+8D0h+var_398], rdx
 * 0000000140BC15D3: xor     rcx, rax
 * 0000000140BC15D6: mov     rax, r13
 * 0000000140BC15D9: mul     rcx
 * 0000000140BC15DC: shr     rdx, 3
 * 0000000140BC15E0: lea     rax, [rdx+rdx*4]
 * 0000000140BC15E4: add     rax, rax
 * 0000000140BC15E7: sub     rcx, rax
 * 0000000140BC15EA: mov     eax, 2
 * 0000000140BC15EF: cmp     rcx, rax
 * 0000000140BC15F2: jnb     short loc_140BC163C
 * 0000000140BC15F4: rdtsc
 * 0000000140BC15F6: shl     rdx, 20h
 * 0000000140BC15FA: or      rax, rdx
 * 0000000140BC15FD: mov     rcx, rax
 * 0000000140BC1600: ror     rax, 3
 * 0000000140BC1604: xor     rcx, rax
 * 0000000140BC1607: mov     rax, rbx
 * 0000000140BC160A: mul     rcx
 * 0000000140BC160D: mov     rcx, rdx
 * 0000000140BC1610: mov     [rbp+8D0h+var_390], rdx
 * 0000000140BC1617: xor     rcx, rax
 * 0000000140BC161A: mov     rax, r13
 * 0000000140BC161D: mul     rcx
 * 0000000140BC1620: shr     rdx, 3
 * 0000000140BC1624: lea     rax, [rdx+rdx*4]
 * 0000000140BC1628: add     rax, rax
 * 0000000140BC162B: sub     rcx, rax
 * 0000000140BC162E: add     rcx, r14
 * 0000000140BC1631: imul    rcx, r9
 * 0000000140BC1635: mov     [rbp+8D0h+var_840], rcx
 * 0000000140BC163C: xor     r9d, r9d
 * 0000000140BC163F: mov     ebx, r9d
 * 0000000140BC1642: mov     r14d, r9d
 * 0000000140BC1645: lea     eax, [r9+1]
 * 0000000140BC1649: test    al, r8b
 * 0000000140BC164C: lea     ecx, [rax+3Fh]
 * 0000000140BC164F: cmovz   esi, r15d
 * 0000000140BC1653: test    cl, r8b
 * 0000000140BC1656: jnz     short loc_140BC1660
 * 0000000140BC1658: mov     r13d, r9d
 * 0000000140BC165B: jmp     loc_140BC1739
 * 0000000140BC1660: mov     r13d, eax
 * 0000000140BC1663: rdtsc
 * 0000000140BC1665: shl     rdx, 20h
 * 0000000140BC1669: or      rax, rdx
 * 0000000140BC166C: mov     rcx, rax
 * 0000000140BC166F: ror     rax, 3
 * 0000000140BC1673: xor     rcx, rax
 * 0000000140BC1676: mov     rax, 7010008004002001h
 * 0000000140BC1680: mul     rcx
 * 0000000140BC1683: mov     ecx, 15Dh
 * 0000000140BC1688: mov     rbx, rdx
 * 0000000140BC168B: mov     [rbp+8D0h+var_388], rdx
 * 0000000140BC1692: mov     rdx, [rbp+8D0h+arg_0]
 * 0000000140BC1699: xor     rbx, rax
 * 0000000140BC169C: mov     r14, rbx
 * 0000000140BC169F: mov     r8, rbx
 * 0000000140BC16A2: xor     r14, rdx
 * 0000000140BC16A5: lea     rax, [rdx+0AE0h]
 * 0000000140BC16AC: xor     [rax], r8
 * 0000000140BC16AF: lea     rax, [rax-8]
 * 0000000140BC16B3: ror     r8, cl
 * 0000000140BC16B6: sub     ecx, r13d
 * 0000000140BC16B9: jnz     short loc_140BC16AC
 * 0000000140BC16BB: lea     r9, [r15-0AE8h]
 * 0000000140BC16C2: mov     r12, r15
 * 0000000140BC16C5: shr     r9, 3
 * 0000000140BC16C9: test    r9d, r9d
 * 0000000140BC16CC: jz      short loc_140BC170C
 * 0000000140BC16CE: movsxd  r10, r9d
 * 0000000140BC16D1: mov     rdi, r13
 * 0000000140BC16D4: add     r10, 15Ch
 * 0000000140BC16DB: lea     r10, [rdx+r10*8]
 * 0000000140BC16DF: mov     rdx, [r10]
 * 0000000140BC16E2: lea     rax, [r14+r14]
 * 0000000140BC16E6: mov     ecx, r9d
 * 0000000140BC16E9: lea     r10, [r10-8]
 * 0000000140BC16ED: ror     rdx, cl
 * 0000000140BC16F0: mov     r14, rdx
 * 0000000140BC16F3: xor     r14, rax
 * 0000000140BC16F6: sub     r9d, edi
 * 0000000140BC16F9: jnz     short loc_140BC16DF
 * 0000000140BC16FB: mov     r10, [rbp+8D0h+arg_8]
 * 0000000140BC1702: mov     r12, r15
 * 0000000140BC1705: mov     rdx, [rbp+8D0h+arg_0]
 * 0000000140BC170C: mov     ecx, esi
 * 0000000140BC170E: add     rdx, r12
 * 0000000140BC1711: sub     ecx, r15d
 * 0000000140BC1714: shr     ecx, 3
 * 0000000140BC1717: test    ecx, ecx
 * 0000000140BC1719: jz      short loc_140BC1734
 * 0000000140BC171B: lea     rdx, [rdx+rcx*8]
 * 0000000140BC171F: mov     rax, r13
 * 0000000140BC1722: add     rdx, 0FFFFFFFFFFFFFFF8h
 * 0000000140BC1726: xor     [rdx], r8
 * 0000000140BC1729: lea     rdx, [rdx-8]
 * 0000000140BC172D: ror     r8, cl
 * 0000000140BC1730: sub     ecx, eax
 * 0000000140BC1732: jnz     short loc_140BC1726
 * 0000000140BC1734: mov     r12, [rsp+9D0h+var_978]
 * 0000000140BC1739: test    r10, r10
 * 0000000140BC173C: jz      short loc_140BC1762
 * 0000000140BC173E: mov     rcx, [rbp+8D0h+arg_0]
 * 0000000140BC1745: lea     r8, [rbp+8D0h+var_840]
 * 0000000140BC174C: mov     rax, [rsp+9D0h+var_968]
 * 0000000140BC1751: mov     r9, r12
 * 0000000140BC1754: mov     edx, esi
 * 0000000140BC1756: mov     [rsp+9D0h+BugCheckParameter4], r10
 * 0000000140BC175B: call    KeGuardDispatchICall
 * 0000000140BC1760: jmp     short loc_140BC179A
 * 0000000140BC1762: xor     edx, edx
 * 0000000140BC1764: test    r11, r11
 * 0000000140BC1767: jnz     short loc_140BC177C
 * 0000000140BC1769: lea     r8, [rbp+8D0h+var_840]
 * 0000000140BC1770: xor     ecx, ecx
 * 0000000140BC1772: mov     rax, r12
 * 0000000140BC1775: call    KeGuardDispatchICall
 * 0000000140BC177A: jmp     short loc_140BC179A
 * 0000000140BC177C: lea     rax, [rbp+8D0h+var_840]
 * 0000000140BC1783: xor     r9d, r9d
 * 0000000140BC1786: mov     [rsp+9D0h+BugCheckParameter4], rax
 * 0000000140BC178B: xor     r8d, r8d
 * 0000000140BC178E: mov     rax, [rbp+8D0h+var_940]
 * 0000000140BC1792: mov     rcx, r11
 * 0000000140BC1795: call    KeGuardDispatchICall
 * 0000000140BC179A: xor     r12d, r12d
 * 0000000140BC179D: test    r13d, r13d
 * 0000000140BC17A0: mov     r13, [rbp+8D0h+arg_0]
 * 0000000140BC17A7: jz      loc_140BC19A0
 * 0000000140BC17AD: mov     r8, rbx
 * 0000000140BC17B0: lea     rax, [r13+0AE0h]
 * 0000000140BC17B7: xor     r8, r13
 * 0000000140BC17BA: lea     r10d, [r12+1]
 * 0000000140BC17BF: mov     ecx, 15Dh
 * 0000000140BC17C4: xor     [rax], rbx
 * 0000000140BC17C7: lea     rax, [rax-8]
 * 0000000140BC17CB: ror     rbx, cl
 * 0000000140BC17CE: sub     ecx, r10d
 * 0000000140BC17D1: jnz     short loc_140BC17C4
 * 0000000140BC17D3: lea     r9, [r15-0AE8h]
 * 0000000140BC17DA: mov     r11, r15
 * 0000000140BC17DD: shr     r9, 3
 * 0000000140BC17E1: test    r9d, r9d
 * 0000000140BC17E4: jz      short loc_140BC181B
 * 0000000140BC17E6: movsxd  rax, r9d
 * 0000000140BC17E9: lea     r10, [r13+0AE0h]
 * 0000000140BC17F0: lea     r11d, [rcx+1]
 * 0000000140BC17F4: lea     r10, [r10+rax*8]
 * 0000000140BC17F8: mov     rdx, [r10]
 * 0000000140BC17FB: lea     rax, [r8+r8]
 * 0000000140BC17FF: mov     ecx, r9d
 * 0000000140BC1802: lea     r10, [r10-8]
 * 0000000140BC1806: ror     rdx, cl
 * 0000000140BC1809: mov     r8, rdx
 * 0000000140BC180C: xor     r8, rax
 * 0000000140BC180F: sub     r9d, r11d
 * 0000000140BC1812: jnz     short loc_140BC17F8
 * 0000000140BC1814: mov     r11, r15
 * 0000000140BC1817: lea     r10d, [r9+1]
 * 0000000140BC181B: sub     esi, r15d
 * 0000000140BC181E: lea     rcx, [r11+r13]
 * 0000000140BC1822: shr     esi, 3
 * 0000000140BC1825: test    esi, esi
 * 0000000140BC1827: jz      short loc_140BC1843
 * 0000000140BC1829: mov     edx, esi
 * 0000000140BC182B: dec     rdx
 * 0000000140BC182E: lea     rdx, [rcx+rdx*8]
 * 0000000140BC1832: xor     [rdx], rbx
 * 0000000140BC1835: mov     ecx, esi
 * 0000000140BC1837: ror     rbx, cl
 * 0000000140BC183A: lea     rdx, [rdx-8]
 * 0000000140BC183E: sub     esi, r10d
 * 0000000140BC1841: jnz     short loc_140BC1832
 * 0000000140BC1843: cmp     r8, r14
 * 0000000140BC1846: jz      loc_140BC19A0
 * 0000000140BC184C: mov     rax, [r13+588h]
 * 0000000140BC1853: mov     ecx, [r13+804h]
 * 0000000140BC185A: mov     [rax], r13
 * 0000000140BC185D: mov     [rax+10h], ecx
 * 0000000140BC1860: cmp     [r13+918h], r12d
 * 0000000140BC1867: jnz     loc_140BC19A0
 * 0000000140BC186D: mov     rax, [r13+588h]
 * 0000000140BC1874: mov     rcx, r8
 * 0000000140BC1877: xor     rcx, r14
 * 0000000140BC187A: mov     [rax+18h], rcx
 * 0000000140BC187E: cmp     [r13+918h], r12d
 * 0000000140BC1885: jnz     loc_140BC19A0
 * 0000000140BC188B: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC1895: mov     r14d, 1
 * 0000000140BC189B: add     rax, r13
 * 0000000140BC189E: mov     [r13+920h], rax
 * 0000000140BC18A5: mov     [r13+928h], r12
 * 0000000140BC18AC: mov     qword ptr [r13+930h], 10Eh
 * 0000000140BC18B7: mov     [r13+938h], r8
 * 0000000140BC18BE: mov     [r13+918h], r14d
 * 0000000140BC18C5: mov     ecx, [r13+9D8h]
 * 0000000140BC18CC: bt      ecx, 1Dh
 * 0000000140BC18D0: jb      loc_140BC1998
 * 0000000140BC18D6: test    dword ptr [r13+9DCh], 200000h
 * 0000000140BC18E1: jz      loc_140BC1998
 * 0000000140BC18E7: test    r14b, cl
 * 0000000140BC18EA: jz      loc_140BC1998
 * 0000000140BC18F0: mov     ecx, [r13+0A74h]
 * 0000000140BC18F7: mov     eax, [r13+804h]
 * 0000000140BC18FE: mov     r10, [r13+838h]
 * 0000000140BC1905: sub     eax, ecx
 * 0000000140BC1907: mov     r8, [r13+0A78h]
 * 0000000140BC190E: lea     rdx, [rcx+r13]
 * 0000000140BC1912: mov     ecx, eax
 * 0000000140BC1914: shr     rcx, 3
 * 0000000140BC1918: lea     r9, [rdx+rcx*8]
 * 0000000140BC191C: jmp     short loc_140BC193F
 * 0000000140BC191E: xor     [rdx], r8
 * 0000000140BC1921: mov     rax, [rdx]
 * 0000000140BC1924: movzx   ecx, r8b
 * 0000000140BC1928: xor     rax, r10
 * 0000000140BC192B: and     ecx, 3Fh
 * 0000000140BC192E: ror     r8, cl
 * 0000000140BC1931: add     r8, rax
 * 0000000140BC1934: xor     r8, 0EFAh
 * 0000000140BC193B: add     rdx, 8
 * 0000000140BC193F: cmp     rdx, r9
 * 0000000140BC1942: jnz     short loc_140BC191E
 * 0000000140BC1944: btr     dword ptr [r13+9DCh], 15h
 * 0000000140BC194D: cmp     r8, [r13+0A80h]
 * 0000000140BC1954: jz      short loc_140BC1998
 * 0000000140BC1956: mov     ecx, [r13+804h]
 * 0000000140BC195D: mov     rax, [r13+588h]
 * 0000000140BC1964: mov     [rax], r13
 * 0000000140BC1967: mov     [rax+10h], ecx
 * 0000000140BC196A: mov     rcx, [r13+0A80h]
 * 0000000140BC1971: cmp     [r13+918h], r12d
 * 0000000140BC1978: jnz     short loc_140BC1988
 * 0000000140BC197A: mov     rax, [r13+588h]
 * 0000000140BC1981: xor     rcx, r8
 * 0000000140BC1984: mov     [rax+18h], rcx
 * 0000000140BC1988: xor     edx, edx
 * 0000000140BC198A: mov     r9d, 100h
 * 0000000140BC1990: mov     rcx, r13
 * 0000000140BC1993: call    sub_140BD8384
 * 0000000140BC1998: mov     r15d, 20h ; ' '
 * 0000000140BC199E: jmp     short loc_140BC19AF
 * 0000000140BC19A0: mov     r15d, 20h ; ' '
 * 0000000140BC19A6: lea     r14d, [r15-1Fh]
 * 0000000140BC19AA: jmp     short loc_140BC19AF
 * 0000000140BC19AC: xor     r12d, r12d
 * 0000000140BC19AF: mov     esi, [r13+0C4h]
 * 0000000140BC19B6: lea     rcx, [r13+630h]
 * 0000000140BC19BD: mov     [r13+0C4h], r12d
 * 0000000140BC19C4: mov     r9, r13
 * 0000000140BC19C7: add     dword ptr [r13+848h], 630h
 * 0000000140BC19D2: mov     rax, r13
 * 0000000140BC19D5: mov     r10d, [r13+834h]
 * 0000000140BC19DC: mov     rbx, [r13+838h]
 * 0000000140BC19E3: mov     dword ptr [rbp+8D0h+arg_8], esi
 * 0000000140BC19E9: cmp     r13, rcx
 * 0000000140BC19EC: jnb     short loc_140BC19FE
 * 0000000140BC19EE: mov     edx, 40h ; '@'
 * 0000000140BC19F3: prefetchnta byte ptr [rax]
 * 0000000140BC19F6: add     rax, rdx
 * 0000000140BC19F9: cmp     rax, rcx
 * 0000000140BC19FC: jb      short loc_140BC19F3
 * 0000000140BC19FE: mov     r8, rbx
 * 0000000140BC1A01: mov     edi, 0FFFFFFFFh
 * 0000000140BC1A06: mov     rsi, 7010008004002001h
 * 0000000140BC1A10: mov     r11d, 0Ch
 * 0000000140BC1A16: mov     eax, 8
 * 0000000140BC1A1B: xor     r8, [r9]
 * 0000000140BC1A1E: mov     ecx, r10d
 * 0000000140BC1A21: rol     r8, cl
 * 0000000140BC1A24: xor     r8, [r9+8]
 * 0000000140BC1A28: add     r9, 10h
 * 0000000140BC1A2C: rol     r8, cl
 * 0000000140BC1A2F: sub     rax, r14
 * 0000000140BC1A32: jnz     short loc_140BC1A1B
 * 0000000140BC1A34: mov     rcx, r9
 * 0000000140BC1A37: sub     rcx, r13
 * 0000000140BC1A3A: xor     rcx, rbx
 * 0000000140BC1A3D: mov     rax, rcx
 * 0000000140BC1A40: rol     rax, 11h
 * 0000000140BC1A44: xor     rcx, rax
 * 0000000140BC1A47: mov     rax, rsi
 * 0000000140BC1A4A: mul     rcx
 * 0000000140BC1A4D: mov     [rbp+8D0h+var_380], rdx
 * 0000000140BC1A54: xor     edx, eax
 * 0000000140BC1A56: xor     r10d, edx
 * 0000000140BC1A59: and     r10d, 3Fh
 * 0000000140BC1A5D: cmovz   r10d, r14d
 * 0000000140BC1A61: add     r11d, edi
 * 0000000140BC1A64: jnz     short loc_140BC1A16
 * 0000000140BC1A66: mov     esi, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BC1A6C: lea     r12d, [r11+6]
 * 0000000140BC1A70: mov     eax, r12d
 * 0000000140BC1A73: lea     edx, [r11+30h]
 * 0000000140BC1A77: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC1A7E: xor     r8, [r9]
 * 0000000140BC1A81: mov     ecx, r10d
 * 0000000140BC1A84: rol     r8, cl
 * 0000000140BC1A87: add     r9, 8
 * 0000000140BC1A8B: add     edx, 0FFFFFFF8h
 * 0000000140BC1A8E: sub     rax, r14
 * 0000000140BC1A91: jnz     short loc_140BC1A7E
 * 0000000140BC1A93: xor     r11d, r11d
 * 0000000140BC1A96: test    edx, edx
 * 0000000140BC1A98: jz      short loc_140BC1ABC
 * 0000000140BC1A9A: mov     r13d, 0FFFFFFFFh
 * 0000000140BC1AA0: movzx   eax, byte ptr [r9]
 * 0000000140BC1AA4: mov     ecx, r10d
 * 0000000140BC1AA7: xor     r8, rax
 * 0000000140BC1AAA: add     r9, r14
 * 0000000140BC1AAD: rol     r8, cl
 * 0000000140BC1AB0: add     edx, r13d
 * 0000000140BC1AB3: jnz     short loc_140BC1AA0
 * 0000000140BC1AB5: mov     r13, [rbp+8D0h+arg_0]
 * 0000000140BC1ABC: mov     [r13+0C4h], esi
 * 0000000140BC1AC3: cmp     [r13+0A68h], r8
 * 0000000140BC1ACA: jz      loc_140BC1C20
 * 0000000140BC1AD0: mov     rax, [r13+588h]
 * 0000000140BC1AD7: mov     ecx, [r13+804h]
 * 0000000140BC1ADE: mov     [rax], r13
 * 0000000140BC1AE1: mov     [rax+10h], ecx
 * 0000000140BC1AE4: mov     rax, [r13+0A68h]
 * 0000000140BC1AEB: cmp     [r13+918h], r11d
 * 0000000140BC1AF2: jnz     loc_140BC1C20
 * 0000000140BC1AF8: mov     rcx, r8
 * 0000000140BC1AFB: xor     rcx, rax
 * 0000000140BC1AFE: mov     rax, [r13+588h]
 * 0000000140BC1B05: mov     [rax+18h], rcx
 * 0000000140BC1B09: cmp     [r13+918h], r11d
 * 0000000140BC1B10: jnz     loc_140BC1C20
 * 0000000140BC1B16: mov     rbx, 0A3A03F5891C8B4E8h
 * 0000000140BC1B20: lea     rax, [rbx+r13]
 * 0000000140BC1B24: mov     [r13+920h], rax
 * 0000000140BC1B2B: mov     [r13+928h], r11
 * 0000000140BC1B32: mov     qword ptr [r13+930h], 109h
 * 0000000140BC1B3D: mov     [r13+938h], r8
 * 0000000140BC1B44: mov     [r13+918h], r14d
 * 0000000140BC1B4B: mov     ecx, [r13+9D8h]
 * 0000000140BC1B52: bt      ecx, 1Dh
 * 0000000140BC1B56: jb      loc_140BC1C2A
 * 0000000140BC1B5C: test    dword ptr [r13+9DCh], 200000h
 * 0000000140BC1B67: jz      loc_140BC1C2A
 * 0000000140BC1B6D: test    r14b, cl
 * 0000000140BC1B70: jz      loc_140BC1C2A
 * 0000000140BC1B76: mov     ecx, [r13+0A74h]
 * 0000000140BC1B7D: mov     eax, [r13+804h]
 * 0000000140BC1B84: mov     r10, [r13+838h]
 * 0000000140BC1B8B: sub     eax, ecx
 * 0000000140BC1B8D: mov     r8, [r13+0A78h]
 * 0000000140BC1B94: lea     rdx, [rcx+r13]
 * 0000000140BC1B98: mov     ecx, eax
 * 0000000140BC1B9A: shr     rcx, 3
 * 0000000140BC1B9E: lea     r9, [rdx+rcx*8]
 * 0000000140BC1BA2: jmp     short loc_140BC1BC5
 * 0000000140BC1BA4: xor     [rdx], r8
 * 0000000140BC1BA7: mov     rax, [rdx]
 * 0000000140BC1BAA: movzx   ecx, r8b
 * 0000000140BC1BAE: xor     rax, r10
 * 0000000140BC1BB1: and     ecx, 3Fh
 * 0000000140BC1BB4: ror     r8, cl
 * 0000000140BC1BB7: add     r8, rax
 * 0000000140BC1BBA: xor     r8, 0EFAh
 * 0000000140BC1BC1: add     rdx, 8
 * 0000000140BC1BC5: cmp     rdx, r9
 * 0000000140BC1BC8: jnz     short loc_140BC1BA4
 * 0000000140BC1BCA: btr     dword ptr [r13+9DCh], 15h
 * 0000000140BC1BD3: cmp     r8, [r13+0A80h]
 * 0000000140BC1BDA: jz      short loc_140BC1C2A
 * 0000000140BC1BDC: mov     ecx, [r13+804h]
 * 0000000140BC1BE3: mov     rax, [r13+588h]
 * 0000000140BC1BEA: mov     [rax], r13
 * 0000000140BC1BED: mov     [rax+10h], ecx
 * 0000000140BC1BF0: mov     rcx, [r13+0A80h]
 * 0000000140BC1BF7: cmp     [r13+918h], r11d
 * 0000000140BC1BFE: jnz     short loc_140BC1C0E
 * 0000000140BC1C00: mov     rax, [r13+588h]
 * 0000000140BC1C07: xor     rcx, r8
 * 0000000140BC1C0A: mov     [rax+18h], rcx
 * 0000000140BC1C0E: xor     edx, edx
 * 0000000140BC1C10: mov     r9d, 100h
 * 0000000140BC1C16: mov     rcx, r13
 * 0000000140BC1C19: call    sub_140BD8384
 * 0000000140BC1C1E: jmp     short loc_140BC1C2A
 * 0000000140BC1C20: mov     rbx, 0A3A03F5891C8B4E8h
 * 0000000140BC1C2A: mov     ecx, [r13+9D8h]
 * 0000000140BC1C31: bt      ecx, 1Dh
 * 0000000140BC1C35: jb      loc_140BC1D2D
 * 0000000140BC1C3B: test    dword ptr [r13+9DCh], 200000h
 * 0000000140BC1C46: jz      loc_140BC1D2D
 * 0000000140BC1C4C: test    r14b, cl
 * 0000000140BC1C4F: jz      loc_140BC1D2D
 * 0000000140BC1C55: mov     ecx, [r13+0A74h]
 * 0000000140BC1C5C: mov     eax, [r13+804h]
 * 0000000140BC1C63: mov     r10, [r13+838h]
 * 0000000140BC1C6A: sub     eax, ecx
 * 0000000140BC1C6C: mov     rdx, [r13+0A78h]
 * 0000000140BC1C73: lea     r8, [rcx+r13]
 * 0000000140BC1C77: mov     ecx, eax
 * 0000000140BC1C79: shr     rcx, 3
 * 0000000140BC1C7D: lea     r9, [r8+rcx*8]
 * 0000000140BC1C81: jmp     short loc_140BC1CA3
 * 0000000140BC1C83: xor     [r8], rdx
 * 0000000140BC1C86: mov     rax, [r8]
 * 0000000140BC1C89: movzx   ecx, dl
 * 0000000140BC1C8C: xor     rax, r10
 * 0000000140BC1C8F: and     ecx, 3Fh
 * 0000000140BC1C92: ror     rdx, cl
 * 0000000140BC1C95: add     rdx, rax
 * 0000000140BC1C98: xor     rdx, 0EFAh
 * 0000000140BC1C9F: add     r8, 8
 * 0000000140BC1CA3: cmp     r8, r9
 * 0000000140BC1CA6: jnz     short loc_140BC1C83
 * 0000000140BC1CA8: btr     dword ptr [r13+9DCh], 15h
 * 0000000140BC1CB1: xor     r10d, r10d
 * 0000000140BC1CB4: cmp     rdx, [r13+0A80h]
 * 0000000140BC1CBB: jz      short loc_140BC1D30
 * 0000000140BC1CBD: mov     ecx, [r13+804h]
 * 0000000140BC1CC4: mov     rax, [r13+588h]
 * 0000000140BC1CCB: mov     [rax], r13
 * 0000000140BC1CCE: mov     [rax+10h], ecx
 * 0000000140BC1CD1: mov     rcx, [r13+0A80h]
 * 0000000140BC1CD8: cmp     [r13+918h], r10d
 * 0000000140BC1CDF: jnz     short loc_140BC1D30
 * 0000000140BC1CE1: mov     rax, [r13+588h]
 * 0000000140BC1CE8: xor     rcx, rdx
 * 0000000140BC1CEB: mov     [rax+18h], rcx
 * 0000000140BC1CEF: cmp     [r13+918h], r10d
 * 0000000140BC1CF6: jnz     short loc_140BC1D30
 * 0000000140BC1CF8: lea     rax, [rbx+r13]
 * 0000000140BC1CFC: mov     rcx, r13
 * 0000000140BC1CFF: mov     [r13+920h], rax
 * 0000000140BC1D06: mov     [r13+928h], r10
 * 0000000140BC1D0D: mov     qword ptr [r13+930h], 100h
 * 0000000140BC1D18: mov     [r13+938h], rdx
 * 0000000140BC1D1F: xor     edx, edx
 * 0000000140BC1D21: mov     [r13+918h], r14d
 * 0000000140BC1D28: call    sub_140BD84C8
 * 0000000140BC1D2D: xor     r10d, r10d
 * 0000000140BC1D30: test    dword ptr [r13+9D8h], 20000000h
 * 0000000140BC1D3B: mov     rsi, r13
 * 0000000140BC1D3E: mov     [rsp+9D0h+var_970], r13
 * 0000000140BC1D43: mov     rbx, r13
 * 0000000140BC1D46: jz      short loc_140BC1D52
 * 0000000140BC1D48: mov     [rsp+9D0h+var_970], r13
 * 0000000140BC1D4D: jmp     loc_140BC24F5
 * 0000000140BC1D52: mov     ecx, [r13+9B8h]
 * 0000000140BC1D59: test    ecx, ecx
 * 0000000140BC1D5B: jz      loc_140BC1F69
 * 0000000140BC1D61: cmp     ecx, 1
 * 0000000140BC1D64: jnz     loc_140BC24E7
 * 0000000140BC1D6A: mov     r13d, ecx
 * 0000000140BC1D6D: mov     rax, [rsi+610h]
 * 0000000140BC1D74: mov     rbx, rsi
 * 0000000140BC1D77: test    rax, rax
 * 0000000140BC1D7A: jz      loc_140BC24E7
 * 0000000140BC1D80: mov     rax, [rax]
 * 0000000140BC1D83: test    rax, rax
 * 0000000140BC1D86: jz      loc_140BC24E7
 * 0000000140BC1D8C: mov     rax, [rsi+610h]
 * 0000000140BC1D93: mov     r14, [rax]
 * 0000000140BC1D96: lock or [rsp+9D0h+var_9D0], r10d
 * 0000000140BC1D9B: mov     r10d, [r14+804h]
 * 0000000140BC1DA2: mov     r9, r14
 * 0000000140BC1DA5: mov     r11d, [r14+834h]
 * 0000000140BC1DAC: mov     rax, r14
 * 0000000140BC1DAF: mov     r15, [r14+838h]
 * 0000000140BC1DB6: lea     rcx, [r14+r10]
 * 0000000140BC1DBA: cmp     r14, rcx
 * 0000000140BC1DBD: jnb     short loc_140BC1DCF
 * 0000000140BC1DBF: mov     edx, 40h ; '@'
 * 0000000140BC1DC4: prefetchnta byte ptr [rax]
 * 0000000140BC1DC7: add     rax, rdx
 * 0000000140BC1DCA: cmp     rax, rcx
 * 0000000140BC1DCD: jb      short loc_140BC1DC4
 * 0000000140BC1DCF: mov     ebx, r10d
 * 0000000140BC1DD2: mov     r8, r15
 * 0000000140BC1DD5: shr     ebx, 7
 * 0000000140BC1DD8: mov     r12d, 0FFFFFFFFh
 * 0000000140BC1DDE: test    ebx, ebx
 * 0000000140BC1DE0: jz      short loc_140BC1E42
 * 0000000140BC1DE2: mov     rsi, 7010008004002001h
 * 0000000140BC1DEC: mov     eax, 8
 * 0000000140BC1DF1: xor     r8, [r9]
 * 0000000140BC1DF4: mov     ecx, r11d
 * 0000000140BC1DF7: rol     r8, cl
 * 0000000140BC1DFA: xor     r8, [r9+8]
 * 0000000140BC1DFE: add     r9, 10h
 * 0000000140BC1E02: rol     r8, cl
 * 0000000140BC1E05: sub     rax, r13
 * 0000000140BC1E08: jnz     short loc_140BC1DF1
 * 0000000140BC1E0A: mov     rcx, r9
 * 0000000140BC1E0D: sub     rcx, r14
 * 0000000140BC1E10: xor     rcx, r15
 * 0000000140BC1E13: mov     rax, rcx
 * 0000000140BC1E16: rol     rax, 11h
 * 0000000140BC1E1A: xor     rcx, rax
 * 0000000140BC1E1D: mov     rax, rsi
 * 0000000140BC1E20: mul     rcx
 * 0000000140BC1E23: xor     r11d, edx
 * 0000000140BC1E26: mov     [rbp+8D0h+var_370], rdx
 * 0000000140BC1E2D: xor     r11d, eax
 * 0000000140BC1E30: and     r11d, 3Fh
 * 0000000140BC1E34: cmovz   r11d, r13d
 * 0000000140BC1E38: add     ebx, r12d
 * 0000000140BC1E3B: jnz     short loc_140BC1DEC
 * 0000000140BC1E3D: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC1E42: and     r10d, 7Fh
 * 0000000140BC1E46: cmp     r10d, 8
 * 0000000140BC1E4A: jb      short loc_140BC1E69
 * 0000000140BC1E4C: mov     eax, r10d
 * 0000000140BC1E4F: shr     rax, 3
 * 0000000140BC1E53: xor     r8, [r9]
 * 0000000140BC1E56: mov     ecx, r11d
 * 0000000140BC1E59: rol     r8, cl
 * 0000000140BC1E5C: add     r9, 8
 * 0000000140BC1E60: add     r10d, 0FFFFFFF8h
 * 0000000140BC1E64: sub     rax, r13
 * 0000000140BC1E67: jnz     short loc_140BC1E53
 * 0000000140BC1E69: test    r10d, r10d
 * 0000000140BC1E6C: jz      short loc_140BC1E83
 * 0000000140BC1E6E: movzx   eax, byte ptr [r9]
 * 0000000140BC1E72: mov     ecx, r11d
 * 0000000140BC1E75: xor     r8, rax
 * 0000000140BC1E78: add     r9, r13
 * 0000000140BC1E7B: rol     r8, cl
 * 0000000140BC1E7E: add     r10d, r12d
 * 0000000140BC1E81: jnz     short loc_140BC1E6E
 * 0000000140BC1E83: mov     rax, [rsi+618h]
 * 0000000140BC1E8A: mov     r12d, [r14+804h]
 * 0000000140BC1E91: cmp     r8, [rax]
 * 0000000140BC1E94: jz      loc_140BC2206
 * 0000000140BC1E9A: mov     rax, [rsi+588h]
 * 0000000140BC1EA1: xor     r10d, r10d
 * 0000000140BC1EA4: mov     [rax], r14
 * 0000000140BC1EA7: mov     [rax+10h], r12d
 * 0000000140BC1EAB: mov     rax, [rsi+618h]
 * 0000000140BC1EB2: mov     rcx, [rax]
 * 0000000140BC1EB5: cmp     [rsi+918h], r10d
 * 0000000140BC1EBC: jnz     loc_140BC21FE
 * 0000000140BC1EC2: mov     rax, [rsi+588h]
 * 0000000140BC1EC9: xor     rcx, r8
 * 0000000140BC1ECC: mov     [rax+18h], rcx
 * 0000000140BC1ED0: cmp     [rsi+918h], r10d
 * 0000000140BC1ED7: jnz     loc_140BC21FE
 * 0000000140BC1EDD: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC1EE7: add     rax, rsi
 * 0000000140BC1EEA: mov     [rsi+920h], rax
 * 0000000140BC1EF1: mov     [rsi+928h], r10
 * 0000000140BC1EF8: mov     qword ptr [rsi+930h], 111h
 * 0000000140BC1F03: mov     [rsi+938h], r8
 * 0000000140BC1F0A: mov     [rsi+918h], r13d
 * 0000000140BC1F11: mov     ecx, [rsi+9D8h]
 * 0000000140BC1F17: bt      ecx, 1Dh
 * 0000000140BC1F1B: jb      loc_140BC21FE
 * 0000000140BC1F21: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC1F2B: jz      loc_140BC21FE
 * 0000000140BC1F31: test    r13b, cl
 * 0000000140BC1F34: jz      loc_140BC21FE
 * 0000000140BC1F3A: mov     ecx, [rsi+0A74h]
 * 0000000140BC1F40: mov     eax, [rsi+804h]
 * 0000000140BC1F46: mov     r10, [rsi+838h]
 * 0000000140BC1F4D: sub     eax, ecx
 * 0000000140BC1F4F: mov     r8, [rsi+0A78h]
 * 0000000140BC1F56: lea     rdx, [rcx+rsi]
 * 0000000140BC1F5A: mov     ecx, eax
 * 0000000140BC1F5C: shr     rcx, 3
 * 0000000140BC1F60: lea     r9, [rdx+rcx*8]
 * 0000000140BC1F64: jmp     loc_140BC21A6
 * 0000000140BC1F69: mov     r14, [r13+610h]
 * 0000000140BC1F70: test    r14, r14
 * 0000000140BC1F73: jz      loc_140BC24E7
 * 0000000140BC1F79: cmp     [r14], r10
 * 0000000140BC1F7C: jz      loc_140BC24E7
 * 0000000140BC1F82: mov     r12d, [r13+858h]
 * 0000000140BC1F89: cmp     r12d, 7
 * 0000000140BC1F8D: mov     rbx, [rbp+8D0h+arg_0]
 * 0000000140BC1F94: mov     r13d, [r13+804h]
 * 0000000140BC1F9B: cmovnz  r15d, r10d
 * 0000000140BC1F9F: mov     r8d, [rbx+944h]
 * 0000000140BC1FA6: lea     eax, [r13+30h]
 * 0000000140BC1FAA: cmp     eax, [rbx+0A64h]
 * 0000000140BC1FB0: jbe     loc_140BC209A
 * 0000000140BC1FB6: mov     edx, eax
 * 0000000140BC1FB8: mov     rcx, rbx
 * 0000000140BC1FBB: call    sub_140BD7AF8
 * 0000000140BC1FC0: xor     r10d, r10d
 * 0000000140BC1FC3: mov     [rsp+9D0h+var_970], rax
 * 0000000140BC1FC8: mov     rsi, rax
 * 0000000140BC1FCB: test    rax, rax
 * 0000000140BC1FCE: jz      loc_140BC24E7
 * 0000000140BC1FD4: mov     ecx, [rbx+9D8h]
 * 0000000140BC1FDA: lea     eax, [r10+2]
 * 0000000140BC1FDE: test    al, cl
 * 0000000140BC1FE0: jnz     loc_140BC2091
 * 0000000140BC1FE6: mov     eax, [rbx+804h]
 * 0000000140BC1FEC: lea     r11d, [r10+1]
 * 0000000140BC1FF0: mov     r9, [rbx+7E8h]
 * 0000000140BC1FF7: and     ecx, 10000000h
 * 0000000140BC1FFD: neg     ecx
 * 0000000140BC1FFF: mov     rcx, rbx
 * 0000000140BC2002: sbb     edx, edx
 * 0000000140BC2004: and     edx, [rbx+944h]
 * 0000000140BC200A: cmp     eax, 8
 * 0000000140BC200D: jb      short loc_140BC2025
 * 0000000140BC200F: mov     r8d, eax
 * 0000000140BC2012: shr     r8, 3
 * 0000000140BC2016: mov     [rcx], r10
 * 0000000140BC2019: add     eax, 0FFFFFFF8h
 * 0000000140BC201C: add     rcx, 8
 * 0000000140BC2020: sub     r8, r11
 * 0000000140BC2023: jnz     short loc_140BC2016
 * 0000000140BC2025: test    eax, eax
 * 0000000140BC2027: jz      short loc_140BC203A
 * 0000000140BC2029: mov     r8d, 0FFFFFFFFh
 * 0000000140BC202F: mov     [rcx], r10b
 * 0000000140BC2032: add     rcx, r11
 * 0000000140BC2035: add     eax, r8d
 * 0000000140BC2038: jnz     short loc_140BC202F
 * 0000000140BC203A: mov     ebx, [rsi+944h]
 * 0000000140BC2040: mov     [rsi+944h], edx
 * 0000000140BC2046: cmp     edx, 3
 * 0000000140BC2049: jz      short loc_140BC2079
 * 0000000140BC204B: test    dword ptr [rsi+9D8h], 8000000h
 * 0000000140BC2055: jnz     short loc_140BC2070
 * 0000000140BC2057: test    edx, edx
 * 0000000140BC2059: jz      short loc_140BC2070
 * 0000000140BC205B: mov     rax, [rsi+238h]
 * 0000000140BC2062: lea     rcx, [r9-8]
 * 0000000140BC2066: mov     rdx, [rcx]
 * 0000000140BC2069: call    KeGuardDispatchICall
 * 0000000140BC206E: jmp     short loc_140BC2088
 * 0000000140BC2070: mov     rax, [rsi+108h]
 * 0000000140BC2077: jmp     short loc_140BC2080
 * 0000000140BC2079: mov     rax, [rsi+368h]
 * 0000000140BC2080: mov     rcx, r9
 * 0000000140BC2083: call    KeGuardDispatchICall
 * 0000000140BC2088: mov     [rsi+944h], ebx
 * 0000000140BC208E: xor     r10d, r10d
 * 0000000140BC2091: and     dword ptr [rsi+9D8h], 0FFFFFFFDh
 * 0000000140BC2098: jmp     short loc_140BC20A8
 * 0000000140BC209A: mov     rsi, rbx
 * 0000000140BC209D: mov     [rsp+9D0h+var_970], rbx
 * 0000000140BC20A2: mov     [rbx+804h], eax
 * 0000000140BC20A8: mov     eax, 1
 * 0000000140BC20AD: lea     rbx, [rsi+r13]
 * 0000000140BC20B1: add     [rsi+82Ch], eax
 * 0000000140BC20B7: mov     [rbp+8D0h+var_378], rbx
 * 0000000140BC20BE: lea     ecx, [rax+2Fh]
 * 0000000140BC20C1: mov     rax, rbx
 * 0000000140BC20C4: lea     edx, [rcx-2Ah]
 * 0000000140BC20C7: lea     r13d, [rcx-2Fh]
 * 0000000140BC20CB: mov     [rax], r10
 * 0000000140BC20CE: add     ecx, 0FFFFFFF8h
 * 0000000140BC20D1: add     rax, 8
 * 0000000140BC20D5: sub     rdx, r13
 * 0000000140BC20D8: jnz     short loc_140BC20CB
 * 0000000140BC20DA: test    ecx, ecx
 * 0000000140BC20DC: jz      short loc_140BC20ED
 * 0000000140BC20DE: mov     edx, 0FFFFFFFFh
 * 0000000140BC20E3: mov     [rax], r10b
 * 0000000140BC20E6: add     rax, r13
 * 0000000140BC20E9: add     ecx, edx
 * 0000000140BC20EB: jnz     short loc_140BC20E3
 * 0000000140BC20ED: mov     [rbx], r15d
 * 0000000140BC20F0: mov     [rbx+8], r14
 * 0000000140BC20F4: cmp     r12d, 7
 * 0000000140BC20F8: jnz     short loc_140BC2111
 * 0000000140BC20FA: lea     r9, [rbx+18h]
 * 0000000140BC20FE: mov     rdx, r14
 * 0000000140BC2101: lea     r8d, [r12+1]
 * 0000000140BC2106: mov     rcx, rsi
 * 0000000140BC2109: call    sub_14051927C
 * 0000000140BC210E: xor     r10d, r10d
 * 0000000140BC2111: mov     dword ptr [rbx+10h], 8
 * 0000000140BC2118: lea     r8, [r14+8]
 * 0000000140BC211C: add     dword ptr [rsi+848h], 8
 * 0000000140BC2123: mov     rdx, r14
 * 0000000140BC2126: mov     ecx, [rsi+834h]
 * 0000000140BC212C: mov     rax, [rsi+838h]
 * 0000000140BC2133: cmp     r14, r8
 * 0000000140BC2136: jnb     short loc_140BC2144
 * 0000000140BC2138: prefetchnta byte ptr [rdx]
 * 0000000140BC213B: add     rdx, 40h ; '@'
 * 0000000140BC213F: cmp     rdx, r8
 * 0000000140BC2142: jb      short loc_140BC2138
 * 0000000140BC2144: xor     rax, [r14]
 * 0000000140BC2147: rol     rax, cl
 * 0000000140BC214A: mov     rcx, rax
 * 0000000140BC214D: jmp     short loc_140BC2151
 * 0000000140BC214F: xor     eax, ecx
 * 0000000140BC2151: shr     rcx, 1Fh
 * 0000000140BC2155: test    rcx, rcx
 * 0000000140BC2158: jnz     short loc_140BC214F
 * 0000000140BC215A: btr     eax, 1Fh
 * 0000000140BC215E: mov     [rbx+14h], eax
 * 0000000140BC2161: add     dword ptr [rsi+848h], 8
 * 0000000140BC2168: test    rsi, rsi
 * 0000000140BC216B: jnz     short loc_140BC2179
 * 0000000140BC216D: mov     rbx, [rbp+8D0h+arg_0]
 * 0000000140BC2174: jmp     loc_140BC24E7
 * 0000000140BC2179: add     [rsi+9B8h], r13d
 * 0000000140BC2180: jmp     loc_140BC1D6D
 * 0000000140BC2185: xor     [rdx], r8
 * 0000000140BC2188: mov     rax, [rdx]
 * 0000000140BC218B: movzx   ecx, r8b
 * 0000000140BC218F: xor     rax, r10
 * 0000000140BC2192: and     ecx, 3Fh
 * 0000000140BC2195: ror     r8, cl
 * 0000000140BC2198: add     r8, rax
 * 0000000140BC219B: xor     r8, 0EFAh
 * 0000000140BC21A2: add     rdx, 8
 * 0000000140BC21A6: cmp     rdx, r9
 * 0000000140BC21A9: jnz     short loc_140BC2185
 * 0000000140BC21AB: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC21B3: cmp     r8, [rsi+0A80h]
 * 0000000140BC21BA: jz      short loc_140BC21FE
 * 0000000140BC21BC: mov     rax, [rsi+588h]
 * 0000000140BC21C3: mov     ecx, [rsi+804h]
 * 0000000140BC21C9: mov     [rax], rsi
 * 0000000140BC21CC: mov     [rax+10h], ecx
 * 0000000140BC21CF: xor     eax, eax
 * 0000000140BC21D1: mov     rcx, [rsi+0A80h]
 * 0000000140BC21D8: cmp     [rsi+918h], eax
 * 0000000140BC21DE: jnz     short loc_140BC21EE
 * 0000000140BC21E0: mov     rax, [rsi+588h]
 * 0000000140BC21E7: xor     rcx, r8
 * 0000000140BC21EA: mov     [rax+18h], rcx
 * 0000000140BC21EE: xor     edx, edx
 * 0000000140BC21F0: mov     r9d, 100h
 * 0000000140BC21F6: mov     rcx, rsi
 * 0000000140BC21F9: call    sub_140BD8384
 * 0000000140BC21FE: mov     rbx, rsi
 * 0000000140BC2201: jmp     loc_140BC24E7
 * 0000000140BC2206: mov     r15d, [rsi+804h]
 * 0000000140BC220D: mov     r13d, 20h ; ' '
 * 0000000140BC2213: mov     r9d, [rsi+858h]
 * 0000000140BC221A: cmp     r9d, 7
 * 0000000140BC221E: mov     r8d, [rsi+944h]
 * 0000000140BC2225: mov     dword ptr [rsp+9D0h+var_960], r9d
 * 0000000140BC222A: lea     r10d, [r13-20h]
 * 0000000140BC222E: mov     dword ptr [rbp+8D0h+arg_8], r15d
 * 0000000140BC2235: lea     eax, [r15+30h]
 * 0000000140BC2239: cmovnz  r13d, r10d
 * 0000000140BC223D: cmp     eax, [rsi+0A64h]
 * 0000000140BC2243: jbe     loc_140BC2336
 * 0000000140BC2249: mov     edx, eax
 * 0000000140BC224B: mov     rcx, rsi
 * 0000000140BC224E: call    sub_140BD7AF8
 * 0000000140BC2253: xor     r10d, r10d
 * 0000000140BC2256: mov     rbx, rax
 * 0000000140BC2259: test    rax, rax
 * 0000000140BC225C: jz      loc_140BC24EF
 * 0000000140BC2262: mov     ecx, [rsi+9D8h]
 * 0000000140BC2268: lea     eax, [r10+2]
 * 0000000140BC226C: test    al, cl
 * 0000000140BC226E: jnz     loc_140BC2328
 * 0000000140BC2274: mov     eax, [rsi+804h]
 * 0000000140BC227A: lea     r11d, [r10+1]
 * 0000000140BC227E: mov     r9, [rsi+7E8h]
 * 0000000140BC2285: and     ecx, 10000000h
 * 0000000140BC228B: neg     ecx
 * 0000000140BC228D: mov     rcx, rsi
 * 0000000140BC2290: sbb     edx, edx
 * 0000000140BC2292: and     edx, [rsi+944h]
 * 0000000140BC2298: cmp     eax, 8
 * 0000000140BC229B: jb      short loc_140BC22B3
 * 0000000140BC229D: mov     r8d, eax
 * 0000000140BC22A0: shr     r8, 3
 * 0000000140BC22A4: mov     [rcx], r10
 * 0000000140BC22A7: add     eax, 0FFFFFFF8h
 * 0000000140BC22AA: add     rcx, 8
 * 0000000140BC22AE: sub     r8, r11
 * 0000000140BC22B1: jnz     short loc_140BC22A4
 * 0000000140BC22B3: test    eax, eax
 * 0000000140BC22B5: jz      short loc_140BC22C8
 * 0000000140BC22B7: mov     r8d, 0FFFFFFFFh
 * 0000000140BC22BD: mov     [rcx], r10b
 * 0000000140BC22C0: add     rcx, r11
 * 0000000140BC22C3: add     eax, r8d
 * 0000000140BC22C6: jnz     short loc_140BC22BD
 * 0000000140BC22C8: mov     r15d, [rbx+944h]
 * 0000000140BC22CF: mov     [rbx+944h], edx
 * 0000000140BC22D5: cmp     edx, 3
 * 0000000140BC22D8: jz      short loc_140BC2308
 * 0000000140BC22DA: test    dword ptr [rbx+9D8h], 8000000h
 * 0000000140BC22E4: jnz     short loc_140BC22FF
 * 0000000140BC22E6: test    edx, edx
 * 0000000140BC22E8: jz      short loc_140BC22FF
 * 0000000140BC22EA: mov     rax, [rbx+238h]
 * 0000000140BC22F1: lea     rcx, [r9-8]
 * 0000000140BC22F5: mov     rdx, [rcx]
 * 0000000140BC22F8: call    KeGuardDispatchICall
 * 0000000140BC22FD: jmp     short loc_140BC2317
 * 0000000140BC22FF: mov     rax, [rbx+108h]
 * 0000000140BC2306: jmp     short loc_140BC230F
 * 0000000140BC2308: mov     rax, [rbx+368h]
 * 0000000140BC230F: mov     rcx, r9
 * 0000000140BC2312: call    KeGuardDispatchICall
 * 0000000140BC2317: mov     [rbx+944h], r15d
 * 0000000140BC231E: xor     r10d, r10d
 * 0000000140BC2321: mov     r15d, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BC2328: and     dword ptr [rbx+9D8h], 0FFFFFFFDh
 * 0000000140BC232F: mov     r9d, dword ptr [rsp+9D0h+var_960]
 * 0000000140BC2334: jmp     short loc_140BC233F
 * 0000000140BC2336: mov     rbx, rsi
 * 0000000140BC2339: mov     [rsi+804h], eax
 * 0000000140BC233F: mov     r8d, 1
 * 0000000140BC2345: add     [rbx+82Ch], r8d
 * 0000000140BC234C: add     r15, rbx
 * 0000000140BC234F: mov     [rbp+8D0h+arg_8], r15
 * 0000000140BC2356: mov     rax, r15
 * 0000000140BC2359: lea     ecx, [r8+2Fh]
 * 0000000140BC235D: mov     [rbp+8D0h+var_368], r15
 * 0000000140BC2364: lea     edx, [rcx-2Ah]
 * 0000000140BC2367: mov     [rax], r10
 * 0000000140BC236A: add     ecx, 0FFFFFFF8h
 * 0000000140BC236D: add     rax, 8
 * 0000000140BC2371: sub     rdx, r8
 * 0000000140BC2374: jnz     short loc_140BC2367
 * 0000000140BC2376: test    ecx, ecx
 * 0000000140BC2378: jz      short loc_140BC2389
 * 0000000140BC237A: mov     edx, 0FFFFFFFFh
 * 0000000140BC237F: mov     [rax], r10b
 * 0000000140BC2382: add     rax, r8
 * 0000000140BC2385: add     ecx, edx
 * 0000000140BC2387: jnz     short loc_140BC237F
 * 0000000140BC2389: mov     [r15], r13d
 * 0000000140BC238C: mov     [r15+8], r14
 * 0000000140BC2390: cmp     r9d, 7
 * 0000000140BC2394: jnz     short loc_140BC23AD
 * 0000000140BC2396: test    r12d, r12d
 * 0000000140BC2399: jz      short loc_140BC23AD
 * 0000000140BC239B: lea     r9, [r15+18h]
 * 0000000140BC239F: mov     r8d, r12d
 * 0000000140BC23A2: mov     rdx, r14
 * 0000000140BC23A5: mov     rcx, rbx
 * 0000000140BC23A8: call    sub_14051927C
 * 0000000140BC23AD: mov     [r15+10h], r12d
 * 0000000140BC23B1: lea     rcx, [r14+r12]
 * 0000000140BC23B5: add     [rbx+848h], r12d
 * 0000000140BC23BC: mov     r9, r14
 * 0000000140BC23BF: mov     r10d, [rbx+834h]
 * 0000000140BC23C6: mov     rax, r14
 * 0000000140BC23C9: mov     r13, [rbx+838h]
 * 0000000140BC23D0: cmp     r14, rcx
 * 0000000140BC23D3: jnb     short loc_140BC23E5
 * 0000000140BC23D5: mov     edx, 40h ; '@'
 * 0000000140BC23DA: prefetchnta byte ptr [rax]
 * 0000000140BC23DD: add     rax, rdx
 * 0000000140BC23E0: cmp     rax, rcx
 * 0000000140BC23E3: jb      short loc_140BC23DA
 * 0000000140BC23E5: mov     r11d, r12d
 * 0000000140BC23E8: mov     r8, r13
 * 0000000140BC23EB: shr     r11d, 7
 * 0000000140BC23EF: test    r11d, r11d
 * 0000000140BC23F2: jz      short loc_140BC246C
 * 0000000140BC23F4: mov     esi, 1
 * 0000000140BC23F9: mov     edi, 0FFFFFFFFh
 * 0000000140BC23FE: mov     r15, 7010008004002001h
 * 0000000140BC2408: mov     eax, 8
 * 0000000140BC240D: xor     r8, [r9]
 * 0000000140BC2410: mov     ecx, r10d
 * 0000000140BC2413: rol     r8, cl
 * 0000000140BC2416: xor     r8, [r9+8]
 * 0000000140BC241A: add     r9, 10h
 * 0000000140BC241E: rol     r8, cl
 * 0000000140BC2421: sub     rax, rsi
 * 0000000140BC2424: jnz     short loc_140BC240D
 * 0000000140BC2426: mov     rcx, r9
 * 0000000140BC2429: sub     rcx, r14
 * 0000000140BC242C: xor     rcx, r13
 * 0000000140BC242F: mov     rax, rcx
 * 0000000140BC2432: rol     rax, 11h
 * 0000000140BC2436: xor     rcx, rax
 * 0000000140BC2439: mov     rax, r15
 * 0000000140BC243C: mul     rcx
 * 0000000140BC243F: xor     r10d, edx
 * 0000000140BC2442: mov     [rbp+8D0h+var_360], rdx
 * 0000000140BC2449: xor     r10d, eax
 * 0000000140BC244C: and     r10d, 3Fh
 * 0000000140BC2450: cmovz   r10d, esi
 * 0000000140BC2454: add     r11d, edi
 * 0000000140BC2457: jnz     short loc_140BC2408
 * 0000000140BC2459: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC245E: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC2465: mov     r15, [rbp+8D0h+arg_8]
 * 0000000140BC246C: mov     edx, r12d
 * 0000000140BC246F: mov     r11d, 1
 * 0000000140BC2475: and     edx, 7Fh
 * 0000000140BC2478: cmp     edx, 8
 * 0000000140BC247B: jb      short loc_140BC2498
 * 0000000140BC247D: mov     eax, edx
 * 0000000140BC247F: shr     rax, 3
 * 0000000140BC2483: xor     r8, [r9]
 * 0000000140BC2486: mov     ecx, r10d
 * 0000000140BC2489: rol     r8, cl
 * 0000000140BC248C: add     r9, 8
 * 0000000140BC2490: add     edx, 0FFFFFFF8h
 * 0000000140BC2493: sub     rax, r11
 * 0000000140BC2496: jnz     short loc_140BC2483
 * 0000000140BC2498: test    edx, edx
 * 0000000140BC249A: jz      short loc_140BC24BA
 * 0000000140BC249C: mov     esi, 0FFFFFFFFh
 * 0000000140BC24A1: movzx   eax, byte ptr [r9]
 * 0000000140BC24A5: mov     ecx, r10d
 * 0000000140BC24A8: xor     r8, rax
 * 0000000140BC24AB: add     r9, r11
 * 0000000140BC24AE: rol     r8, cl
 * 0000000140BC24B1: add     edx, esi
 * 0000000140BC24B3: jnz     short loc_140BC24A1
 * 0000000140BC24B5: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC24BA: mov     rax, r8
 * 0000000140BC24BD: jmp     short loc_140BC24C2
 * 0000000140BC24BF: xor     r8d, eax
 * 0000000140BC24C2: shr     rax, 1Fh
 * 0000000140BC24C6: test    rax, rax
 * 0000000140BC24C9: jnz     short loc_140BC24BF
 * 0000000140BC24CB: btr     r8d, 1Fh
 * 0000000140BC24D0: mov     [r15+14h], r8d
 * 0000000140BC24D4: add     [rbx+848h], r12d
 * 0000000140BC24DB: test    rbx, rbx
 * 0000000140BC24DE: jz      short loc_140BC24EF
 * 0000000140BC24E0: add     [rbx+9B8h], r11d
 * 0000000140BC24E7: mov     [rsp+9D0h+var_970], rbx
 * 0000000140BC24EC: mov     rsi, rbx
 * 0000000140BC24EF: mov     r12d, 6
 * 0000000140BC24F5: mov     eax, [rsi+9DCh]
 * 0000000140BC24FB: mov     r11d, 1000h
 * 0000000140BC2501: test    al, 8
 * 0000000140BC2503: jz      loc_140BC260E
 * 0000000140BC2509: test    r11d, eax
 * 0000000140BC250C: jnz     loc_140BC260E
 * 0000000140BC2512: rdtsc
 * 0000000140BC2514: shl     rdx, 20h
 * 0000000140BC2518: mov     rbx, 7010008004002001h
 * 0000000140BC2522: or      rax, rdx
 * 0000000140BC2525: mov     rcx, rax
 * 0000000140BC2528: ror     rax, 3
 * 0000000140BC252C: xor     rcx, rax
 * 0000000140BC252F: mov     rax, rbx
 * 0000000140BC2532: mul     rcx
 * 0000000140BC2535: mov     [rbp+8D0h+var_358], rdx
 * 0000000140BC253C: xor     dl, al
 * 0000000140BC253E: test    dl, 3
 * 0000000140BC2541: jnz     loc_140BC260E
 * 0000000140BC2547: mov     rax, [rsi+100h]
 * 0000000140BC254E: mov     ecx, 40h ; '@'
 * 0000000140BC2553: mov     r8d, [rsi+830h]
 * 0000000140BC255A: mov     rdx, [rsi+778h]
 * 0000000140BC2561: call    KeGuardDispatchICall
 * 0000000140BC2566: xor     r13d, r13d
 * 0000000140BC2569: mov     r15, rax
 * 0000000140BC256C: test    rax, rax
 * 0000000140BC256F: jz      loc_140BC2608
 * 0000000140BC2575: mov     rax, [rsi+1B8h]
 * 0000000140BC257C: mov     rcx, r15
 * 0000000140BC257F: movzx   edx, word ptr [rsi+780h]
 * 0000000140BC2586: call    KeGuardDispatchICall
 * 0000000140BC258B: mov     rcx, [rsi+6F8h]
 * 0000000140BC2592: mov     rax, [rsi+510h]
 * 0000000140BC2599: mov     r14d, [rcx+rax]
 * 0000000140BC259D: test    r14d, r14d
 * 0000000140BC25A0: jz      short loc_140BC25CD
 * 0000000140BC25A2: rdtsc
 * 0000000140BC25A4: shl     rdx, 20h
 * 0000000140BC25A8: or      rax, rdx
 * 0000000140BC25AB: mov     rcx, rax
 * 0000000140BC25AE: ror     rax, 3
 * 0000000140BC25B2: xor     rcx, rax
 * 0000000140BC25B5: mov     rax, rbx
 * 0000000140BC25B8: mul     rcx
 * 0000000140BC25BB: mov     [rbp+8D0h+var_350], rdx
 * 0000000140BC25C2: xor     rax, rdx
 * 0000000140BC25C5: xor     edx, edx
 * 0000000140BC25C7: div     r14
 * 0000000140BC25CA: mov     r14, rdx
 * 0000000140BC25CD: xor     ecx, ecx
 * 0000000140BC25CF: jmp     short loc_140BC25E5
 * 0000000140BC25D1: mov     rcx, rbx
 * 0000000140BC25D4: test    r14d, r14d
 * 0000000140BC25D7: jz      loc_140BC2738
 * 0000000140BC25DD: mov     eax, 0FFFFFFFFh
 * 0000000140BC25E2: add     r14d, eax
 * 0000000140BC25E5: mov     rax, [rsi+3B0h]
 * 0000000140BC25EC: call    KeGuardDispatchICall
 * 0000000140BC25F1: mov     rbx, rax
 * 0000000140BC25F4: test    rax, rax
 * 0000000140BC25F7: jnz     short loc_140BC25D1
 * 0000000140BC25F9: mov     rax, [rsi+108h]
 * 0000000140BC2600: mov     rcx, r15
 * 0000000140BC2603: call    KeGuardDispatchICall
 * 0000000140BC2608: mov     r11d, 1000h
 * 0000000140BC260E: xor     r15d, r15d
 * 0000000140BC2611: mov     [rbp+8D0h+var_8E0], r15d
 * 0000000140BC2615: lea     ebx, [r15+1]
 * 0000000140BC2619: mov     [rbp+8D0h+var_898], r15
 * 0000000140BC261D: lea     rax, [rbp+8D0h+var_890]
 * 0000000140BC2621: mov     ecx, 4
 * 0000000140BC2626: mov     edx, 0FFFFFFFFh
 * 0000000140BC262B: mov     [rax], r15b
 * 0000000140BC262E: add     rax, rbx
 * 0000000140BC2631: add     ecx, edx
 * 0000000140BC2633: jnz     short loc_140BC262B
 * 0000000140BC2635: mov     eax, [rsi+84Ch]
 * 0000000140BC263B: mov     edx, 28h ; '('
 * 0000000140BC2640: mov     ecx, [rsi+840h]
 * 0000000140BC2646: mov     [rbp+8D0h+var_8C4], ecx
 * 0000000140BC2649: lea     r14d, [rdx-23h]
 * 0000000140BC264D: cmp     [rsi+848h], eax
 * 0000000140BC2653: jge     loc_140BD0466
 * 0000000140BC2659: mov     eax, [rsi+9D8h]
 * 0000000140BC265F: mov     r8d, 88000h
 * 0000000140BC2665: and     eax, r8d
 * 0000000140BC2668: cmp     eax, r8d
 * 0000000140BC266B: jz      short loc_140BC2671
 * 0000000140BC266D: mov     dr7, r15
 * 0000000140BC2671: cmp     ecx, [rsi+82Ch]
 * 0000000140BC2677: jnz     short loc_140BC2685
 * 0000000140BC2679: add     [rsi+850h], ebx
 * 0000000140BC267F: mov     ecx, r15d
 * 0000000140BC2682: mov     [rbp+8D0h+var_8C4], ecx
 * 0000000140BC2685: mov     rax, [rsi+0AC0h]
 * 0000000140BC268C: mov     r8, rsi
 * 0000000140BC268F: test    rax, rax
 * 0000000140BC2692: mov     r9d, r15d
 * 0000000140BC2695: cmovnz  r8, rax
 * 0000000140BC2699: mov     r13d, [r8+828h]
 * 0000000140BC26A0: add     r13, r8
 * 0000000140BC26A3: mov     [rsp+9D0h+var_980], r13
 * 0000000140BC26A8: cmp     dword ptr [rbp+8D0h+var_898], r15d
 * 0000000140BC26AC: jz      short loc_140BC26C3
 * 0000000140BC26AE: cmp     dword ptr [rbp+8D0h+var_898+4], ecx
 * 0000000140BC26B1: ja      short loc_140BC26C3
 * 0000000140BC26B3: mov     r13d, [rbp+8D0h+var_890]
 * 0000000140BC26B7: mov     r9d, dword ptr [rbp+8D0h+var_898+4]
 * 0000000140BC26BB: add     r13, r8
 * 0000000140BC26BE: mov     [rsp+9D0h+var_980], r13
 * 0000000140BC26C3: cmp     r9d, ecx
 * 0000000140BC26C6: jz      loc_140BC2939
 * 0000000140BC26CC: mov     r10d, ecx
 * 0000000140BC26CF: mov     esi, 2
 * 0000000140BC26D4: sub     r10d, r9d
 * 0000000140BC26D7: mov     rdi, 0AAAAAAAAAAAAAAABh
 * 0000000140BC26E1: mov     r9d, ecx
 * 0000000140BC26E4: mov     ecx, [r13+0]
 * 0000000140BC26E8: sub     ecx, 1
 * 0000000140BC26EB: jz      loc_140BC2903
 * 0000000140BC26F1: sub     ecx, r12d
 * 0000000140BC26F4: jz      loc_140BC28F5
 * 0000000140BC26FA: sub     ecx, 1
 * 0000000140BC26FD: jz      loc_140BC28E8
 * 0000000140BC2703: sub     ecx, esi
 * 0000000140BC2705: jz      loc_140BC28DC
 * 0000000140BC270B: sub     ecx, 12h
 * 0000000140BC270E: jz      loc_140BC28D5
 * 0000000140BC2714: sub     ecx, esi
 * 0000000140BC2716: jz      loc_140BC28A9
 * 0000000140BC271C: sub     ecx, 3
 * 0000000140BC271F: jz      loc_140BC2881
 * 0000000140BC2725: cmp     ecx, 0Ah
 * 0000000140BC2728: jz      loc_140BC2903
 * 0000000140BC272E: mov     eax, 30h ; '0'
 * 0000000140BC2733: jmp     loc_140BC2918
 * 0000000140BC2738: mov     rax, [rsi+3A0h]
 * 0000000140BC273F: call    KeGuardDispatchICall
 * 0000000140BC2744: mov     rcx, rbx
 * 0000000140BC2747: test    eax, eax
 * 0000000140BC2749: jns     short loc_140BC275C
 * 0000000140BC274B: mov     rax, [rsi+3B8h]
 * 0000000140BC2752: call    KeGuardDispatchICall
 * 0000000140BC2757: jmp     loc_140BC25F9
 * 0000000140BC275C: mov     rax, [rsi+438h]
 * 0000000140BC2763: lea     rdx, [rbp+8D0h+var_78]
 * 0000000140BC276A: call    KeGuardDispatchICall
 * 0000000140BC276F: mov     rax, [rsi+1D8h]
 * 0000000140BC2776: xor     r9d, r9d
 * 0000000140BC2779: xor     r8d, r8d
 * 0000000140BC277C: mov     [rsp+9D0h+BugCheckParameter4], r13
 * 0000000140BC2781: mov     rdx, r15
 * 0000000140BC2784: mov     rcx, rbx
 * 0000000140BC2787: call    KeGuardDispatchICall
 * 0000000140BC278C: rdtsc
 * 0000000140BC278E: shl     rdx, 20h
 * 0000000140BC2792: or      rax, rdx
 * 0000000140BC2795: mov     rcx, rax
 * 0000000140BC2798: ror     rax, 3
 * 0000000140BC279C: xor     rcx, rax
 * 0000000140BC279F: mov     rax, 7010008004002001h
 * 0000000140BC27A9: mul     rcx
 * 0000000140BC27AC: mov     rcx, r15
 * 0000000140BC27AF: mov     rbx, rdx
 * 0000000140BC27B2: mov     [rbp+8D0h+var_348], rdx
 * 0000000140BC27B9: xor     rbx, rax
 * 0000000140BC27BC: mov     rax, [rsi+1D0h]
 * 0000000140BC27C3: call    KeGuardDispatchICall
 * 0000000140BC27C8: mov     ecx, eax
 * 0000000140BC27CA: xor     edx, edx
 * 0000000140BC27CC: mov     rax, rbx
 * 0000000140BC27CF: div     rcx
 * 0000000140BC27D2: mov     rbx, rdx
 * 0000000140BC27D5: cli
 * 0000000140BC27D6: sti
 * 0000000140BC27D7: mov     rax, [rsi+1B0h]
 * 0000000140BC27DE: lea     rcx, [rbp+8D0h+var_5F8]
 * 0000000140BC27E5: xor     edx, edx
 * 0000000140BC27E7: call    KeGuardDispatchICall
 * 0000000140BC27EC: mov     rax, [rsi+1C0h]
 * 0000000140BC27F3: lea     rcx, [rbp+8D0h+var_248]
 * 0000000140BC27FA: mov     rdx, r15
 * 0000000140BC27FD: call    KeGuardDispatchICall
 * 0000000140BC2802: jmp     short loc_140BC280F
 * 0000000140BC2804: test    ebx, ebx
 * 0000000140BC2806: jz      short loc_140BC282C
 * 0000000140BC2808: mov     eax, 0FFFFFFFFh
 * 0000000140BC280D: add     ebx, eax
 * 0000000140BC280F: mov     rax, [rsi+1C8h]
 * 0000000140BC2816: lea     rdx, [rbp+8D0h+var_248]
 * 0000000140BC281D: lea     rcx, [rbp+8D0h+var_880]
 * 0000000140BC2821: call    KeGuardDispatchICall
 * 0000000140BC2826: test    eax, eax
 * 0000000140BC2828: jns     short loc_140BC2804
 * 0000000140BC282A: jmp     short loc_140BC2842
 * 0000000140BC282C: mov     rax, [rsi+1B0h]
 * 0000000140BC2833: lea     rcx, [rbp+8D0h+var_5F8]
 * 0000000140BC283A: mov     edx, [rbp+8D0h+var_880]
 * 0000000140BC283D: call    KeGuardDispatchICall
 * 0000000140BC2842: mov     rax, [rsi+1E0h]
 * 0000000140BC2849: lea     rdx, [rbp+8D0h+var_260]
 * 0000000140BC2850: lea     rcx, [rbp+8D0h+var_5F8]
 * 0000000140BC2857: call    KeGuardDispatchICall
 * 0000000140BC285C: mov     rax, [rsi+108h]
 * 0000000140BC2863: mov     rcx, r15
 * 0000000140BC2866: call    KeGuardDispatchICall
 * 0000000140BC286B: mov     ebx, 1
 * 0000000140BC2870: mov     r11d, 1000h
 * 0000000140BC2876: mov     [rbp+8D0h+var_8E0], ebx
 * 0000000140BC2879: xor     r15d, r15d
 * 0000000140BC287C: jmp     loc_140BC2619
 * 0000000140BC2881: mov     ecx, [r13+20h]
 * 0000000140BC2885: mov     edx, [r13+28h]
 * 0000000140BC2889: and     ecx, 0FFFh
 * 0000000140BC288F: add     rdx, 0FFFh
 * 0000000140BC2896: add     rdx, rcx
 * 0000000140BC2899: shr     rdx, 0Ch
 * 0000000140BC289D: lea     eax, [rdx+rdx*4]
 * 0000000140BC28A0: lea     eax, ds:30h[rax*4]
 * 0000000140BC28A7: jmp     short loc_140BC2918
 * 0000000140BC28A9: mov     eax, [r13+24h]
 * 0000000140BC28AD: lea     ecx, [rax-1]
 * 0000000140BC28B0: neg     eax
 * 0000000140BC28B2: sbb     eax, eax
 * 0000000140BC28B4: and     ecx, eax
 * 0000000140BC28B6: mov     rax, rdi
 * 0000000140BC28B9: mul     rcx
 * 0000000140BC28BC: movzx   eax, word ptr [r13+28h]
 * 0000000140BC28C1: shr     rdx, 3
 * 0000000140BC28C5: add     edx, 7
 * 0000000140BC28C8: and     edx, 0FFFFFFF8h
 * 0000000140BC28CB: add     eax, esi
 * 0000000140BC28CD: lea     eax, [rax+rax*2]
 * 0000000140BC28D0: lea     eax, [rdx+rax*8]
 * 0000000140BC28D3: jmp     short loc_140BC2918
 * 0000000140BC28D5: movzx   eax, word ptr [r13+28h]
 * 0000000140BC28DA: jmp     short loc_140BC28ED
 * 0000000140BC28DC: mov     eax, [r13+1Ch]
 * 0000000140BC28E0: add     eax, 3
 * 0000000140BC28E3: shl     eax, 4
 * 0000000140BC28E6: jmp     short loc_140BC2918
 * 0000000140BC28E8: movzx   eax, word ptr [r13+20h]
 * 0000000140BC28ED: add     eax, 37h ; '7'
 * 0000000140BC28F0: and     eax, 0FFFFFFF8h
 * 0000000140BC28F3: jmp     short loc_140BC2918
 * 0000000140BC28F5: mov     eax, [r13+18h]
 * 0000000140BC28F9: add     eax, esi
 * 0000000140BC28FB: lea     eax, [rax+rax*2]
 * 0000000140BC28FE: shl     eax, 3
 * 0000000140BC2901: jmp     short loc_140BC2918
 * 0000000140BC2903: mov     ecx, [r13+10h]
 * 0000000140BC2907: mov     rax, rdi
 * 0000000140BC290A: mul     rcx
 * 0000000140BC290D: shr     rdx, 3
 * 0000000140BC2911: lea     eax, ds:30h[rdx*4]
 * 0000000140BC2918: add     r13, rax
 * 0000000140BC291B: sub     r10, rbx
 * 0000000140BC291E: jnz     loc_140BC26E4
 * 0000000140BC2924: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC2929: lea     edx, [r10+28h]
 * 0000000140BC292D: mov     [rsp+9D0h+var_980], r13
 * 0000000140BC2932: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC2939: mov     eax, r13d
 * 0000000140BC293C: mov     dword ptr [rbp+8D0h+var_898], ebx
 * 0000000140BC293F: sub     eax, r8d
 * 0000000140BC2942: mov     dword ptr [rbp+8D0h+var_898+4], r9d
 * 0000000140BC2946: mov     [rbp+8D0h+var_890], eax
 * 0000000140BC2949: mov     r10d, [r13+0]
 * 0000000140BC294D: mov     [rbp+8D0h+var_948], r10d
 * 0000000140BC2951: cmp     r10d, 1Eh
 * 0000000140BC2955: jg      loc_140BCA66F
 * 0000000140BC295B: jz      loc_140BC9DC6
 * 0000000140BC2961: mov     eax, 0Fh
 * 0000000140BC2966: cmp     r10d, eax
 * 0000000140BC2969: jg      loc_140BC4DBA
 * 0000000140BC296F: jz      loc_140BC4ABE
 * 0000000140BC2975: mov     ecx, r10d
 * 0000000140BC2978: test    r10d, r10d
 * 0000000140BC297B: jz      loc_140BC4785
 * 0000000140BC2981: sub     ecx, 1
 * 0000000140BC2984: jz      loc_140BCF4C9
 * 0000000140BC298A: sub     ecx, 3
 * 0000000140BC298D: jz      loc_140BC4349
 * 0000000140BC2993: sub     ecx, 1
 * 0000000140BC2996: jz      loc_140BC3DA1
 * 0000000140BC299C: mov     eax, 2
 * 0000000140BC29A1: sub     ecx, eax
 * 0000000140BC29A3: jz      loc_140BC3B68
 * 0000000140BC29A9: sub     ecx, 1
 * 0000000140BC29AC: jz      loc_140BC33DD
 * 0000000140BC29B2: sub     ecx, eax
 * 0000000140BC29B4: jz      loc_140BC2FF4
 * 0000000140BC29BA: cmp     ecx, 3
 * 0000000140BC29BD: jnz     loc_140BCD176
 * 0000000140BC29C3: mov     r14, [r13+8]
 * 0000000140BC29C7: mov     r8d, [r13+10h]
 * 0000000140BC29CB: mov     r9, r14
 * 0000000140BC29CE: add     [rsi+848h], r8d
 * 0000000140BC29D5: mov     rax, r14
 * 0000000140BC29D8: mov     r11d, [rsi+834h]
 * 0000000140BC29DF: mov     r15, [rsi+838h]
 * 0000000140BC29E6: lea     rcx, [r14+r8]
 * 0000000140BC29EA: cmp     r14, rcx
 * 0000000140BC29ED: jnb     short loc_140BC29FF
 * 0000000140BC29EF: mov     edx, 40h ; '@'
 * 0000000140BC29F4: prefetchnta byte ptr [rax]
 * 0000000140BC29F7: add     rax, rdx
 * 0000000140BC29FA: cmp     rax, rcx
 * 0000000140BC29FD: jb      short loc_140BC29F4
 * 0000000140BC29FF: xor     r12d, r12d
 * 0000000140BC2A02: mov     r10d, r8d
 * 0000000140BC2A05: shr     r10d, 7
 * 0000000140BC2A09: mov     rbx, r15
 * 0000000140BC2A0C: lea     edx, [r12+1]
 * 0000000140BC2A11: test    r10d, r10d
 * 0000000140BC2A14: jz      short loc_140BC2A86
 * 0000000140BC2A16: mov     esi, 0FFFFFFFFh
 * 0000000140BC2A1B: mov     rdi, 7010008004002001h
 * 0000000140BC2A25: mov     eax, 8
 * 0000000140BC2A2A: xor     rbx, [r9]
 * 0000000140BC2A2D: mov     ecx, r11d
 * 0000000140BC2A30: rol     rbx, cl
 * 0000000140BC2A33: xor     rbx, [r9+8]
 * 0000000140BC2A37: add     r9, 10h
 * 0000000140BC2A3B: rol     rbx, cl
 * 0000000140BC2A3E: sub     rax, rdx
 * 0000000140BC2A41: jnz     short loc_140BC2A2A
 * 0000000140BC2A43: mov     rcx, r9
 * 0000000140BC2A46: sub     rcx, r14
 * 0000000140BC2A49: xor     rcx, r15
 * 0000000140BC2A4C: mov     rax, rcx
 * 0000000140BC2A4F: rol     rax, 11h
 * 0000000140BC2A53: xor     rcx, rax
 * 0000000140BC2A56: mov     rax, rdi
 * 0000000140BC2A59: mul     rcx
 * 0000000140BC2A5C: mov     [rbp+8D0h+var_340], rdx
 * 0000000140BC2A63: xor     edx, eax
 * 0000000140BC2A65: xor     r11d, edx
 * 0000000140BC2A68: mov     edx, 1
 * 0000000140BC2A6D: and     r11d, 3Fh
 * 0000000140BC2A71: cmovz   r11d, edx
 * 0000000140BC2A75: add     r10d, esi
 * 0000000140BC2A78: jnz     short loc_140BC2A25
 * 0000000140BC2A7A: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC2A7F: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC2A86: and     r8d, 7Fh
 * 0000000140BC2A8A: cmp     r8d, 8
 * 0000000140BC2A8E: jb      short loc_140BC2AAD
 * 0000000140BC2A90: mov     eax, r8d
 * 0000000140BC2A93: shr     rax, 3
 * 0000000140BC2A97: xor     rbx, [r9]
 * 0000000140BC2A9A: mov     ecx, r11d
 * 0000000140BC2A9D: rol     rbx, cl
 * 0000000140BC2AA0: add     r9, 8
 * 0000000140BC2AA4: add     r8d, 0FFFFFFF8h
 * 0000000140BC2AA8: sub     rax, rdx
 * 0000000140BC2AAB: jnz     short loc_140BC2A97
 * 0000000140BC2AAD: test    r8d, r8d
 * 0000000140BC2AB0: jz      short loc_140BC2AD1
 * 0000000140BC2AB2: mov     esi, 0FFFFFFFFh
 * 0000000140BC2AB7: movzx   eax, byte ptr [r9]
 * 0000000140BC2ABB: mov     ecx, r11d
 * 0000000140BC2ABE: xor     rbx, rax
 * 0000000140BC2AC1: add     r9, rdx
 * 0000000140BC2AC4: rol     rbx, cl
 * 0000000140BC2AC7: add     r8d, esi
 * 0000000140BC2ACA: jnz     short loc_140BC2AB7
 * 0000000140BC2ACC: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC2AD1: mov     rax, rbx
 * 0000000140BC2AD4: jmp     short loc_140BC2AD8
 * 0000000140BC2AD6: xor     ebx, eax
 * 0000000140BC2AD8: shr     rax, 1Fh
 * 0000000140BC2ADC: test    rax, rax
 * 0000000140BC2ADF: jnz     short loc_140BC2AD6
 * 0000000140BC2AE1: btr     ebx, 1Fh
 * 0000000140BC2AE5: cmp     ebx, [r13+14h]
 * 0000000140BC2AE9: jz      loc_140BC2BC1
 * 0000000140BC2AEF: lock or [rsp+9D0h+var_9D0], r12d
 * 0000000140BC2AF4: mov     eax, [r13+18h]
 * 0000000140BC2AF8: test    dl, al
 * 0000000140BC2AFA: jz      short loc_140BC2B0D
 * 0000000140BC2AFC: mov     rax, [rsi+578h]
 * 0000000140BC2B03: mov     cl, [rax]
 * 0000000140BC2B05: test    cl, cl
 * 0000000140BC2B07: jnz     loc_140BC2BC1
 * 0000000140BC2B0D: mov     ecx, [r13+10h]
 * 0000000140BC2B11: mov     rdx, [r13+8]
 * 0000000140BC2B15: test    rcx, rcx
 * 0000000140BC2B18: jz      loc_140BC2C5B
 * 0000000140BC2B1E: mov     eax, [rsi+9DCh]
 * 0000000140BC2B24: mov     r8d, 40h ; '@'
 * 0000000140BC2B2A: test    r8b, al
 * 0000000140BC2B2D: jz      loc_140BC2C5B
 * 0000000140BC2B33: mov     r12, cr8
 * 0000000140BC2B37: lea     eax, [r8-3Eh]
 * 0000000140BC2B3B: mov     cr8, rax
 * 0000000140BC2B3F: mov     r14, rdx
 * 0000000140BC2B42: lea     rax, [rcx-1]
 * 0000000140BC2B46: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140BC2B4D: add     rax, rdx
 * 0000000140BC2B50: or      rax, 0FFFh
 * 0000000140BC2B56: mov     [rsp+9D0h+var_978], rax
 * 0000000140BC2B5B: lea     r13, [r14-1]
 * 0000000140BC2B5F: movzx   r15d, r12b
 * 0000000140BC2B63: mov     rax, [rsi+468h]
 * 0000000140BC2B6A: xor     edx, edx
 * 0000000140BC2B6C: mov     rcx, r14
 * 0000000140BC2B6F: call    KeGuardDispatchICall
 * 0000000140BC2B74: cmp     eax, 0C000022Dh
 * 0000000140BC2B79: jnz     short loc_140BC2B9B
 * 0000000140BC2B7B: mov     eax, 1
 * 0000000140BC2B80: cmp     r12b, al
 * 0000000140BC2B83: ja      short loc_140BC2BA3
 * 0000000140BC2B85: movzx   r15d, r12b
 * 0000000140BC2B89: mov     cr8, r15
 * 0000000140BC2B8D: mov     al, [r14]
 * 0000000140BC2B90: mov     eax, 2
 * 0000000140BC2B95: mov     cr8, rax
 * 0000000140BC2B99: jmp     short loc_140BC2B63
 * 0000000140BC2B9B: test    eax, eax
 * 0000000140BC2B9D: js      loc_140BC2C4F
 * 0000000140BC2BA3: mov     eax, 1000h
 * 0000000140BC2BA8: add     r14, rax
 * 0000000140BC2BAB: add     r13, rax
 * 0000000140BC2BAE: cmp     r13, [rsp+9D0h+var_978]
 * 0000000140BC2BB3: jnz     short loc_140BC2B5F
 * 0000000140BC2BB5: mov     cr8, r15
 * 0000000140BC2BB9: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BC2BBE: xor     r12d, r12d
 * 0000000140BC2BC1: mov     ebx, 1
 * 0000000140BC2BC6: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BC2BD0: jz      loc_140BC2F9B
 * 0000000140BC2BD6: mov     r8d, [r13+10h]
 * 0000000140BC2BDA: test    r8d, r8d
 * 0000000140BC2BDD: jz      loc_140BC2F9B
 * 0000000140BC2BE3: mov     rdx, [r13+8]
 * 0000000140BC2BE7: lea     r9, [rbp+8D0h+var_328]
 * 0000000140BC2BEE: mov     rcx, rsi
 * 0000000140BC2BF1: call    sub_14051927C
 * 0000000140BC2BF6: mov     edx, 10h
 * 0000000140BC2BFB: lea     r8, [r13+1Ch]
 * 0000000140BC2BFF: lea     r9, [rbp+8D0h+var_328]
 * 0000000140BC2C06: mov     rcx, [r9]
 * 0000000140BC2C09: add     r9, 8
 * 0000000140BC2C0D: mov     rax, [r8]
 * 0000000140BC2C10: add     r8, 8
 * 0000000140BC2C14: cmp     rcx, rax
 * 0000000140BC2C17: jnz     loc_140BC2DA5
 * 0000000140BC2C1D: add     edx, 0FFFFFFF8h
 * 0000000140BC2C20: cmp     edx, 8
 * 0000000140BC2C23: jnb     short loc_140BC2C06
 * 0000000140BC2C25: test    edx, edx
 * 0000000140BC2C27: jz      loc_140BC2F8E
 * 0000000140BC2C2D: mov     cl, [r9]
 * 0000000140BC2C30: add     r9, rbx
 * 0000000140BC2C33: mov     al, [r8]
 * 0000000140BC2C36: add     r8, rbx
 * 0000000140BC2C39: cmp     cl, al
 * 0000000140BC2C3B: jnz     loc_140BC2DA5
 * 0000000140BC2C41: mov     eax, 0FFFFFFFFh
 * 0000000140BC2C46: add     edx, eax
 * 0000000140BC2C48: jnz     short loc_140BC2C2D
 * 0000000140BC2C4A: jmp     loc_140BC2F8E
 * 0000000140BC2C4F: mov     cr8, r15
 * 0000000140BC2C53: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BC2C58: xor     r12d, r12d
 * 0000000140BC2C5B: mov     eax, [r13+14h]
 * 0000000140BC2C5F: cmp     [rsi+918h], r12d
 * 0000000140BC2C66: jnz     short loc_140BC2C7A
 * 0000000140BC2C68: mov     ecx, eax
 * 0000000140BC2C6A: mov     eax, ebx
 * 0000000140BC2C6C: xor     rcx, rax
 * 0000000140BC2C6F: mov     rax, [rsi+588h]
 * 0000000140BC2C76: mov     [rax+18h], rcx
 * 0000000140BC2C7A: mov     ebx, 1
 * 0000000140BC2C7F: mov     rcx, [r13+8]
 * 0000000140BC2C83: cmp     [rsi+918h], r12d
 * 0000000140BC2C8A: jnz     loc_140BC2BC6
 * 0000000140BC2C90: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC2C9A: add     rax, rsi
 * 0000000140BC2C9D: mov     [rsi+920h], rax
 * 0000000140BC2CA4: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC2CAE: add     rax, r13
 * 0000000140BC2CB1: mov     [rsi+928h], rax
 * 0000000140BC2CB8: movsxd  rax, dword ptr [r13+0]
 * 0000000140BC2CBC: mov     [rsi+930h], rax
 * 0000000140BC2CC3: mov     [rsi+938h], rcx
 * 0000000140BC2CCA: mov     [rsi+918h], ebx
 * 0000000140BC2CD0: mov     ecx, [rsi+9D8h]
 * 0000000140BC2CD6: bt      ecx, 1Dh
 * 0000000140BC2CDA: jb      loc_140BC2BC6
 * 0000000140BC2CE0: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC2CEA: jz      loc_140BC2BC6
 * 0000000140BC2CF0: test    bl, cl
 * 0000000140BC2CF2: jz      loc_140BC2BC6
 * 0000000140BC2CF8: mov     ecx, [rsi+0A74h]
 * 0000000140BC2CFE: mov     eax, [rsi+804h]
 * 0000000140BC2D04: mov     r10, [rsi+838h]
 * 0000000140BC2D0B: sub     eax, ecx
 * 0000000140BC2D0D: mov     r8, [rsi+0A78h]
 * 0000000140BC2D14: lea     rdx, [rcx+rsi]
 * 0000000140BC2D18: mov     ecx, eax
 * 0000000140BC2D1A: shr     rcx, 3
 * 0000000140BC2D1E: lea     r9, [rdx+rcx*8]
 * 0000000140BC2D22: jmp     short loc_140BC2D45
 * 0000000140BC2D24: xor     [rdx], r8
 * 0000000140BC2D27: mov     rax, [rdx]
 * 0000000140BC2D2A: movzx   ecx, r8b
 * 0000000140BC2D2E: xor     rax, r10
 * 0000000140BC2D31: and     ecx, 3Fh
 * 0000000140BC2D34: ror     r8, cl
 * 0000000140BC2D37: add     r8, rax
 * 0000000140BC2D3A: xor     r8, 0EFAh
 * 0000000140BC2D41: add     rdx, 8
 * 0000000140BC2D45: cmp     rdx, r9
 * 0000000140BC2D48: jnz     short loc_140BC2D24
 * 0000000140BC2D4A: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC2D52: cmp     r8, [rsi+0A80h]
 * 0000000140BC2D59: jz      loc_140BC2BC6
 * 0000000140BC2D5F: mov     ecx, [rsi+804h]
 * 0000000140BC2D65: mov     rax, [rsi+588h]
 * 0000000140BC2D6C: mov     [rax], rsi
 * 0000000140BC2D6F: mov     [rax+10h], ecx
 * 0000000140BC2D72: mov     rcx, [rsi+0A80h]
 * 0000000140BC2D79: cmp     [rsi+918h], r12d
 * 0000000140BC2D80: jnz     short loc_140BC2D90
 * 0000000140BC2D82: mov     rax, [rsi+588h]
 * 0000000140BC2D89: xor     rcx, r8
 * 0000000140BC2D8C: mov     [rax+18h], rcx
 * 0000000140BC2D90: xor     edx, edx
 * 0000000140BC2D92: mov     r9d, 100h
 * 0000000140BC2D98: mov     rcx, rsi
 * 0000000140BC2D9B: call    sub_140BD8384
 * 0000000140BC2DA0: jmp     loc_140BC2BC6
 * 0000000140BC2DA5: lock or [rsp+9D0h+var_9D0], r12d
 * 0000000140BC2DAA: mov     eax, [r13+18h]
 * 0000000140BC2DAE: test    bl, al
 * 0000000140BC2DB0: jz      short loc_140BC2DC3
 * 0000000140BC2DB2: mov     rax, [rsi+578h]
 * 0000000140BC2DB9: mov     cl, [rax]
 * 0000000140BC2DBB: test    cl, cl
 * 0000000140BC2DBD: jnz     loc_140BC2F8E
 * 0000000140BC2DC3: mov     ecx, [r13+10h]
 * 0000000140BC2DC7: mov     rdx, [r13+8]
 * 0000000140BC2DCB: test    rcx, rcx
 * 0000000140BC2DCE: jz      loc_140BC2E71
 * 0000000140BC2DD4: mov     eax, [rsi+9DCh]
 * 0000000140BC2DDA: mov     r8d, 40h ; '@'
 * 0000000140BC2DE0: test    r8b, al
 * 0000000140BC2DE3: jz      loc_140BC2E71
 * 0000000140BC2DE9: mov     r14, cr8
 * 0000000140BC2DED: mov     rbx, rdx
 * 0000000140BC2DF0: lea     r12, [rcx-1]
 * 0000000140BC2DF4: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140BC2DFB: add     r12, rdx
 * 0000000140BC2DFE: or      r12, 0FFFh
 * 0000000140BC2E05: lea     r15, [rbx-1]
 * 0000000140BC2E09: mov     eax, 2
 * 0000000140BC2E0E: mov     cr8, rax
 * 0000000140BC2E12: mov     rax, [rsi+468h]
 * 0000000140BC2E19: xor     edx, edx
 * 0000000140BC2E1B: mov     rcx, rbx
 * 0000000140BC2E1E: call    KeGuardDispatchICall
 * 0000000140BC2E23: cmp     eax, 0C000022Dh
 * 0000000140BC2E28: jnz     short loc_140BC2E40
 * 0000000140BC2E2A: mov     eax, 1
 * 0000000140BC2E2F: cmp     r14b, al
 * 0000000140BC2E32: ja      short loc_140BC2E44
 * 0000000140BC2E34: movzx   eax, r14b
 * 0000000140BC2E38: mov     cr8, rax
 * 0000000140BC2E3C: mov     al, [rbx]
 * 0000000140BC2E3E: jmp     short loc_140BC2E09
 * 0000000140BC2E40: test    eax, eax
 * 0000000140BC2E42: js      short loc_140BC2E61
 * 0000000140BC2E44: mov     eax, 1000h
 * 0000000140BC2E49: add     rbx, rax
 * 0000000140BC2E4C: add     r15, rax
 * 0000000140BC2E4F: cmp     r15, r12
 * 0000000140BC2E52: jnz     short loc_140BC2E12
 * 0000000140BC2E54: movzx   eax, r14b
 * 0000000140BC2E58: mov     cr8, rax
 * 0000000140BC2E5C: jmp     loc_140BC2F8E
 * 0000000140BC2E61: movzx   eax, r14b
 * 0000000140BC2E65: mov     cr8, rax
 * 0000000140BC2E69: xor     r12d, r12d
 * 0000000140BC2E6C: lea     ebx, [r12+1]
 * 0000000140BC2E71: mov     rcx, [r13+8]
 * 0000000140BC2E75: cmp     [rsi+918h], r12d
 * 0000000140BC2E7C: jnz     loc_140BC2F8E
 * 0000000140BC2E82: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC2E8C: add     rax, rsi
 * 0000000140BC2E8F: mov     [rsi+920h], rax
 * 0000000140BC2E96: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC2EA0: add     rax, r13
 * 0000000140BC2EA3: mov     [rsi+928h], rax
 * 0000000140BC2EAA: movsxd  rax, dword ptr [r13+0]
 * 0000000140BC2EAE: mov     [rsi+930h], rax
 * 0000000140BC2EB5: mov     [rsi+938h], rcx
 * 0000000140BC2EBC: mov     [rsi+918h], ebx
 * 0000000140BC2EC2: mov     ecx, [rsi+9D8h]
 * 0000000140BC2EC8: bt      ecx, 1Dh
 * 0000000140BC2ECC: jb      loc_140BC2F8E
 * 0000000140BC2ED2: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC2EDC: jz      loc_140BC2F8E
 * 0000000140BC2EE2: test    bl, cl
 * 0000000140BC2EE4: jz      loc_140BC2F8E
 * 0000000140BC2EEA: mov     ecx, [rsi+0A74h]
 * 0000000140BC2EF0: mov     eax, [rsi+804h]
 * 0000000140BC2EF6: mov     r10, [rsi+838h]
 * 0000000140BC2EFD: sub     eax, ecx
 * 0000000140BC2EFF: mov     r8, [rsi+0A78h]
 * 0000000140BC2F06: lea     rdx, [rcx+rsi]
 * 0000000140BC2F0A: mov     ecx, eax
 * 0000000140BC2F0C: shr     rcx, 3
 * 0000000140BC2F10: lea     r9, [rdx+rcx*8]
 * 0000000140BC2F14: jmp     short loc_140BC2F37
 * 0000000140BC2F16: xor     [rdx], r8
 * 0000000140BC2F19: mov     rax, [rdx]
 * 0000000140BC2F1C: movzx   ecx, r8b
 * 0000000140BC2F20: xor     rax, r10
 * 0000000140BC2F23: and     ecx, 3Fh
 * 0000000140BC2F26: ror     r8, cl
 * 0000000140BC2F29: add     r8, rax
 * 0000000140BC2F2C: xor     r8, 0EFAh
 * 0000000140BC2F33: add     rdx, 8
 * 0000000140BC2F37: cmp     rdx, r9
 * 0000000140BC2F3A: jnz     short loc_140BC2F16
 * 0000000140BC2F3C: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC2F44: cmp     r8, [rsi+0A80h]
 * 0000000140BC2F4B: jz      short loc_140BC2F8E
 * 0000000140BC2F4D: mov     ecx, [rsi+804h]
 * 0000000140BC2F53: mov     rax, [rsi+588h]
 * 0000000140BC2F5A: mov     [rax], rsi
 * 0000000140BC2F5D: mov     [rax+10h], ecx
 * 0000000140BC2F60: mov     rcx, [rsi+0A80h]
 * 0000000140BC2F67: cmp     [rsi+918h], r12d
 * 0000000140BC2F6E: jnz     short loc_140BC2F7E
 * 0000000140BC2F70: mov     rax, [rsi+588h]
 * 0000000140BC2F77: xor     rcx, r8
 * 0000000140BC2F7A: mov     [rax+18h], rcx
 * 0000000140BC2F7E: xor     edx, edx
 * 0000000140BC2F80: mov     r9d, 100h
 * 0000000140BC2F86: mov     rcx, rsi
 * 0000000140BC2F89: call    sub_140BD8384
 * 0000000140BC2F8E: mov     eax, [r13+10h]
 * 0000000140BC2F92: shl     eax, 4
 * 0000000140BC2F95: add     [rsi+848h], eax
 * 0000000140BC2F9B: mov     r11d, 1000h
 * 0000000140BC2FA1: xor     r15d, r15d
 * 0000000140BC2FA4: mov     ebx, 1
 * 0000000140BC2FA9: mov     r12d, 6
 * 0000000140BC2FAF: mov     ecx, [rbp+8D0h+var_8C4]
 * 0000000140BC2FB2: cmp     [rsi+844h], r15d
 * 0000000140BC2FB9: jz      short loc_140BC2FC2
 * 0000000140BC2FBB: mov     eax, 0FFFFFFFFh
 * 0000000140BC2FC0: add     ecx, eax
 * 0000000140BC2FC2: add     ecx, ebx
 * 0000000140BC2FC4: mov     [rbp+8D0h+var_8C4], ecx
 * 0000000140BC2FC7: cmp     [rsi+918h], r15d
 * 0000000140BC2FCE: jnz     loc_140BD0466
 * 0000000140BC2FD4: mov     eax, [rsi+84Ch]
 * 0000000140BC2FDA: cmp     [rsi+848h], eax
 * 0000000140BC2FE0: jge     loc_140BD0466
 * 0000000140BC2FE6: mov     edx, 28h ; '('
 * 0000000140BC2FEB: lea     r14d, [rdx-23h]
 * 0000000140BC2FEF: jmp     loc_140BC2659
 * 0000000140BC2FF4: mov     r15d, [rsi+844h]
 * 0000000140BC2FFB: lea     rax, [r13+30h]
 * 0000000140BC2FFF: mov     r12d, [r13+1Ch]
 * 0000000140BC3003: mov     rdi, [rsp+9D0h+var_980]
 * 0000000140BC3008: shl     r15, 4
 * 0000000140BC300C: shl     r12, 4
 * 0000000140BC3010: add     r15, rax
 * 0000000140BC3013: add     r12, rax
 * 0000000140BC3016: mov     [rsp+9D0h+var_978], r12
 * 0000000140BC301B: xor     edx, edx
 * 0000000140BC301D: cmp     [r15], edx
 * 0000000140BC3020: jl      loc_140BC3386
 * 0000000140BC3026: mov     r13, [r15+8]
 * 0000000140BC302A: mov     r14d, [r15+4]
 * 0000000140BC302E: mov     r8, r13
 * 0000000140BC3031: add     [rsi+848h], r14d
 * 0000000140BC3038: mov     rax, r13
 * 0000000140BC303B: mov     r10d, [rsi+834h]
 * 0000000140BC3042: mov     r11, [rsi+838h]
 * 0000000140BC3049: lea     rcx, [r14+r13]
 * 0000000140BC304D: mov     [rbp+8D0h+var_940], r13
 * 0000000140BC3051: mov     dword ptr [rbp+8D0h+arg_8], r14d
 * 0000000140BC3058: cmp     r13, rcx
 * 0000000140BC305B: jnb     short loc_140BC306E
 * 0000000140BC305D: mov     r9d, 40h ; '@'
 * 0000000140BC3063: prefetchnta byte ptr [rax]
 * 0000000140BC3066: add     rax, r9
 * 0000000140BC3069: cmp     rax, rcx
 * 0000000140BC306C: jb      short loc_140BC3063
 * 0000000140BC306E: mov     r9d, r14d
 * 0000000140BC3071: mov     rbx, r11
 * 0000000140BC3074: shr     r9d, 7
 * 0000000140BC3078: test    r9d, r9d
 * 0000000140BC307B: jz      short loc_140BC30F3
 * 0000000140BC307D: mov     esi, 0FFFFFFFFh
 * 0000000140BC3082: mov     r12d, 1
 * 0000000140BC3088: mov     r14, 7010008004002001h
 * 0000000140BC3092: mov     eax, 8
 * 0000000140BC3097: xor     rbx, [r8]
 * 0000000140BC309A: mov     ecx, r10d
 * 0000000140BC309D: rol     rbx, cl
 * 0000000140BC30A0: xor     rbx, [r8+8]
 * 0000000140BC30A4: add     r8, 10h
 * 0000000140BC30A8: rol     rbx, cl
 * 0000000140BC30AB: sub     rax, r12
 * 0000000140BC30AE: jnz     short loc_140BC3097
 * 0000000140BC30B0: mov     rcx, r8
 * 0000000140BC30B3: sub     rcx, r13
 * 0000000140BC30B6: xor     rcx, r11
 * 0000000140BC30B9: mov     rax, rcx
 * 0000000140BC30BC: rol     rax, 11h
 * 0000000140BC30C0: xor     rcx, rax
 * 0000000140BC30C3: mov     rax, r14
 * 0000000140BC30C6: mul     rcx
 * 0000000140BC30C9: xor     eax, edx
 * 0000000140BC30CB: mov     [rbp+8D0h+var_338], rdx
 * 0000000140BC30D2: xor     r10d, eax
 * 0000000140BC30D5: and     r10d, 3Fh
 * 0000000140BC30D9: cmovz   r10d, r12d
 * 0000000140BC30DD: add     r9d, esi
 * 0000000140BC30E0: jnz     short loc_140BC3092
 * 0000000140BC30E2: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC30E7: mov     r14d, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BC30EE: mov     r12, [rsp+9D0h+var_978]
 * 0000000140BC30F3: mov     edx, r14d
 * 0000000140BC30F6: mov     r9d, 1
 * 0000000140BC30FC: and     edx, 7Fh
 * 0000000140BC30FF: cmp     edx, 8
 * 0000000140BC3102: jb      short loc_140BC311F
 * 0000000140BC3104: mov     eax, edx
 * 0000000140BC3106: shr     rax, 3
 * 0000000140BC310A: xor     rbx, [r8]
 * 0000000140BC310D: mov     ecx, r10d
 * 0000000140BC3110: rol     rbx, cl
 * 0000000140BC3113: add     r8, 8
 * 0000000140BC3117: add     edx, 0FFFFFFF8h
 * 0000000140BC311A: sub     rax, r9
 * 0000000140BC311D: jnz     short loc_140BC310A
 * 0000000140BC311F: test    edx, edx
 * 0000000140BC3121: jz      short loc_140BC3141
 * 0000000140BC3123: mov     esi, 0FFFFFFFFh
 * 0000000140BC3128: movzx   eax, byte ptr [r8]
 * 0000000140BC312C: mov     ecx, r10d
 * 0000000140BC312F: xor     rbx, rax
 * 0000000140BC3132: add     r8, r9
 * 0000000140BC3135: rol     rbx, cl
 * 0000000140BC3138: add     edx, esi
 * 0000000140BC313A: jnz     short loc_140BC3128
 * 0000000140BC313C: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC3141: mov     rax, rbx
 * 0000000140BC3144: shr     rax, 1Fh
 * 0000000140BC3148: xor     edx, edx
 * 0000000140BC314A: jmp     short loc_140BC3152
 * 0000000140BC314C: xor     ebx, eax
 * 0000000140BC314E: shr     rax, 1Fh
 * 0000000140BC3152: test    rax, rax
 * 0000000140BC3155: jnz     short loc_140BC314C
 * 0000000140BC3157: mov     eax, [r15]
 * 0000000140BC315A: btr     ebx, 1Fh
 * 0000000140BC315E: btr     eax, 1Fh
 * 0000000140BC3162: cmp     ebx, eax
 * 0000000140BC3164: jz      loc_140BC33B7
 * 0000000140BC316A: mov     ecx, r14d
 * 0000000140BC316D: test    r14d, r14d
 * 0000000140BC3170: jz      loc_140BC320E
 * 0000000140BC3176: mov     eax, [rsi+9DCh]
 * 0000000140BC317C: mov     r8d, 40h ; '@'
 * 0000000140BC3182: test    r8b, al
 * 0000000140BC3185: jz      loc_140BC320E
 * 0000000140BC318B: mov     r12, cr8
 * 0000000140BC318F: lea     eax, [r8-3Eh]
 * 0000000140BC3193: mov     cr8, rax
 * 0000000140BC3197: mov     r14, r13
 * 0000000140BC319A: lea     rax, [r13-1]
 * 0000000140BC319E: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140BC31A5: add     rax, rcx
 * 0000000140BC31A8: or      rax, 0FFFh
 * 0000000140BC31AE: mov     [rsp+9D0h+var_968], rax
 * 0000000140BC31B3: lea     r13, [r14-1]
 * 0000000140BC31B7: mov     rax, [rsi+468h]
 * 0000000140BC31BE: xor     edx, edx
 * 0000000140BC31C0: mov     rcx, r14
 * 0000000140BC31C3: call    KeGuardDispatchICall
 * 0000000140BC31C8: cmp     eax, 0C000022Dh
 * 0000000140BC31CD: jnz     short loc_140BC31F3
 * 0000000140BC31CF: mov     eax, 1
 * 0000000140BC31D4: cmp     r12b, al
 * 0000000140BC31D7: ja      loc_140BC32D5
 * 0000000140BC31DD: movzx   eax, r12b
 * 0000000140BC31E1: mov     cr8, rax
 * 0000000140BC31E5: mov     al, [r14]
 * 0000000140BC31E8: mov     eax, 2
 * 0000000140BC31ED: mov     cr8, rax
 * 0000000140BC31F1: jmp     short loc_140BC31B7
 * 0000000140BC31F3: xor     edx, edx
 * 0000000140BC31F5: test    eax, eax
 * 0000000140BC31F7: jns     loc_140BC32D7
 * 0000000140BC31FD: movzx   eax, r12b
 * 0000000140BC3201: mov     cr8, rax
 * 0000000140BC3205: mov     r13, [rbp+8D0h+var_940]
 * 0000000140BC3209: mov     r12, [rsp+9D0h+var_978]
 * 0000000140BC320E: mov     eax, [r15]
 * 0000000140BC3211: btr     eax, 1Fh
 * 0000000140BC3215: cmp     [rsi+918h], edx
 * 0000000140BC321B: jnz     loc_140BC33B7
 * 0000000140BC3221: mov     ecx, ebx
 * 0000000140BC3223: xor     rcx, rax
 * 0000000140BC3226: mov     rax, [rsi+588h]
 * 0000000140BC322D: mov     [rax+18h], rcx
 * 0000000140BC3231: cmp     [rsi+918h], edx
 * 0000000140BC3237: jnz     loc_140BC33B7
 * 0000000140BC323D: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC3247: mov     ebx, 1
 * 0000000140BC324C: add     rax, rsi
 * 0000000140BC324F: mov     [rsi+920h], rax
 * 0000000140BC3256: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC3260: add     rax, rdi
 * 0000000140BC3263: mov     [rsi+928h], rax
 * 0000000140BC326A: movsxd  rax, dword ptr [rdi]
 * 0000000140BC326D: mov     [rsi+930h], rax
 * 0000000140BC3274: mov     [rsi+938h], r13
 * 0000000140BC327B: mov     [rsi+918h], ebx
 * 0000000140BC3281: mov     ecx, [rsi+9D8h]
 * 0000000140BC3287: bt      ecx, 1Dh
 * 0000000140BC328B: jb      loc_140BC3380
 * 0000000140BC3291: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC329B: jz      loc_140BC3380
 * 0000000140BC32A1: test    bl, cl
 * 0000000140BC32A3: jz      loc_140BC3380
 * 0000000140BC32A9: mov     ecx, [rsi+0A74h]
 * 0000000140BC32AF: mov     eax, [rsi+804h]
 * 0000000140BC32B5: mov     r10, [rsi+838h]
 * 0000000140BC32BC: sub     eax, ecx
 * 0000000140BC32BE: mov     r8, [rsi+0A78h]
 * 0000000140BC32C5: lea     rdx, [rcx+rsi]
 * 0000000140BC32C9: mov     ecx, eax
 * 0000000140BC32CB: shr     rcx, 3
 * 0000000140BC32CF: lea     r9, [rdx+rcx*8]
 * 0000000140BC32D3: jmp     short loc_140BC3326
 * 0000000140BC32D5: xor     edx, edx
 * 0000000140BC32D7: mov     r11d, 1000h
 * 0000000140BC32DD: add     r14, r11
 * 0000000140BC32E0: add     r13, r11
 * 0000000140BC32E3: cmp     r13, [rsp+9D0h+var_968]
 * 0000000140BC32E8: jnz     loc_140BC31B7
 * 0000000140BC32EE: movzx   eax, r12b
 * 0000000140BC32F2: mov     cr8, rax
 * 0000000140BC32F6: mov     r12, [rsp+9D0h+var_978]
 * 0000000140BC32FB: mov     ebx, 1
 * 0000000140BC3300: jmp     loc_140BC3386
 * 0000000140BC3305: xor     [rdx], r8
 * 0000000140BC3308: mov     rax, [rdx]
 * 0000000140BC330B: movzx   ecx, r8b
 * 0000000140BC330F: xor     rax, r10
 * 0000000140BC3312: and     ecx, 3Fh
 * 0000000140BC3315: ror     r8, cl
 * 0000000140BC3318: add     r8, rax
 * 0000000140BC331B: xor     r8, 0EFAh
 * 0000000140BC3322: add     rdx, 8
 * 0000000140BC3326: cmp     rdx, r9
 * 0000000140BC3329: jnz     short loc_140BC3305
 * 0000000140BC332B: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC3333: cmp     r8, [rsi+0A80h]
 * 0000000140BC333A: jz      short loc_140BC337E
 * 0000000140BC333C: mov     rax, [rsi+588h]
 * 0000000140BC3343: mov     ecx, [rsi+804h]
 * 0000000140BC3349: mov     [rax], rsi
 * 0000000140BC334C: mov     [rax+10h], ecx
 * 0000000140BC334F: xor     eax, eax
 * 0000000140BC3351: mov     rcx, [rsi+0A80h]
 * 0000000140BC3358: cmp     [rsi+918h], eax
 * 0000000140BC335E: jnz     short loc_140BC336E
 * 0000000140BC3360: mov     rax, [rsi+588h]
 * 0000000140BC3367: xor     rcx, r8
 * 0000000140BC336A: mov     [rax+18h], rcx
 * 0000000140BC336E: xor     edx, edx
 * 0000000140BC3370: mov     r9d, 100h
 * 0000000140BC3376: mov     rcx, rsi
 * 0000000140BC3379: call    sub_140BD8384
 * 0000000140BC337E: xor     edx, edx
 * 0000000140BC3380: mov     r11d, 1000h
 * 0000000140BC3386: add     r15, 10h
 * 0000000140BC338A: cmp     r15, r12
 * 0000000140BC338D: jnb     short loc_140BC33A4
 * 0000000140BC338F: mov     eax, [rsi+84Ch]
 * 0000000140BC3395: cmp     [rsi+848h], eax
 * 0000000140BC339B: jl      loc_140BC301D
 * 0000000140BC33A1: cmp     r15, r12
 * 0000000140BC33A4: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC33AB: mov     ecx, 844h
 * 0000000140BC33B0: jnz     short loc_140BC33BE
 * 0000000140BC33B2: mov     r15d, edx
 * 0000000140BC33B5: jmp     short loc_140BC33CE
 * 0000000140BC33B7: mov     ebx, 1
 * 0000000140BC33BC: jmp     short loc_140BC3380
 * 0000000140BC33BE: mov     rax, [rsp+9D0h+var_980]
 * 0000000140BC33C3: add     rax, 30h ; '0'
 * 0000000140BC33C7: sub     r15, rax
 * 0000000140BC33CA: sar     r15, 4
 * 0000000140BC33CE: mov     rax, rsi
 * 0000000140BC33D1: mov     [rax+rcx], r15d
 * 0000000140BC33D5: xor     r15d, r15d
 * 0000000140BC33D8: jmp     loc_140BC2FA9
 * 0000000140BC33DD: mov     rbx, [r13+18h]
 * 0000000140BC33E1: mov     r8, 0A3A03F5891C8B4E8h
 * 0000000140BC33EB: mov     rdx, [rsi+700h]
 * 0000000140BC33F2: mov     r12d, 1
 * 0000000140BC33F8: mov     rcx, [rsi+730h]
 * 0000000140BC33FF: add     rdx, rbx
 * 0000000140BC3402: movzx   eax, word ptr [r13+22h]
 * 0000000140BC3407: cmp     [rdx+rcx], ax
 * 0000000140BC340B: mov     rdx, 0B3B74BDEE4453415h
 * 0000000140BC3415: jz      loc_140BC3538
 * 0000000140BC341B: cmp     [rsi+918h], r15d
 * 0000000140BC3422: jnz     loc_140BC3538
 * 0000000140BC3428: lea     rax, [rsi+r8]
 * 0000000140BC342C: mov     [rsi+920h], rax
 * 0000000140BC3433: lea     rax, [rdx+r13]
 * 0000000140BC3437: mov     [rsi+928h], rax
 * 0000000140BC343E: movsxd  rax, dword ptr [r13+0]
 * 0000000140BC3442: mov     [rsi+930h], rax
 * 0000000140BC3449: mov     [rsi+938h], rbx
 * 0000000140BC3450: mov     [rsi+918h], r12d
 * 0000000140BC3457: mov     ecx, [rsi+9D8h]
 * 0000000140BC345D: bt      ecx, 1Dh
 * 0000000140BC3461: jb      loc_140BC3538
 * 0000000140BC3467: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC3471: jz      loc_140BC3538
 * 0000000140BC3477: test    r12b, cl
 * 0000000140BC347A: jz      loc_140BC3538
 * 0000000140BC3480: mov     ecx, [rsi+0A74h]
 * 0000000140BC3486: mov     eax, [rsi+804h]
 * 0000000140BC348C: mov     r10, [rsi+838h]
 * 0000000140BC3493: sub     eax, ecx
 * 0000000140BC3495: mov     r8, [rsi+0A78h]
 * 0000000140BC349C: lea     rdx, [rcx+rsi]
 * 0000000140BC34A0: mov     ecx, eax
 * 0000000140BC34A2: shr     rcx, 3
 * 0000000140BC34A6: lea     r9, [rdx+rcx*8]
 * 0000000140BC34AA: jmp     short loc_140BC34CD
 * 0000000140BC34AC: xor     [rdx], r8
 * 0000000140BC34AF: mov     rax, [rdx]
 * 0000000140BC34B2: movzx   ecx, r8b
 * 0000000140BC34B6: xor     rax, r10
 * 0000000140BC34B9: and     ecx, 3Fh
 * 0000000140BC34BC: ror     r8, cl
 * 0000000140BC34BF: add     r8, rax
 * 0000000140BC34C2: xor     r8, 0EFAh
 * 0000000140BC34C9: add     rdx, 8
 * 0000000140BC34CD: cmp     rdx, r9
 * 0000000140BC34D0: jnz     short loc_140BC34AC
 * 0000000140BC34D2: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC34DA: cmp     r8, [rsi+0A80h]
 * 0000000140BC34E1: jz      short loc_140BC3524
 * 0000000140BC34E3: mov     ecx, [rsi+804h]
 * 0000000140BC34E9: mov     rax, [rsi+588h]
 * 0000000140BC34F0: mov     [rax], rsi
 * 0000000140BC34F3: mov     [rax+10h], ecx
 * 0000000140BC34F6: mov     rcx, [rsi+0A80h]
 * 0000000140BC34FD: cmp     [rsi+918h], r15d
 * 0000000140BC3504: jnz     short loc_140BC3514
 * 0000000140BC3506: mov     rax, [rsi+588h]
 * 0000000140BC350D: xor     rcx, r8
 * 0000000140BC3510: mov     [rax+18h], rcx
 * 0000000140BC3514: xor     edx, edx
 * 0000000140BC3516: mov     r9d, 100h
 * 0000000140BC351C: mov     rcx, rsi
 * 0000000140BC351F: call    sub_140BD8384
 * 0000000140BC3524: mov     r8, 0A3A03F5891C8B4E8h
 * 0000000140BC352E: mov     rdx, 0B3B74BDEE4453415h
 * 0000000140BC3538: movzx   eax, word ptr [r13+22h]
 * 0000000140BC353D: test    [rsi+738h], ax
 * 0000000140BC3544: jnz     loc_140BC3666
 * 0000000140BC354A: mov     rcx, [rsi+708h]
 * 0000000140BC3551: add     rcx, rbx
 * 0000000140BC3554: cmp     [rcx], rcx
 * 0000000140BC3557: jz      loc_140BC3666
 * 0000000140BC355D: cmp     [rsi+918h], r15d
 * 0000000140BC3564: jnz     loc_140BC3666
 * 0000000140BC356A: lea     rax, [rsi+r8]
 * 0000000140BC356E: mov     [rsi+920h], rax
 * 0000000140BC3575: lea     rax, [rdx+r13]
 * 0000000140BC3579: mov     [rsi+928h], rax
 * 0000000140BC3580: movsxd  rax, dword ptr [r13+0]
 * 0000000140BC3584: mov     [rsi+930h], rax
 * 0000000140BC358B: mov     [rsi+938h], rbx
 * 0000000140BC3592: mov     [rsi+918h], r12d
 * 0000000140BC3599: mov     ecx, [rsi+9D8h]
 * 0000000140BC359F: bt      ecx, 1Dh
 * 0000000140BC35A3: jb      loc_140BC3666
 * 0000000140BC35A9: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC35B3: jz      loc_140BC3666
 * 0000000140BC35B9: test    r12b, cl
 * 0000000140BC35BC: jz      loc_140BC3666
 * 0000000140BC35C2: mov     ecx, [rsi+0A74h]
 * 0000000140BC35C8: mov     eax, [rsi+804h]
 * 0000000140BC35CE: mov     r10, [rsi+838h]
 * 0000000140BC35D5: sub     eax, ecx
 * 0000000140BC35D7: mov     r8, [rsi+0A78h]
 * 0000000140BC35DE: lea     rdx, [rcx+rsi]
 * 0000000140BC35E2: mov     ecx, eax
 * 0000000140BC35E4: shr     rcx, 3
 * 0000000140BC35E8: lea     r9, [rdx+rcx*8]
 * 0000000140BC35EC: jmp     short loc_140BC360F
 * 0000000140BC35EE: xor     [rdx], r8
 * 0000000140BC35F1: mov     rax, [rdx]
 * 0000000140BC35F4: movzx   ecx, r8b
 * 0000000140BC35F8: xor     rax, r10
 * 0000000140BC35FB: and     ecx, 3Fh
 * 0000000140BC35FE: ror     r8, cl
 * 0000000140BC3601: add     r8, rax
 * 0000000140BC3604: xor     r8, 0EFAh
 * 0000000140BC360B: add     rdx, 8
 * 0000000140BC360F: cmp     rdx, r9
 * 0000000140BC3612: jnz     short loc_140BC35EE
 * 0000000140BC3614: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC361C: cmp     r8, [rsi+0A80h]
 * 0000000140BC3623: jz      short loc_140BC3666
 * 0000000140BC3625: mov     ecx, [rsi+804h]
 * 0000000140BC362B: mov     rax, [rsi+588h]
 * 0000000140BC3632: mov     [rax], rsi
 * 0000000140BC3635: mov     [rax+10h], ecx
 * 0000000140BC3638: mov     rcx, [rsi+0A80h]
 * 0000000140BC363F: cmp     [rsi+918h], r15d
 * 0000000140BC3646: jnz     short loc_140BC3656
 * 0000000140BC3648: mov     rax, [rsi+588h]
 * 0000000140BC364F: xor     rcx, r8
 * 0000000140BC3652: mov     [rax+18h], rcx
 * 0000000140BC3656: xor     edx, edx
 * 0000000140BC3658: mov     r9d, 100h
 * 0000000140BC365E: mov     rcx, rsi
 * 0000000140BC3661: call    sub_140BD8384
 * 0000000140BC3666: mov     r14, [r13+8]
 * 0000000140BC366A: mov     r8d, [r13+10h]
 * 0000000140BC366E: mov     r9, r14
 * 0000000140BC3671: add     [rsi+848h], r8d
 * 0000000140BC3678: mov     rax, r14
 * 0000000140BC367B: mov     r10d, [rsi+834h]
 * 0000000140BC3682: mov     r15, [rsi+838h]
 * 0000000140BC3689: lea     rcx, [r14+r8]
 * 0000000140BC368D: cmp     r14, rcx
 * 0000000140BC3690: jnb     short loc_140BC36A2
 * 0000000140BC3692: mov     edx, 40h ; '@'
 * 0000000140BC3697: prefetchnta byte ptr [rax]
 * 0000000140BC369A: add     rax, rdx
 * 0000000140BC369D: cmp     rax, rcx
 * 0000000140BC36A0: jb      short loc_140BC3697
 * 0000000140BC36A2: mov     r11d, r8d
 * 0000000140BC36A5: mov     rbx, r15
 * 0000000140BC36A8: shr     r11d, 7
 * 0000000140BC36AC: test    r11d, r11d
 * 0000000140BC36AF: jz      short loc_140BC3718
 * 0000000140BC36B1: mov     rsi, 7010008004002001h
 * 0000000140BC36BB: mov     eax, 8
 * 0000000140BC36C0: xor     rbx, [r9]
 * 0000000140BC36C3: mov     ecx, r10d
 * 0000000140BC36C6: rol     rbx, cl
 * 0000000140BC36C9: xor     rbx, [r9+8]
 * 0000000140BC36CD: add     r9, 10h
 * 0000000140BC36D1: rol     rbx, cl
 * 0000000140BC36D4: sub     rax, r12
 * 0000000140BC36D7: jnz     short loc_140BC36C0
 * 0000000140BC36D9: mov     rcx, r9
 * 0000000140BC36DC: sub     rcx, r14
 * 0000000140BC36DF: xor     rcx, r15
 * 0000000140BC36E2: mov     rax, rcx
 * 0000000140BC36E5: rol     rax, 11h
 * 0000000140BC36E9: xor     rcx, rax
 * 0000000140BC36EC: mov     rax, rsi
 * 0000000140BC36EF: mul     rcx
 * 0000000140BC36F2: xor     r10d, eax
 * 0000000140BC36F5: mov     [rbp+8D0h+var_330], rdx
 * 0000000140BC36FC: xor     r10d, edx
 * 0000000140BC36FF: mov     edx, 0FFFFFFFFh
 * 0000000140BC3704: and     r10d, 3Fh
 * 0000000140BC3708: cmovz   r10d, r12d
 * 0000000140BC370C: add     r11d, edx
 * 0000000140BC370F: jnz     short loc_140BC36BB
 * 0000000140BC3711: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC3716: jmp     short loc_140BC371D
 * 0000000140BC3718: mov     edx, 0FFFFFFFFh
 * 0000000140BC371D: and     r8d, 7Fh
 * 0000000140BC3721: cmp     r8d, 8
 * 0000000140BC3725: jb      short loc_140BC3744
 * 0000000140BC3727: mov     eax, r8d
 * 0000000140BC372A: shr     rax, 3
 * 0000000140BC372E: xor     rbx, [r9]
 * 0000000140BC3731: mov     ecx, r10d
 * 0000000140BC3734: rol     rbx, cl
 * 0000000140BC3737: add     r9, 8
 * 0000000140BC373B: add     r8d, 0FFFFFFF8h
 * 0000000140BC373F: sub     rax, r12
 * 0000000140BC3742: jnz     short loc_140BC372E
 * 0000000140BC3744: xor     r15d, r15d
 * 0000000140BC3747: test    r8d, r8d
 * 0000000140BC374A: jz      short loc_140BC3761
 * 0000000140BC374C: movzx   eax, byte ptr [r9]
 * 0000000140BC3750: mov     ecx, r10d
 * 0000000140BC3753: xor     rbx, rax
 * 0000000140BC3756: add     r9, r12
 * 0000000140BC3759: rol     rbx, cl
 * 0000000140BC375C: add     r8d, edx
 * 0000000140BC375F: jnz     short loc_140BC374C
 * 0000000140BC3761: mov     rax, rbx
 * 0000000140BC3764: jmp     short loc_140BC3768
 * 0000000140BC3766: xor     ebx, eax
 * 0000000140BC3768: shr     rax, 1Fh
 * 0000000140BC376C: test    rax, rax
 * 0000000140BC376F: jnz     short loc_140BC3766
 * 0000000140BC3771: btr     ebx, 1Fh
 * 0000000140BC3775: mov     r12d, r15d
 * 0000000140BC3778: cmp     ebx, [r13+14h]
 * 0000000140BC377C: jz      loc_140BC3852
 * 0000000140BC3782: cmp     [r13+0], r15d
 * 0000000140BC3786: jnz     short loc_140BC3795
 * 0000000140BC3788: cmp     [r13+18h], r15d
 * 0000000140BC378C: mov     eax, 1
 * 0000000140BC3791: cmovnz  r12d, eax
 * 0000000140BC3795: mov     ecx, [r13+10h]
 * 0000000140BC3799: mov     rdx, [r13+8]
 * 0000000140BC379D: test    rcx, rcx
 * 0000000140BC37A0: jz      loc_140BC3981
 * 0000000140BC37A6: mov     eax, [rsi+9DCh]
 * 0000000140BC37AC: mov     r8d, 40h ; '@'
 * 0000000140BC37B2: test    r8b, al
 * 0000000140BC37B5: jz      loc_140BC3981
 * 0000000140BC37BB: mov     r15, cr8
 * 0000000140BC37BF: lea     eax, [r8-3Eh]
 * 0000000140BC37C3: mov     cr8, rax
 * 0000000140BC37C7: mov     r14, rdx
 * 0000000140BC37CA: lea     rax, [rcx-1]
 * 0000000140BC37CE: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140BC37D5: add     rax, rdx
 * 0000000140BC37D8: or      rax, 0FFFh
 * 0000000140BC37DE: mov     [rsp+9D0h+var_978], rax
 * 0000000140BC37E3: lea     r13, [r14-1]
 * 0000000140BC37E7: mov     rax, [rsi+468h]
 * 0000000140BC37EE: xor     edx, edx
 * 0000000140BC37F0: mov     rcx, r14
 * 0000000140BC37F3: call    KeGuardDispatchICall
 * 0000000140BC37F8: cmp     eax, 0C000022Dh
 * 0000000140BC37FD: jnz     short loc_140BC3828
 * 0000000140BC37FF: test    r12d, r12d
 * 0000000140BC3802: jnz     loc_140BC3971
 * 0000000140BC3808: lea     eax, [r12+1]
 * 0000000140BC380D: cmp     r15b, al
 * 0000000140BC3810: ja      short loc_140BC3830
 * 0000000140BC3812: movzx   eax, r15b
 * 0000000140BC3816: mov     cr8, rax
 * 0000000140BC381A: mov     al, [r14]
 * 0000000140BC381D: lea     eax, [r12+2]
 * 0000000140BC3822: mov     cr8, rax
 * 0000000140BC3826: jmp     short loc_140BC37E7
 * 0000000140BC3828: test    eax, eax
 * 0000000140BC382A: js      loc_140BC3971
 * 0000000140BC3830: mov     eax, 1000h
 * 0000000140BC3835: add     r14, rax
 * 0000000140BC3838: add     r13, rax
 * 0000000140BC383B: cmp     r13, [rsp+9D0h+var_978]
 * 0000000140BC3840: jnz     short loc_140BC37E7
 * 0000000140BC3842: movzx   eax, r15b
 * 0000000140BC3846: mov     cr8, rax
 * 0000000140BC384A: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BC384F: xor     r15d, r15d
 * 0000000140BC3852: mov     r12, 0A3A03F5891C8B4E8h
 * 0000000140BC385C: mov     r14, 0B3B74BDEE4453415h
 * 0000000140BC3866: mov     ebx, 1
 * 0000000140BC386B: lea     rax, [r13+30h]
 * 0000000140BC386F: xor     r9d, r9d
 * 0000000140BC3872: mov     [rbp+8D0h+var_6D8], rax
 * 0000000140BC3879: lea     rcx, [rbp+8D0h+var_6E0]
 * 0000000140BC3880: movzx   eax, word ptr [r13+20h]
 * 0000000140BC3885: xor     r8d, r8d
 * 0000000140BC3888: mov     [rbp+8D0h+var_6E0], ax
 * 0000000140BC388F: xor     edx, edx
 * 0000000140BC3891: mov     [rbp+8D0h+var_6DE], ax
 * 0000000140BC3898: lea     rax, [rbp+8D0h+var_818]
 * 0000000140BC389F: mov     [rsp+9D0h+var_998], rax
 * 0000000140BC38A4: mov     rax, [rsi+500h]
 * 0000000140BC38AB: mov     [rsp+9D0h+var_9A0], r15
 * 0000000140BC38B0: mov     byte ptr [rsp+9D0h+var_9A8], r15b
 * 0000000140BC38B5: mov     [rsp+9D0h+BugCheckParameter4], rax
 * 0000000140BC38BA: mov     rax, [rsi+1F8h]
 * 0000000140BC38C1: call    KeGuardDispatchICall
 * 0000000140BC38C6: test    eax, eax
 * 0000000140BC38C8: js      loc_140BC3B58
 * 0000000140BC38CE: mov     rcx, [rbp+8D0h+var_818]
 * 0000000140BC38D5: cmp     rcx, [r13+18h]
 * 0000000140BC38D9: jz      loc_140BC3B4C
 * 0000000140BC38DF: cmp     [rsi+918h], r15d
 * 0000000140BC38E6: jnz     loc_140BC3B4C
 * 0000000140BC38EC: lea     rax, [rsi+r12]
 * 0000000140BC38F0: mov     [rsi+920h], rax
 * 0000000140BC38F7: lea     rax, [r14+r13]
 * 0000000140BC38FB: mov     [rsi+928h], rax
 * 0000000140BC3902: movsxd  rax, dword ptr [r13+0]
 * 0000000140BC3906: mov     [rsi+930h], rax
 * 0000000140BC390D: mov     [rsi+938h], rcx
 * 0000000140BC3914: mov     [rsi+918h], ebx
 * 0000000140BC391A: mov     ecx, [rsi+9D8h]
 * 0000000140BC3920: bt      ecx, 1Dh
 * 0000000140BC3924: jb      loc_140BC3B45
 * 0000000140BC392A: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC3934: jz      loc_140BC3B45
 * 0000000140BC393A: test    bl, cl
 * 0000000140BC393C: jz      loc_140BC3B45
 * 0000000140BC3942: mov     ecx, [rsi+0A74h]
 * 0000000140BC3948: mov     eax, [rsi+804h]
 * 0000000140BC394E: mov     r10, [rsi+838h]
 * 0000000140BC3955: sub     eax, ecx
 * 0000000140BC3957: mov     r8, [rsi+0A78h]
 * 0000000140BC395E: lea     rdx, [rcx+rsi]
 * 0000000140BC3962: mov     ecx, eax
 * 0000000140BC3964: shr     rcx, 3
 * 0000000140BC3968: lea     r9, [rdx+rcx*8]
 * 0000000140BC396C: jmp     loc_140BC3AEE
 * 0000000140BC3971: movzx   eax, r15b
 * 0000000140BC3975: mov     cr8, rax
 * 0000000140BC3979: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BC397E: xor     r15d, r15d
 * 0000000140BC3981: mov     eax, [r13+14h]
 * 0000000140BC3985: cmp     [rsi+918h], r15d
 * 0000000140BC398C: jnz     short loc_140BC39A0
 * 0000000140BC398E: mov     ecx, eax
 * 0000000140BC3990: mov     eax, ebx
 * 0000000140BC3992: xor     rcx, rax
 * 0000000140BC3995: mov     rax, [rsi+588h]
 * 0000000140BC399C: mov     [rax+18h], rcx
 * 0000000140BC39A0: mov     r12, 0A3A03F5891C8B4E8h
 * 0000000140BC39AA: mov     rcx, [r13+8]
 * 0000000140BC39AE: mov     r14, 0B3B74BDEE4453415h
 * 0000000140BC39B8: mov     ebx, 1
 * 0000000140BC39BD: cmp     [rsi+918h], r15d
 * 0000000140BC39C4: jnz     loc_140BC386B
 * 0000000140BC39CA: lea     rax, [rsi+r12]
 * 0000000140BC39CE: mov     [rsi+920h], rax
 * 0000000140BC39D5: lea     rax, [r14+r13]
 * 0000000140BC39D9: mov     [rsi+928h], rax
 * 0000000140BC39E0: movsxd  rax, dword ptr [r13+0]
 * 0000000140BC39E4: mov     [rsi+930h], rax
 * 0000000140BC39EB: mov     [rsi+938h], rcx
 * 0000000140BC39F2: mov     [rsi+918h], ebx
 * 0000000140BC39F8: mov     ecx, [rsi+9D8h]
 * 0000000140BC39FE: bt      ecx, 1Dh
 * 0000000140BC3A02: jb      loc_140BC386B
 * 0000000140BC3A08: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC3A12: jz      loc_140BC386B
 * 0000000140BC3A18: test    bl, cl
 * 0000000140BC3A1A: jz      loc_140BC386B
 * 0000000140BC3A20: mov     ecx, [rsi+0A74h]
 * 0000000140BC3A26: mov     eax, [rsi+804h]
 * 0000000140BC3A2C: mov     r10, [rsi+838h]
 * 0000000140BC3A33: sub     eax, ecx
 * 0000000140BC3A35: mov     r8, [rsi+0A78h]
 * 0000000140BC3A3C: lea     rdx, [rcx+rsi]
 * 0000000140BC3A40: mov     ecx, eax
 * 0000000140BC3A42: shr     rcx, 3
 * 0000000140BC3A46: lea     r9, [rdx+rcx*8]
 * 0000000140BC3A4A: jmp     short loc_140BC3A6D
 * 0000000140BC3A4C: xor     [rdx], r8
 * 0000000140BC3A4F: mov     rax, [rdx]
 * 0000000140BC3A52: movzx   ecx, r8b
 * 0000000140BC3A56: xor     rax, r10
 * 0000000140BC3A59: and     ecx, 3Fh
 * 0000000140BC3A5C: ror     r8, cl
 * 0000000140BC3A5F: add     r8, rax
 * 0000000140BC3A62: xor     r8, 0EFAh
 * 0000000140BC3A69: add     rdx, 8
 * 0000000140BC3A6D: cmp     rdx, r9
 * 0000000140BC3A70: jnz     short loc_140BC3A4C
 * 0000000140BC3A72: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC3A7A: cmp     r8, [rsi+0A80h]
 * 0000000140BC3A81: jz      loc_140BC386B
 * 0000000140BC3A87: mov     ecx, [rsi+804h]
 * 0000000140BC3A8D: mov     rax, [rsi+588h]
 * 0000000140BC3A94: mov     [rax], rsi
 * 0000000140BC3A97: mov     [rax+10h], ecx
 * 0000000140BC3A9A: mov     rcx, [rsi+0A80h]
 * 0000000140BC3AA1: cmp     [rsi+918h], r15d
 * 0000000140BC3AA8: jnz     short loc_140BC3AB8
 * 0000000140BC3AAA: mov     rax, [rsi+588h]
 * 0000000140BC3AB1: xor     rcx, r8
 * 0000000140BC3AB4: mov     [rax+18h], rcx
 * 0000000140BC3AB8: xor     edx, edx
 * 0000000140BC3ABA: mov     r9d, 100h
 * 0000000140BC3AC0: mov     rcx, rsi
 * 0000000140BC3AC3: call    sub_140BD8384
 * 0000000140BC3AC8: jmp     loc_140BC386B
 * 0000000140BC3ACD: xor     [rdx], r8
 * 0000000140BC3AD0: mov     rax, [rdx]
 * 0000000140BC3AD3: movzx   ecx, r8b
 * 0000000140BC3AD7: xor     rax, r10
 * 0000000140BC3ADA: and     ecx, 3Fh
 * 0000000140BC3ADD: ror     r8, cl
 * 0000000140BC3AE0: add     r8, rax
 * 0000000140BC3AE3: xor     r8, 0EFAh
 * 0000000140BC3AEA: add     rdx, 8
 * 0000000140BC3AEE: cmp     rdx, r9
 * 0000000140BC3AF1: jnz     short loc_140BC3ACD
 * 0000000140BC3AF3: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC3AFB: cmp     r8, [rsi+0A80h]
 * 0000000140BC3B02: jz      short loc_140BC3B45
 * 0000000140BC3B04: mov     ecx, [rsi+804h]
 * 0000000140BC3B0A: mov     rax, [rsi+588h]
 * 0000000140BC3B11: mov     [rax], rsi
 * 0000000140BC3B14: mov     [rax+10h], ecx
 * 0000000140BC3B17: mov     rcx, [rsi+0A80h]
 * 0000000140BC3B1E: cmp     [rsi+918h], r15d
 * 0000000140BC3B25: jnz     short loc_140BC3B35
 * 0000000140BC3B27: mov     rax, [rsi+588h]
 * 0000000140BC3B2E: xor     rcx, r8
 * 0000000140BC3B31: mov     [rax+18h], rcx
 * 0000000140BC3B35: xor     edx, edx
 * 0000000140BC3B37: mov     r9d, 100h
 * 0000000140BC3B3D: mov     rcx, rsi
 * 0000000140BC3B40: call    sub_140BD8384
 * 0000000140BC3B45: mov     rcx, [rbp+8D0h+var_818]
 * 0000000140BC3B4C: mov     rax, [rsi+1F0h]
 * 0000000140BC3B53: call    KeGuardDispatchICall
 * 0000000140BC3B58: mov     ebx, 1
 * 0000000140BC3B5D: mov     r11d, 1000h
 * 0000000140BC3B63: jmp     loc_140BC2FA9
 * 0000000140BC3B68: mov     rax, [rsi+1B0h]
 * 0000000140BC3B6F: lea     rcx, [rbp+8D0h+var_318]
 * 0000000140BC3B76: mov     edx, [r13+1Ch]
 * 0000000140BC3B7A: call    KeGuardDispatchICall
 * 0000000140BC3B7F: mov     rax, [rsi+1E0h]
 * 0000000140BC3B86: lea     rdx, [rbp+8D0h+var_308]
 * 0000000140BC3B8D: lea     rcx, [rbp+8D0h+var_318]
 * 0000000140BC3B94: call    KeGuardDispatchICall
 * 0000000140BC3B99: mov     ebx, r15d
 * 0000000140BC3B9C: cmp     [r13+18h], r15d
 * 0000000140BC3BA0: jbe     loc_140BC3D77
 * 0000000140BC3BA6: test    byte ptr [rsi+89Bh], 2
 * 0000000140BC3BAD: mov     eax, ebx
 * 0000000140BC3BAF: lea     r8, [rax+rax*2]
 * 0000000140BC3BB3: mov     r9d, [r13+r8*8+40h]
 * 0000000140BC3BB8: jz      short loc_140BC3BDD
 * 0000000140BC3BBA: mov     eax, 0C0000082h
 * 0000000140BC3BBF: cmp     r9d, eax
 * 0000000140BC3BC2: jnz     short loc_140BC3BDD
 * 0000000140BC3BC4: mov     eax, gs:1A4h
 * 0000000140BC3BCC: cmp     eax, [rsi+910h]
 * 0000000140BC3BD2: jnz     short loc_140BC3BDD
 * 0000000140BC3BD4: mov     rdx, [rsi+908h]
 * 0000000140BC3BDB: jmp     short loc_140BC3BE9
 * 0000000140BC3BDD: mov     ecx, r9d
 * 0000000140BC3BE0: rdmsr
 * 0000000140BC3BE2: shl     rdx, 20h
 * 0000000140BC3BE6: or      rdx, rax
 * 0000000140BC3BE9: mov     rcx, [r13+r8*8+30h]
 * 0000000140BC3BEE: mov     r8, [r13+r8*8+38h]
 * 0000000140BC3BF3: and     rdx, rcx
 * 0000000140BC3BF6: cmp     rdx, r8
 * 0000000140BC3BF9: jz      loc_140BC3D46
 * 0000000140BC3BFF: mov     ecx, [r13+1Ch]
 * 0000000140BC3C03: shl     rcx, 20h
 * 0000000140BC3C07: or      rcx, r9
 * 0000000140BC3C0A: cmp     [rsi+918h], r15d
 * 0000000140BC3C11: jnz     loc_140BC3D64
 * 0000000140BC3C17: mov     rax, [rsi+588h]
 * 0000000140BC3C1E: xor     r8, rdx
 * 0000000140BC3C21: mov     [rax+18h], r8
 * 0000000140BC3C25: cmp     [rsi+918h], r15d
 * 0000000140BC3C2C: jnz     loc_140BC3D64
 * 0000000140BC3C32: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC3C3C: mov     edi, 1
 * 0000000140BC3C41: add     rax, rsi
 * 0000000140BC3C44: mov     [rsi+920h], rax
 * 0000000140BC3C4B: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC3C55: add     rax, r13
 * 0000000140BC3C58: mov     [rsi+928h], rax
 * 0000000140BC3C5F: movsxd  rax, dword ptr [r13+0]
 * 0000000140BC3C63: mov     [rsi+930h], rax
 * 0000000140BC3C6A: mov     [rsi+938h], rcx
 * 0000000140BC3C71: mov     [rsi+918h], edi
 * 0000000140BC3C77: mov     ecx, [rsi+9D8h]
 * 0000000140BC3C7D: bt      ecx, 1Dh
 * 0000000140BC3C81: jb      loc_140BC3D64
 * 0000000140BC3C87: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC3C91: jz      loc_140BC3D64
 * 0000000140BC3C97: test    dil, cl
 * 0000000140BC3C9A: jz      loc_140BC3D64
 * 0000000140BC3CA0: mov     ecx, [rsi+0A74h]
 * 0000000140BC3CA6: mov     eax, [rsi+804h]
 * 0000000140BC3CAC: mov     r10, [rsi+838h]
 * 0000000140BC3CB3: sub     eax, ecx
 * 0000000140BC3CB5: mov     r8, [rsi+0A78h]
 * 0000000140BC3CBC: lea     rdx, [rcx+rsi]
 * 0000000140BC3CC0: mov     ecx, eax
 * 0000000140BC3CC2: shr     rcx, 3
 * 0000000140BC3CC6: lea     r9, [rdx+rcx*8]
 * 0000000140BC3CCA: jmp     short loc_140BC3CED
 * 0000000140BC3CCC: xor     [rdx], r8
 * 0000000140BC3CCF: mov     rax, [rdx]
 * 0000000140BC3CD2: movzx   ecx, r8b
 * 0000000140BC3CD6: xor     rax, r10
 * 0000000140BC3CD9: and     ecx, 3Fh
 * 0000000140BC3CDC: ror     r8, cl
 * 0000000140BC3CDF: add     r8, rax
 * 0000000140BC3CE2: xor     r8, 0EFAh
 * 0000000140BC3CE9: add     rdx, 8
 * 0000000140BC3CED: cmp     rdx, r9
 * 0000000140BC3CF0: jnz     short loc_140BC3CCC
 * 0000000140BC3CF2: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC3CFA: cmp     r8, [rsi+0A80h]
 * 0000000140BC3D01: jz      short loc_140BC3D64
 * 0000000140BC3D03: mov     ecx, [rsi+804h]
 * 0000000140BC3D09: mov     rax, [rsi+588h]
 * 0000000140BC3D10: mov     [rax], rsi
 * 0000000140BC3D13: mov     [rax+10h], ecx
 * 0000000140BC3D16: mov     rcx, [rsi+0A80h]
 * 0000000140BC3D1D: cmp     [rsi+918h], r15d
 * 0000000140BC3D24: jnz     short loc_140BC3D34
 * 0000000140BC3D26: mov     rax, [rsi+588h]
 * 0000000140BC3D2D: xor     rcx, r8
 * 0000000140BC3D30: mov     [rax+18h], rcx
 * 0000000140BC3D34: xor     edx, edx
 * 0000000140BC3D36: mov     r9d, 100h
 * 0000000140BC3D3C: mov     rcx, rsi
 * 0000000140BC3D3F: call    sub_140BD8384
 * 0000000140BC3D44: jmp     short loc_140BC3D64
 * 0000000140BC3D46: test    dword ptr [rsi+9DCh], 200h
 * 0000000140BC3D50: jz      short loc_140BC3D64
 * 0000000140BC3D52: cmp     rcx, 0FFFFFFFFFFFFFFFFh
 * 0000000140BC3D56: jnz     short loc_140BC3D64
 * 0000000140BC3D58: mov     rax, rdx
 * 0000000140BC3D5B: mov     ecx, r9d
 * 0000000140BC3D5E: shr     rdx, 20h
 * 0000000140BC3D62: wrmsr
 * 0000000140BC3D64: inc     ebx
 * 0000000140BC3D66: cmp     ebx, [r13+18h]
 * 0000000140BC3D6A: jb      loc_140BC3BA6
 * 0000000140BC3D70: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC3D77: mov     rax, [rsi+1A8h]
 * 0000000140BC3D7E: lea     rcx, [rbp+8D0h+var_308]
 * 0000000140BC3D85: call    KeGuardDispatchICall
 * 0000000140BC3D8A: mov     eax, [r13+18h]
 * 0000000140BC3D8E: shl     eax, 0Fh
 * 0000000140BC3D91: add     [rsi+848h], eax
 * 0000000140BC3D97: mov     ebx, 1
 * 0000000140BC3D9C: jmp     loc_140BCE398
 * 0000000140BC3DA1: mov     ecx, [rsi+850h]
 * 0000000140BC3DA7: test    bl, cl
 * 0000000140BC3DA9: jz      loc_140BC2FAF
 * 0000000140BC3DAF: bt      dword ptr [rsi+9D8h], 1Dh
 * 0000000140BC3DB7: jb      short loc_140BC3DCF
 * 0000000140BC3DB9: mov     r14d, r15d
 * 0000000140BC3DBC: and     ecx, 3
 * 0000000140BC3DBF: cmp     cl, 3
 * 0000000140BC3DC2: setz    r14b
 * 0000000140BC3DC6: mov     dword ptr [rbp+8D0h+arg_8], r14d
 * 0000000140BC3DCD: jmp     short loc_140BC3E1F
 * 0000000140BC3DCF: rdtsc
 * 0000000140BC3DD1: shl     rdx, 20h
 * 0000000140BC3DD5: or      rax, rdx
 * 0000000140BC3DD8: mov     rcx, rax
 * 0000000140BC3DDB: ror     rax, 3
 * 0000000140BC3DDF: xor     rcx, rax
 * 0000000140BC3DE2: mov     rax, 7010008004002001h
 * 0000000140BC3DEC: mul     rcx
 * 0000000140BC3DEF: mov     rcx, rdx
 * 0000000140BC3DF2: mov     [rbp+8D0h+var_250], rdx
 * 0000000140BC3DF9: xor     rcx, rax
 * 0000000140BC3DFC: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140BC3E06: mul     rcx
 * 0000000140BC3E09: shr     rdx, 1
 * 0000000140BC3E0C: lea     rax, [rdx+rdx*2]
 * 0000000140BC3E10: cmp     rcx, rax
 * 0000000140BC3E13: mov     eax, r15d
 * 0000000140BC3E16: setz    al
 * 0000000140BC3E19: mov     dword ptr [rbp+8D0h+arg_8], eax
 * 0000000140BC3E1F: mov     rax, [rsi+188h]
 * 0000000140BC3E26: mov     rbx, [rsi+540h]
 * 0000000140BC3E2D: mov     dword ptr [rsp+9D0h+var_960], r15d
 * 0000000140BC3E32: call    KeGuardDispatchICall
 * 0000000140BC3E37: bt      dword ptr [rsi+9D8h], 1Dh
 * 0000000140BC3E3F: jb      short loc_140BC3E5A
 * 0000000140BC3E41: mov     ecx, [rsi+978h]
 * 0000000140BC3E47: cmp     ecx, 7
 * 0000000140BC3E4A: jnb     short loc_140BC3E5A
 * 0000000140BC3E4C: mov     r12d, 1
 * 0000000140BC3E52: mov     r14d, r12d
 * 0000000140BC3E55: shl     r14b, cl
 * 0000000140BC3E58: jmp     short loc_140BC3E78
 * 0000000140BC3E5A: mov     rax, [rsi+138h]
 * 0000000140BC3E61: xor     edx, edx
 * 0000000140BC3E63: mov     rcx, [rsi+0A48h]
 * 0000000140BC3E6A: call    KeGuardDispatchICall
 * 0000000140BC3E6F: mov     r14b, 80h
 * 0000000140BC3E72: mov     r12d, 1
 * 0000000140BC3E78: mov     rax, [rsi+148h]
 * 0000000140BC3E7F: xor     edx, edx
 * 0000000140BC3E81: mov     rcx, rbx
 * 0000000140BC3E84: call    KeGuardDispatchICall
 * 0000000140BC3E89: mov     r8, [rsi+518h]
 * 0000000140BC3E90: mov     rdx, [r8]
 * 0000000140BC3E93: cmp     rdx, r8
 * 0000000140BC3E96: jz      short loc_140BC3EBE
 * 0000000140BC3E98: mov     rax, [rsi+6C8h]
 * 0000000140BC3E9F: mov     rcx, rdx
 * 0000000140BC3EA2: sub     rcx, [rsi+6E0h]
 * 0000000140BC3EA9: lock or [rcx+rax], r14b
 * 0000000140BC3EAE: mov     rdx, [rdx]
 * 0000000140BC3EB1: add     r15d, r12d
 * 0000000140BC3EB4: cmp     rdx, r8
 * 0000000140BC3EB7: jnz     short loc_140BC3E98
 * 0000000140BC3EB9: mov     dword ptr [rsp+9D0h+var_960], r15d
 * 0000000140BC3EBE: mov     rax, [rsi+548h]
 * 0000000140BC3EC5: mov     r15d, 4
 * 0000000140BC3ECB: mov     edi, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BC3ED1: mov     r13, [rax]
 * 0000000140BC3ED4: mov     rax, [rsi+740h]
 * 0000000140BC3EDB: mov     ebx, [rax+r13]
 * 0000000140BC3EDF: mov     [rsp+9D0h+var_978], rbx
 * 0000000140BC3EE4: mov     rax, [rsi+110h]
 * 0000000140BC3EEB: mov     rdx, r15
 * 0000000140BC3EEE: mov     rcx, r13
 * 0000000140BC3EF1: call    KeGuardDispatchICall
 * 0000000140BC3EF6: mov     r12, rax
 * 0000000140BC3EF9: test    rax, rax
 * 0000000140BC3EFC: jz      loc_140BC42E7
 * 0000000140BC3F02: mov     rax, [rsi+118h]
 * 0000000140BC3F09: mov     rcx, r12
 * 0000000140BC3F0C: call    KeGuardDispatchICall
 * 0000000140BC3F11: mov     rbx, rax
 * 0000000140BC3F14: mov     al, [rax]
 * 0000000140BC3F16: and     al, 7Fh
 * 0000000140BC3F18: cmp     al, 3
 * 0000000140BC3F1A: jnz     loc_140BC4080
 * 0000000140BC3F20: mov     rax, [rsi+6C8h]
 * 0000000140BC3F27: test    [rbx+rax], r14b
 * 0000000140BC3F2B: jnz     loc_140BC406B
 * 0000000140BC3F31: mov     rax, [rsi+6D0h]
 * 0000000140BC3F38: mov     ecx, [rbx+rax]
 * 0000000140BC3F3B: test    [rsi+6E8h], ecx
 * 0000000140BC3F41: jz      loc_140BC406B
 * 0000000140BC3F47: xor     r11d, r11d
 * 0000000140BC3F4A: cmp     [rsi+918h], r11d
 * 0000000140BC3F51: jnz     loc_140BC406B
 * 0000000140BC3F57: mov     rcx, [rsp+9D0h+var_980]
 * 0000000140BC3F5C: lea     edx, [r11+1]
 * 0000000140BC3F60: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC3F6A: add     rax, rsi
 * 0000000140BC3F6D: mov     [rsi+920h], rax
 * 0000000140BC3F74: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC3F7E: add     rax, rcx
 * 0000000140BC3F81: mov     [rsi+928h], rax
 * 0000000140BC3F88: movsxd  rax, dword ptr [rcx]
 * 0000000140BC3F8B: mov     [rsi+930h], rax
 * 0000000140BC3F92: mov     [rsi+938h], rbx
 * 0000000140BC3F99: mov     [rsi+918h], edx
 * 0000000140BC3F9F: mov     ecx, [rsi+9D8h]
 * 0000000140BC3FA5: bt      ecx, 1Dh
 * 0000000140BC3FA9: jb      loc_140BC406B
 * 0000000140BC3FAF: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC3FB9: jz      loc_140BC406B
 * 0000000140BC3FBF: test    dl, cl
 * 0000000140BC3FC1: jz      loc_140BC406B
 * 0000000140BC3FC7: mov     ecx, [rsi+0A74h]
 * 0000000140BC3FCD: mov     eax, [rsi+804h]
 * 0000000140BC3FD3: mov     r10, [rsi+838h]
 * 0000000140BC3FDA: sub     eax, ecx
 * 0000000140BC3FDC: mov     r8, [rsi+0A78h]
 * 0000000140BC3FE3: lea     rdx, [rcx+rsi]
 * 0000000140BC3FE7: mov     ecx, eax
 * 0000000140BC3FE9: shr     rcx, 3
 * 0000000140BC3FED: lea     r9, [rdx+rcx*8]
 * 0000000140BC3FF1: jmp     short loc_140BC4014
 * 0000000140BC3FF3: xor     [rdx], r8
 * 0000000140BC3FF6: mov     rax, [rdx]
 * 0000000140BC3FF9: movzx   ecx, r8b
 * 0000000140BC3FFD: xor     rax, r10
 * 0000000140BC4000: and     ecx, 3Fh
 * 0000000140BC4003: ror     r8, cl
 * 0000000140BC4006: add     r8, rax
 * 0000000140BC4009: xor     r8, 0EFAh
 * 0000000140BC4010: add     rdx, 8
 * 0000000140BC4014: cmp     rdx, r9
 * 0000000140BC4017: jnz     short loc_140BC3FF3
 * 0000000140BC4019: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC4021: cmp     r8, [rsi+0A80h]
 * 0000000140BC4028: jz      short loc_140BC406B
 * 0000000140BC402A: mov     ecx, [rsi+804h]
 * 0000000140BC4030: mov     rax, [rsi+588h]
 * 0000000140BC4037: mov     [rax], rsi
 * 0000000140BC403A: mov     [rax+10h], ecx
 * 0000000140BC403D: mov     rcx, [rsi+0A80h]
 * 0000000140BC4044: cmp     [rsi+918h], r11d
 * 0000000140BC404B: jnz     short loc_140BC405B
 * 0000000140BC404D: mov     rax, [rsi+588h]
 * 0000000140BC4054: xor     rcx, r8
 * 0000000140BC4057: mov     [rax+18h], rcx
 * 0000000140BC405B: xor     edx, edx
 * 0000000140BC405D: mov     r9d, 100h
 * 0000000140BC4063: mov     rcx, rsi
 * 0000000140BC4066: call    sub_140BD8384
 * 0000000140BC406B: mov     rax, [rsi+6C8h]
 * 0000000140BC4072: mov     cl, r14b
 * 0000000140BC4075: not     cl
 * 0000000140BC4077: lock and [rbx+rax], cl
 * 0000000140BC407B: jmp     loc_140BC42D0
 * 0000000140BC4080: xor     r11d, r11d
 * 0000000140BC4083: cmp     al, 6
 * 0000000140BC4085: jnz     loc_140BC41A6
 * 0000000140BC408B: test    edi, edi
 * 0000000140BC408D: jz      loc_140BC42D0
 * 0000000140BC4093: mov     rcx, [rsi+690h]
 * 0000000140BC409A: mov     rax, [rbx+rcx+20h]
 * 0000000140BC409F: cmp     rax, [rsi+320h]
 * 0000000140BC40A6: jz      short loc_140BC40B1
 * 0000000140BC40A8: cmp     rax, [rsi+328h]
 * 0000000140BC40AF: jnz     short loc_140BC40D1
 * 0000000140BC40B1: mov     rax, [rsi+330h]
 * 0000000140BC40B8: cmp     [rbx+rcx+30h], rax
 * 0000000140BC40BD: jnz     short loc_140BC40D1
 * 0000000140BC40BF: mov     rax, [rsi+338h]
 * 0000000140BC40C6: cmp     [rbx+rcx+28h], rax
 * 0000000140BC40CB: jz      loc_140BC42D0
 * 0000000140BC40D1: cmp     [rsi+918h], r11d
 * 0000000140BC40D8: jnz     loc_140BC42D0
 * 0000000140BC40DE: mov     rcx, [rsp+9D0h+var_980]
 * 0000000140BC40E3: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC40ED: add     rax, rsi
 * 0000000140BC40F0: mov     [rsi+920h], rax
 * 0000000140BC40F7: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC4101: add     rax, rcx
 * 0000000140BC4104: mov     [rsi+928h], rax
 * 0000000140BC410B: movsxd  rax, dword ptr [rcx]
 * 0000000140BC410E: mov     [rsi+930h], rax
 * 0000000140BC4115: mov     [rsi+938h], rbx
 * 0000000140BC411C: mov     ebx, 1
 * 0000000140BC4121: mov     [rsi+918h], ebx
 * 0000000140BC4127: mov     ecx, [rsi+9D8h]
 * 0000000140BC412D: bt      ecx, 1Dh
 * 0000000140BC4131: jb      loc_140BC42D0
 * 0000000140BC4137: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC4141: jz      loc_140BC42D0
 * 0000000140BC4147: test    bl, cl
 * 0000000140BC4149: jz      loc_140BC42D0
 * 0000000140BC414F: mov     ecx, [rsi+0A74h]
 * 0000000140BC4155: mov     eax, [rsi+804h]
 * 0000000140BC415B: mov     r10, [rsi+838h]
 * 0000000140BC4162: sub     eax, ecx
 * 0000000140BC4164: mov     r8, [rsi+0A78h]
 * 0000000140BC416B: lea     rdx, [rcx+rsi]
 * 0000000140BC416F: mov     ecx, eax
 * 0000000140BC4171: shr     rcx, 3
 * 0000000140BC4175: lea     r9, [rdx+rcx*8]
 * 0000000140BC4179: jmp     short loc_140BC419C
 * 0000000140BC417B: xor     [rdx], r8
 * 0000000140BC417E: mov     rax, [rdx]
 * 0000000140BC4181: movzx   ecx, r8b
 * 0000000140BC4185: xor     rax, r10
 * 0000000140BC4188: and     ecx, 3Fh
 * 0000000140BC418B: ror     r8, cl
 * 0000000140BC418E: add     r8, rax
 * 0000000140BC4191: xor     r8, 0EFAh
 * 0000000140BC4198: add     rdx, 8
 * 0000000140BC419C: cmp     rdx, r9
 * 0000000140BC419F: jnz     short loc_140BC417B
 * 0000000140BC41A1: jmp     loc_140BC427E
 * 0000000140BC41A6: test    al, al
 * 0000000140BC41A8: jz      loc_140BC42D0
 * 0000000140BC41AE: cmp     [rsi+918h], r11d
 * 0000000140BC41B5: jnz     loc_140BC42D0
 * 0000000140BC41BB: mov     rcx, [rsp+9D0h+var_980]
 * 0000000140BC41C0: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC41CA: add     rax, rsi
 * 0000000140BC41CD: mov     [rsi+920h], rax
 * 0000000140BC41D4: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC41DE: add     rax, rcx
 * 0000000140BC41E1: mov     [rsi+928h], rax
 * 0000000140BC41E8: movsxd  rax, dword ptr [rcx]
 * 0000000140BC41EB: mov     [rsi+930h], rax
 * 0000000140BC41F2: mov     [rsi+938h], rbx
 * 0000000140BC41F9: mov     ebx, 1
 * 0000000140BC41FE: mov     [rsi+918h], ebx
 * 0000000140BC4204: mov     ecx, [rsi+9D8h]
 * 0000000140BC420A: bt      ecx, 1Dh
 * 0000000140BC420E: jb      loc_140BC42D0
 * 0000000140BC4214: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC421E: jz      loc_140BC42D0
 * 0000000140BC4224: test    bl, cl
 * 0000000140BC4226: jz      loc_140BC42D0
 * 0000000140BC422C: mov     ecx, [rsi+0A74h]
 * 0000000140BC4232: mov     eax, [rsi+804h]
 * 0000000140BC4238: mov     r10, [rsi+838h]
 * 0000000140BC423F: sub     eax, ecx
 * 0000000140BC4241: mov     r8, [rsi+0A78h]
 * 0000000140BC4248: lea     rdx, [rcx+rsi]
 * 0000000140BC424C: mov     ecx, eax
 * 0000000140BC424E: shr     rcx, 3
 * 0000000140BC4252: lea     r9, [rdx+rcx*8]
 * 0000000140BC4256: jmp     short loc_140BC4279
 * 0000000140BC4258: xor     [rdx], r8
 * 0000000140BC425B: mov     rax, [rdx]
 * 0000000140BC425E: movzx   ecx, r8b
 * 0000000140BC4262: xor     rax, r10
 * 0000000140BC4265: and     ecx, 3Fh
 * 0000000140BC4268: ror     r8, cl
 * 0000000140BC426B: add     r8, rax
 * 0000000140BC426E: xor     r8, 0EFAh
 * 0000000140BC4275: add     rdx, 8
 * 0000000140BC4279: cmp     rdx, r9
 * 0000000140BC427C: jnz     short loc_140BC4258
 * 0000000140BC427E: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC4286: cmp     r8, [rsi+0A80h]
 * 0000000140BC428D: jz      short loc_140BC42D0
 * 0000000140BC428F: mov     ecx, [rsi+804h]
 * 0000000140BC4295: mov     rax, [rsi+588h]
 * 0000000140BC429C: mov     [rax], rsi
 * 0000000140BC429F: mov     [rax+10h], ecx
 * 0000000140BC42A2: mov     rcx, [rsi+0A80h]
 * 0000000140BC42A9: cmp     [rsi+918h], r11d
 * 0000000140BC42B0: jnz     short loc_140BC42C0
 * 0000000140BC42B2: mov     rax, [rsi+588h]
 * 0000000140BC42B9: xor     rcx, r8
 * 0000000140BC42BC: mov     [rax+18h], rcx
 * 0000000140BC42C0: mov     r9d, 100h
 * 0000000140BC42C6: xor     edx, edx
 * 0000000140BC42C8: mov     rcx, rsi
 * 0000000140BC42CB: call    sub_140BD8384
 * 0000000140BC42D0: mov     rax, [rsi+130h]
 * 0000000140BC42D7: mov     rdx, r12
 * 0000000140BC42DA: mov     rcx, r13
 * 0000000140BC42DD: call    KeGuardDispatchICall
 * 0000000140BC42E2: mov     rbx, [rsp+9D0h+var_978]
 * 0000000140BC42E7: add     r15, 4
 * 0000000140BC42EB: cmp     r15, rbx
 * 0000000140BC42EE: jb      loc_140BC3EE4
 * 0000000140BC42F4: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC42FB: cmp     r14b, 80h
 * 0000000140BC42FF: jnz     short loc_140BC4316
 * 0000000140BC4301: mov     rax, [rsi+140h]
 * 0000000140BC4308: xor     edx, edx
 * 0000000140BC430A: mov     rcx, [rsi+0A48h]
 * 0000000140BC4311: call    KeGuardDispatchICall
 * 0000000140BC4316: mov     rcx, [rsi+540h]
 * 0000000140BC431D: xor     edx, edx
 * 0000000140BC431F: mov     rax, [rsi+150h]
 * 0000000140BC4326: call    KeGuardDispatchICall
 * 0000000140BC432B: mov     rax, [rsi+190h]
 * 0000000140BC4332: call    KeGuardDispatchICall
 * 0000000140BC4337: mov     eax, dword ptr [rsp+9D0h+var_960]
 * 0000000140BC433B: shr     rbx, 2
 * 0000000140BC433F: add     eax, ebx
 * 0000000140BC4341: shl     eax, 8
 * 0000000140BC4344: jmp     loc_140BC2F95
 * 0000000140BC4349: mov     eax, [rsi+850h]
 * 0000000140BC434F: test    bl, al
 * 0000000140BC4351: jnz     loc_140BC2FAF
 * 0000000140BC4357: mov     rax, [rsi+188h]
 * 0000000140BC435E: mov     r13d, r15d
 * 0000000140BC4361: mov     rbx, [rsi+540h]
 * 0000000140BC4368: mov     [rsp+9D0h+var_958], r15d
 * 0000000140BC436D: call    KeGuardDispatchICall
 * 0000000140BC4372: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BC437C: jnz     short loc_140BC4394
 * 0000000140BC437E: mov     ecx, [rsi+978h]
 * 0000000140BC4384: cmp     ecx, 7
 * 0000000140BC4387: jnb     short loc_140BC4394
 * 0000000140BC4389: mov     r12d, 1
 * 0000000140BC438F: shl     r12b, cl
 * 0000000140BC4392: jmp     short loc_140BC43AC
 * 0000000140BC4394: mov     rax, [rsi+138h]
 * 0000000140BC439B: xor     edx, edx
 * 0000000140BC439D: mov     rcx, [rsi+0A48h]
 * 0000000140BC43A4: call    KeGuardDispatchICall
 * 0000000140BC43A9: mov     r12b, 80h
 * 0000000140BC43AC: mov     rax, [rsi+148h]
 * 0000000140BC43B3: xor     edx, edx
 * 0000000140BC43B5: mov     rcx, rbx
 * 0000000140BC43B8: mov     dword ptr [rsp+9D0h+var_960], r12d
 * 0000000140BC43BD: call    KeGuardDispatchICall
 * 0000000140BC43C2: mov     r15, [rsi+518h]
 * 0000000140BC43C9: mov     r14, [r15]
 * 0000000140BC43CC: cmp     r14, r15
 * 0000000140BC43CF: jz      loc_140BC4565
 * 0000000140BC43D5: mov     rdi, [rsp+9D0h+var_980]
 * 0000000140BC43DA: mov     rbx, r14
 * 0000000140BC43DD: sub     rbx, [rsi+6E0h]
 * 0000000140BC43E4: cmp     r12b, 80h
 * 0000000140BC43E8: jz      loc_140BC453E
 * 0000000140BC43EE: mov     rax, [rsi+6C8h]
 * 0000000140BC43F5: test    [rbx+rax], r12b
 * 0000000140BC43F9: jz      loc_140BC453E
 * 0000000140BC43FF: mov     rax, [rsi+6D0h]
 * 0000000140BC4406: mov     ecx, [rbx+rax]
 * 0000000140BC4409: test    [rsi+6E8h], ecx
 * 0000000140BC440F: jz      loc_140BC453E
 * 0000000140BC4415: xor     r11d, r11d
 * 0000000140BC4418: cmp     [rsi+918h], r11d
 * 0000000140BC441F: jnz     loc_140BC453E
 * 0000000140BC4425: lea     ecx, [r11+1]
 * 0000000140BC4429: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC4433: add     rax, rsi
 * 0000000140BC4436: mov     [rsi+920h], rax
 * 0000000140BC443D: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC4447: add     rax, rdi
 * 0000000140BC444A: mov     [rsi+928h], rax
 * 0000000140BC4451: movsxd  rax, dword ptr [rdi]
 * 0000000140BC4454: mov     [rsi+930h], rax
 * 0000000140BC445B: mov     rax, rbx
 * 0000000140BC445E: or      rax, rcx
 * 0000000140BC4461: mov     [rsi+938h], rax
 * 0000000140BC4468: mov     [rsi+918h], ecx
 * 0000000140BC446E: mov     ecx, [rsi+9D8h]
 * 0000000140BC4474: bt      ecx, 1Dh
 * 0000000140BC4478: jb      loc_140BC453E
 * 0000000140BC447E: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC4488: jz      loc_140BC453E
 * 0000000140BC448E: lea     eax, [r11+1]
 * 0000000140BC4492: test    al, cl
 * 0000000140BC4494: jz      loc_140BC453E
 * 0000000140BC449A: mov     ecx, [rsi+0A74h]
 * 0000000140BC44A0: mov     eax, [rsi+804h]
 * 0000000140BC44A6: mov     r10, [rsi+838h]
 * 0000000140BC44AD: sub     eax, ecx
 * 0000000140BC44AF: mov     r8, [rsi+0A78h]
 * 0000000140BC44B6: lea     rdx, [rcx+rsi]
 * 0000000140BC44BA: mov     ecx, eax
 * 0000000140BC44BC: shr     rcx, 3
 * 0000000140BC44C0: lea     r9, [rdx+rcx*8]
 * 0000000140BC44C4: jmp     short loc_140BC44E7
 * 0000000140BC44C6: xor     [rdx], r8
 * 0000000140BC44C9: mov     rax, [rdx]
 * 0000000140BC44CC: movzx   ecx, r8b
 * 0000000140BC44D0: xor     rax, r10
 * 0000000140BC44D3: and     ecx, 3Fh
 * 0000000140BC44D6: ror     r8, cl
 * 0000000140BC44D9: add     r8, rax
 * 0000000140BC44DC: xor     r8, 0EFAh
 * 0000000140BC44E3: add     rdx, 8
 * 0000000140BC44E7: cmp     rdx, r9
 * 0000000140BC44EA: jnz     short loc_140BC44C6
 * 0000000140BC44EC: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC44F4: cmp     r8, [rsi+0A80h]
 * 0000000140BC44FB: jz      short loc_140BC453E
 * 0000000140BC44FD: mov     ecx, [rsi+804h]
 * 0000000140BC4503: mov     rax, [rsi+588h]
 * 0000000140BC450A: mov     [rax], rsi
 * 0000000140BC450D: mov     [rax+10h], ecx
 * 0000000140BC4510: mov     rcx, [rsi+0A80h]
 * 0000000140BC4517: cmp     [rsi+918h], r11d
 * 0000000140BC451E: jnz     short loc_140BC452E
 * 0000000140BC4520: mov     rax, [rsi+588h]
 * 0000000140BC4527: xor     rcx, r8
 * 0000000140BC452A: mov     [rax+18h], rcx
 * 0000000140BC452E: xor     edx, edx
 * 0000000140BC4530: mov     r9d, 100h
 * 0000000140BC4536: mov     rcx, rsi
 * 0000000140BC4539: call    sub_140BD8384
 * 0000000140BC453E: mov     rax, [rsi+6C8h]
 * 0000000140BC4545: lock or [rbx+rax], r12b
 * 0000000140BC454A: mov     r14, [r14]
 * 0000000140BC454D: inc     r13d
 * 0000000140BC4550: cmp     r14, r15
 * 0000000140BC4553: jnz     loc_140BC43DA
 * 0000000140BC4559: mov     [rsp+9D0h+var_958], r13d
 * 0000000140BC455E: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC4565: mov     rcx, [rsi+4F8h]
 * 0000000140BC456C: mov     rax, cr8
 * 0000000140BC4570: mov     [rsp+9D0h+var_978], rax
 * 0000000140BC4575: mov     eax, 0Ch
 * 0000000140BC457A: mov     cr8, rax
 * 0000000140BC457E: mov     rax, [rsi+158h]
 * 0000000140BC4585: lea     rdx, [rbp+8D0h+var_178]
 * 0000000140BC458C: call    KeGuardDispatchICall
 * 0000000140BC4591: mov     r13, [rsi+4F0h]
 * 0000000140BC4598: mov     r14, [r13+0]
 * 0000000140BC459C: cmp     r14, r13
 * 0000000140BC459F: jz      loc_140BC4724
 * 0000000140BC45A5: mov     rdi, [rsp+9D0h+var_980]
 * 0000000140BC45AA: mov     r15b, r12b
 * 0000000140BC45AD: movzx   edx, r12b
 * 0000000140BC45B1: not     r15b
 * 0000000140BC45B4: mov     dword ptr [rbp+8D0h+arg_8], edx
 * 0000000140BC45BA: xor     r12d, r12d
 * 0000000140BC45BD: mov     rax, [rsi+6C8h]
 * 0000000140BC45C4: mov     rbx, r14
 * 0000000140BC45C7: sub     rbx, [rsi+6C0h]
 * 0000000140BC45CE: movsx   ecx, byte ptr [rax+rbx]
 * 0000000140BC45D2: test    edx, ecx
 * 0000000140BC45D4: jnz     loc_140BC4700
 * 0000000140BC45DA: cmp     [rsi+918h], r12d
 * 0000000140BC45E1: jnz     loc_140BC4700
 * 0000000140BC45E7: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC45F1: mov     r8d, 1
 * 0000000140BC45F7: add     rax, rsi
 * 0000000140BC45FA: mov     [rsi+920h], rax
 * 0000000140BC4601: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC460B: add     rax, rdi
 * 0000000140BC460E: mov     [rsi+928h], rax
 * 0000000140BC4615: movsxd  rax, dword ptr [rdi]
 * 0000000140BC4618: mov     [rsi+930h], rax
 * 0000000140BC461F: mov     [rsi+938h], rbx
 * 0000000140BC4626: mov     [rsi+918h], r8d
 * 0000000140BC462D: mov     ecx, [rsi+9D8h]
 * 0000000140BC4633: bt      ecx, 1Dh
 * 0000000140BC4637: jb      loc_140BC4700
 * 0000000140BC463D: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC4647: jz      loc_140BC4700
 * 0000000140BC464D: test    r8b, cl
 * 0000000140BC4650: jz      loc_140BC4700
 * 0000000140BC4656: mov     ecx, [rsi+0A74h]
 * 0000000140BC465C: mov     eax, [rsi+804h]
 * 0000000140BC4662: mov     r10, [rsi+838h]
 * 0000000140BC4669: sub     eax, ecx
 * 0000000140BC466B: mov     r8, [rsi+0A78h]
 * 0000000140BC4672: lea     rdx, [rcx+rsi]
 * 0000000140BC4676: mov     ecx, eax
 * 0000000140BC4678: shr     rcx, 3
 * 0000000140BC467C: lea     r9, [rdx+rcx*8]
 * 0000000140BC4680: jmp     short loc_140BC46A3
 * 0000000140BC4682: xor     [rdx], r8
 * 0000000140BC4685: mov     rax, [rdx]
 * 0000000140BC4688: movzx   ecx, r8b
 * 0000000140BC468C: xor     rax, r10
 * 0000000140BC468F: and     ecx, 3Fh
 * 0000000140BC4692: ror     r8, cl
 * 0000000140BC4695: add     r8, rax
 * 0000000140BC4698: xor     r8, 0EFAh
 * 0000000140BC469F: add     rdx, 8
 * 0000000140BC46A3: cmp     rdx, r9
 * 0000000140BC46A6: jnz     short loc_140BC4682
 * 0000000140BC46A8: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC46B0: cmp     r8, [rsi+0A80h]
 * 0000000140BC46B7: jz      short loc_140BC46FA
 * 0000000140BC46B9: mov     ecx, [rsi+804h]
 * 0000000140BC46BF: mov     rax, [rsi+588h]
 * 0000000140BC46C6: mov     [rax], rsi
 * 0000000140BC46C9: mov     [rax+10h], ecx
 * 0000000140BC46CC: mov     rcx, [rsi+0A80h]
 * 0000000140BC46D3: cmp     [rsi+918h], r12d
 * 0000000140BC46DA: jnz     short loc_140BC46EA
 * 0000000140BC46DC: mov     rax, [rsi+588h]
 * 0000000140BC46E3: xor     rcx, r8
 * 0000000140BC46E6: mov     [rax+18h], rcx
 * 0000000140BC46EA: xor     edx, edx
 * 0000000140BC46EC: mov     r9d, 100h
 * 0000000140BC46F2: mov     rcx, rsi
 * 0000000140BC46F5: call    sub_140BD8384
 * 0000000140BC46FA: mov     edx, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BC4700: mov     rax, [rsi+6C8h]
 * 0000000140BC4707: lock and [rbx+rax], r15b
 * 0000000140BC470C: mov     r14, [r14]
 * 0000000140BC470F: cmp     r14, r13
 * 0000000140BC4712: jnz     loc_140BC45BD
 * 0000000140BC4718: mov     r12d, dword ptr [rsp+9D0h+var_960]
 * 0000000140BC471D: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC4724: mov     rax, [rsi+198h]
 * 0000000140BC472B: lea     rcx, [rbp+8D0h+var_178]
 * 0000000140BC4732: call    KeGuardDispatchICall
 * 0000000140BC4737: movzx   eax, byte ptr [rsp+9D0h+var_978]
 * 0000000140BC473C: mov     cr8, rax
 * 0000000140BC4740: cmp     r12b, 80h
 * 0000000140BC4744: jnz     short loc_140BC475B
 * 0000000140BC4746: mov     rax, [rsi+140h]
 * 0000000140BC474D: xor     edx, edx
 * 0000000140BC474F: mov     rcx, [rsi+0A48h]
 * 0000000140BC4756: call    KeGuardDispatchICall
 * 0000000140BC475B: mov     rcx, [rsi+540h]
 * 0000000140BC4762: xor     edx, edx
 * 0000000140BC4764: mov     rax, [rsi+150h]
 * 0000000140BC476B: call    KeGuardDispatchICall
 * 0000000140BC4770: mov     rax, [rsi+190h]
 * 0000000140BC4777: call    KeGuardDispatchICall
 * 0000000140BC477C: mov     eax, [rsp+9D0h+var_958]
 * 0000000140BC4780: jmp     loc_140BC4341
 * 0000000140BC4785: mov     r14, [r13+8]
 * 0000000140BC4789: mov     r8d, [r13+10h]
 * 0000000140BC478D: mov     r9, r14
 * 0000000140BC4790: add     [rsi+848h], r8d
 * 0000000140BC4797: mov     rax, r14
 * 0000000140BC479A: mov     r10d, [rsi+834h]
 * 0000000140BC47A1: mov     r15, [rsi+838h]
 * 0000000140BC47A8: lea     rcx, [r14+r8]
 * 0000000140BC47AC: cmp     r14, rcx
 * 0000000140BC47AF: jnb     short loc_140BC47C1
 * 0000000140BC47B1: mov     edx, 40h ; '@'
 * 0000000140BC47B6: prefetchnta byte ptr [rax]
 * 0000000140BC47B9: add     rax, rdx
 * 0000000140BC47BC: cmp     rax, rcx
 * 0000000140BC47BF: jb      short loc_140BC47B6
 * 0000000140BC47C1: mov     r11d, r8d
 * 0000000140BC47C4: mov     rbx, r15
 * 0000000140BC47C7: shr     r11d, 7
 * 0000000140BC47CB: mov     edx, 1
 * 0000000140BC47D0: mov     r12d, 0FFFFFFFFh
 * 0000000140BC47D6: test    r11d, r11d
 * 0000000140BC47D9: jz      short loc_140BC4840
 * 0000000140BC47DB: mov     rsi, 7010008004002001h
 * 0000000140BC47E5: mov     eax, 8
 * 0000000140BC47EA: xor     rbx, [r9]
 * 0000000140BC47ED: mov     ecx, r10d
 * 0000000140BC47F0: rol     rbx, cl
 * 0000000140BC47F3: xor     rbx, [r9+8]
 * 0000000140BC47F7: add     r9, 10h
 * 0000000140BC47FB: rol     rbx, cl
 * 0000000140BC47FE: sub     rax, rdx
 * 0000000140BC4801: jnz     short loc_140BC47EA
 * 0000000140BC4803: mov     rcx, r9
 * 0000000140BC4806: sub     rcx, r14
 * 0000000140BC4809: xor     rcx, r15
 * 0000000140BC480C: mov     rax, rcx
 * 0000000140BC480F: rol     rax, 11h
 * 0000000140BC4813: xor     rcx, rax
 * 0000000140BC4816: mov     rax, rsi
 * 0000000140BC4819: mul     rcx
 * 0000000140BC481C: xor     r10d, edx
 * 0000000140BC481F: mov     [rbp+8D0h+var_218], rdx
 * 0000000140BC4826: xor     r10d, eax
 * 0000000140BC4829: mov     edx, 1
 * 0000000140BC482E: and     r10d, 3Fh
 * 0000000140BC4832: cmovz   r10d, edx
 * 0000000140BC4836: add     r11d, r12d
 * 0000000140BC4839: jnz     short loc_140BC47E5
 * 0000000140BC483B: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC4840: and     r8d, 7Fh
 * 0000000140BC4844: cmp     r8d, 8
 * 0000000140BC4848: jb      short loc_140BC4867
 * 0000000140BC484A: mov     eax, r8d
 * 0000000140BC484D: shr     rax, 3
 * 0000000140BC4851: xor     rbx, [r9]
 * 0000000140BC4854: mov     ecx, r10d
 * 0000000140BC4857: rol     rbx, cl
 * 0000000140BC485A: add     r9, 8
 * 0000000140BC485E: add     r8d, 0FFFFFFF8h
 * 0000000140BC4862: sub     rax, rdx
 * 0000000140BC4865: jnz     short loc_140BC4851
 * 0000000140BC4867: xor     r15d, r15d
 * 0000000140BC486A: test    r8d, r8d
 * 0000000140BC486D: jz      short loc_140BC4884
 * 0000000140BC486F: movzx   eax, byte ptr [r9]
 * 0000000140BC4873: mov     ecx, r10d
 * 0000000140BC4876: xor     rbx, rax
 * 0000000140BC4879: add     r9, rdx
 * 0000000140BC487C: rol     rbx, cl
 * 0000000140BC487F: add     r8d, r12d
 * 0000000140BC4882: jnz     short loc_140BC486F
 * 0000000140BC4884: mov     rax, rbx
 * 0000000140BC4887: jmp     short loc_140BC488B
 * 0000000140BC4889: xor     ebx, eax
 * 0000000140BC488B: shr     rax, 1Fh
 * 0000000140BC488F: test    rax, rax
 * 0000000140BC4892: jnz     short loc_140BC4889
 * 0000000140BC4894: btr     ebx, 1Fh
 * 0000000140BC4898: mov     r12d, r15d
 * 0000000140BC489B: cmp     ebx, [r13+14h]
 * 0000000140BC489F: jz      loc_140BC3B58
 * 0000000140BC48A5: cmp     [r13+0], r15d
 * 0000000140BC48A9: jnz     short loc_140BC48B3
 * 0000000140BC48AB: cmp     [r13+18h], r15d
 * 0000000140BC48AF: cmovnz  r12d, edx
 * 0000000140BC48B3: mov     ecx, [r13+10h]
 * 0000000140BC48B7: mov     rdx, [r13+8]
 * 0000000140BC48BB: test    rcx, rcx
 * 0000000140BC48BE: jz      loc_140BC4976
 * 0000000140BC48C4: mov     eax, [rsi+9DCh]
 * 0000000140BC48CA: mov     r8d, 40h ; '@'
 * 0000000140BC48D0: test    r8b, al
 * 0000000140BC48D3: jz      loc_140BC4976
 * 0000000140BC48D9: mov     r15, cr8
 * 0000000140BC48DD: lea     eax, [r8-3Eh]
 * 0000000140BC48E1: mov     cr8, rax
 * 0000000140BC48E5: mov     r14, rdx
 * 0000000140BC48E8: lea     rax, [rcx-1]
 * 0000000140BC48EC: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140BC48F3: add     rax, rdx
 * 0000000140BC48F6: or      rax, 0FFFh
 * 0000000140BC48FC: mov     [rsp+9D0h+var_978], rax
 * 0000000140BC4901: lea     r13, [r14-1]
 * 0000000140BC4905: mov     rax, [rsi+468h]
 * 0000000140BC490C: xor     edx, edx
 * 0000000140BC490E: mov     rcx, r14
 * 0000000140BC4911: call    KeGuardDispatchICall
 * 0000000140BC4916: cmp     eax, 0C000022Dh
 * 0000000140BC491B: jnz     short loc_140BC4942
 * 0000000140BC491D: test    r12d, r12d
 * 0000000140BC4920: jnz     short loc_140BC4966
 * 0000000140BC4922: lea     eax, [r12+1]
 * 0000000140BC4927: cmp     r15b, al
 * 0000000140BC492A: ja      short loc_140BC4946
 * 0000000140BC492C: movzx   eax, r15b
 * 0000000140BC4930: mov     cr8, rax
 * 0000000140BC4934: mov     al, [r14]
 * 0000000140BC4937: lea     eax, [r12+2]
 * 0000000140BC493C: mov     cr8, rax
 * 0000000140BC4940: jmp     short loc_140BC4905
 * 0000000140BC4942: test    eax, eax
 * 0000000140BC4944: js      short loc_140BC4966
 * 0000000140BC4946: mov     r11d, 1000h
 * 0000000140BC494C: add     r14, r11
 * 0000000140BC494F: add     r13, r11
 * 0000000140BC4952: cmp     r13, [rsp+9D0h+var_978]
 * 0000000140BC4957: jnz     short loc_140BC4905
 * 0000000140BC4959: movzx   eax, r15b
 * 0000000140BC495D: mov     cr8, rax
 * 0000000140BC4961: jmp     loc_140BC2FA1
 * 0000000140BC4966: movzx   eax, r15b
 * 0000000140BC496A: mov     cr8, rax
 * 0000000140BC496E: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BC4973: xor     r15d, r15d
 * 0000000140BC4976: mov     eax, [r13+14h]
 * 0000000140BC497A: cmp     [rsi+918h], r15d
 * 0000000140BC4981: jnz     short loc_140BC4993
 * 0000000140BC4983: mov     ecx, ebx
 * 0000000140BC4985: xor     rcx, rax
 * 0000000140BC4988: mov     rax, [rsi+588h]
 * 0000000140BC498F: mov     [rax+18h], rcx
 * 0000000140BC4993: mov     ebx, 1
 * 0000000140BC4998: mov     rcx, [r13+8]
 * 0000000140BC499C: cmp     [rsi+918h], r15d
 * 0000000140BC49A3: jnz     loc_140BC3B5D
 * 0000000140BC49A9: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC49B3: add     rax, rsi
 * 0000000140BC49B6: mov     [rsi+920h], rax
 * 0000000140BC49BD: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC49C7: add     rax, r13
 * 0000000140BC49CA: mov     [rsi+928h], rax
 * 0000000140BC49D1: movsxd  rax, dword ptr [r13+0]
 * 0000000140BC49D5: mov     [rsi+930h], rax
 * 0000000140BC49DC: mov     [rsi+938h], rcx
 * 0000000140BC49E3: mov     [rsi+918h], ebx
 * 0000000140BC49E9: mov     ecx, [rsi+9D8h]
 * 0000000140BC49EF: bt      ecx, 1Dh
 * 0000000140BC49F3: jb      loc_140BC3B5D
 * 0000000140BC49F9: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC4A03: jz      loc_140BC3B5D
 * 0000000140BC4A09: test    bl, cl
 * 0000000140BC4A0B: jz      loc_140BC3B5D
 * 0000000140BC4A11: mov     ecx, [rsi+0A74h]
 * 0000000140BC4A17: mov     eax, [rsi+804h]
 * 0000000140BC4A1D: mov     r10, [rsi+838h]
 * 0000000140BC4A24: sub     eax, ecx
 * 0000000140BC4A26: mov     r8, [rsi+0A78h]
 * 0000000140BC4A2D: lea     rdx, [rcx+rsi]
 * 0000000140BC4A31: mov     ecx, eax
 * 0000000140BC4A33: shr     rcx, 3
 * 0000000140BC4A37: lea     r9, [rdx+rcx*8]
 * 0000000140BC4A3B: jmp     short loc_140BC4A5E
 * 0000000140BC4A3D: xor     [rdx], r8
 * 0000000140BC4A40: mov     rax, [rdx]
 * 0000000140BC4A43: movzx   ecx, r8b
 * 0000000140BC4A47: xor     rax, r10
 * 0000000140BC4A4A: and     ecx, 3Fh
 * 0000000140BC4A4D: ror     r8, cl
 * 0000000140BC4A50: add     r8, rax
 * 0000000140BC4A53: xor     r8, 0EFAh
 * 0000000140BC4A5A: add     rdx, 8
 * 0000000140BC4A5E: cmp     rdx, r9
 * 0000000140BC4A61: jnz     short loc_140BC4A3D
 * 0000000140BC4A63: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC4A6B: cmp     r8, [rsi+0A80h]
 * 0000000140BC4A72: jz      loc_140BC3B5D
 * 0000000140BC4A78: mov     ecx, [rsi+804h]
 * 0000000140BC4A7E: mov     rax, [rsi+588h]
 * 0000000140BC4A85: mov     [rax], rsi
 * 0000000140BC4A88: mov     [rax+10h], ecx
 * 0000000140BC4A8B: mov     rcx, [rsi+0A80h]
 * 0000000140BC4A92: cmp     [rsi+918h], r15d
 * 0000000140BC4A99: jnz     short loc_140BC4AA9
 * 0000000140BC4A9B: mov     rax, [rsi+588h]
 * 0000000140BC4AA2: xor     rcx, r8
 * 0000000140BC4AA5: mov     [rax+18h], rcx
 * 0000000140BC4AA9: xor     edx, edx
 * 0000000140BC4AAB: mov     r9d, 100h
 * 0000000140BC4AB1: mov     rcx, rsi
 * 0000000140BC4AB4: call    sub_140BD8384
 * 0000000140BC4AB9: jmp     loc_140BC3B5D
 * 0000000140BC4ABE: mov     rax, [rsi+568h]
 * 0000000140BC4AC5: cmp     [rax+20h], r15
 * 0000000140BC4AC9: jz      loc_140BC2FAF
 * 0000000140BC4ACF: add     dword ptr [rsi+848h], 100h
 * 0000000140BC4AD9: mov     r15, [rsi+580h]
 * 0000000140BC4AE0: mov     rax, [rsi+2D8h]
 * 0000000140BC4AE7: mov     rcx, r15
 * 0000000140BC4AEA: call    KeGuardDispatchICall
 * 0000000140BC4AEF: mov     r14, rax
 * 0000000140BC4AF2: test    rax, rax
 * 0000000140BC4AF5: jz      loc_140BC4DAC
 * 0000000140BC4AFB: mov     rax, [rsi+2E0h]
 * 0000000140BC4B02: mov     rcx, r14
 * 0000000140BC4B05: call    KeGuardDispatchICall
 * 0000000140BC4B0A: mov     rbx, rax
 * 0000000140BC4B0D: xor     r11d, r11d
 * 0000000140BC4B10: mov     rax, [r13+18h]
 * 0000000140BC4B14: test    rax, rax
 * 0000000140BC4B17: jz      loc_140BC4C4C
 * 0000000140BC4B1D: cmp     rax, rbx
 * 0000000140BC4B20: jz      loc_140BC4D95
 * 0000000140BC4B26: cmp     [rsi+918h], r11d
 * 0000000140BC4B2D: jnz     loc_140BC4D95
 * 0000000140BC4B33: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC4B3D: add     rax, rsi
 * 0000000140BC4B40: mov     [rsi+920h], rax
 * 0000000140BC4B47: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC4B51: add     rax, r13
 * 0000000140BC4B54: mov     [rsi+928h], rax
 * 0000000140BC4B5B: movsxd  rax, dword ptr [r13+0]
 * 0000000140BC4B5F: mov     [rsi+930h], rax
 * 0000000140BC4B66: mov     [rsi+938h], rbx
 * 0000000140BC4B6D: lea     ebx, [r11+1]
 * 0000000140BC4B71: mov     [rsi+918h], ebx
 * 0000000140BC4B77: mov     ecx, [rsi+9D8h]
 * 0000000140BC4B7D: bt      ecx, 1Dh
 * 0000000140BC4B81: jb      loc_140BC4D9A
 * 0000000140BC4B87: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC4B91: jz      loc_140BC4D9A
 * 0000000140BC4B97: test    bl, cl
 * 0000000140BC4B99: jz      loc_140BC4D9A
 * 0000000140BC4B9F: mov     ecx, [rsi+0A74h]
 * 0000000140BC4BA5: mov     eax, [rsi+804h]
 * 0000000140BC4BAB: mov     r10, [rsi+838h]
 * 0000000140BC4BB2: sub     eax, ecx
 * 0000000140BC4BB4: mov     r8, [rsi+0A78h]
 * 0000000140BC4BBB: lea     rdx, [rcx+rsi]
 * 0000000140BC4BBF: mov     ecx, eax
 * 0000000140BC4BC1: shr     rcx, 3
 * 0000000140BC4BC5: lea     r9, [rdx+rcx*8]
 * 0000000140BC4BC9: jmp     short loc_140BC4BEC
 * 0000000140BC4BCB: xor     [rdx], r8
 * 0000000140BC4BCE: mov     rax, [rdx]
 * 0000000140BC4BD1: movzx   ecx, r8b
 * 0000000140BC4BD5: xor     rax, r10
 * 0000000140BC4BD8: and     ecx, 3Fh
 * 0000000140BC4BDB: ror     r8, cl
 * 0000000140BC4BDE: add     r8, rax
 * 0000000140BC4BE1: xor     r8, 0EFAh
 * 0000000140BC4BE8: add     rdx, 8
 * 0000000140BC4BEC: cmp     rdx, r9
 * 0000000140BC4BEF: jnz     short loc_140BC4BCB
 * 0000000140BC4BF1: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC4BF9: cmp     r8, [rsi+0A80h]
 * 0000000140BC4C00: jz      loc_140BC4D9A
 * 0000000140BC4C06: mov     ecx, [rsi+804h]
 * 0000000140BC4C0C: mov     rax, [rsi+588h]
 * 0000000140BC4C13: mov     [rax], rsi
 * 0000000140BC4C16: mov     [rax+10h], ecx
 * 0000000140BC4C19: mov     rcx, [rsi+0A80h]
 * 0000000140BC4C20: cmp     [rsi+918h], r11d
 * 0000000140BC4C27: jnz     short loc_140BC4C37
 * 0000000140BC4C29: mov     rax, [rsi+588h]
 * 0000000140BC4C30: xor     rcx, r8
 * 0000000140BC4C33: mov     [rax+18h], rcx
 * 0000000140BC4C37: xor     edx, edx
 * 0000000140BC4C39: mov     r9d, 100h
 * 0000000140BC4C3F: mov     rcx, rsi
 * 0000000140BC4C42: call    sub_140BD8384
 * 0000000140BC4C47: jmp     loc_140BC4D9A
 * 0000000140BC4C4C: mov     eax, [rsi+9C0h]
 * 0000000140BC4C52: mov     rcx, [rsi+9C8h]
 * 0000000140BC4C59: test    rax, rax
 * 0000000140BC4C5C: jz      short loc_140BC4C73
 * 0000000140BC4C5E: lea     rdx, [rax-1]
 * 0000000140BC4C62: add     rdx, rcx
 * 0000000140BC4C65: cmp     rbx, rcx
 * 0000000140BC4C68: jb      short loc_140BC4C73
 * 0000000140BC4C6A: cmp     rbx, rdx
 * 0000000140BC4C6D: jbe     loc_140BC4D91
 * 0000000140BC4C73: cmp     [rsi+918h], r11d
 * 0000000140BC4C7A: jnz     loc_140BC4D91
 * 0000000140BC4C80: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC4C8A: mov     edx, 1
 * 0000000140BC4C8F: add     rax, rsi
 * 0000000140BC4C92: mov     [rsi+920h], rax
 * 0000000140BC4C99: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC4CA3: add     rax, r13
 * 0000000140BC4CA6: mov     [rsi+928h], rax
 * 0000000140BC4CAD: movsxd  rax, dword ptr [r13+0]
 * 0000000140BC4CB1: mov     [rsi+930h], rax
 * 0000000140BC4CB8: mov     [rsi+938h], rbx
 * 0000000140BC4CBF: mov     [rsi+918h], edx
 * 0000000140BC4CC5: mov     ecx, [rsi+9D8h]
 * 0000000140BC4CCB: bt      ecx, 1Dh
 * 0000000140BC4CCF: jb      loc_140BC4D91
 * 0000000140BC4CD5: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC4CDF: jz      loc_140BC4D91
 * 0000000140BC4CE5: test    dl, cl
 * 0000000140BC4CE7: jz      loc_140BC4D91
 * 0000000140BC4CED: mov     ecx, [rsi+0A74h]
 * 0000000140BC4CF3: mov     eax, [rsi+804h]
 * 0000000140BC4CF9: mov     r10, [rsi+838h]
 * 0000000140BC4D00: sub     eax, ecx
 * 0000000140BC4D02: mov     r8, [rsi+0A78h]
 * 0000000140BC4D09: lea     rdx, [rcx+rsi]
 * 0000000140BC4D0D: mov     ecx, eax
 * 0000000140BC4D0F: shr     rcx, 3
 * 0000000140BC4D13: lea     r9, [rdx+rcx*8]
 * 0000000140BC4D17: jmp     short loc_140BC4D3A
 * 0000000140BC4D19: xor     [rdx], r8
 * 0000000140BC4D1C: mov     rax, [rdx]
 * 0000000140BC4D1F: movzx   ecx, r8b
 * 0000000140BC4D23: xor     rax, r10
 * 0000000140BC4D26: and     ecx, 3Fh
 * 0000000140BC4D29: ror     r8, cl
 * 0000000140BC4D2C: add     r8, rax
 * 0000000140BC4D2F: xor     r8, 0EFAh
 * 0000000140BC4D36: add     rdx, 8
 * 0000000140BC4D3A: cmp     rdx, r9
 * 0000000140BC4D3D: jnz     short loc_140BC4D19
 * 0000000140BC4D3F: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC4D47: cmp     r8, [rsi+0A80h]
 * 0000000140BC4D4E: jz      short loc_140BC4D91
 * 0000000140BC4D50: mov     ecx, [rsi+804h]
 * 0000000140BC4D56: mov     rax, [rsi+588h]
 * 0000000140BC4D5D: mov     [rax], rsi
 * 0000000140BC4D60: mov     [rax+10h], ecx
 * 0000000140BC4D63: mov     rcx, [rsi+0A80h]
 * 0000000140BC4D6A: cmp     [rsi+918h], r11d
 * 0000000140BC4D71: jnz     short loc_140BC4D81
 * 0000000140BC4D73: mov     rax, [rsi+588h]
 * 0000000140BC4D7A: xor     rcx, r8
 * 0000000140BC4D7D: mov     [rax+18h], rcx
 * 0000000140BC4D81: xor     edx, edx
 * 0000000140BC4D83: mov     r9d, 100h
 * 0000000140BC4D89: mov     rcx, rsi
 * 0000000140BC4D8C: call    sub_140BD8384
 * 0000000140BC4D91: mov     [r13+18h], rbx
 * 0000000140BC4D95: mov     ebx, 1
 * 0000000140BC4D9A: mov     rax, [rsi+2E8h]
 * 0000000140BC4DA1: mov     rdx, r14
 * 0000000140BC4DA4: mov     rcx, r15
 * 0000000140BC4DA7: call    KeGuardDispatchICall
 * 0000000140BC4DAC: mov     r11d, 1000h
 * 0000000140BC4DB2: xor     r15d, r15d
 * 0000000140BC4DB5: jmp     loc_140BC2FAF
 * 0000000140BC4DBA: mov     ecx, r10d
 * 0000000140BC4DBD: sub     ecx, 15h
 * 0000000140BC4DC0: jz      loc_140BC9C0F
 * 0000000140BC4DC6: sub     ecx, 3
 * 0000000140BC4DC9: jz      loc_140BC6B5D
 * 0000000140BC4DCF: sub     ecx, 1
 * 0000000140BC4DD2: jz      loc_140BC666E
 * 0000000140BC4DD8: sub     ecx, 1
 * 0000000140BC4DDB: jz      loc_140BC637E
 * 0000000140BC4DE1: sub     ecx, 1
 * 0000000140BC4DE4: jz      loc_140BC5FE0
 * 0000000140BC4DEA: sub     ecx, 1
 * 0000000140BC4DED: jz      loc_140BC53C7
 * 0000000140BC4DF3: cmp     ecx, 1
 * 0000000140BC4DF6: jnz     loc_140BCD176
 * 0000000140BC4DFC: mov     r14, [r13+8]
 * 0000000140BC4E00: mov     r8d, [r13+10h]
 * 0000000140BC4E04: mov     r9, r14
 * 0000000140BC4E07: add     [rsi+848h], r8d
 * 0000000140BC4E0E: mov     rax, r14
 * 0000000140BC4E11: mov     r11d, [rsi+834h]
 * 0000000140BC4E18: mov     r15, [rsi+838h]
 * 0000000140BC4E1F: lea     rcx, [r14+r8]
 * 0000000140BC4E23: cmp     r14, rcx
 * 0000000140BC4E26: jnb     short loc_140BC4E38
 * 0000000140BC4E28: mov     edx, 40h ; '@'
 * 0000000140BC4E2D: prefetchnta byte ptr [rax]
 * 0000000140BC4E30: add     rax, rdx
 * 0000000140BC4E33: cmp     rax, rcx
 * 0000000140BC4E36: jb      short loc_140BC4E2D
 * 0000000140BC4E38: mov     r10d, r8d
 * 0000000140BC4E3B: mov     rbx, r15
 * 0000000140BC4E3E: shr     r10d, 7
 * 0000000140BC4E42: mov     edx, 1
 * 0000000140BC4E47: mov     r12d, 0FFFFFFFFh
 * 0000000140BC4E4D: test    r10d, r10d
 * 0000000140BC4E50: jz      short loc_140BC4EB6
 * 0000000140BC4E52: mov     rsi, 7010008004002001h
 * 0000000140BC4E5C: mov     eax, 8
 * 0000000140BC4E61: xor     rbx, [r9]
 * 0000000140BC4E64: mov     ecx, r11d
 * 0000000140BC4E67: rol     rbx, cl
 * 0000000140BC4E6A: xor     rbx, [r9+8]
 * 0000000140BC4E6E: add     r9, 10h
 * 0000000140BC4E72: rol     rbx, cl
 * 0000000140BC4E75: sub     rax, rdx
 * 0000000140BC4E78: jnz     short loc_140BC4E61
 * 0000000140BC4E7A: mov     rcx, r9
 * 0000000140BC4E7D: sub     rcx, r14
 * 0000000140BC4E80: xor     rcx, r15
 * 0000000140BC4E83: mov     rax, rcx
 * 0000000140BC4E86: rol     rax, 11h
 * 0000000140BC4E8A: xor     rcx, rax
 * 0000000140BC4E8D: mov     rax, rsi
 * 0000000140BC4E90: mul     rcx
 * 0000000140BC4E93: mov     [rbp+8D0h+var_210], rdx
 * 0000000140BC4E9A: xor     edx, eax
 * 0000000140BC4E9C: xor     r11d, edx
 * 0000000140BC4E9F: mov     edx, 1
 * 0000000140BC4EA4: and     r11d, 3Fh
 * 0000000140BC4EA8: cmovz   r11d, edx
 * 0000000140BC4EAC: add     r10d, r12d
 * 0000000140BC4EAF: jnz     short loc_140BC4E5C
 * 0000000140BC4EB1: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC4EB6: and     r8d, 7Fh
 * 0000000140BC4EBA: cmp     r8d, 8
 * 0000000140BC4EBE: jb      short loc_140BC4EDD
 * 0000000140BC4EC0: mov     eax, r8d
 * 0000000140BC4EC3: shr     rax, 3
 * 0000000140BC4EC7: xor     rbx, [r9]
 * 0000000140BC4ECA: mov     ecx, r11d
 * 0000000140BC4ECD: rol     rbx, cl
 * 0000000140BC4ED0: add     r9, 8
 * 0000000140BC4ED4: add     r8d, 0FFFFFFF8h
 * 0000000140BC4ED8: sub     rax, rdx
 * 0000000140BC4EDB: jnz     short loc_140BC4EC7
 * 0000000140BC4EDD: xor     r15d, r15d
 * 0000000140BC4EE0: test    r8d, r8d
 * 0000000140BC4EE3: jz      short loc_140BC4EFA
 * 0000000140BC4EE5: movzx   eax, byte ptr [r9]
 * 0000000140BC4EE9: mov     ecx, r11d
 * 0000000140BC4EEC: xor     rbx, rax
 * 0000000140BC4EEF: add     r9, rdx
 * 0000000140BC4EF2: rol     rbx, cl
 * 0000000140BC4EF5: add     r8d, r12d
 * 0000000140BC4EF8: jnz     short loc_140BC4EE5
 * 0000000140BC4EFA: mov     rax, rbx
 * 0000000140BC4EFD: jmp     short loc_140BC4F01
 * 0000000140BC4EFF: xor     ebx, eax
 * 0000000140BC4F01: shr     rax, 1Fh
 * 0000000140BC4F05: test    rax, rax
 * 0000000140BC4F08: jnz     short loc_140BC4EFF
 * 0000000140BC4F0A: btr     ebx, 1Fh
 * 0000000140BC4F0E: mov     r12d, r15d
 * 0000000140BC4F11: cmp     ebx, [r13+14h]
 * 0000000140BC4F15: jz      loc_140BC5139
 * 0000000140BC4F1B: cmp     [r13+0], r15d
 * 0000000140BC4F1F: jnz     short loc_140BC4F29
 * 0000000140BC4F21: cmp     [r13+18h], r15d
 * 0000000140BC4F25: cmovnz  r12d, edx
 * 0000000140BC4F29: mov     ecx, [r13+10h]
 * 0000000140BC4F2D: mov     rdx, [r13+8]
 * 0000000140BC4F31: test    rcx, rcx
 * 0000000140BC4F34: jz      loc_140BC4FF8
 * 0000000140BC4F3A: mov     eax, [rsi+9DCh]
 * 0000000140BC4F40: mov     r8d, 40h ; '@'
 * 0000000140BC4F46: test    r8b, al
 * 0000000140BC4F49: jz      loc_140BC4FF8
 * 0000000140BC4F4F: mov     r15, cr8
 * 0000000140BC4F53: lea     eax, [r8-3Eh]
 * 0000000140BC4F57: mov     cr8, rax
 * 0000000140BC4F5B: mov     r14, rdx
 * 0000000140BC4F5E: lea     rax, [rcx-1]
 * 0000000140BC4F62: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140BC4F69: add     rax, rdx
 * 0000000140BC4F6C: or      rax, 0FFFh
 * 0000000140BC4F72: mov     [rsp+9D0h+var_978], rax
 * 0000000140BC4F77: lea     r13, [r14-1]
 * 0000000140BC4F7B: mov     rax, [rsi+468h]
 * 0000000140BC4F82: xor     edx, edx
 * 0000000140BC4F84: mov     rcx, r14
 * 0000000140BC4F87: call    KeGuardDispatchICall
 * 0000000140BC4F8C: cmp     eax, 0C000022Dh
 * 0000000140BC4F91: jnz     short loc_140BC4FB8
 * 0000000140BC4F93: test    r12d, r12d
 * 0000000140BC4F96: jnz     short loc_140BC4FE8
 * 0000000140BC4F98: lea     eax, [r12+1]
 * 0000000140BC4F9D: cmp     r15b, al
 * 0000000140BC4FA0: ja      short loc_140BC4FBC
 * 0000000140BC4FA2: movzx   eax, r15b
 * 0000000140BC4FA6: mov     cr8, rax
 * 0000000140BC4FAA: mov     al, [r14]
 * 0000000140BC4FAD: lea     eax, [r12+2]
 * 0000000140BC4FB2: mov     cr8, rax
 * 0000000140BC4FB6: jmp     short loc_140BC4F7B
 * 0000000140BC4FB8: test    eax, eax
 * 0000000140BC4FBA: js      short loc_140BC4FE8
 * 0000000140BC4FBC: mov     r11d, 1000h
 * 0000000140BC4FC2: add     r14, r11
 * 0000000140BC4FC5: add     r13, r11
 * 0000000140BC4FC8: cmp     r13, [rsp+9D0h+var_978]
 * 0000000140BC4FCD: jnz     short loc_140BC4F7B
 * 0000000140BC4FCF: movzx   eax, r15b
 * 0000000140BC4FD3: mov     cr8, rax
 * 0000000140BC4FD7: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BC4FDC: xor     r15d, r15d
 * 0000000140BC4FDF: lea     ebx, [r15+1]
 * 0000000140BC4FE3: jmp     loc_140BC5144
 * 0000000140BC4FE8: movzx   eax, r15b
 * 0000000140BC4FEC: mov     cr8, rax
 * 0000000140BC4FF0: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BC4FF5: xor     r15d, r15d
 * 0000000140BC4FF8: mov     eax, [r13+14h]
 * 0000000140BC4FFC: cmp     [rsi+918h], r15d
 * 0000000140BC5003: jnz     short loc_140BC5015
 * 0000000140BC5005: mov     ecx, ebx
 * 0000000140BC5007: xor     rcx, rax
 * 0000000140BC500A: mov     rax, [rsi+588h]
 * 0000000140BC5011: mov     [rax+18h], rcx
 * 0000000140BC5015: mov     ebx, 1
 * 0000000140BC501A: mov     rcx, [r13+8]
 * 0000000140BC501E: cmp     [rsi+918h], r15d
 * 0000000140BC5025: jnz     loc_140BC513E
 * 0000000140BC502B: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC5035: add     rax, rsi
 * 0000000140BC5038: mov     [rsi+920h], rax
 * 0000000140BC503F: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC5049: add     rax, r13
 * 0000000140BC504C: mov     [rsi+928h], rax
 * 0000000140BC5053: movsxd  rax, dword ptr [r13+0]
 * 0000000140BC5057: mov     [rsi+930h], rax
 * 0000000140BC505E: mov     [rsi+938h], rcx
 * 0000000140BC5065: mov     [rsi+918h], ebx
 * 0000000140BC506B: mov     ecx, [rsi+9D8h]
 * 0000000140BC5071: bt      ecx, 1Dh
 * 0000000140BC5075: jb      loc_140BC513E
 * 0000000140BC507B: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC5085: jz      loc_140BC513E
 * 0000000140BC508B: test    bl, cl
 * 0000000140BC508D: jz      loc_140BC513E
 * 0000000140BC5093: mov     ecx, [rsi+0A74h]
 * 0000000140BC5099: mov     eax, [rsi+804h]
 * 0000000140BC509F: mov     r10, [rsi+838h]
 * 0000000140BC50A6: sub     eax, ecx
 * 0000000140BC50A8: mov     r8, [rsi+0A78h]
 * 0000000140BC50AF: lea     rdx, [rcx+rsi]
 * 0000000140BC50B3: mov     ecx, eax
 * 0000000140BC50B5: shr     rcx, 3
 * 0000000140BC50B9: lea     r9, [rdx+rcx*8]
 * 0000000140BC50BD: jmp     short loc_140BC50E0
 * 0000000140BC50BF: xor     [rdx], r8
 * 0000000140BC50C2: mov     rax, [rdx]
 * 0000000140BC50C5: movzx   ecx, r8b
 * 0000000140BC50C9: xor     rax, r10
 * 0000000140BC50CC: and     ecx, 3Fh
 * 0000000140BC50CF: ror     r8, cl
 * 0000000140BC50D2: add     r8, rax
 * 0000000140BC50D5: xor     r8, 0EFAh
 * 0000000140BC50DC: add     rdx, 8
 * 0000000140BC50E0: cmp     rdx, r9
 * 0000000140BC50E3: jnz     short loc_140BC50BF
 * 0000000140BC50E5: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC50ED: cmp     r8, [rsi+0A80h]
 * 0000000140BC50F4: jz      short loc_140BC513E
 * 0000000140BC50F6: mov     ecx, [rsi+804h]
 * 0000000140BC50FC: mov     rax, [rsi+588h]
 * 0000000140BC5103: mov     [rax], rsi
 * 0000000140BC5106: mov     [rax+10h], ecx
 * 0000000140BC5109: mov     rcx, [rsi+0A80h]
 * 0000000140BC5110: cmp     [rsi+918h], r15d
 * 0000000140BC5117: jnz     short loc_140BC5127
 * 0000000140BC5119: mov     rax, [rsi+588h]
 * 0000000140BC5120: xor     rcx, r8
 * 0000000140BC5123: mov     [rax+18h], rcx
 * 0000000140BC5127: xor     edx, edx
 * 0000000140BC5129: mov     r9d, 100h
 * 0000000140BC512F: mov     rcx, rsi
 * 0000000140BC5132: call    sub_140BD8384
 * 0000000140BC5137: jmp     short loc_140BC513E
 * 0000000140BC5139: mov     ebx, 1
 * 0000000140BC513E: mov     r11d, 1000h
 * 0000000140BC5144: mov     eax, [r13+10h]
 * 0000000140BC5148: mov     r12, [r13+8]
 * 0000000140BC514C: shr     eax, 4
 * 0000000140BC514F: mov     [rbp+8D0h+arg_8], r12
 * 0000000140BC5156: test    eax, eax
 * 0000000140BC5158: jz      loc_140BC2FA9
 * 0000000140BC515E: mov     rdi, [rsp+9D0h+var_980]
 * 0000000140BC5163: mov     r13d, eax
 * 0000000140BC5166: mov     [rsp+9D0h+var_978], r13
 * 0000000140BC516B: mov     rax, [r12]
 * 0000000140BC516F: lea     rdx, [rbp+8D0h+var_788]
 * 0000000140BC5176: mov     rbx, rdi
 * 0000000140BC5179: mov     r15, [rax]
 * 0000000140BC517C: xor     eax, eax
 * 0000000140BC517E: mov     [rbp+8D0h+var_788], rax
 * 0000000140BC5185: mov     rcx, r15
 * 0000000140BC5188: mov     rax, [rsi+310h]
 * 0000000140BC518F: call    KeGuardDispatchICall
 * 0000000140BC5194: mov     r14, rax
 * 0000000140BC5197: test    rax, rax
 * 0000000140BC519A: jz      loc_140BC5397
 * 0000000140BC51A0: mov     r12d, 6
 * 0000000140BC51A6: xor     r13d, r13d
 * 0000000140BC51A9: mov     rdi, 0B3B74BDEE4453415h
 * 0000000140BC51B3: mov     rax, [rsi+218h]
 * 0000000140BC51BA: lea     rdx, [rbp+8D0h+var_208]
 * 0000000140BC51C1: mov     rcx, r14
 * 0000000140BC51C4: call    KeGuardDispatchICall
 * 0000000140BC51C9: test    rax, rax
 * 0000000140BC51CC: jnz     loc_140BC5364
 * 0000000140BC51D2: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BC51DC: lea     r9d, [rax+1]
 * 0000000140BC51E0: jz      short loc_140BC5228
 * 0000000140BC51E2: mov     rcx, [rsi+0AC8h]
 * 0000000140BC51E9: lea     edx, [rax+30h]
 * 0000000140BC51EC: mov     r8, r12
 * 0000000140BC51EF: mov     rax, [rbx]
 * 0000000140BC51F2: add     edx, 0FFFFFFF8h
 * 0000000140BC51F5: mov     [rcx], rax
 * 0000000140BC51F8: add     rbx, 8
 * 0000000140BC51FC: add     rcx, 8
 * 0000000140BC5200: sub     r8, r9
 * 0000000140BC5203: jnz     short loc_140BC51EF
 * 0000000140BC5205: test    edx, edx
 * 0000000140BC5207: jz      short loc_140BC5221
 * 0000000140BC5209: mov     esi, 0FFFFFFFFh
 * 0000000140BC520E: mov     al, [rbx]
 * 0000000140BC5210: add     rbx, r9
 * 0000000140BC5213: mov     [rcx], al
 * 0000000140BC5215: add     rcx, r9
 * 0000000140BC5218: add     edx, esi
 * 0000000140BC521A: jnz     short loc_140BC520E
 * 0000000140BC521C: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC5221: mov     rbx, [rsi+0AC8h]
 * 0000000140BC5228: mov     [rbx+18h], r14
 * 0000000140BC522C: mov     [rbx+20h], r15
 * 0000000140BC5230: mov     rax, [rsi+588h]
 * 0000000140BC5237: mov     [rax], rbx
 * 0000000140BC523A: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140BC5241: mov     rax, [rsi+588h]
 * 0000000140BC5248: mov     [rax+8], r14
 * 0000000140BC524C: mov     dword ptr [rax+14h], 1000h
 * 0000000140BC5253: cmp     [rsi+918h], r13d
 * 0000000140BC525A: jnz     loc_140BC5364
 * 0000000140BC5260: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC526A: add     rax, rsi
 * 0000000140BC526D: mov     [rsi+920h], rax
 * 0000000140BC5274: lea     rax, [rbx+rdi]
 * 0000000140BC5278: mov     [rsi+928h], rax
 * 0000000140BC527F: movsxd  rax, dword ptr [rbx]
 * 0000000140BC5282: mov     [rsi+930h], rax
 * 0000000140BC5289: mov     [rsi+938h], r12
 * 0000000140BC5290: mov     [rsi+918h], r9d
 * 0000000140BC5297: mov     ecx, [rsi+9D8h]
 * 0000000140BC529D: bt      ecx, 1Dh
 * 0000000140BC52A1: jb      loc_140BC5364
 * 0000000140BC52A7: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC52B1: jz      loc_140BC5364
 * 0000000140BC52B7: test    r9b, cl
 * 0000000140BC52BA: jz      loc_140BC5364
 * 0000000140BC52C0: mov     ecx, [rsi+0A74h]
 * 0000000140BC52C6: mov     eax, [rsi+804h]
 * 0000000140BC52CC: mov     r10, [rsi+838h]
 * 0000000140BC52D3: sub     eax, ecx
 * 0000000140BC52D5: mov     r8, [rsi+0A78h]
 * 0000000140BC52DC: lea     rdx, [rcx+rsi]
 * 0000000140BC52E0: mov     ecx, eax
 * 0000000140BC52E2: shr     rcx, 3
 * 0000000140BC52E6: lea     r9, [rdx+rcx*8]
 * 0000000140BC52EA: jmp     short loc_140BC530D
 * 0000000140BC52EC: xor     [rdx], r8
 * 0000000140BC52EF: mov     rax, [rdx]
 * 0000000140BC52F2: movzx   ecx, r8b
 * 0000000140BC52F6: xor     rax, r10
 * 0000000140BC52F9: and     ecx, 3Fh
 * 0000000140BC52FC: ror     r8, cl
 * 0000000140BC52FF: add     r8, rax
 * 0000000140BC5302: xor     r8, 0EFAh
 * 0000000140BC5309: add     rdx, 8
 * 0000000140BC530D: cmp     rdx, r9
 * 0000000140BC5310: jnz     short loc_140BC52EC
 * 0000000140BC5312: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC531A: cmp     r8, [rsi+0A80h]
 * 0000000140BC5321: jz      short loc_140BC5364
 * 0000000140BC5323: mov     ecx, [rsi+804h]
 * 0000000140BC5329: mov     rax, [rsi+588h]
 * 0000000140BC5330: mov     [rax], rsi
 * 0000000140BC5333: mov     [rax+10h], ecx
 * 0000000140BC5336: mov     rcx, [rsi+0A80h]
 * 0000000140BC533D: cmp     [rsi+918h], r13d
 * 0000000140BC5344: jnz     short loc_140BC5354
 * 0000000140BC5346: mov     rax, [rsi+588h]
 * 0000000140BC534D: xor     rcx, r8
 * 0000000140BC5350: mov     [rax+18h], rcx
 * 0000000140BC5354: xor     edx, edx
 * 0000000140BC5356: mov     r9d, 100h
 * 0000000140BC535C: mov     rcx, rsi
 * 0000000140BC535F: call    sub_140BD8384
 * 0000000140BC5364: mov     rax, [rsi+310h]
 * 0000000140BC536B: lea     rdx, [rbp+8D0h+var_788]
 * 0000000140BC5372: mov     rcx, r15
 * 0000000140BC5375: call    KeGuardDispatchICall
 * 0000000140BC537A: mov     r14, rax
 * 0000000140BC537D: test    rax, rax
 * 0000000140BC5380: jnz     loc_140BC51B3
 * 0000000140BC5386: mov     r12, [rbp+8D0h+arg_8]
 * 0000000140BC538D: mov     r13, [rsp+9D0h+var_978]
 * 0000000140BC5392: mov     rdi, [rsp+9D0h+var_980]
 * 0000000140BC5397: add     r12, 10h
 * 0000000140BC539B: mov     ebx, 1
 * 0000000140BC53A0: sub     r13, rbx
 * 0000000140BC53A3: mov     [rbp+8D0h+arg_8], r12
 * 0000000140BC53AA: mov     [rsp+9D0h+var_978], r13
 * 0000000140BC53AF: jnz     loc_140BC516B
 * 0000000140BC53B5: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC53BC: mov     r11d, 1000h
 * 0000000140BC53C2: jmp     loc_140BC33D5
 * 0000000140BC53C7: cmp     [r13+10h], r15d
 * 0000000140BC53CB: jnz     loc_140BC5A6E
 * 0000000140BC53D1: lea     rax, [r13+30h]
 * 0000000140BC53D5: xor     r9d, r9d
 * 0000000140BC53D8: mov     [rbp+8D0h+var_6F8], rax
 * 0000000140BC53DF: lea     rcx, [rbp+8D0h+var_700]
 * 0000000140BC53E6: movzx   eax, word ptr [r13+28h]
 * 0000000140BC53EB: xor     r8d, r8d
 * 0000000140BC53EE: mov     [rbp+8D0h+var_700], ax
 * 0000000140BC53F5: xor     edx, edx
 * 0000000140BC53F7: mov     [rbp+8D0h+var_6FE], ax
 * 0000000140BC53FE: lea     rax, [rbp+8D0h+var_8A0]
 * 0000000140BC5402: mov     [rsp+9D0h+var_998], rax
 * 0000000140BC5407: mov     rax, [rsi+508h]
 * 0000000140BC540E: mov     [rsp+9D0h+var_9A0], r15
 * 0000000140BC5413: mov     byte ptr [rsp+9D0h+var_9A8], r15b
 * 0000000140BC5418: mov     [rsp+9D0h+BugCheckParameter4], rax
 * 0000000140BC541D: mov     rax, [rsi+1F8h]
 * 0000000140BC5424: call    KeGuardDispatchICall
 * 0000000140BC5429: test    eax, eax
 * 0000000140BC542B: js      loc_140BCE398
 * 0000000140BC5431: mov     rax, [rbp+8D0h+var_8A0]
 * 0000000140BC5435: mov     ecx, [rax+10h]
 * 0000000140BC5438: mov     eax, 10h
 * 0000000140BC543D: test    al, cl
 * 0000000140BC543F: jnz     short loc_140BC5456
 * 0000000140BC5441: mov     rax, [rsi+1F0h]
 * 0000000140BC5448: mov     rcx, [rbp+8D0h+var_8A0]
 * 0000000140BC544C: call    KeGuardDispatchICall
 * 0000000140BC5451: jmp     loc_140BCE398
 * 0000000140BC5456: mov     rcx, [rsi+1F8h]
 * 0000000140BC545D: lea     rdx, [rbp+8D0h+var_160]
 * 0000000140BC5464: mov     rax, [rsi+210h]
 * 0000000140BC546B: call    KeGuardDispatchICall
 * 0000000140BC5470: mov     rcx, [rbp+8D0h+var_158]
 * 0000000140BC5477: test    rcx, rcx
 * 0000000140BC547A: jz      short loc_140BC549E
 * 0000000140BC547C: mov     rax, [rsi+208h]
 * 0000000140BC5483: mov     r12, rcx
 * 0000000140BC5486: mov     [rbp+8D0h+var_8D8], rcx
 * 0000000140BC548A: call    KeGuardDispatchICall
 * 0000000140BC548F: test    rax, rax
 * 0000000140BC5492: jz      short loc_140BC54A2
 * 0000000140BC5494: mov     r14d, [rax+50h]
 * 0000000140BC5498: mov     [rbp+8D0h+var_8F8], r14d
 * 0000000140BC549C: jmp     short loc_140BC54A6
 * 0000000140BC549E: mov     r12, [rbp+8D0h+var_8D8]
 * 0000000140BC54A2: mov     r14d, [rbp+8D0h+var_8F8]
 * 0000000140BC54A6: mov     rcx, [r13+18h]
 * 0000000140BC54AA: lea     rdx, [rbp+8D0h+var_190]
 * 0000000140BC54B1: mov     rax, [rsi+210h]
 * 0000000140BC54B8: call    KeGuardDispatchICall
 * 0000000140BC54BD: mov     rcx, [rbp+8D0h+var_188]
 * 0000000140BC54C4: test    rcx, rcx
 * 0000000140BC54C7: jz      short loc_140BC54EB
 * 0000000140BC54C9: mov     rax, [rsi+208h]
 * 0000000140BC54D0: mov     rbx, rcx
 * 0000000140BC54D3: mov     [rbp+8D0h+var_8F0], rcx
 * 0000000140BC54D7: call    KeGuardDispatchICall
 * 0000000140BC54DC: test    rax, rax
 * 0000000140BC54DF: jz      short loc_140BC54EF
 * 0000000140BC54E1: mov     r8d, [rax+50h]
 * 0000000140BC54E5: mov     [rbp+8D0h+var_8C8], r8d
 * 0000000140BC54E9: jmp     short loc_140BC54F3
 * 0000000140BC54EB: mov     rbx, [rbp+8D0h+var_8F0]
 * 0000000140BC54EF: mov     r8d, [rbp+8D0h+var_8C8]
 * 0000000140BC54F3: bt      dword ptr [rsi+9D8h], 1Dh
 * 0000000140BC54FB: jb      short loc_140BC5511
 * 0000000140BC54FD: mov     rax, [rbp+8D0h+var_8A0]
 * 0000000140BC5501: add     rax, 70h ; 'p'
 * 0000000140BC5505: mov     [r13+8], rax
 * 0000000140BC5509: mov     dword ptr [r13+10h], 0E0h
 * 0000000140BC5511: mov     rcx, [rbp+8D0h+var_8A0]
 * 0000000140BC5515: mov     dl, r15b
 * 0000000140BC5518: mov     r10d, r14d
 * 0000000140BC551B: movzx   eax, dl
 * 0000000140BC551E: mov     r9, [rcx+rax*8+70h]
 * 0000000140BC5523: test    r14d, r14d
 * 0000000140BC5526: jz      short loc_140BC553A
 * 0000000140BC5528: lea     rax, [r12-1]
 * 0000000140BC552D: add     rax, r10
 * 0000000140BC5530: cmp     r9, r12
 * 0000000140BC5533: jb      short loc_140BC553A
 * 0000000140BC5535: cmp     r9, rax
 * 0000000140BC5538: jbe     short loc_140BC555F
 * 0000000140BC553A: mov     eax, r8d
 * 0000000140BC553D: test    r8d, r8d
 * 0000000140BC5540: jz      loc_140BC5930
 * 0000000140BC5546: lea     r8, [rbx-1]
 * 0000000140BC554A: add     r8, rax
 * 0000000140BC554D: cmp     r9, rbx
 * 0000000140BC5550: jb      loc_140BC5930
 * 0000000140BC5556: cmp     r9, r8
 * 0000000140BC5559: ja      loc_140BC5930
 * 0000000140BC555F: mov     r8d, [rbp+8D0h+var_8C8]
 * 0000000140BC5563: add     dl, 1
 * 0000000140BC5566: cmp     dl, 1Ch
 * 0000000140BC5569: jb      short loc_140BC551B
 * 0000000140BC556B: bt      dword ptr [rsi+9D8h], 1Dh
 * 0000000140BC5573: jb      loc_140BC3B4C
 * 0000000140BC5579: mov     r14, [r13+8]
 * 0000000140BC557D: mov     r9d, [r13+10h]
 * 0000000140BC5581: mov     r10, r14
 * 0000000140BC5584: add     [rsi+848h], r9d
 * 0000000140BC558B: mov     rax, r14
 * 0000000140BC558E: mov     r11d, [rsi+834h]
 * 0000000140BC5595: mov     r15, [rsi+838h]
 * 0000000140BC559C: lea     rcx, [r14+r9]
 * 0000000140BC55A0: cmp     r14, rcx
 * 0000000140BC55A3: jnb     short loc_140BC55B5
 * 0000000140BC55A5: mov     edx, 40h ; '@'
 * 0000000140BC55AA: prefetchnta byte ptr [rax]
 * 0000000140BC55AD: add     rax, rdx
 * 0000000140BC55B0: cmp     rax, rcx
 * 0000000140BC55B3: jb      short loc_140BC55AA
 * 0000000140BC55B5: mov     ebx, r9d
 * 0000000140BC55B8: mov     r8, r15
 * 0000000140BC55BB: shr     ebx, 7
 * 0000000140BC55BE: test    ebx, ebx
 * 0000000140BC55C0: jz      short loc_140BC5638
 * 0000000140BC55C2: mov     esi, 1
 * 0000000140BC55C7: mov     rdi, 7010008004002001h
 * 0000000140BC55D1: mov     r12d, 0FFFFFFFFh
 * 0000000140BC55D7: mov     eax, 8
 * 0000000140BC55DC: xor     r8, [r10]
 * 0000000140BC55DF: mov     ecx, r11d
 * 0000000140BC55E2: rol     r8, cl
 * 0000000140BC55E5: xor     r8, [r10+8]
 * 0000000140BC55E9: add     r10, 10h
 * 0000000140BC55ED: rol     r8, cl
 * 0000000140BC55F0: sub     rax, rsi
 * 0000000140BC55F3: jnz     short loc_140BC55DC
 * 0000000140BC55F5: mov     rcx, r10
 * 0000000140BC55F8: sub     rcx, r14
 * 0000000140BC55FB: xor     rcx, r15
 * 0000000140BC55FE: mov     rax, rcx
 * 0000000140BC5601: rol     rax, 11h
 * 0000000140BC5605: xor     rcx, rax
 * 0000000140BC5608: mov     rax, rdi
 * 0000000140BC560B: mul     rcx
 * 0000000140BC560E: xor     r11d, edx
 * 0000000140BC5611: mov     [rbp+8D0h+var_5E8], rdx
 * 0000000140BC5618: xor     r11d, eax
 * 0000000140BC561B: and     r11d, 3Fh
 * 0000000140BC561F: cmovz   r11d, esi
 * 0000000140BC5623: add     ebx, r12d
 * 0000000140BC5626: jnz     short loc_140BC55D7
 * 0000000140BC5628: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC562D: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC5634: mov     r12, [rbp+8D0h+var_8D8]
 * 0000000140BC5638: and     r9d, 7Fh
 * 0000000140BC563C: mov     ebx, 1
 * 0000000140BC5641: cmp     r9d, 8
 * 0000000140BC5645: jb      short loc_140BC5664
 * 0000000140BC5647: mov     eax, r9d
 * 0000000140BC564A: shr     rax, 3
 * 0000000140BC564E: xor     r8, [r10]
 * 0000000140BC5651: mov     ecx, r11d
 * 0000000140BC5654: rol     r8, cl
 * 0000000140BC5657: add     r10, 8
 * 0000000140BC565B: add     r9d, 0FFFFFFF8h
 * 0000000140BC565F: sub     rax, rbx
 * 0000000140BC5662: jnz     short loc_140BC564E
 * 0000000140BC5664: test    r9d, r9d
 * 0000000140BC5667: jz      short loc_140BC5688
 * 0000000140BC5669: mov     r12d, 0FFFFFFFFh
 * 0000000140BC566F: movzx   eax, byte ptr [r10]
 * 0000000140BC5673: mov     ecx, r11d
 * 0000000140BC5676: xor     r8, rax
 * 0000000140BC5679: add     r10, rbx
 * 0000000140BC567C: rol     r8, cl
 * 0000000140BC567F: add     r9d, r12d
 * 0000000140BC5682: jnz     short loc_140BC566F
 * 0000000140BC5684: mov     r12, [rbp+8D0h+var_8D8]
 * 0000000140BC5688: mov     rax, r8
 * 0000000140BC568B: shr     rax, 1Fh
 * 0000000140BC568F: xor     r9d, r9d
 * 0000000140BC5692: jmp     short loc_140BC569B
 * 0000000140BC5694: xor     r8d, eax
 * 0000000140BC5697: shr     rax, 1Fh
 * 0000000140BC569B: test    rax, rax
 * 0000000140BC569E: jnz     short loc_140BC5694
 * 0000000140BC56A0: btr     r8d, 1Fh
 * 0000000140BC56A5: mov     r10d, r9d
 * 0000000140BC56A8: mov     [r13+14h], r8d
 * 0000000140BC56AC: mov     rax, [rbp+8D0h+var_8A0]
 * 0000000140BC56B0: mov     r14, [rax+50h]
 * 0000000140BC56B4: test    r14, r14
 * 0000000140BC56B7: jz      short loc_140BC572E
 * 0000000140BC56B9: mov     r10d, [r14]
 * 0000000140BC56BC: mov     dl, r9b
 * 0000000140BC56BF: lea     r8d, [r10-8]
 * 0000000140BC56C3: shr     r8d, 3
 * 0000000140BC56C7: test    r8d, r8d
 * 0000000140BC56CA: jz      short loc_140BC572E
 * 0000000140BC56CC: mov     r11d, [rbp+8D0h+var_8F8]
 * 0000000140BC56D0: mov     rbx, [rbp+8D0h+var_8F0]
 * 0000000140BC56D4: mov     r15d, [rbp+8D0h+var_8C8]
 * 0000000140BC56D8: movzx   eax, dl
 * 0000000140BC56DB: mov     rcx, [r14+rax*8+8]
 * 0000000140BC56E0: test    rcx, rcx
 * 0000000140BC56E3: jz      short loc_140BC5723
 * 0000000140BC56E5: test    r11, r11
 * 0000000140BC56E8: jz      short loc_140BC56FB
 * 0000000140BC56EA: lea     rax, [r11-1]
 * 0000000140BC56EE: add     rax, r12
 * 0000000140BC56F1: cmp     rcx, r12
 * 0000000140BC56F4: jb      short loc_140BC56FB
 * 0000000140BC56F6: cmp     rcx, rax
 * 0000000140BC56F9: jbe     short loc_140BC5723
 * 0000000140BC56FB: mov     rax, r15
 * 0000000140BC56FE: test    r15d, r15d
 * 0000000140BC5701: jz      loc_140BC57E2
 * 0000000140BC5707: lea     r9, [rbx-1]
 * 0000000140BC570B: add     r9, rax
 * 0000000140BC570E: cmp     rcx, rbx
 * 0000000140BC5711: jb      loc_140BC57E2
 * 0000000140BC5717: cmp     rcx, r9
 * 0000000140BC571A: ja      loc_140BC57E2
 * 0000000140BC5720: xor     r9d, r9d
 * 0000000140BC5723: add     dl, 1
 * 0000000140BC5726: movzx   eax, dl
 * 0000000140BC5729: cmp     eax, r8d
 * 0000000140BC572C: jb      short loc_140BC56D8
 * 0000000140BC572E: add     [rsi+848h], r10d
 * 0000000140BC5735: mov     r9, r14
 * 0000000140BC5738: mov     ebx, [rsi+834h]
 * 0000000140BC573E: mov     rax, r14
 * 0000000140BC5741: mov     r15, [rsi+838h]
 * 0000000140BC5748: mov     ecx, r10d
 * 0000000140BC574B: add     rcx, r14
 * 0000000140BC574E: cmp     r14, rcx
 * 0000000140BC5751: jnb     short loc_140BC5763
 * 0000000140BC5753: mov     edx, 40h ; '@'
 * 0000000140BC5758: prefetchnta byte ptr [rax]
 * 0000000140BC575B: add     rax, rdx
 * 0000000140BC575E: cmp     rax, rcx
 * 0000000140BC5761: jb      short loc_140BC5758
 * 0000000140BC5763: mov     r11d, r10d
 * 0000000140BC5766: mov     r8, r15
 * 0000000140BC5769: shr     r11d, 7
 * 0000000140BC576D: mov     r12d, 1
 * 0000000140BC5773: test    r11d, r11d
 * 0000000140BC5776: jz      loc_140BC58CA
 * 0000000140BC577C: mov     rsi, 7010008004002001h
 * 0000000140BC5786: mov     eax, 8
 * 0000000140BC578B: xor     r8, [r9]
 * 0000000140BC578E: mov     ecx, ebx
 * 0000000140BC5790: rol     r8, cl
 * 0000000140BC5793: xor     r8, [r9+8]
 * 0000000140BC5797: add     r9, 10h
 * 0000000140BC579B: rol     r8, cl
 * 0000000140BC579E: sub     rax, r12
 * 0000000140BC57A1: jnz     short loc_140BC578B
 * 0000000140BC57A3: mov     rcx, r9
 * 0000000140BC57A6: sub     rcx, r14
 * 0000000140BC57A9: xor     rcx, r15
 * 0000000140BC57AC: mov     rax, rcx
 * 0000000140BC57AF: rol     rax, 11h
 * 0000000140BC57B3: xor     rcx, rax
 * 0000000140BC57B6: mov     rax, rsi
 * 0000000140BC57B9: mul     rcx
 * 0000000140BC57BC: xor     eax, edx
 * 0000000140BC57BE: mov     [rbp+8D0h+var_5E0], rdx
 * 0000000140BC57C5: xor     ebx, eax
 * 0000000140BC57C7: mov     edx, 0FFFFFFFFh
 * 0000000140BC57CC: and     ebx, 3Fh
 * 0000000140BC57CF: cmovz   ebx, r12d
 * 0000000140BC57D3: add     r11d, edx
 * 0000000140BC57D6: jnz     short loc_140BC5786
 * 0000000140BC57D8: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC57DD: jmp     loc_140BC58CF
 * 0000000140BC57E2: mov     [r13+20h], rcx
 * 0000000140BC57E6: xor     r15d, r15d
 * 0000000140BC57E9: mov     rax, [rsi+588h]
 * 0000000140BC57F0: lea     ebx, [r15+1]
 * 0000000140BC57F4: mov     [rax], r13
 * 0000000140BC57F7: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140BC57FE: cmp     [rsi+918h], r15d
 * 0000000140BC5805: jnz     loc_140BC3B5D
 * 0000000140BC580B: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC5815: add     rax, rsi
 * 0000000140BC5818: mov     [rsi+920h], rax
 * 0000000140BC581F: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC5829: add     rax, r13
 * 0000000140BC582C: mov     [rsi+928h], rax
 * 0000000140BC5833: movsxd  rax, dword ptr [r13+0]
 * 0000000140BC5837: mov     [rsi+930h], rax
 * 0000000140BC583E: mov     [rsi+938h], r14
 * 0000000140BC5845: mov     [rsi+918h], ebx
 * 0000000140BC584B: mov     ecx, [rsi+9D8h]
 * 0000000140BC5851: bt      ecx, 1Dh
 * 0000000140BC5855: jb      loc_140BC3B5D
 * 0000000140BC585B: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC5865: jz      loc_140BC3B5D
 * 0000000140BC586B: test    bl, cl
 * 0000000140BC586D: jz      loc_140BC3B5D
 * 0000000140BC5873: mov     ecx, [rsi+0A74h]
 * 0000000140BC5879: mov     eax, [rsi+804h]
 * 0000000140BC587F: mov     r10, [rsi+838h]
 * 0000000140BC5886: sub     eax, ecx
 * 0000000140BC5888: mov     r8, [rsi+0A78h]
 * 0000000140BC588F: lea     rdx, [rcx+rsi]
 * 0000000140BC5893: mov     ecx, eax
 * 0000000140BC5895: shr     rcx, 3
 * 0000000140BC5899: lea     r9, [rdx+rcx*8]
 * 0000000140BC589D: jmp     short loc_140BC58C0
 * 0000000140BC589F: xor     [rdx], r8
 * 0000000140BC58A2: mov     rax, [rdx]
 * 0000000140BC58A5: movzx   ecx, r8b
 * 0000000140BC58A9: xor     rax, r10
 * 0000000140BC58AC: and     ecx, 3Fh
 * 0000000140BC58AF: ror     r8, cl
 * 0000000140BC58B2: add     r8, rax
 * 0000000140BC58B5: xor     r8, 0EFAh
 * 0000000140BC58BC: add     rdx, 8
 * 0000000140BC58C0: cmp     rdx, r9
 * 0000000140BC58C3: jnz     short loc_140BC589F
 * 0000000140BC58C5: jmp     loc_140BC4A63
 * 0000000140BC58CA: mov     edx, 0FFFFFFFFh
 * 0000000140BC58CF: and     r10d, 7Fh
 * 0000000140BC58D3: cmp     r10d, 8
 * 0000000140BC58D7: jb      short loc_140BC58F5
 * 0000000140BC58D9: mov     eax, r10d
 * 0000000140BC58DC: shr     rax, 3
 * 0000000140BC58E0: xor     r8, [r9]
 * 0000000140BC58E3: mov     ecx, ebx
 * 0000000140BC58E5: rol     r8, cl
 * 0000000140BC58E8: add     r9, 8
 * 0000000140BC58EC: add     r10d, 0FFFFFFF8h
 * 0000000140BC58F0: sub     rax, r12
 * 0000000140BC58F3: jnz     short loc_140BC58E0
 * 0000000140BC58F5: xor     r15d, r15d
 * 0000000140BC58F8: test    r10d, r10d
 * 0000000140BC58FB: jz      short loc_140BC5911
 * 0000000140BC58FD: movzx   eax, byte ptr [r9]
 * 0000000140BC5901: mov     ecx, ebx
 * 0000000140BC5903: xor     r8, rax
 * 0000000140BC5906: add     r9, r12
 * 0000000140BC5909: rol     r8, cl
 * 0000000140BC590C: add     r10d, edx
 * 0000000140BC590F: jnz     short loc_140BC58FD
 * 0000000140BC5911: mov     rax, r8
 * 0000000140BC5914: jmp     short loc_140BC5919
 * 0000000140BC5916: xor     r8d, eax
 * 0000000140BC5919: shr     rax, 1Fh
 * 0000000140BC591D: test    rax, rax
 * 0000000140BC5920: jnz     short loc_140BC5916
 * 0000000140BC5922: btr     r8d, 1Fh
 * 0000000140BC5927: mov     [r13+2Ch], r8d
 * 0000000140BC592B: jmp     loc_140BC3B58
 * 0000000140BC5930: bt      dword ptr [rsi+9D8h], 1Dh
 * 0000000140BC5938: mov     ebx, 1
 * 0000000140BC593D: jnb     short loc_140BC5989
 * 0000000140BC593F: mov     rcx, [rsi+0AC8h]
 * 0000000140BC5946: lea     edx, [rbx+2Fh]
 * 0000000140BC5949: lea     r8d, [rbx+5]
 * 0000000140BC594D: mov     rax, [r13+0]
 * 0000000140BC5951: add     edx, 0FFFFFFF8h
 * 0000000140BC5954: mov     [rcx], rax
 * 0000000140BC5957: add     r13, 8
 * 0000000140BC595B: add     rcx, 8
 * 0000000140BC595F: sub     r8, rbx
 * 0000000140BC5962: jnz     short loc_140BC594D
 * 0000000140BC5964: test    edx, edx
 * 0000000140BC5966: jz      short loc_140BC5982
 * 0000000140BC5968: mov     esi, 0FFFFFFFFh
 * 0000000140BC596D: mov     al, [r13+0]
 * 0000000140BC5971: add     r13, rbx
 * 0000000140BC5974: mov     [rcx], al
 * 0000000140BC5976: add     rcx, rbx
 * 0000000140BC5979: add     edx, esi
 * 0000000140BC597B: jnz     short loc_140BC596D
 * 0000000140BC597D: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC5982: mov     r13, [rsi+0AC8h]
 * 0000000140BC5989: mov     [r13+20h], r9
 * 0000000140BC598D: mov     rax, [rsi+588h]
 * 0000000140BC5994: mov     [rax], r13
 * 0000000140BC5997: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140BC599E: mov     rcx, [r13+8]
 * 0000000140BC59A2: cmp     [rsi+918h], r15d
 * 0000000140BC59A9: jnz     loc_140BC3B5D
 * 0000000140BC59AF: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC59B9: add     rax, rsi
 * 0000000140BC59BC: mov     [rsi+920h], rax
 * 0000000140BC59C3: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC59CD: add     rax, r13
 * 0000000140BC59D0: mov     [rsi+928h], rax
 * 0000000140BC59D7: movsxd  rax, dword ptr [r13+0]
 * 0000000140BC59DB: mov     [rsi+930h], rax
 * 0000000140BC59E2: mov     [rsi+938h], rcx
 * 0000000140BC59E9: mov     [rsi+918h], ebx
 * 0000000140BC59EF: mov     ecx, [rsi+9D8h]
 * 0000000140BC59F5: bt      ecx, 1Dh
 * 0000000140BC59F9: jb      loc_140BC3B5D
 * 0000000140BC59FF: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC5A09: jz      loc_140BC3B5D
 * 0000000140BC5A0F: test    bl, cl
 * 0000000140BC5A11: jz      loc_140BC3B5D
 * 0000000140BC5A17: mov     ecx, [rsi+0A74h]
 * 0000000140BC5A1D: mov     eax, [rsi+804h]
 * 0000000140BC5A23: mov     r10, [rsi+838h]
 * 0000000140BC5A2A: sub     eax, ecx
 * 0000000140BC5A2C: mov     r8, [rsi+0A78h]
 * 0000000140BC5A33: lea     rdx, [rcx+rsi]
 * 0000000140BC5A37: mov     ecx, eax
 * 0000000140BC5A39: shr     rcx, 3
 * 0000000140BC5A3D: lea     r9, [rdx+rcx*8]
 * 0000000140BC5A41: jmp     short loc_140BC5A64
 * 0000000140BC5A43: xor     [rdx], r8
 * 0000000140BC5A46: mov     rax, [rdx]
 * 0000000140BC5A49: movzx   ecx, r8b
 * 0000000140BC5A4D: xor     rax, r10
 * 0000000140BC5A50: and     ecx, 3Fh
 * 0000000140BC5A53: ror     r8, cl
 * 0000000140BC5A56: add     r8, rax
 * 0000000140BC5A59: xor     r8, 0EFAh
 * 0000000140BC5A60: add     rdx, 8
 * 0000000140BC5A64: cmp     rdx, r9
 * 0000000140BC5A67: jnz     short loc_140BC5A43
 * 0000000140BC5A69: jmp     loc_140BC4A63
 * 0000000140BC5A6E: mov     r14, [r13+8]
 * 0000000140BC5A72: mov     r8d, [r13+10h]
 * 0000000140BC5A76: mov     r9, r14
 * 0000000140BC5A79: add     [rsi+848h], r8d
 * 0000000140BC5A80: mov     rax, r14
 * 0000000140BC5A83: mov     r10d, [rsi+834h]
 * 0000000140BC5A8A: mov     r15, [rsi+838h]
 * 0000000140BC5A91: lea     rcx, [r14+r8]
 * 0000000140BC5A95: cmp     r14, rcx
 * 0000000140BC5A98: jnb     short loc_140BC5AAA
 * 0000000140BC5A9A: mov     edx, 40h ; '@'
 * 0000000140BC5A9F: prefetchnta byte ptr [rax]
 * 0000000140BC5AA2: add     rax, rdx
 * 0000000140BC5AA5: cmp     rax, rcx
 * 0000000140BC5AA8: jb      short loc_140BC5A9F
 * 0000000140BC5AAA: mov     r11d, r8d
 * 0000000140BC5AAD: mov     rbx, r15
 * 0000000140BC5AB0: shr     r11d, 7
 * 0000000140BC5AB4: mov     edx, 1
 * 0000000140BC5AB9: mov     r12d, 0FFFFFFFFh
 * 0000000140BC5ABF: test    r11d, r11d
 * 0000000140BC5AC2: jz      short loc_140BC5B29
 * 0000000140BC5AC4: mov     rsi, 7010008004002001h
 * 0000000140BC5ACE: mov     eax, 8
 * 0000000140BC5AD3: xor     rbx, [r9]
 * 0000000140BC5AD6: mov     ecx, r10d
 * 0000000140BC5AD9: rol     rbx, cl
 * 0000000140BC5ADC: xor     rbx, [r9+8]
 * 0000000140BC5AE0: add     r9, 10h
 * 0000000140BC5AE4: rol     rbx, cl
 * 0000000140BC5AE7: sub     rax, rdx
 * 0000000140BC5AEA: jnz     short loc_140BC5AD3
 * 0000000140BC5AEC: mov     rcx, r9
 * 0000000140BC5AEF: sub     rcx, r14
 * 0000000140BC5AF2: xor     rcx, r15
 * 0000000140BC5AF5: mov     rax, rcx
 * 0000000140BC5AF8: rol     rax, 11h
 * 0000000140BC5AFC: xor     rcx, rax
 * 0000000140BC5AFF: mov     rax, rsi
 * 0000000140BC5B02: mul     rcx
 * 0000000140BC5B05: xor     r10d, edx
 * 0000000140BC5B08: mov     [rbp+8D0h+var_5D8], rdx
 * 0000000140BC5B0F: xor     r10d, eax
 * 0000000140BC5B12: mov     edx, 1
 * 0000000140BC5B17: and     r10d, 3Fh
 * 0000000140BC5B1B: cmovz   r10d, edx
 * 0000000140BC5B1F: add     r11d, r12d
 * 0000000140BC5B22: jnz     short loc_140BC5ACE
 * 0000000140BC5B24: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC5B29: and     r8d, 7Fh
 * 0000000140BC5B2D: cmp     r8d, 8
 * 0000000140BC5B31: jb      short loc_140BC5B50
 * 0000000140BC5B33: mov     eax, r8d
 * 0000000140BC5B36: shr     rax, 3
 * 0000000140BC5B3A: xor     rbx, [r9]
 * 0000000140BC5B3D: mov     ecx, r10d
 * 0000000140BC5B40: rol     rbx, cl
 * 0000000140BC5B43: add     r9, 8
 * 0000000140BC5B47: add     r8d, 0FFFFFFF8h
 * 0000000140BC5B4B: sub     rax, rdx
 * 0000000140BC5B4E: jnz     short loc_140BC5B3A
 * 0000000140BC5B50: xor     r15d, r15d
 * 0000000140BC5B53: test    r8d, r8d
 * 0000000140BC5B56: jz      short loc_140BC5B6D
 * 0000000140BC5B58: movzx   eax, byte ptr [r9]
 * 0000000140BC5B5C: mov     ecx, r10d
 * 0000000140BC5B5F: xor     rbx, rax
 * 0000000140BC5B62: add     r9, rdx
 * 0000000140BC5B65: rol     rbx, cl
 * 0000000140BC5B68: add     r8d, r12d
 * 0000000140BC5B6B: jnz     short loc_140BC5B58
 * 0000000140BC5B6D: mov     rax, rbx
 * 0000000140BC5B70: jmp     short loc_140BC5B74
 * 0000000140BC5B72: xor     ebx, eax
 * 0000000140BC5B74: shr     rax, 1Fh
 * 0000000140BC5B78: test    rax, rax
 * 0000000140BC5B7B: jnz     short loc_140BC5B72
 * 0000000140BC5B7D: btr     ebx, 1Fh
 * 0000000140BC5B81: mov     r12d, r15d
 * 0000000140BC5B84: cmp     ebx, [r13+14h]
 * 0000000140BC5B88: jz      loc_140BC5C59
 * 0000000140BC5B8E: cmp     [r13+0], r15d
 * 0000000140BC5B92: jnz     short loc_140BC5B9C
 * 0000000140BC5B94: cmp     [r13+18h], r15d
 * 0000000140BC5B98: cmovnz  r12d, edx
 * 0000000140BC5B9C: mov     ecx, [r13+10h]
 * 0000000140BC5BA0: mov     rdx, [r13+8]
 * 0000000140BC5BA4: test    rcx, rcx
 * 0000000140BC5BA7: jz      loc_140BC5D3A
 * 0000000140BC5BAD: mov     eax, [rsi+9DCh]
 * 0000000140BC5BB3: mov     r8d, 40h ; '@'
 * 0000000140BC5BB9: test    r8b, al
 * 0000000140BC5BBC: jz      loc_140BC5D3A
 * 0000000140BC5BC2: mov     r15, cr8
 * 0000000140BC5BC6: lea     eax, [r8-3Eh]
 * 0000000140BC5BCA: mov     cr8, rax
 * 0000000140BC5BCE: mov     r14, rdx
 * 0000000140BC5BD1: lea     rax, [rcx-1]
 * 0000000140BC5BD5: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140BC5BDC: add     rax, rdx
 * 0000000140BC5BDF: or      rax, 0FFFh
 * 0000000140BC5BE5: mov     [rsp+9D0h+var_978], rax
 * 0000000140BC5BEA: lea     r13, [r14-1]
 * 0000000140BC5BEE: mov     rax, [rsi+468h]
 * 0000000140BC5BF5: xor     edx, edx
 * 0000000140BC5BF7: mov     rcx, r14
 * 0000000140BC5BFA: call    KeGuardDispatchICall
 * 0000000140BC5BFF: cmp     eax, 0C000022Dh
 * 0000000140BC5C04: jnz     short loc_140BC5C2F
 * 0000000140BC5C06: test    r12d, r12d
 * 0000000140BC5C09: jnz     loc_140BC5D2A
 * 0000000140BC5C0F: lea     eax, [r12+1]
 * 0000000140BC5C14: cmp     r15b, al
 * 0000000140BC5C17: ja      short loc_140BC5C37
 * 0000000140BC5C19: movzx   eax, r15b
 * 0000000140BC5C1D: mov     cr8, rax
 * 0000000140BC5C21: mov     al, [r14]
 * 0000000140BC5C24: lea     eax, [r12+2]
 * 0000000140BC5C29: mov     cr8, rax
 * 0000000140BC5C2D: jmp     short loc_140BC5BEE
 * 0000000140BC5C2F: test    eax, eax
 * 0000000140BC5C31: js      loc_140BC5D2A
 * 0000000140BC5C37: mov     eax, 1000h
 * 0000000140BC5C3C: add     r14, rax
 * 0000000140BC5C3F: add     r13, rax
 * 0000000140BC5C42: cmp     r13, [rsp+9D0h+var_978]
 * 0000000140BC5C47: jnz     short loc_140BC5BEE
 * 0000000140BC5C49: movzx   eax, r15b
 * 0000000140BC5C4D: mov     cr8, rax
 * 0000000140BC5C51: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BC5C56: xor     r15d, r15d
 * 0000000140BC5C59: mov     r12d, 1
 * 0000000140BC5C5F: mov     rax, [r13+8]
 * 0000000140BC5C63: mov     r9d, r15d
 * 0000000140BC5C66: add     rax, 0FFFFFFFFFFFFFF90h
 * 0000000140BC5C6A: mov     [rbp+8D0h+var_8A0], rax
 * 0000000140BC5C6E: mov     r14, [rax+50h]
 * 0000000140BC5C72: test    r14, r14
 * 0000000140BC5C75: jz      short loc_140BC5C7A
 * 0000000140BC5C77: mov     r9d, [r14]
 * 0000000140BC5C7A: add     [rsi+848h], r9d
 * 0000000140BC5C81: mov     r10, r14
 * 0000000140BC5C84: mov     r11d, [rsi+834h]
 * 0000000140BC5C8B: mov     rax, r14
 * 0000000140BC5C8E: mov     r15, [rsi+838h]
 * 0000000140BC5C95: mov     ecx, r9d
 * 0000000140BC5C98: add     rcx, r14
 * 0000000140BC5C9B: cmp     r14, rcx
 * 0000000140BC5C9E: jnb     short loc_140BC5CB0
 * 0000000140BC5CA0: mov     edx, 40h ; '@'
 * 0000000140BC5CA5: prefetchnta byte ptr [rax]
 * 0000000140BC5CA8: add     rax, rdx
 * 0000000140BC5CAB: cmp     rax, rcx
 * 0000000140BC5CAE: jb      short loc_140BC5CA5
 * 0000000140BC5CB0: mov     ebx, r9d
 * 0000000140BC5CB3: mov     r8, r15
 * 0000000140BC5CB6: shr     ebx, 7
 * 0000000140BC5CB9: test    ebx, ebx
 * 0000000140BC5CBB: jz      loc_140BC5E85
 * 0000000140BC5CC1: mov     rsi, 7010008004002001h
 * 0000000140BC5CCB: mov     eax, 8
 * 0000000140BC5CD0: xor     r8, [r10]
 * 0000000140BC5CD3: mov     ecx, r11d
 * 0000000140BC5CD6: rol     r8, cl
 * 0000000140BC5CD9: xor     r8, [r10+8]
 * 0000000140BC5CDD: add     r10, 10h
 * 0000000140BC5CE1: rol     r8, cl
 * 0000000140BC5CE4: sub     rax, r12
 * 0000000140BC5CE7: jnz     short loc_140BC5CD0
 * 0000000140BC5CE9: mov     rcx, r10
 * 0000000140BC5CEC: sub     rcx, r14
 * 0000000140BC5CEF: xor     rcx, r15
 * 0000000140BC5CF2: mov     rax, rcx
 * 0000000140BC5CF5: rol     rax, 11h
 * 0000000140BC5CF9: xor     rcx, rax
 * 0000000140BC5CFC: mov     rax, rsi
 * 0000000140BC5CFF: mul     rcx
 * 0000000140BC5D02: xor     r11d, edx
 * 0000000140BC5D05: mov     [rbp+8D0h+var_5D0], rdx
 * 0000000140BC5D0C: xor     r11d, eax
 * 0000000140BC5D0F: mov     edx, 0FFFFFFFFh
 * 0000000140BC5D14: and     r11d, 3Fh
 * 0000000140BC5D18: cmovz   r11d, r12d
 * 0000000140BC5D1C: add     ebx, edx
 * 0000000140BC5D1E: jnz     short loc_140BC5CCB
 * 0000000140BC5D20: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC5D25: jmp     loc_140BC5E8A
 * 0000000140BC5D2A: movzx   eax, r15b
 * 0000000140BC5D2E: mov     cr8, rax
 * 0000000140BC5D32: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BC5D37: xor     r15d, r15d
 * 0000000140BC5D3A: mov     eax, [r13+14h]
 * 0000000140BC5D3E: cmp     [rsi+918h], r15d
 * 0000000140BC5D45: jnz     short loc_140BC5D57
 * 0000000140BC5D47: mov     ecx, ebx
 * 0000000140BC5D49: xor     rcx, rax
 * 0000000140BC5D4C: mov     rax, [rsi+588h]
 * 0000000140BC5D53: mov     [rax+18h], rcx
 * 0000000140BC5D57: mov     r12d, 1
 * 0000000140BC5D5D: mov     rcx, [r13+8]
 * 0000000140BC5D61: cmp     [rsi+918h], r15d
 * 0000000140BC5D68: jnz     loc_140BC5C5F
 * 0000000140BC5D6E: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC5D78: add     rax, rsi
 * 0000000140BC5D7B: mov     [rsi+920h], rax
 * 0000000140BC5D82: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC5D8C: add     rax, r13
 * 0000000140BC5D8F: mov     [rsi+928h], rax
 * 0000000140BC5D96: movsxd  rax, dword ptr [r13+0]
 * 0000000140BC5D9A: mov     [rsi+930h], rax
 * 0000000140BC5DA1: mov     [rsi+938h], rcx
 * 0000000140BC5DA8: mov     [rsi+918h], r12d
 * 0000000140BC5DAF: mov     ecx, [rsi+9D8h]
 * 0000000140BC5DB5: bt      ecx, 1Dh
 * 0000000140BC5DB9: jb      loc_140BC5C5F
 * 0000000140BC5DBF: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC5DC9: jz      loc_140BC5C5F
 * 0000000140BC5DCF: test    r12b, cl
 * 0000000140BC5DD2: jz      loc_140BC5C5F
 * 0000000140BC5DD8: mov     ecx, [rsi+0A74h]
 * 0000000140BC5DDE: mov     eax, [rsi+804h]
 * 0000000140BC5DE4: mov     r10, [rsi+838h]
 * 0000000140BC5DEB: sub     eax, ecx
 * 0000000140BC5DED: mov     r8, [rsi+0A78h]
 * 0000000140BC5DF4: lea     rdx, [rcx+rsi]
 * 0000000140BC5DF8: mov     ecx, eax
 * 0000000140BC5DFA: shr     rcx, 3
 * 0000000140BC5DFE: lea     r9, [rdx+rcx*8]
 * 0000000140BC5E02: jmp     short loc_140BC5E25
 * 0000000140BC5E04: xor     [rdx], r8
 * 0000000140BC5E07: mov     rax, [rdx]
 * 0000000140BC5E0A: movzx   ecx, r8b
 * 0000000140BC5E0E: xor     rax, r10
 * 0000000140BC5E11: and     ecx, 3Fh
 * 0000000140BC5E14: ror     r8, cl
 * 0000000140BC5E17: add     r8, rax
 * 0000000140BC5E1A: xor     r8, 0EFAh
 * 0000000140BC5E21: add     rdx, 8
 * 0000000140BC5E25: cmp     rdx, r9
 * 0000000140BC5E28: jnz     short loc_140BC5E04
 * 0000000140BC5E2A: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC5E32: cmp     r8, [rsi+0A80h]
 * 0000000140BC5E39: jz      loc_140BC5C5F
 * 0000000140BC5E3F: mov     ecx, [rsi+804h]
 * 0000000140BC5E45: mov     rax, [rsi+588h]
 * 0000000140BC5E4C: mov     [rax], rsi
 * 0000000140BC5E4F: mov     [rax+10h], ecx
 * 0000000140BC5E52: mov     rcx, [rsi+0A80h]
 * 0000000140BC5E59: cmp     [rsi+918h], r15d
 * 0000000140BC5E60: jnz     short loc_140BC5E70
 * 0000000140BC5E62: mov     rax, [rsi+588h]
 * 0000000140BC5E69: xor     rcx, r8
 * 0000000140BC5E6C: mov     [rax+18h], rcx
 * 0000000140BC5E70: xor     edx, edx
 * 0000000140BC5E72: mov     r9d, 100h
 * 0000000140BC5E78: mov     rcx, rsi
 * 0000000140BC5E7B: call    sub_140BD8384
 * 0000000140BC5E80: jmp     loc_140BC5C5F
 * 0000000140BC5E85: mov     edx, 0FFFFFFFFh
 * 0000000140BC5E8A: and     r9d, 7Fh
 * 0000000140BC5E8E: mov     ebx, 1
 * 0000000140BC5E93: cmp     r9d, 8
 * 0000000140BC5E97: jb      short loc_140BC5EB6
 * 0000000140BC5E99: mov     eax, r9d
 * 0000000140BC5E9C: shr     rax, 3
 * 0000000140BC5EA0: xor     r8, [r10]
 * 0000000140BC5EA3: mov     ecx, r11d
 * 0000000140BC5EA6: rol     r8, cl
 * 0000000140BC5EA9: add     r10, 8
 * 0000000140BC5EAD: add     r9d, 0FFFFFFF8h
 * 0000000140BC5EB1: sub     rax, rbx
 * 0000000140BC5EB4: jnz     short loc_140BC5EA0
 * 0000000140BC5EB6: xor     r15d, r15d
 * 0000000140BC5EB9: test    r9d, r9d
 * 0000000140BC5EBC: jz      short loc_140BC5ED3
 * 0000000140BC5EBE: movzx   eax, byte ptr [r10]
 * 0000000140BC5EC2: mov     ecx, r11d
 * 0000000140BC5EC5: xor     r8, rax
 * 0000000140BC5EC8: add     r10, rbx
 * 0000000140BC5ECB: rol     r8, cl
 * 0000000140BC5ECE: add     r9d, edx
 * 0000000140BC5ED1: jnz     short loc_140BC5EBE
 * 0000000140BC5ED3: mov     rax, r8
 * 0000000140BC5ED6: jmp     short loc_140BC5EDB
 * 0000000140BC5ED8: xor     r8d, eax
 * 0000000140BC5EDB: shr     rax, 1Fh
 * 0000000140BC5EDF: test    rax, rax
 * 0000000140BC5EE2: jnz     short loc_140BC5ED8
 * 0000000140BC5EE4: mov     eax, [r13+2Ch]
 * 0000000140BC5EE8: btr     r8d, 1Fh
 * 0000000140BC5EED: cmp     r8d, eax
 * 0000000140BC5EF0: jz      loc_140BC3B5D
 * 0000000140BC5EF6: cmp     [rsi+918h], r15d
 * 0000000140BC5EFD: jnz     loc_140BC3B5D
 * 0000000140BC5F03: mov     ecx, r8d
 * 0000000140BC5F06: xor     rcx, rax
 * 0000000140BC5F09: mov     rax, [rsi+588h]
 * 0000000140BC5F10: mov     [rax+18h], rcx
 * 0000000140BC5F14: cmp     [rsi+918h], r15d
 * 0000000140BC5F1B: jnz     loc_140BC3B5D
 * 0000000140BC5F21: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC5F2B: add     rax, rsi
 * 0000000140BC5F2E: mov     [rsi+920h], rax
 * 0000000140BC5F35: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC5F3F: add     rax, r13
 * 0000000140BC5F42: mov     [rsi+928h], rax
 * 0000000140BC5F49: movsxd  rax, dword ptr [r13+0]
 * 0000000140BC5F4D: mov     [rsi+930h], rax
 * 0000000140BC5F54: mov     [rsi+938h], r14
 * 0000000140BC5F5B: mov     [rsi+918h], ebx
 * 0000000140BC5F61: mov     ecx, [rsi+9D8h]
 * 0000000140BC5F67: bt      ecx, 1Dh
 * 0000000140BC5F6B: jb      loc_140BC3B5D
 * 0000000140BC5F71: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC5F7B: jz      loc_140BC3B5D
 * 0000000140BC5F81: test    bl, cl
 * 0000000140BC5F83: jz      loc_140BC3B5D
 * 0000000140BC5F89: mov     ecx, [rsi+0A74h]
 * 0000000140BC5F8F: mov     eax, [rsi+804h]
 * 0000000140BC5F95: mov     r10, [rsi+838h]
 * 0000000140BC5F9C: sub     eax, ecx
 * 0000000140BC5F9E: mov     r8, [rsi+0A78h]
 * 0000000140BC5FA5: lea     rdx, [rcx+rsi]
 * 0000000140BC5FA9: mov     ecx, eax
 * 0000000140BC5FAB: shr     rcx, 3
 * 0000000140BC5FAF: lea     r9, [rdx+rcx*8]
 * 0000000140BC5FB3: jmp     short loc_140BC5FD6
 * 0000000140BC5FB5: xor     [rdx], r8
 * 0000000140BC5FB8: mov     rax, [rdx]
 * 0000000140BC5FBB: movzx   ecx, r8b
 * 0000000140BC5FBF: xor     rax, r10
 * 0000000140BC5FC2: and     ecx, 3Fh
 * 0000000140BC5FC5: ror     r8, cl
 * 0000000140BC5FC8: add     r8, rax
 * 0000000140BC5FCB: xor     r8, 0EFAh
 * 0000000140BC5FD2: add     rdx, 8
 * 0000000140BC5FD6: cmp     rdx, r9
 * 0000000140BC5FD9: jnz     short loc_140BC5FB5
 * 0000000140BC5FDB: jmp     loc_140BC4A63
 * 0000000140BC5FE0: mov     eax, [rsi+850h]
 * 0000000140BC5FE6: test    bl, al
 * 0000000140BC5FE8: jz      loc_140BC2FAF
 * 0000000140BC5FEE: mov     r14, [rsi+5A0h]
 * 0000000140BC5FF5: mov     r13, [rsi+5A8h]
 * 0000000140BC5FFC: mov     rax, [rsi+188h]
 * 0000000140BC6003: mov     rbx, [rsi+540h]
 * 0000000140BC600A: mov     [rbp+8D0h+var_940], r14
 * 0000000140BC600E: mov     [rsp+9D0h+var_978], r13
 * 0000000140BC6013: mov     dword ptr [rbp+8D0h+arg_8], r15d
 * 0000000140BC601A: call    KeGuardDispatchICall
 * 0000000140BC601F: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BC6029: jnz     short loc_140BC6044
 * 0000000140BC602B: mov     ecx, [rsi+978h]
 * 0000000140BC6031: cmp     ecx, 7
 * 0000000140BC6034: jnb     short loc_140BC6044
 * 0000000140BC6036: mov     r12d, 1
 * 0000000140BC603C: mov     r15d, r12d
 * 0000000140BC603F: shl     r15b, cl
 * 0000000140BC6042: jmp     short loc_140BC6062
 * 0000000140BC6044: mov     rax, [rsi+138h]
 * 0000000140BC604B: xor     edx, edx
 * 0000000140BC604D: mov     rcx, [rsi+0A48h]
 * 0000000140BC6054: call    KeGuardDispatchICall
 * 0000000140BC6059: mov     r15b, 80h
 * 0000000140BC605C: mov     r12d, 1
 * 0000000140BC6062: mov     rax, [rsi+148h]
 * 0000000140BC6069: xor     edx, edx
 * 0000000140BC606B: mov     rcx, rbx
 * 0000000140BC606E: mov     [rsp+9D0h+var_958], r15d
 * 0000000140BC6073: call    KeGuardDispatchICall
 * 0000000140BC6078: mov     rax, [rsi+148h]
 * 0000000140BC607F: xor     edx, edx
 * 0000000140BC6081: mov     rcx, r14
 * 0000000140BC6084: call    KeGuardDispatchICall
 * 0000000140BC6089: mov     r9, [rsi+598h]
 * 0000000140BC6090: xor     r11d, r11d
 * 0000000140BC6093: mov     r10d, r11d
 * 0000000140BC6096: mov     [rsp+9D0h+var_968], r11
 * 0000000140BC609B: mov     r8, [r9]
 * 0000000140BC609E: cmp     r8, r9
 * 0000000140BC60A1: jz      short loc_140BC60EF
 * 0000000140BC60A3: lea     rdx, [r8-18h]
 * 0000000140BC60A7: cmp     rdx, r13
 * 0000000140BC60AA: jz      short loc_140BC60E2
 * 0000000140BC60AC: mov     rax, [rsi+748h]
 * 0000000140BC60B3: mov     rdx, [rdx+rax]
 * 0000000140BC60B7: mov     rax, [rsi+6D0h]
 * 0000000140BC60BE: mov     ecx, [rdx+rax]
 * 0000000140BC60C1: test    [rsi+6E8h], ecx
 * 0000000140BC60C7: jnz     short loc_140BC60D6
 * 0000000140BC60C9: test    r10, r10
 * 0000000140BC60CC: mov     rax, rdx
 * 0000000140BC60CF: cmovnz  rax, r12
 * 0000000140BC60D3: mov     r10, rax
 * 0000000140BC60D6: mov     rax, [rsi+6C8h]
 * 0000000140BC60DD: lock or [rdx+rax], r15b
 * 0000000140BC60E2: mov     r8, [r8]
 * 0000000140BC60E5: cmp     r8, r9
 * 0000000140BC60E8: jnz     short loc_140BC60A3
 * 0000000140BC60EA: mov     [rsp+9D0h+var_968], r10
 * 0000000140BC60EF: mov     r12, [rsi+518h]
 * 0000000140BC60F6: mov     r14, [r12]
 * 0000000140BC60FA: cmp     r14, r12
 * 0000000140BC60FD: jz      loc_140BC62BD
 * 0000000140BC6103: mov     rdi, [rsp+9D0h+var_978]
 * 0000000140BC6108: mov     r13b, r15b
 * 0000000140BC610B: movzx   edx, r15b
 * 0000000140BC610F: not     r13b
 * 0000000140BC6112: mov     r15d, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BC6119: mov     dword ptr [rsp+9D0h+var_960], edx
 * 0000000140BC611D: mov     rax, [rsi+6C8h]
 * 0000000140BC6124: mov     rbx, r14
 * 0000000140BC6127: sub     rbx, [rsi+6E0h]
 * 0000000140BC612E: movsx   ecx, byte ptr [rbx+rax]
 * 0000000140BC6132: test    edx, ecx
 * 0000000140BC6134: jnz     loc_140BC6283
 * 0000000140BC613A: mov     rax, [rsi+6D8h]
 * 0000000140BC6141: mov     rcx, [rbx+rax]
 * 0000000140BC6145: test    rcx, rcx
 * 0000000140BC6148: jz      loc_140BC6283
 * 0000000140BC614E: cmp     rcx, rdi
 * 0000000140BC6151: jz      loc_140BC6283
 * 0000000140BC6157: cmp     [rsi+918h], r11d
 * 0000000140BC615E: jnz     loc_140BC6283
 * 0000000140BC6164: mov     rcx, [rsp+9D0h+var_980]
 * 0000000140BC6169: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC6173: add     rax, rsi
 * 0000000140BC6176: mov     r8d, 1
 * 0000000140BC617C: mov     [rsi+920h], rax
 * 0000000140BC6183: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC618D: add     rax, rcx
 * 0000000140BC6190: mov     [rsi+928h], rax
 * 0000000140BC6197: movsxd  rax, dword ptr [rcx]
 * 0000000140BC619A: mov     [rsi+930h], rax
 * 0000000140BC61A1: mov     [rsi+938h], rbx
 * 0000000140BC61A8: mov     [rsi+918h], r8d
 * 0000000140BC61AF: mov     ecx, [rsi+9D8h]
 * 0000000140BC61B5: bt      ecx, 1Dh
 * 0000000140BC61B9: jb      loc_140BC6283
 * 0000000140BC61BF: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC61C9: jz      loc_140BC6283
 * 0000000140BC61CF: test    r8b, cl
 * 0000000140BC61D2: jz      loc_140BC6283
 * 0000000140BC61D8: mov     ecx, [rsi+0A74h]
 * 0000000140BC61DE: mov     eax, [rsi+804h]
 * 0000000140BC61E4: mov     r10, [rsi+838h]
 * 0000000140BC61EB: sub     eax, ecx
 * 0000000140BC61ED: mov     r8, [rsi+0A78h]
 * 0000000140BC61F4: lea     rdx, [rcx+rsi]
 * 0000000140BC61F8: mov     ecx, eax
 * 0000000140BC61FA: shr     rcx, 3
 * 0000000140BC61FE: lea     r9, [rdx+rcx*8]
 * 0000000140BC6202: jmp     short loc_140BC6225
 * 0000000140BC6204: xor     [rdx], r8
 * 0000000140BC6207: mov     rax, [rdx]
 * 0000000140BC620A: movzx   ecx, r8b
 * 0000000140BC620E: xor     rax, r10
 * 0000000140BC6211: and     ecx, 3Fh
 * 0000000140BC6214: ror     r8, cl
 * 0000000140BC6217: add     r8, rax
 * 0000000140BC621A: xor     r8, 0EFAh
 * 0000000140BC6221: add     rdx, 8
 * 0000000140BC6225: cmp     rdx, r9
 * 0000000140BC6228: jnz     short loc_140BC6204
 * 0000000140BC622A: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC6232: cmp     r8, [rsi+0A80h]
 * 0000000140BC6239: jz      short loc_140BC627F
 * 0000000140BC623B: mov     ecx, [rsi+804h]
 * 0000000140BC6241: mov     rax, [rsi+588h]
 * 0000000140BC6248: mov     [rax], rsi
 * 0000000140BC624B: mov     [rax+10h], ecx
 * 0000000140BC624E: mov     rcx, [rsi+0A80h]
 * 0000000140BC6255: cmp     [rsi+918h], r11d
 * 0000000140BC625C: jnz     short loc_140BC626C
 * 0000000140BC625E: mov     rax, [rsi+588h]
 * 0000000140BC6265: xor     rcx, r8
 * 0000000140BC6268: mov     [rax+18h], rcx
 * 0000000140BC626C: xor     edx, edx
 * 0000000140BC626E: mov     r9d, 100h
 * 0000000140BC6274: mov     rcx, rsi
 * 0000000140BC6277: call    sub_140BD8384
 * 0000000140BC627C: xor     r11d, r11d
 * 0000000140BC627F: mov     edx, dword ptr [rsp+9D0h+var_960]
 * 0000000140BC6283: mov     rax, [rsi+6C8h]
 * 0000000140BC628A: lock and [rbx+rax], r13b
 * 0000000140BC628F: mov     r14, [r14]
 * 0000000140BC6292: mov     ebx, 1
 * 0000000140BC6297: add     r15d, ebx
 * 0000000140BC629A: cmp     r14, r12
 * 0000000140BC629D: jnz     loc_140BC611D
 * 0000000140BC62A3: mov     r13, [rsp+9D0h+var_978]
 * 0000000140BC62A8: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC62AF: mov     dword ptr [rbp+8D0h+arg_8], r15d
 * 0000000140BC62B6: mov     r15d, [rsp+9D0h+var_958]
 * 0000000140BC62BB: jmp     short loc_140BC62C2
 * 0000000140BC62BD: mov     ebx, 1
 * 0000000140BC62C2: mov     rdx, [rsp+9D0h+var_968]
 * 0000000140BC62C7: test    rdx, rdx
 * 0000000140BC62CA: jz      short loc_140BC631C
 * 0000000140BC62CC: cmp     rdx, rbx
 * 0000000140BC62CF: jz      short loc_140BC62E3
 * 0000000140BC62D1: mov     rax, [rsi+6C8h]
 * 0000000140BC62D8: mov     cl, r15b
 * 0000000140BC62DB: not     cl
 * 0000000140BC62DD: lock and [rdx+rax], cl
 * 0000000140BC62E1: jmp     short loc_140BC631C
 * 0000000140BC62E3: mov     r10, [rsi+598h]
 * 0000000140BC62EA: mov     r9, [r10]
 * 0000000140BC62ED: jmp     short loc_140BC6317
 * 0000000140BC62EF: lea     r8, [r9-18h]
 * 0000000140BC62F3: cmp     r8, r13
 * 0000000140BC62F6: jz      short loc_140BC6314
 * 0000000140BC62F8: mov     rax, [rsi+748h]
 * 0000000140BC62FF: mov     dl, r15b
 * 0000000140BC6302: not     dl
 * 0000000140BC6304: mov     r8, [r8+rax]
 * 0000000140BC6308: mov     rax, [rsi+6C8h]
 * 0000000140BC630F: lock and [r8+rax], dl
 * 0000000140BC6314: mov     r9, [r9]
 * 0000000140BC6317: cmp     r9, r10
 * 0000000140BC631A: jnz     short loc_140BC62EF
 * 0000000140BC631C: mov     rax, [rsi+150h]
 * 0000000140BC6323: xor     edx, edx
 * 0000000140BC6325: mov     rcx, [rbp+8D0h+var_940]
 * 0000000140BC6329: call    KeGuardDispatchICall
 * 0000000140BC632E: cmp     r15b, 80h
 * 0000000140BC6332: jnz     short loc_140BC6349
 * 0000000140BC6334: mov     rax, [rsi+140h]
 * 0000000140BC633B: xor     edx, edx
 * 0000000140BC633D: mov     rcx, [rsi+0A48h]
 * 0000000140BC6344: call    KeGuardDispatchICall
 * 0000000140BC6349: mov     rcx, [rsi+540h]
 * 0000000140BC6350: xor     edx, edx
 * 0000000140BC6352: mov     rax, [rsi+150h]
 * 0000000140BC6359: call    KeGuardDispatchICall
 * 0000000140BC635E: mov     rax, [rsi+190h]
 * 0000000140BC6365: call    KeGuardDispatchICall
 * 0000000140BC636A: mov     eax, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BC6370: shl     eax, 8
 * 0000000140BC6373: add     [rsi+848h], eax
 * 0000000140BC6379: jmp     loc_140BC53BC
 * 0000000140BC637E: mov     eax, [rsi+850h]
 * 0000000140BC6384: test    bl, al
 * 0000000140BC6386: jnz     loc_140BC2FAF
 * 0000000140BC638C: mov     rax, [rsi+5A8h]
 * 0000000140BC6393: mov     r13d, r15d
 * 0000000140BC6396: mov     r14, [rsi+5A0h]
 * 0000000140BC639D: mov     rbx, [rsi+540h]
 * 0000000140BC63A4: mov     [rsp+9D0h+var_978], rax
 * 0000000140BC63A9: mov     rax, [rsi+188h]
 * 0000000140BC63B0: mov     dword ptr [rbp+8D0h+arg_8], r15d
 * 0000000140BC63B7: mov     [rsp+9D0h+var_968], r14
 * 0000000140BC63BC: call    KeGuardDispatchICall
 * 0000000140BC63C1: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BC63CB: jnz     short loc_140BC63E6
 * 0000000140BC63CD: mov     ecx, [rsi+978h]
 * 0000000140BC63D3: cmp     ecx, 7
 * 0000000140BC63D6: jnb     short loc_140BC63E6
 * 0000000140BC63D8: mov     r12d, 1
 * 0000000140BC63DE: mov     r15d, r12d
 * 0000000140BC63E1: shl     r15b, cl
 * 0000000140BC63E4: jmp     short loc_140BC6404
 * 0000000140BC63E6: mov     rax, [rsi+138h]
 * 0000000140BC63ED: xor     edx, edx
 * 0000000140BC63EF: mov     rcx, [rsi+0A48h]
 * 0000000140BC63F6: call    KeGuardDispatchICall
 * 0000000140BC63FB: mov     r15b, 80h
 * 0000000140BC63FE: mov     r12d, 1
 * 0000000140BC6404: mov     rax, [rsi+148h]
 * 0000000140BC640B: xor     edx, edx
 * 0000000140BC640D: mov     rcx, rbx
 * 0000000140BC6410: call    KeGuardDispatchICall
 * 0000000140BC6415: mov     r8, [rsi+518h]
 * 0000000140BC641C: mov     rdx, [r8]
 * 0000000140BC641F: cmp     rdx, r8
 * 0000000140BC6422: jz      short loc_140BC644C
 * 0000000140BC6424: mov     rax, [rsi+6C8h]
 * 0000000140BC642B: mov     rcx, rdx
 * 0000000140BC642E: sub     rcx, [rsi+6E0h]
 * 0000000140BC6435: lock or [rcx+rax], r15b
 * 0000000140BC643A: mov     rdx, [rdx]
 * 0000000140BC643D: add     r13d, r12d
 * 0000000140BC6440: cmp     rdx, r8
 * 0000000140BC6443: jnz     short loc_140BC6424
 * 0000000140BC6445: mov     dword ptr [rbp+8D0h+arg_8], r13d
 * 0000000140BC644C: mov     rax, [rsi+148h]
 * 0000000140BC6453: xor     edx, edx
 * 0000000140BC6455: mov     rcx, r14
 * 0000000140BC6458: call    KeGuardDispatchICall
 * 0000000140BC645D: mov     r12, [rsi+598h]
 * 0000000140BC6464: mov     r14, [r12]
 * 0000000140BC6468: cmp     r14, r12
 * 0000000140BC646B: jz      loc_140BC660F
 * 0000000140BC6471: mov     rax, [rsp+9D0h+var_978]
 * 0000000140BC6476: xor     r13d, r13d
 * 0000000140BC6479: mov     rdi, [rsp+9D0h+var_980]
 * 0000000140BC647E: mov     rcx, r14
 * 0000000140BC6481: sub     rcx, [rsi+750h]
 * 0000000140BC6488: cmp     rcx, rax
 * 0000000140BC648B: jz      loc_140BC65F5
 * 0000000140BC6491: mov     rax, [rsi+748h]
 * 0000000140BC6498: mov     rbx, [rcx+rax]
 * 0000000140BC649C: mov     rax, [rsi+6C8h]
 * 0000000140BC64A3: test    [rbx+rax], r15b
 * 0000000140BC64A7: jnz     loc_140BC65E0
 * 0000000140BC64AD: mov     rax, [rsi+6D0h]
 * 0000000140BC64B4: mov     ecx, [rbx+rax]
 * 0000000140BC64B7: test    [rsi+6E8h], ecx
 * 0000000140BC64BD: jz      loc_140BC65E0
 * 0000000140BC64C3: cmp     [rsi+918h], r13d
 * 0000000140BC64CA: jnz     loc_140BC65E0
 * 0000000140BC64D0: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC64DA: mov     edx, 1
 * 0000000140BC64DF: add     rax, rsi
 * 0000000140BC64E2: mov     [rsi+920h], rax
 * 0000000140BC64E9: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC64F3: add     rax, rdi
 * 0000000140BC64F6: mov     [rsi+928h], rax
 * 0000000140BC64FD: movsxd  rax, dword ptr [rdi]
 * 0000000140BC6500: mov     [rsi+930h], rax
 * 0000000140BC6507: mov     [rsi+938h], rbx
 * 0000000140BC650E: mov     [rsi+918h], edx
 * 0000000140BC6514: mov     ecx, [rsi+9D8h]
 * 0000000140BC651A: bt      ecx, 1Dh
 * 0000000140BC651E: jb      loc_140BC65E0
 * 0000000140BC6524: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC652E: jz      loc_140BC65E0
 * 0000000140BC6534: test    dl, cl
 * 0000000140BC6536: jz      loc_140BC65E0
 * 0000000140BC653C: mov     ecx, [rsi+0A74h]
 * 0000000140BC6542: mov     eax, [rsi+804h]
 * 0000000140BC6548: mov     r10, [rsi+838h]
 * 0000000140BC654F: sub     eax, ecx
 * 0000000140BC6551: mov     r8, [rsi+0A78h]
 * 0000000140BC6558: lea     rdx, [rcx+rsi]
 * 0000000140BC655C: mov     ecx, eax
 * 0000000140BC655E: shr     rcx, 3
 * 0000000140BC6562: lea     r9, [rdx+rcx*8]
 * 0000000140BC6566: jmp     short loc_140BC6589
 * 0000000140BC6568: xor     [rdx], r8
 * 0000000140BC656B: mov     rax, [rdx]
 * 0000000140BC656E: movzx   ecx, r8b
 * 0000000140BC6572: xor     rax, r10
 * 0000000140BC6575: and     ecx, 3Fh
 * 0000000140BC6578: ror     r8, cl
 * 0000000140BC657B: add     r8, rax
 * 0000000140BC657E: xor     r8, 0EFAh
 * 0000000140BC6585: add     rdx, 8
 * 0000000140BC6589: cmp     rdx, r9
 * 0000000140BC658C: jnz     short loc_140BC6568
 * 0000000140BC658E: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC6596: cmp     r8, [rsi+0A80h]
 * 0000000140BC659D: jz      short loc_140BC65E0
 * 0000000140BC659F: mov     ecx, [rsi+804h]
 * 0000000140BC65A5: mov     rax, [rsi+588h]
 * 0000000140BC65AC: mov     [rax], rsi
 * 0000000140BC65AF: mov     [rax+10h], ecx
 * 0000000140BC65B2: mov     rcx, [rsi+0A80h]
 * 0000000140BC65B9: cmp     [rsi+918h], r13d
 * 0000000140BC65C0: jnz     short loc_140BC65D0
 * 0000000140BC65C2: mov     rax, [rsi+588h]
 * 0000000140BC65C9: xor     rcx, r8
 * 0000000140BC65CC: mov     [rax+18h], rcx
 * 0000000140BC65D0: xor     edx, edx
 * 0000000140BC65D2: mov     r9d, 100h
 * 0000000140BC65D8: mov     rcx, rsi
 * 0000000140BC65DB: call    sub_140BD8384
 * 0000000140BC65E0: mov     rax, [rsi+6C8h]
 * 0000000140BC65E7: mov     dl, r15b
 * 0000000140BC65EA: not     dl
 * 0000000140BC65EC: lock and [rbx+rax], dl
 * 0000000140BC65F0: mov     rax, [rsp+9D0h+var_978]
 * 0000000140BC65F5: mov     r14, [r14]
 * 0000000140BC65F8: cmp     r14, r12
 * 0000000140BC65FB: jnz     loc_140BC647E
 * 0000000140BC6601: mov     r13d, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BC6608: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC660F: mov     rax, [rsi+150h]
 * 0000000140BC6616: xor     edx, edx
 * 0000000140BC6618: mov     rcx, [rsp+9D0h+var_968]
 * 0000000140BC661D: call    KeGuardDispatchICall
 * 0000000140BC6622: cmp     r15b, 80h
 * 0000000140BC6626: jnz     short loc_140BC663D
 * 0000000140BC6628: mov     rax, [rsi+140h]
 * 0000000140BC662F: xor     edx, edx
 * 0000000140BC6631: mov     rcx, [rsi+0A48h]
 * 0000000140BC6638: call    KeGuardDispatchICall
 * 0000000140BC663D: mov     rcx, [rsi+540h]
 * 0000000140BC6644: xor     edx, edx
 * 0000000140BC6646: mov     rax, [rsi+150h]
 * 0000000140BC664D: call    KeGuardDispatchICall
 * 0000000140BC6652: mov     rax, [rsi+190h]
 * 0000000140BC6659: call    KeGuardDispatchICall
 * 0000000140BC665E: shl     r13d, 8
 * 0000000140BC6662: add     [rsi+848h], r13d
 * 0000000140BC6669: jmp     loc_140BC2F9B
 * 0000000140BC666E: mov     rax, [rsi+378h]
 * 0000000140BC6675: mov     r12, [rsi+528h]
 * 0000000140BC667C: mov     dword ptr [rbp+8D0h+arg_8], r15d
 * 0000000140BC6683: call    KeGuardDispatchICall
 * 0000000140BC6688: mov     [rbp+8D0h+var_940], rax
 * 0000000140BC668C: cli
 * 0000000140BC668D: mov     rcx, gs:20h
 * 0000000140BC6696: mov     rax, [rsi+658h]
 * 0000000140BC669D: mov     rcx, [rcx+rax]
 * 0000000140BC66A1: sti
 * 0000000140BC66A2: mov     rax, [rsi+178h]
 * 0000000140BC66A9: call    KeGuardDispatchICall
 * 0000000140BC66AE: mov     rcx, [rsi+530h]
 * 0000000140BC66B5: mov     dl, bl
 * 0000000140BC66B7: mov     rax, [rsi+0F8h]
 * 0000000140BC66BE: call    KeGuardDispatchICall
 * 0000000140BC66C3: mov     rax, [rsi+620h]
 * 0000000140BC66CA: mov     dword ptr [rsp+9D0h+var_960], r15d
 * 0000000140BC66CF: mov     rcx, [rax]
 * 0000000140BC66D2: mov     r13d, [rcx]
 * 0000000140BC66D5: lea     rdx, [rcx+10h]
 * 0000000140BC66D9: mov     [rsp+9D0h+var_978], rdx
 * 0000000140BC66DE: lea     rax, ds:0[r13*2]
 * 0000000140BC66E6: add     rax, r13
 * 0000000140BC66E9: lea     rax, [rdx+rax*8]
 * 0000000140BC66ED: mov     [rsp+9D0h+var_968], rax
 * 0000000140BC66F2: cmp     [rcx+0Ch], r15b
 * 0000000140BC66F6: jz      short loc_140BC670C
 * 0000000140BC66F8: mov     rax, [r12]
 * 0000000140BC66FC: mov     r13d, r15d
 * 0000000140BC66FF: jmp     short loc_140BC6707
 * 0000000140BC6701: mov     rax, [rax]
 * 0000000140BC6704: add     r13d, ebx
 * 0000000140BC6707: cmp     rax, r12
 * 0000000140BC670A: jnz     short loc_140BC6701
 * 0000000140BC670C: mov     r8d, [rsi+830h]
 * 0000000140BC6713: lea     r15d, ds:0[r13*8]
 * 0000000140BC671B: rdtsc
 * 0000000140BC671D: shl     rdx, 20h
 * 0000000140BC6721: mov     r9, 7010008004002001h
 * 0000000140BC672B: or      rax, rdx
 * 0000000140BC672E: mov     rcx, rax
 * 0000000140BC6731: ror     rax, 3
 * 0000000140BC6735: xor     rcx, rax
 * 0000000140BC6738: mov     rax, r9
 * 0000000140BC673B: mul     rcx
 * 0000000140BC673E: mov     rbx, rax
 * 0000000140BC6741: mov     [rbp+8D0h+var_5C8], rdx
 * 0000000140BC6748: xor     ebx, edx
 * 0000000140BC674A: and     ebx, 7FFh
 * 0000000140BC6750: rdtsc
 * 0000000140BC6752: shl     rdx, 20h
 * 0000000140BC6756: or      rax, rdx
 * 0000000140BC6759: mov     rcx, rax
 * 0000000140BC675C: ror     rax, 3
 * 0000000140BC6760: xor     rcx, rax
 * 0000000140BC6763: mov     rax, r9
 * 0000000140BC6766: mul     rcx
 * 0000000140BC6769: lea     r9d, [rbx+1]
 * 0000000140BC676D: mov     ecx, 42h ; 'B'
 * 0000000140BC6772: xor     rax, rdx
 * 0000000140BC6775: mov     [rbp+8D0h+var_5C0], rdx
 * 0000000140BC677C: xor     edx, edx
 * 0000000140BC677E: div     r9
 * 0000000140BC6781: mov     rax, [rsi+100h]
 * 0000000140BC6788: mov     r14, rdx
 * 0000000140BC678B: lea     edx, [rbx+r15]
 * 0000000140BC678F: call    KeGuardDispatchICall
 * 0000000140BC6794: mov     r11, rax
 * 0000000140BC6797: test    rax, rax
 * 0000000140BC679A: jnz     short loc_140BC67AE
 * 0000000140BC679C: lea     eax, [r11+1]
 * 0000000140BC67A0: add     [rsi+0A60h], eax
 * 0000000140BC67A6: xor     r15d, r15d
 * 0000000140BC67A9: jmp     loc_140BC690C
 * 0000000140BC67AE: mov     r10d, r14d
 * 0000000140BC67B1: mov     r9, r11
 * 0000000140BC67B4: cmp     r14d, 8
 * 0000000140BC67B8: jb      short loc_140BC680F
 * 0000000140BC67BA: mov     r8d, r14d
 * 0000000140BC67BD: mov     esi, 1
 * 0000000140BC67C2: shr     r8, 3
 * 0000000140BC67C6: mov     rdi, 7010008004002001h
 * 0000000140BC67D0: rdtsc
 * 0000000140BC67D2: shl     rdx, 20h
 * 0000000140BC67D6: add     r10d, 0FFFFFFF8h
 * 0000000140BC67DA: or      rax, rdx
 * 0000000140BC67DD: mov     rcx, rax
 * 0000000140BC67E0: ror     rax, 3
 * 0000000140BC67E4: xor     rcx, rax
 * 0000000140BC67E7: mov     rax, rdi
 * 0000000140BC67EA: mul     rcx
 * 0000000140BC67ED: mov     [rbp+8D0h+var_5B8], rdx
 * 0000000140BC67F4: xor     rdx, rax
 * 0000000140BC67F7: mov     [r9], rdx
 * 0000000140BC67FA: add     r9, 8
 * 0000000140BC67FE: sub     r8, rsi
 * 0000000140BC6801: jnz     short loc_140BC67D0
 * 0000000140BC6803: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC6808: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC680F: test    r10d, r10d
 * 0000000140BC6812: jz      short loc_140BC6857
 * 0000000140BC6814: rdtsc
 * 0000000140BC6816: shl     rdx, 20h
 * 0000000140BC681A: or      rax, rdx
 * 0000000140BC681D: mov     rcx, rax
 * 0000000140BC6820: ror     rax, 3
 * 0000000140BC6824: xor     rcx, rax
 * 0000000140BC6827: mov     rax, 7010008004002001h
 * 0000000140BC6831: mul     rcx
 * 0000000140BC6834: mov     ecx, 0FFFFFFFFh
 * 0000000140BC6839: mov     [rbp+8D0h+var_5B0], rdx
 * 0000000140BC6840: xor     rdx, rax
 * 0000000140BC6843: mov     eax, 1
 * 0000000140BC6848: mov     [r9], dl
 * 0000000140BC684B: add     r9, rax
 * 0000000140BC684E: shr     rdx, 8
 * 0000000140BC6852: add     r10d, ecx
 * 0000000140BC6855: jnz     short loc_140BC6848
 * 0000000140BC6857: mov     eax, r14d
 * 0000000140BC685A: sub     ebx, r14d
 * 0000000140BC685D: add     rax, r11
 * 0000000140BC6860: mov     r8d, r15d
 * 0000000140BC6863: add     r8, rax
 * 0000000140BC6866: mov     r10d, 1
 * 0000000140BC686C: cmp     ebx, 8
 * 0000000140BC686F: jb      short loc_140BC68B9
 * 0000000140BC6871: mov     r9d, ebx
 * 0000000140BC6874: mov     rsi, 7010008004002001h
 * 0000000140BC687E: shr     r9, 3
 * 0000000140BC6882: rdtsc
 * 0000000140BC6884: shl     rdx, 20h
 * 0000000140BC6888: add     ebx, 0FFFFFFF8h
 * 0000000140BC688B: or      rax, rdx
 * 0000000140BC688E: mov     rcx, rax
 * 0000000140BC6891: ror     rax, 3
 * 0000000140BC6895: xor     rcx, rax
 * 0000000140BC6898: mov     rax, rsi
 * 0000000140BC689B: mul     rcx
 * 0000000140BC689E: mov     [rbp+8D0h+var_5A8], rdx
 * 0000000140BC68A5: xor     rdx, rax
 * 0000000140BC68A8: mov     [r8], rdx
 * 0000000140BC68AB: add     r8, 8
 * 0000000140BC68AF: sub     r9, r10
 * 0000000140BC68B2: jnz     short loc_140BC6882
 * 0000000140BC68B4: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC68B9: xor     r15d, r15d
 * 0000000140BC68BC: test    ebx, ebx
 * 0000000140BC68BE: jz      short loc_140BC68FD
 * 0000000140BC68C0: rdtsc
 * 0000000140BC68C2: shl     rdx, 20h
 * 0000000140BC68C6: or      rax, rdx
 * 0000000140BC68C9: mov     rcx, rax
 * 0000000140BC68CC: ror     rax, 3
 * 0000000140BC68D0: xor     rcx, rax
 * 0000000140BC68D3: mov     rax, 7010008004002001h
 * 0000000140BC68DD: mul     rcx
 * 0000000140BC68E0: mov     [rbp+8D0h+var_5A0], rdx
 * 0000000140BC68E7: xor     rdx, rax
 * 0000000140BC68EA: mov     eax, 0FFFFFFFFh
 * 0000000140BC68EF: mov     [r8], dl
 * 0000000140BC68F2: add     r8, r10
 * 0000000140BC68F5: shr     rdx, 8
 * 0000000140BC68F9: add     ebx, eax
 * 0000000140BC68FB: jnz     short loc_140BC68EF
 * 0000000140BC68FD: mov     ebx, r14d
 * 0000000140BC6900: mov     [rbp+8D0h+var_820], r11
 * 0000000140BC6907: add     rbx, r11
 * 0000000140BC690A: jnz     short loc_140BC6918
 * 0000000140BC690C: mov     [rbp+8D0h+var_820], r15
 * 0000000140BC6913: jmp     loc_140BC6AFF
 * 0000000140BC6918: mov     rdx, [r12]
 * 0000000140BC691C: mov     r14d, dword ptr [rsp+9D0h+var_960]
 * 0000000140BC6921: cmp     rdx, r12
 * 0000000140BC6924: jz      short loc_140BC6964
 * 0000000140BC6926: mov     eax, r14d
 * 0000000140BC6929: mov     r8, rdx
 * 0000000140BC692C: sub     r8, [rsi+758h]
 * 0000000140BC6933: cmp     r14d, r13d
 * 0000000140BC6936: jnb     short loc_140BC6953
 * 0000000140BC6938: mov     rax, [rsi+760h]
 * 0000000140BC693F: mov     ecx, r14d
 * 0000000140BC6942: add     r14d, r10d
 * 0000000140BC6945: mov     rax, [r8+rax]
 * 0000000140BC6949: mov     [rbx+rcx*8], rax
 * 0000000140BC694D: mov     eax, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BC6953: mov     rdx, [rdx]
 * 0000000140BC6956: add     eax, r10d
 * 0000000140BC6959: mov     dword ptr [rbp+8D0h+arg_8], eax
 * 0000000140BC695F: cmp     rdx, r12
 * 0000000140BC6962: jnz     short loc_140BC6929
 * 0000000140BC6964: mov     rax, [rsi+398h]
 * 0000000140BC696B: mov     edx, r14d
 * 0000000140BC696E: mov     rcx, rbx
 * 0000000140BC6971: call    KeGuardDispatchICall
 * 0000000140BC6976: mov     r15, [rsp+9D0h+var_978]
 * 0000000140BC697B: dec     r14d
 * 0000000140BC697E: mov     r12, [rsp+9D0h+var_968]
 * 0000000140BC6983: xor     r11d, r11d
 * 0000000140BC6986: mov     rdi, [rsp+9D0h+var_980]
 * 0000000140BC698B: mov     r10, [r15+8]
 * 0000000140BC698F: mov     r8d, r11d
 * 0000000140BC6992: mov     edx, r14d
 * 0000000140BC6995: test    r14d, r14d
 * 0000000140BC6998: js      short loc_140BC69C8
 * 0000000140BC699A: lea     ecx, [rdx+r8]
 * 0000000140BC699E: sar     ecx, 1
 * 0000000140BC69A0: movsxd  rax, ecx
 * 0000000140BC69A3: cmp     r10, [rbx+rax*8]
 * 0000000140BC69A7: jnb     short loc_140BC69B2
 * 0000000140BC69A9: test    ecx, ecx
 * 0000000140BC69AB: jz      short loc_140BC69C8
 * 0000000140BC69AD: lea     edx, [rcx-1]
 * 0000000140BC69B0: jmp     short loc_140BC69B8
 * 0000000140BC69B2: jbe     short loc_140BC69BF
 * 0000000140BC69B4: lea     r8d, [rcx+1]
 * 0000000140BC69B8: cmp     edx, r8d
 * 0000000140BC69BB: jge     short loc_140BC699A
 * 0000000140BC69BD: jmp     short loc_140BC69C8
 * 0000000140BC69BF: cmp     edx, r8d
 * 0000000140BC69C2: jge     loc_140BC6AE8
 * 0000000140BC69C8: cmp     [rsi+918h], r11d
 * 0000000140BC69CF: jnz     loc_140BC6AE8
 * 0000000140BC69D5: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC69DF: mov     edx, 1
 * 0000000140BC69E4: add     rax, rsi
 * 0000000140BC69E7: mov     [rsi+920h], rax
 * 0000000140BC69EE: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC69F8: add     rax, rdi
 * 0000000140BC69FB: mov     [rsi+928h], rax
 * 0000000140BC6A02: movsxd  rax, dword ptr [rdi]
 * 0000000140BC6A05: mov     [rsi+930h], rax
 * 0000000140BC6A0C: mov     [rsi+938h], r10
 * 0000000140BC6A13: mov     [rsi+918h], edx
 * 0000000140BC6A19: mov     ecx, [rsi+9D8h]
 * 0000000140BC6A1F: bt      ecx, 1Dh
 * 0000000140BC6A23: jb      loc_140BC6AE8
 * 0000000140BC6A29: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC6A33: jz      loc_140BC6AE8
 * 0000000140BC6A39: test    dl, cl
 * 0000000140BC6A3B: jz      loc_140BC6AE8
 * 0000000140BC6A41: mov     ecx, [rsi+0A74h]
 * 0000000140BC6A47: mov     eax, [rsi+804h]
 * 0000000140BC6A4D: mov     r10, [rsi+838h]
 * 0000000140BC6A54: sub     eax, ecx
 * 0000000140BC6A56: mov     r8, [rsi+0A78h]
 * 0000000140BC6A5D: lea     rdx, [rcx+rsi]
 * 0000000140BC6A61: mov     ecx, eax
 * 0000000140BC6A63: shr     rcx, 3
 * 0000000140BC6A67: lea     r9, [rdx+rcx*8]
 * 0000000140BC6A6B: jmp     short loc_140BC6A8E
 * 0000000140BC6A6D: xor     [rdx], r8
 * 0000000140BC6A70: mov     rax, [rdx]
 * 0000000140BC6A73: movzx   ecx, r8b
 * 0000000140BC6A77: xor     rax, r10
 * 0000000140BC6A7A: and     ecx, 3Fh
 * 0000000140BC6A7D: ror     r8, cl
 * 0000000140BC6A80: add     r8, rax
 * 0000000140BC6A83: xor     r8, 0EFAh
 * 0000000140BC6A8A: add     rdx, 8
 * 0000000140BC6A8E: cmp     rdx, r9
 * 0000000140BC6A91: jnz     short loc_140BC6A6D
 * 0000000140BC6A93: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC6A9B: cmp     r8, [rsi+0A80h]
 * 0000000140BC6AA2: jz      short loc_140BC6AE8
 * 0000000140BC6AA4: mov     ecx, [rsi+804h]
 * 0000000140BC6AAA: mov     rax, [rsi+588h]
 * 0000000140BC6AB1: mov     [rax], rsi
 * 0000000140BC6AB4: mov     [rax+10h], ecx
 * 0000000140BC6AB7: mov     rcx, [rsi+0A80h]
 * 0000000140BC6ABE: cmp     [rsi+918h], r11d
 * 0000000140BC6AC5: jnz     short loc_140BC6AD5
 * 0000000140BC6AC7: mov     rax, [rsi+588h]
 * 0000000140BC6ACE: xor     rcx, r8
 * 0000000140BC6AD1: mov     [rax+18h], rcx
 * 0000000140BC6AD5: xor     edx, edx
 * 0000000140BC6AD7: mov     r9d, 100h
 * 0000000140BC6ADD: mov     rcx, rsi
 * 0000000140BC6AE0: call    sub_140BD8384
 * 0000000140BC6AE5: xor     r11d, r11d
 * 0000000140BC6AE8: add     r15, 18h
 * 0000000140BC6AEC: cmp     r15, r12
 * 0000000140BC6AEF: jb      loc_140BC698B
 * 0000000140BC6AF5: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC6AFC: xor     r15d, r15d
 * 0000000140BC6AFF: mov     rcx, [rsi+530h]
 * 0000000140BC6B06: mov     rax, [rsi+128h]
 * 0000000140BC6B0D: call    KeGuardDispatchICall
 * 0000000140BC6B12: mov     rax, [rsi+180h]
 * 0000000140BC6B19: call    KeGuardDispatchICall
 * 0000000140BC6B1E: mov     rax, [rsi+380h]
 * 0000000140BC6B25: mov     rcx, [rbp+8D0h+var_940]
 * 0000000140BC6B29: call    KeGuardDispatchICall
 * 0000000140BC6B2E: cmp     [rbp+8D0h+var_820], r15
 * 0000000140BC6B35: jz      loc_140BC3B58
 * 0000000140BC6B3B: mov     eax, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BC6B41: shl     eax, 9
 * 0000000140BC6B44: add     [rsi+848h], eax
 * 0000000140BC6B4A: mov     rax, [rsi+108h]
 * 0000000140BC6B51: mov     rcx, [rbp+8D0h+var_820]
 * 0000000140BC6B58: jmp     loc_140BC3B53
 * 0000000140BC6B5D: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BC6B67: jz      short loc_140BC6BBD
 * 0000000140BC6B69: test    [rsi+9DCh], r11d
 * 0000000140BC6B70: jnz     short loc_140BC6BBD
 * 0000000140BC6B72: rdtsc
 * 0000000140BC6B74: shl     rdx, 20h
 * 0000000140BC6B78: or      rax, rdx
 * 0000000140BC6B7B: mov     rcx, rax
 * 0000000140BC6B7E: ror     rax, 3
 * 0000000140BC6B82: xor     rcx, rax
 * 0000000140BC6B85: mov     rax, 7010008004002001h
 * 0000000140BC6B8F: mul     rcx
 * 0000000140BC6B92: mov     rcx, rdx
 * 0000000140BC6B95: mov     [rbp+8D0h+var_598], rdx
 * 0000000140BC6B9C: xor     rcx, rax
 * 0000000140BC6B9F: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 0000000140BC6BA9: mul     rcx
 * 0000000140BC6BAC: shr     rdx, 2
 * 0000000140BC6BB0: lea     rax, [rdx+rdx*4]
 * 0000000140BC6BB4: sub     rcx, rax
 * 0000000140BC6BB7: mov     [rsi+844h], ecx
 * 0000000140BC6BBD: mov     ecx, [rsi+844h]
 * 0000000140BC6BC3: test    ecx, ecx
 * 0000000140BC6BC5: jz      loc_140BC99B0
 * 0000000140BC6BCB: sub     ecx, 1
 * 0000000140BC6BCE: jz      loc_140BC9776
 * 0000000140BC6BD4: sub     ecx, 1
 * 0000000140BC6BD7: jz      loc_140BC94F2
 * 0000000140BC6BDD: sub     ecx, 1
 * 0000000140BC6BE0: jz      loc_140BC709E
 * 0000000140BC6BE6: sub     ecx, 1
 * 0000000140BC6BE9: jz      loc_140BC6E2E
 * 0000000140BC6BEF: cmp     ecx, 1
 * 0000000140BC6BF2: jnz     loc_140BC9BFE
 * 0000000140BC6BF8: mov     rbx, r13
 * 0000000140BC6BFB: mov     [rbp+8D0h+arg_10], 0FFh
 * 0000000140BC6C02: mov     r13d, r15d
 * 0000000140BC6C05: mov     r14d, r15d
 * 0000000140BC6C08: xor     edi, edi
 * 0000000140BC6C0A: mov     [rbp+8D0h+var_7B8], rdi
 * 0000000140BC6C11: jmp     loc_140BC6DDF
 * 0000000140BC6C16: mov     rax, [rsi+218h]
 * 0000000140BC6C1D: lea     rdx, [rbp+8D0h+var_590]
 * 0000000140BC6C24: mov     rcx, [rbp+8D0h+var_838]
 * 0000000140BC6C2B: inc     r13d
 * 0000000140BC6C2E: call    KeGuardDispatchICall
 * 0000000140BC6C33: test    rax, rax
 * 0000000140BC6C36: jnz     loc_140BC6DDF
 * 0000000140BC6C3C: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BC6C46: lea     r9d, [rax+1]
 * 0000000140BC6C4A: jz      short loc_140BC6C92
 * 0000000140BC6C4C: mov     rcx, [rsi+0AC8h]
 * 0000000140BC6C53: lea     edx, [rax+30h]
 * 0000000140BC6C56: mov     r8, r12
 * 0000000140BC6C59: mov     rax, [rbx]
 * 0000000140BC6C5C: add     edx, 0FFFFFFF8h
 * 0000000140BC6C5F: mov     [rcx], rax
 * 0000000140BC6C62: add     rbx, 8
 * 0000000140BC6C66: add     rcx, 8
 * 0000000140BC6C6A: sub     r8, r9
 * 0000000140BC6C6D: jnz     short loc_140BC6C59
 * 0000000140BC6C6F: test    edx, edx
 * 0000000140BC6C71: jz      short loc_140BC6C8B
 * 0000000140BC6C73: mov     esi, 0FFFFFFFFh
 * 0000000140BC6C78: mov     al, [rbx]
 * 0000000140BC6C7A: add     rbx, r9
 * 0000000140BC6C7D: mov     [rcx], al
 * 0000000140BC6C7F: add     rcx, r9
 * 0000000140BC6C82: add     edx, esi
 * 0000000140BC6C84: jnz     short loc_140BC6C78
 * 0000000140BC6C86: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC6C8B: mov     rbx, [rsi+0AC8h]
 * 0000000140BC6C92: mov     rax, [rbp+8D0h+var_838]
 * 0000000140BC6C99: mov     [rbx+18h], rax
 * 0000000140BC6C9D: mov     rax, [rsi+588h]
 * 0000000140BC6CA4: mov     [rax], rbx
 * 0000000140BC6CA7: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140BC6CAE: mov     rcx, [rsi+588h]
 * 0000000140BC6CB5: mov     rax, [rbp+8D0h+var_838]
 * 0000000140BC6CBC: mov     [rcx+8], rax
 * 0000000140BC6CC0: mov     dword ptr [rcx+14h], 1000h
 * 0000000140BC6CC7: cmp     [rsi+918h], edi
 * 0000000140BC6CCD: jnz     loc_140BC6DDF
 * 0000000140BC6CD3: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC6CDD: add     rax, rsi
 * 0000000140BC6CE0: mov     [rsi+920h], rax
 * 0000000140BC6CE7: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC6CF1: add     rax, rbx
 * 0000000140BC6CF4: mov     [rsi+928h], rax
 * 0000000140BC6CFB: movsxd  rax, dword ptr [rbx]
 * 0000000140BC6CFE: mov     [rsi+930h], rax
 * 0000000140BC6D05: mov     [rsi+938h], r15
 * 0000000140BC6D0C: mov     [rsi+918h], r9d
 * 0000000140BC6D13: mov     ecx, [rsi+9D8h]
 * 0000000140BC6D19: bt      ecx, 1Dh
 * 0000000140BC6D1D: jb      loc_140BC6DDF
 * 0000000140BC6D23: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC6D2D: jz      loc_140BC6DDF
 * 0000000140BC6D33: test    r9b, cl
 * 0000000140BC6D36: jz      loc_140BC6DDF
 * 0000000140BC6D3C: mov     ecx, [rsi+0A74h]
 * 0000000140BC6D42: mov     eax, [rsi+804h]
 * 0000000140BC6D48: mov     r10, [rsi+838h]
 * 0000000140BC6D4F: sub     eax, ecx
 * 0000000140BC6D51: mov     r8, [rsi+0A78h]
 * 0000000140BC6D58: lea     rdx, [rcx+rsi]
 * 0000000140BC6D5C: mov     ecx, eax
 * 0000000140BC6D5E: shr     rcx, 3
 * 0000000140BC6D62: lea     r9, [rdx+rcx*8]
 * 0000000140BC6D66: jmp     short loc_140BC6D89
 * 0000000140BC6D68: xor     [rdx], r8
 * 0000000140BC6D6B: mov     rax, [rdx]
 * 0000000140BC6D6E: movzx   ecx, r8b
 * 0000000140BC6D72: xor     rax, r10
 * 0000000140BC6D75: and     ecx, 3Fh
 * 0000000140BC6D78: ror     r8, cl
 * 0000000140BC6D7B: add     r8, rax
 * 0000000140BC6D7E: xor     r8, 0EFAh
 * 0000000140BC6D85: add     rdx, 8
 * 0000000140BC6D89: cmp     rdx, r9
 * 0000000140BC6D8C: jnz     short loc_140BC6D68
 * 0000000140BC6D8E: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC6D96: cmp     r8, [rsi+0A80h]
 * 0000000140BC6D9D: jz      short loc_140BC6DDF
 * 0000000140BC6D9F: mov     ecx, [rsi+804h]
 * 0000000140BC6DA5: mov     rax, [rsi+588h]
 * 0000000140BC6DAC: mov     [rax], rsi
 * 0000000140BC6DAF: mov     [rax+10h], ecx
 * 0000000140BC6DB2: mov     rcx, [rsi+0A80h]
 * 0000000140BC6DB9: cmp     [rsi+918h], edi
 * 0000000140BC6DBF: jnz     short loc_140BC6DCF
 * 0000000140BC6DC1: mov     rax, [rsi+588h]
 * 0000000140BC6DC8: xor     rcx, r8
 * 0000000140BC6DCB: mov     [rax+18h], rcx
 * 0000000140BC6DCF: xor     edx, edx
 * 0000000140BC6DD1: mov     r9d, 100h
 * 0000000140BC6DD7: mov     rcx, rsi
 * 0000000140BC6DDA: call    sub_140BD8384
 * 0000000140BC6DDF: mov     rax, [rsi+430h]
 * 0000000140BC6DE6: lea     r9, [rbp+8D0h+var_838]
 * 0000000140BC6DED: lea     r8, [rbp+8D0h+arg_10]
 * 0000000140BC6DF4: mov     ecx, r14d
 * 0000000140BC6DF7: lea     rdx, [rbp+8D0h+var_7B8]
 * 0000000140BC6DFE: call    KeGuardDispatchICall
 * 0000000140BC6E03: test    eax, eax
 * 0000000140BC6E05: jnz     loc_140BC6C16
 * 0000000140BC6E0B: mov     eax, 1
 * 0000000140BC6E10: add     r14d, eax
 * 0000000140BC6E13: add     r15, rax
 * 0000000140BC6E16: cmp     r14d, 3
 * 0000000140BC6E1A: jb      loc_140BC6C0A
 * 0000000140BC6E20: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC6E27: mov     ebx, eax
 * 0000000140BC6E29: jmp     loc_140BC9BC4
 * 0000000140BC6E2E: mov     rax, [rsi+318h]
 * 0000000140BC6E35: xor     ecx, ecx
 * 0000000140BC6E37: mov     r13d, r15d
 * 0000000140BC6E3A: mov     [rbp+8D0h+var_948], r15d
 * 0000000140BC6E3E: call    KeGuardDispatchICall
 * 0000000140BC6E43: mov     r15, rax
 * 0000000140BC6E46: xor     eax, eax
 * 0000000140BC6E48: test    r15, r15
 * 0000000140BC6E4B: jz      loc_140BC9BC4
 * 0000000140BC6E51: mov     rdi, [rsp+9D0h+var_980]
 * 0000000140BC6E56: mov     [rbp+8D0h+var_7B0], rax
 * 0000000140BC6E5D: lea     rdx, [rbp+8D0h+var_7B0]
 * 0000000140BC6E64: mov     rax, [rsi+310h]
 * 0000000140BC6E6B: mov     rcx, r15
 * 0000000140BC6E6E: mov     rbx, rdi
 * 0000000140BC6E71: mov     r12d, 1
 * 0000000140BC6E77: call    KeGuardDispatchICall
 * 0000000140BC6E7C: mov     r14, rax
 * 0000000140BC6E7F: test    rax, rax
 * 0000000140BC6E82: jz      loc_140BC7075
 * 0000000140BC6E88: xor     edi, edi
 * 0000000140BC6E8A: lea     r13d, [r12+5]
 * 0000000140BC6E8F: mov     rax, [rsi+218h]
 * 0000000140BC6E96: lea     rdx, [rbp+8D0h+var_588]
 * 0000000140BC6E9D: mov     rcx, r14
 * 0000000140BC6EA0: inc     r12d
 * 0000000140BC6EA3: call    KeGuardDispatchICall
 * 0000000140BC6EA8: test    rax, rax
 * 0000000140BC6EAB: jnz     loc_140BC704A
 * 0000000140BC6EB1: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BC6EBB: lea     r9d, [rax+1]
 * 0000000140BC6EBF: jz      short loc_140BC6F07
 * 0000000140BC6EC1: mov     rcx, [rsi+0AC8h]
 * 0000000140BC6EC8: lea     edx, [rax+30h]
 * 0000000140BC6ECB: mov     r8, r13
 * 0000000140BC6ECE: mov     rax, [rbx]
 * 0000000140BC6ED1: add     edx, 0FFFFFFF8h
 * 0000000140BC6ED4: mov     [rcx], rax
 * 0000000140BC6ED7: add     rbx, 8
 * 0000000140BC6EDB: add     rcx, 8
 * 0000000140BC6EDF: sub     r8, r9
 * 0000000140BC6EE2: jnz     short loc_140BC6ECE
 * 0000000140BC6EE4: test    edx, edx
 * 0000000140BC6EE6: jz      short loc_140BC6F00
 * 0000000140BC6EE8: mov     esi, 0FFFFFFFFh
 * 0000000140BC6EED: mov     al, [rbx]
 * 0000000140BC6EEF: add     rbx, r9
 * 0000000140BC6EF2: mov     [rcx], al
 * 0000000140BC6EF4: add     rcx, r9
 * 0000000140BC6EF7: add     edx, esi
 * 0000000140BC6EF9: jnz     short loc_140BC6EED
 * 0000000140BC6EFB: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC6F00: mov     rbx, [rsi+0AC8h]
 * 0000000140BC6F07: mov     [rbx+18h], r14
 * 0000000140BC6F0B: mov     [rbx+20h], r15
 * 0000000140BC6F0F: mov     rax, [rsi+588h]
 * 0000000140BC6F16: mov     [rax], rbx
 * 0000000140BC6F19: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140BC6F20: mov     rax, [rsi+588h]
 * 0000000140BC6F27: mov     [rax+8], r14
 * 0000000140BC6F2B: mov     dword ptr [rax+14h], 1000h
 * 0000000140BC6F32: cmp     [rsi+918h], edi
 * 0000000140BC6F38: jnz     loc_140BC704A
 * 0000000140BC6F3E: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC6F48: add     rax, rsi
 * 0000000140BC6F4B: mov     [rsi+920h], rax
 * 0000000140BC6F52: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC6F5C: add     rax, rbx
 * 0000000140BC6F5F: mov     [rsi+928h], rax
 * 0000000140BC6F66: movsxd  rax, dword ptr [rbx]
 * 0000000140BC6F69: mov     [rsi+930h], rax
 * 0000000140BC6F70: mov     [rsi+938h], r13
 * 0000000140BC6F77: mov     [rsi+918h], r9d
 * 0000000140BC6F7E: mov     ecx, [rsi+9D8h]
 * 0000000140BC6F84: bt      ecx, 1Dh
 * 0000000140BC6F88: jb      loc_140BC704A
 * 0000000140BC6F8E: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC6F98: jz      loc_140BC704A
 * 0000000140BC6F9E: test    r9b, cl
 * 0000000140BC6FA1: jz      loc_140BC704A
 * 0000000140BC6FA7: mov     ecx, [rsi+0A74h]
 * 0000000140BC6FAD: mov     eax, [rsi+804h]
 * 0000000140BC6FB3: mov     r10, [rsi+838h]
 * 0000000140BC6FBA: sub     eax, ecx
 * 0000000140BC6FBC: mov     r8, [rsi+0A78h]
 * 0000000140BC6FC3: lea     rdx, [rcx+rsi]
 * 0000000140BC6FC7: mov     ecx, eax
 * 0000000140BC6FC9: shr     rcx, 3
 * 0000000140BC6FCD: lea     r9, [rdx+rcx*8]
 * 0000000140BC6FD1: jmp     short loc_140BC6FF4
 * 0000000140BC6FD3: xor     [rdx], r8
 * 0000000140BC6FD6: mov     rax, [rdx]
 * 0000000140BC6FD9: movzx   ecx, r8b
 * 0000000140BC6FDD: xor     rax, r10
 * 0000000140BC6FE0: and     ecx, 3Fh
 * 0000000140BC6FE3: ror     r8, cl
 * 0000000140BC6FE6: add     r8, rax
 * 0000000140BC6FE9: xor     r8, 0EFAh
 * 0000000140BC6FF0: add     rdx, 8
 * 0000000140BC6FF4: cmp     rdx, r9
 * 0000000140BC6FF7: jnz     short loc_140BC6FD3
 * 0000000140BC6FF9: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC7001: cmp     r8, [rsi+0A80h]
 * 0000000140BC7008: jz      short loc_140BC704A
 * 0000000140BC700A: mov     ecx, [rsi+804h]
 * 0000000140BC7010: mov     rax, [rsi+588h]
 * 0000000140BC7017: mov     [rax], rsi
 * 0000000140BC701A: mov     [rax+10h], ecx
 * 0000000140BC701D: mov     rcx, [rsi+0A80h]
 * 0000000140BC7024: cmp     [rsi+918h], edi
 * 0000000140BC702A: jnz     short loc_140BC703A
 * 0000000140BC702C: mov     rax, [rsi+588h]
 * 0000000140BC7033: xor     rcx, r8
 * 0000000140BC7036: mov     [rax+18h], rcx
 * 0000000140BC703A: xor     edx, edx
 * 0000000140BC703C: mov     r9d, 100h
 * 0000000140BC7042: mov     rcx, rsi
 * 0000000140BC7045: call    sub_140BD8384
 * 0000000140BC704A: mov     rax, [rsi+310h]
 * 0000000140BC7051: lea     rdx, [rbp+8D0h+var_7B0]
 * 0000000140BC7058: mov     rcx, r15
 * 0000000140BC705B: call    KeGuardDispatchICall
 * 0000000140BC7060: mov     r14, rax
 * 0000000140BC7063: test    rax, rax
 * 0000000140BC7066: jnz     loc_140BC6E8F
 * 0000000140BC706C: mov     r13d, [rbp+8D0h+var_948]
 * 0000000140BC7070: mov     rdi, [rsp+9D0h+var_980]
 * 0000000140BC7075: mov     rax, [rsi+318h]
 * 0000000140BC707C: add     r13d, r12d
 * 0000000140BC707F: mov     rcx, r15
 * 0000000140BC7082: mov     [rbp+8D0h+var_948], r13d
 * 0000000140BC7086: call    KeGuardDispatchICall
 * 0000000140BC708B: mov     r15, rax
 * 0000000140BC708E: xor     eax, eax
 * 0000000140BC7090: test    r15, r15
 * 0000000140BC7093: jnz     loc_140BC6E56
 * 0000000140BC7099: jmp     loc_140BC9BB8
 * 0000000140BC709E: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BC70A8: mov     r13d, r15d
 * 0000000140BC70AB: mov     rax, [rsi+4E8h]
 * 0000000140BC70B2: mov     [rbp+8D0h+var_8B8], rsi
 * 0000000140BC70B6: mov     rbx, [rax]
 * 0000000140BC70B9: mov     [rbp+8D0h+var_900], rbx
 * 0000000140BC70BD: jnz     loc_140BC9BBF
 * 0000000140BC70C3: mov     rcx, [rsp+9D0h+var_980]
 * 0000000140BC70C8: mov     rax, [rcx+28h]
 * 0000000140BC70CC: test    rax, rax
 * 0000000140BC70CF: jz      loc_140BC722B
 * 0000000140BC70D5: mov     edx, 1
 * 0000000140BC70DA: mov     r13d, edx
 * 0000000140BC70DD: cmp     rbx, rax
 * 0000000140BC70E0: jz      loc_140BC9BBF
 * 0000000140BC70E6: mov     [rcx+18h], rbx
 * 0000000140BC70EA: mov     rax, [rsi+588h]
 * 0000000140BC70F1: mov     [rax], rcx
 * 0000000140BC70F4: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140BC70FB: mov     rax, [rsi+588h]
 * 0000000140BC7102: mov     [rax+8], rbx
 * 0000000140BC7106: mov     [rax+14h], r11d
 * 0000000140BC710A: cmp     [rsi+918h], r15d
 * 0000000140BC7111: jnz     loc_140BC9BBF
 * 0000000140BC7117: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC7121: add     rax, rsi
 * 0000000140BC7124: mov     [rsi+920h], rax
 * 0000000140BC712B: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC7135: add     rax, rcx
 * 0000000140BC7138: mov     [rsi+928h], rax
 * 0000000140BC713F: movsxd  rax, dword ptr [rcx]
 * 0000000140BC7142: mov     [rsi+930h], rax
 * 0000000140BC7149: mov     [rsi+938h], r14
 * 0000000140BC7150: mov     [rsi+918h], edx
 * 0000000140BC7156: mov     ecx, [rsi+9D8h]
 * 0000000140BC715C: bt      ecx, 1Dh
 * 0000000140BC7160: jb      loc_140BC9BBF
 * 0000000140BC7166: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC7170: jz      loc_140BC9BBF
 * 0000000140BC7176: test    dl, cl
 * 0000000140BC7178: jz      loc_140BC9BBF
 * 0000000140BC717E: mov     ecx, [rsi+0A74h]
 * 0000000140BC7184: mov     eax, [rsi+804h]
 * 0000000140BC718A: mov     r10, [rsi+838h]
 * 0000000140BC7191: sub     eax, ecx
 * 0000000140BC7193: mov     r8, [rsi+0A78h]
 * 0000000140BC719A: lea     rdx, [rcx+rsi]
 * 0000000140BC719E: mov     ecx, eax
 * 0000000140BC71A0: shr     rcx, 3
 * 0000000140BC71A4: lea     r9, [rdx+rcx*8]
 * 0000000140BC71A8: jmp     short loc_140BC71CB
 * 0000000140BC71AA: xor     [rdx], r8
 * 0000000140BC71AD: mov     rax, [rdx]
 * 0000000140BC71B0: movzx   ecx, r8b
 * 0000000140BC71B4: xor     rax, r10
 * 0000000140BC71B7: and     ecx, 3Fh
 * 0000000140BC71BA: ror     r8, cl
 * 0000000140BC71BD: add     r8, rax
 * 0000000140BC71C0: xor     r8, 0EFAh
 * 0000000140BC71C7: add     rdx, 8
 * 0000000140BC71CB: cmp     rdx, r9
 * 0000000140BC71CE: jnz     short loc_140BC71AA
 * 0000000140BC71D0: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC71D8: cmp     r8, [rsi+0A80h]
 * 0000000140BC71DF: jz      loc_140BC9BBF
 * 0000000140BC71E5: mov     ecx, [rsi+804h]
 * 0000000140BC71EB: mov     rax, [rsi+588h]
 * 0000000140BC71F2: mov     [rax], rsi
 * 0000000140BC71F5: mov     [rax+10h], ecx
 * 0000000140BC71F8: mov     rcx, [rsi+0A80h]
 * 0000000140BC71FF: cmp     [rsi+918h], r15d
 * 0000000140BC7206: jnz     short loc_140BC7216
 * 0000000140BC7208: mov     rax, [rsi+588h]
 * 0000000140BC720F: xor     rcx, r8
 * 0000000140BC7212: mov     [rax+18h], rcx
 * 0000000140BC7216: xor     edx, edx
 * 0000000140BC7218: mov     r9d, 100h
 * 0000000140BC721E: mov     rcx, rsi
 * 0000000140BC7221: call    sub_140BD8384
 * 0000000140BC7226: jmp     loc_140BC9BBF
 * 0000000140BC722B: test    rbx, rbx
 * 0000000140BC722E: jz      loc_140BC9BBF
 * 0000000140BC7234: mov     rax, [rsi+210h]
 * 0000000140BC723B: lea     rdx, [rbp+8D0h+var_230]
 * 0000000140BC7242: mov     rcx, rbx
 * 0000000140BC7245: mov     [rbp+8D0h+var_948], 1
 * 0000000140BC724C: mov     [rbp+8D0h+var_8C0], rsi
 * 0000000140BC7250: call    KeGuardDispatchICall
 * 0000000140BC7255: mov     r15, [rbp+8D0h+BugCheckParameter2]
 * 0000000140BC725C: xor     r13d, r13d
 * 0000000140BC725F: mov     r14d, [rbp+8D0h+var_21C]
 * 0000000140BC7266: mov     r12, rax
 * 0000000140BC7269: mov     [rbp+8D0h+var_930], rax
 * 0000000140BC726D: mov     [rbp+8D0h+var_914], r14d
 * 0000000140BC7271: mov     [rbp+8D0h+var_910], r15
 * 0000000140BC7275: test    r15, r15
 * 0000000140BC7278: jnz     short loc_140BC7294
 * 0000000140BC727A: test    dword ptr [rsi+9D8h], 100000h
 * 0000000140BC7284: jz      loc_140BD34B1
 * 0000000140BC728A: mov     ecx, 0C000007Bh
 * 0000000140BC728F: jmp     loc_140BC94B5
 * 0000000140BC7294: mov     ecx, 4
 * 0000000140BC7299: mov     [rbp+8D0h+var_870], r13
 * 0000000140BC729D: lea     rax, [rbp+8D0h+var_868]
 * 0000000140BC72A1: mov     r8d, 0FFFFFFFFh
 * 0000000140BC72A7: lea     edx, [rcx-3]
 * 0000000140BC72AA: mov     [rax], r13b
 * 0000000140BC72AD: add     rax, rdx
 * 0000000140BC72B0: add     ecx, r8d
 * 0000000140BC72B3: jnz     short loc_140BC72AA
 * 0000000140BC72B5: mov     ebx, r13d
 * 0000000140BC72B8: cmp     [rsi+82Ch], r13d
 * 0000000140BC72BF: jbe     loc_140BC7484
 * 0000000140BC72C5: mov     ecx, [rbp+8D0h+var_868]
 * 0000000140BC72C8: mov     edx, dword ptr [rbp+8D0h+var_870+4]
 * 0000000140BC72CB: mov     r9d, dword ptr [rbp+8D0h+var_870]
 * 0000000140BC72CF: mov     rax, [rsi+0AC0h]
 * 0000000140BC72D6: mov     r11, rsi
 * 0000000140BC72D9: test    rax, rax
 * 0000000140BC72DC: mov     r10d, r13d
 * 0000000140BC72DF: cmovnz  r11, rax
 * 0000000140BC72E3: mov     r8d, [r11+828h]
 * 0000000140BC72EA: add     r8, r11
 * 0000000140BC72ED: test    r9d, r9d
 * 0000000140BC72F0: jz      short loc_140BC72FF
 * 0000000140BC72F2: cmp     edx, ebx
 * 0000000140BC72F4: ja      short loc_140BC72FF
 * 0000000140BC72F6: mov     r8d, ecx
 * 0000000140BC72F9: mov     r10d, edx
 * 0000000140BC72FC: add     r8, r11
 * 0000000140BC72FF: cmp     r10d, ebx
 * 0000000140BC7302: jz      loc_140BC741E
 * 0000000140BC7308: mov     esi, 2
 * 0000000140BC730D: mov     r9d, ebx
 * 0000000140BC7310: sub     r9d, r10d
 * 0000000140BC7313: mov     rdi, 0AAAAAAAAAAAAAAABh
 * 0000000140BC731D: mov     r10d, ebx
 * 0000000140BC7320: lea     r12d, [rsi-1]
 * 0000000140BC7324: mov     ecx, [r8]
 * 0000000140BC7327: sub     ecx, r12d
 * 0000000140BC732A: jz      loc_140BC73E9
 * 0000000140BC7330: sub     ecx, 6
 * 0000000140BC7333: jz      loc_140BC73DB
 * 0000000140BC7339: sub     ecx, r12d
 * 0000000140BC733C: jz      loc_140BC73CE
 * 0000000140BC7342: sub     ecx, esi
 * 0000000140BC7344: jz      short loc_140BC73C2
 * 0000000140BC7346: sub     ecx, 12h
 * 0000000140BC7349: jz      short loc_140BC73BB
 * 0000000140BC734B: sub     ecx, esi
 * 0000000140BC734D: jz      short loc_140BC738F
 * 0000000140BC734F: sub     ecx, 3
 * 0000000140BC7352: jz      short loc_140BC7367
 * 0000000140BC7354: cmp     ecx, 0Ah
 * 0000000140BC7357: jz      loc_140BC73E9
 * 0000000140BC735D: mov     eax, 30h ; '0'
 * 0000000140BC7362: jmp     loc_140BC73FE
 * 0000000140BC7367: mov     ecx, [r8+20h]
 * 0000000140BC736B: mov     edx, [r8+28h]
 * 0000000140BC736F: and     ecx, 0FFFh
 * 0000000140BC7375: add     rdx, 0FFFh
 * 0000000140BC737C: add     rdx, rcx
 * 0000000140BC737F: shr     rdx, 0Ch
 * 0000000140BC7383: lea     eax, [rdx+rdx*4]
 * 0000000140BC7386: lea     eax, ds:30h[rax*4]
 * 0000000140BC738D: jmp     short loc_140BC73FE
 * 0000000140BC738F: mov     eax, [r8+24h]
 * 0000000140BC7393: lea     ecx, [rax-1]
 * 0000000140BC7396: neg     eax
 * 0000000140BC7398: sbb     eax, eax
 * 0000000140BC739A: and     ecx, eax
 * 0000000140BC739C: mov     rax, rdi
 * 0000000140BC739F: mul     rcx
 * 0000000140BC73A2: movzx   eax, word ptr [r8+28h]
 * 0000000140BC73A7: shr     rdx, 3
 * 0000000140BC73AB: add     edx, 7
 * 0000000140BC73AE: and     edx, 0FFFFFFF8h
 * 0000000140BC73B1: add     eax, esi
 * 0000000140BC73B3: lea     eax, [rax+rax*2]
 * 0000000140BC73B6: lea     eax, [rdx+rax*8]
 * 0000000140BC73B9: jmp     short loc_140BC73FE
 * 0000000140BC73BB: movzx   eax, word ptr [r8+28h]
 * 0000000140BC73C0: jmp     short loc_140BC73D3
 * 0000000140BC73C2: mov     eax, [r8+1Ch]
 * 0000000140BC73C6: add     eax, 3
 * 0000000140BC73C9: shl     eax, 4
 * 0000000140BC73CC: jmp     short loc_140BC73FE
 * 0000000140BC73CE: movzx   eax, word ptr [r8+20h]
 * 0000000140BC73D3: add     eax, 37h ; '7'
 * 0000000140BC73D6: and     eax, 0FFFFFFF8h
 * 0000000140BC73D9: jmp     short loc_140BC73FE
 * 0000000140BC73DB: mov     eax, [r8+18h]
 * 0000000140BC73DF: add     eax, esi
 * 0000000140BC73E1: lea     eax, [rax+rax*2]
 * 0000000140BC73E4: shl     eax, 3
 * 0000000140BC73E7: jmp     short loc_140BC73FE
 * 0000000140BC73E9: mov     ecx, [r8+10h]
 * 0000000140BC73ED: mov     rax, rdi
 * 0000000140BC73F0: mul     rcx
 * 0000000140BC73F3: shr     rdx, 3
 * 0000000140BC73F7: lea     eax, ds:30h[rdx*4]
 * 0000000140BC73FE: add     r8, rax
 * 0000000140BC7401: sub     r9, r12
 * 0000000140BC7404: jnz     loc_140BC7324
 * 0000000140BC740A: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC740F: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC7416: mov     r15, [rbp+8D0h+var_910]
 * 0000000140BC741A: mov     r12, [rbp+8D0h+var_930]
 * 0000000140BC741E: mov     eax, 1
 * 0000000140BC7423: mov     edx, r10d
 * 0000000140BC7426: mov     r9d, eax
 * 0000000140BC7429: mov     dword ptr [rbp+8D0h+var_870], eax
 * 0000000140BC742C: mov     ecx, r8d
 * 0000000140BC742F: mov     dword ptr [rbp+8D0h+var_870+4], edx
 * 0000000140BC7432: sub     ecx, r11d
 * 0000000140BC7435: mov     r10d, r9d
 * 0000000140BC7438: mov     [rbp+8D0h+var_868], ecx
 * 0000000140BC743B: mov     eax, [r8]
 * 0000000140BC743E: cmp     eax, r10d
 * 0000000140BC7441: jz      short loc_140BC7453
 * 0000000140BC7443: mov     r11d, 0Ch
 * 0000000140BC7449: cmp     eax, r11d
 * 0000000140BC744C: jz      short loc_140BC7453
 * 0000000140BC744E: cmp     eax, 2Bh ; '+'
 * 0000000140BC7451: jnz     short loc_140BC7463
 * 0000000140BC7453: cmp     [r8+8], r12
 * 0000000140BC7457: jnz     short loc_140BC7463
 * 0000000140BC7459: cmp     [r8+10h], r14d
 * 0000000140BC745D: jz      loc_140BC7516
 * 0000000140BC7463: add     eax, 0FFFFFFDFh
 * 0000000140BC7466: cmp     eax, r10d
 * 0000000140BC7469: ja      short loc_140BC7475
 * 0000000140BC746B: cmp     [r8+20h], r15
 * 0000000140BC746F: jz      loc_140BC7516
 * 0000000140BC7475: add     ebx, r10d
 * 0000000140BC7478: cmp     ebx, [rsi+82Ch]
 * 0000000140BC747E: jb      loc_140BC72CF
 * 0000000140BC7484: mov     [rbp+8D0h+var_8B0], r13
 * 0000000140BC7488: mov     eax, [rbp+8D0h+var_914]
 * 0000000140BC748B: mov     rbx, [rsi+528h]
 * 0000000140BC7492: mov     dword ptr [rsp+9D0h+var_960], eax
 * 0000000140BC7496: cli
 * 0000000140BC7497: mov     rcx, gs:20h
 * 0000000140BC74A0: mov     rax, [rsi+658h]
 * 0000000140BC74A7: mov     rcx, [rcx+rax]
 * 0000000140BC74AB: sti
 * 0000000140BC74AC: mov     rax, [rsi+178h]
 * 0000000140BC74B3: call    KeGuardDispatchICall
 * 0000000140BC74B8: mov     rcx, [rsi+530h]
 * 0000000140BC74BF: mov     r12d, 1
 * 0000000140BC74C5: mov     rax, [rsi+0F8h]
 * 0000000140BC74CC: mov     dl, r12b
 * 0000000140BC74CF: call    KeGuardDispatchICall
 * 0000000140BC74D4: mov     rdx, [rbx]
 * 0000000140BC74D7: cmp     rdx, rbx
 * 0000000140BC74DA: jz      short loc_140BC753C
 * 0000000140BC74DC: mov     r9, [rsi+758h]
 * 0000000140BC74E3: mov     r10, [rsi+760h]
 * 0000000140BC74EA: mov     r11, [rsi+768h]
 * 0000000140BC74F1: mov     rcx, rdx
 * 0000000140BC74F4: sub     rcx, r9
 * 0000000140BC74F7: mov     rax, [rcx+r10]
 * 0000000140BC74FB: mov     r8d, [rcx+r11]
 * 0000000140BC74FF: add     r8, rax
 * 0000000140BC7502: cmp     r15, rax
 * 0000000140BC7505: jb      short loc_140BC750C
 * 0000000140BC7507: cmp     r15, r8
 * 0000000140BC750A: jb      short loc_140BC752D
 * 0000000140BC750C: mov     rdx, [rdx]
 * 0000000140BC750F: cmp     rdx, rbx
 * 0000000140BC7512: jnz     short loc_140BC74F1
 * 0000000140BC7514: jmp     short loc_140BC753C
 * 0000000140BC7516: mov     [rbp+8D0h+var_8B0], r8
 * 0000000140BC751A: test    r8, r8
 * 0000000140BC751D: jz      loc_140BC7488
 * 0000000140BC7523: mov     ecx, 0C000010Eh
 * 0000000140BC7528: jmp     loc_140BC94B1
 * 0000000140BC752D: mov     rax, [rsi+0E8h]
 * 0000000140BC7534: mov     edx, r12d
 * 0000000140BC7537: call    KeGuardDispatchICall
 * 0000000140BC753C: mov     rcx, [rsi+530h]
 * 0000000140BC7543: mov     rax, [rsi+128h]
 * 0000000140BC754A: call    KeGuardDispatchICall
 * 0000000140BC754F: mov     rax, [rsi+180h]
 * 0000000140BC7556: call    KeGuardDispatchICall
 * 0000000140BC755B: bt      dword ptr [rsi+9D8h], 1Dh
 * 0000000140BC7563: jnb     short loc_140BC757E
 * 0000000140BC7565: mov     r8d, 9
 * 0000000140BC756B: lea     rcx, [rbp+8D0h+var_8B8]
 * 0000000140BC756F: mov     rdx, r15
 * 0000000140BC7572: call    sub_140BDF96C
 * 0000000140BC7577: mov     ecx, eax
 * 0000000140BC7579: jmp     loc_140BC94B1
 * 0000000140BC757E: mov     rax, [rsi+200h]
 * 0000000140BC7585: lea     r9, [rbp+8D0h+var_914]
 * 0000000140BC7589: xor     r8d, r8d
 * 0000000140BC758C: mov     [rbp+8D0h+var_6A8], r13
 * 0000000140BC7593: mov     dl, r12b
 * 0000000140BC7596: mov     [rbp+8D0h+var_7D0], r13d
 * 0000000140BC759D: mov     rcx, r15
 * 0000000140BC75A0: call    KeGuardDispatchICall
 * 0000000140BC75A5: mov     rcx, rax
 * 0000000140BC75A8: test    rax, rax
 * 0000000140BC75AB: jnz     short loc_140BC75B5
 * 0000000140BC75AD: mov     eax, r13d
 * 0000000140BC75B0: mov     [rbp+8D0h+var_914], eax
 * 0000000140BC75B3: jmp     short loc_140BC75B8
 * 0000000140BC75B5: mov     eax, [rbp+8D0h+var_914]
 * 0000000140BC75B8: mov     [rbp+8D0h+var_6C0], rcx
 * 0000000140BC75BF: lea     r9, [rbp+8D0h+var_914]
 * 0000000140BC75C3: mov     [rbp+8D0h+var_7DC], eax
 * 0000000140BC75C9: mov     rcx, r15
 * 0000000140BC75CC: mov     rax, [rsi+200h]
 * 0000000140BC75D3: mov     r8d, 0Ch
 * 0000000140BC75D9: mov     dl, r12b
 * 0000000140BC75DC: call    KeGuardDispatchICall
 * 0000000140BC75E1: mov     [rbp+8D0h+var_920], rax
 * 0000000140BC75E5: mov     rcx, rax
 * 0000000140BC75E8: test    rax, rax
 * 0000000140BC75EB: jnz     short loc_140BC75F5
 * 0000000140BC75ED: mov     eax, r13d
 * 0000000140BC75F0: mov     [rbp+8D0h+var_914], eax
 * 0000000140BC75F3: jmp     short loc_140BC75F8
 * 0000000140BC75F5: mov     eax, [rbp+8D0h+var_914]
 * 0000000140BC75F8: mov     dword ptr [rbp+8D0h+arg_8], eax
 * 0000000140BC75FE: lea     r9, [rbp+8D0h+var_914]
 * 0000000140BC7602: mov     [rbp+8D0h+var_6B8], rcx
 * 0000000140BC7609: mov     r8d, 0Ah
 * 0000000140BC760F: mov     [rbp+8D0h+var_7D8], eax
 * 0000000140BC7615: mov     rcx, r15
 * 0000000140BC7618: mov     rax, [rsi+200h]
 * 0000000140BC761F: mov     dl, r12b
 * 0000000140BC7622: call    KeGuardDispatchICall
 * 0000000140BC7627: mov     rcx, rax
 * 0000000140BC762A: test    rax, rax
 * 0000000140BC762D: jnz     short loc_140BC7637
 * 0000000140BC762F: mov     eax, r13d
 * 0000000140BC7632: mov     [rbp+8D0h+var_914], eax
 * 0000000140BC7635: jmp     short loc_140BC763A
 * 0000000140BC7637: mov     eax, [rbp+8D0h+var_914]
 * 0000000140BC763A: mov     [rbp+8D0h+var_6B0], rcx
 * 0000000140BC7641: mov     rcx, r15
 * 0000000140BC7644: mov     [rbp+8D0h+var_7D4], eax
 * 0000000140BC764A: mov     rax, [rsi+208h]
 * 0000000140BC7651: call    KeGuardDispatchICall
 * 0000000140BC7656: mov     rbx, rax
 * 0000000140BC7659: test    rax, rax
 * 0000000140BC765C: jnz     loc_140BC7784
 * 0000000140BC7662: mov     ecx, [rsi+9D8h]
 * 0000000140BC7668: bt      ecx, 14h
 * 0000000140BC766C: jnb     loc_140BD34DC
 * 0000000140BC7672: cmp     [rsi+918h], r13d
 * 0000000140BC7679: jnz     loc_140BC777A
 * 0000000140BC767F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC7689: add     rax, rsi
 * 0000000140BC768C: bt      ecx, 1Dh
 * 0000000140BC7690: mov     [rsi+920h], rax
 * 0000000140BC7697: mov     [rsi+928h], r13
 * 0000000140BC769E: mov     qword ptr [rsi+930h], 10Fh
 * 0000000140BC76A9: mov     [rsi+938h], r15
 * 0000000140BC76B0: mov     [rsi+918h], r12d
 * 0000000140BC76B7: jb      loc_140BC777A
 * 0000000140BC76BD: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC76C7: jz      loc_140BC777A
 * 0000000140BC76CD: test    r12b, cl
 * 0000000140BC76D0: jz      loc_140BC777A
 * 0000000140BC76D6: mov     ecx, [rsi+0A74h]
 * 0000000140BC76DC: mov     eax, [rsi+804h]
 * 0000000140BC76E2: mov     r10, [rsi+838h]
 * 0000000140BC76E9: sub     eax, ecx
 * 0000000140BC76EB: mov     r8, [rsi+0A78h]
 * 0000000140BC76F2: lea     rdx, [rcx+rsi]
 * 0000000140BC76F6: mov     ecx, eax
 * 0000000140BC76F8: shr     rcx, 3
 * 0000000140BC76FC: lea     r9, [rdx+rcx*8]
 * 0000000140BC7700: jmp     short loc_140BC7723
 * 0000000140BC7702: xor     [rdx], r8
 * 0000000140BC7705: mov     rax, [rdx]
 * 0000000140BC7708: movzx   ecx, r8b
 * 0000000140BC770C: xor     rax, r10
 * 0000000140BC770F: and     ecx, 3Fh
 * 0000000140BC7712: ror     r8, cl
 * 0000000140BC7715: add     r8, rax
 * 0000000140BC7718: xor     r8, 0EFAh
 * 0000000140BC771F: add     rdx, 8
 * 0000000140BC7723: cmp     rdx, r9
 * 0000000140BC7726: jnz     short loc_140BC7702
 * 0000000140BC7728: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC7730: cmp     r8, [rsi+0A80h]
 * 0000000140BC7737: jz      short loc_140BC777A
 * 0000000140BC7739: mov     ecx, [rsi+804h]
 * 0000000140BC773F: mov     rax, [rsi+588h]
 * 0000000140BC7746: mov     [rax], rsi
 * 0000000140BC7749: mov     [rax+10h], ecx
 * 0000000140BC774C: mov     rcx, [rsi+0A80h]
 * 0000000140BC7753: cmp     [rsi+918h], r13d
 * 0000000140BC775A: jnz     short loc_140BC776A
 * 0000000140BC775C: mov     rax, [rsi+588h]
 * 0000000140BC7763: xor     rcx, r8
 * 0000000140BC7766: mov     [rax+18h], rcx
 * 0000000140BC776A: mov     rcx, rsi
 * 0000000140BC776D: xor     edx, edx
 * 0000000140BC776F: mov     r9d, 100h
 * 0000000140BC7775: call    sub_140BD8384
 * 0000000140BC777A: mov     ecx, 0C000007Bh
 * 0000000140BC777F: jmp     loc_140BC94B1
 * 0000000140BC7784: mov     rax, [rsi+498h]
 * 0000000140BC778B: lea     rdx, [rbp+8D0h+var_6F0]
 * 0000000140BC7792: mov     rcx, r15
 * 0000000140BC7795: call    KeGuardDispatchICall
 * 0000000140BC779A: mov     r8d, [rsi+944h]
 * 0000000140BC77A1: mov     [rbp+8D0h+var_6A0], rax
 * 0000000140BC77A8: mov     eax, [rbp+8D0h+var_6F0]
 * 0000000140BC77AE: mov     [rbp+8D0h+var_7CC], eax
 * 0000000140BC77B4: mov     eax, [rbx+54h]
 * 0000000140BC77B7: mov     [rbp+8D0h+var_6C8], r15
 * 0000000140BC77BE: mov     r15d, [rsi+804h]
 * 0000000140BC77C5: mov     [rbp+8D0h+var_7E0], eax
 * 0000000140BC77CB: lea     eax, [r15+120h]
 * 0000000140BC77D2: cmp     eax, [rsi+0A64h]
 * 0000000140BC77D8: jbe     loc_140BC78C4
 * 0000000140BC77DE: mov     edx, eax
 * 0000000140BC77E0: mov     rcx, rsi
 * 0000000140BC77E3: call    sub_140BD7AF8
 * 0000000140BC77E8: mov     [rsp+9D0h+var_978], rax
 * 0000000140BC77ED: mov     r14, rax
 * 0000000140BC77F0: test    rax, rax
 * 0000000140BC77F3: jnz     short loc_140BC77FE
 * 0000000140BC77F5: mov     [rbp+8D0h+var_8C0], r13
 * 0000000140BC77F9: jmp     loc_140BC7AC2
 * 0000000140BC77FE: mov     ecx, [rsi+9D8h]
 * 0000000140BC7804: mov     eax, 2
 * 0000000140BC7809: test    al, cl
 * 0000000140BC780B: jnz     loc_140BC78BA
 * 0000000140BC7811: mov     eax, [rsi+804h]
 * 0000000140BC7817: and     ecx, 10000000h
 * 0000000140BC781D: mov     r9, [rsi+7E8h]
 * 0000000140BC7824: neg     ecx
 * 0000000140BC7826: mov     rcx, rsi
 * 0000000140BC7829: sbb     r8d, r8d
 * 0000000140BC782C: and     r8d, [rsi+944h]
 * 0000000140BC7833: cmp     eax, 8
 * 0000000140BC7836: jb      short loc_140BC784D
 * 0000000140BC7838: mov     edx, eax
 * 0000000140BC783A: shr     rdx, 3
 * 0000000140BC783E: mov     [rcx], r13
 * 0000000140BC7841: add     eax, 0FFFFFFF8h
 * 0000000140BC7844: add     rcx, 8
 * 0000000140BC7848: sub     rdx, r12
 * 0000000140BC784B: jnz     short loc_140BC783E
 * 0000000140BC784D: test    eax, eax
 * 0000000140BC784F: jz      short loc_140BC7860
 * 0000000140BC7851: mov     edx, 0FFFFFFFFh
 * 0000000140BC7856: mov     [rcx], r13b
 * 0000000140BC7859: add     rcx, r12
 * 0000000140BC785C: add     eax, edx
 * 0000000140BC785E: jnz     short loc_140BC7856
 * 0000000140BC7860: mov     ebx, [r14+944h]
 * 0000000140BC7867: mov     [r14+944h], r8d
 * 0000000140BC786E: cmp     r8d, 3
 * 0000000140BC7872: jz      short loc_140BC78A4
 * 0000000140BC7874: test    dword ptr [r14+9D8h], 8000000h
 * 0000000140BC787F: jnz     short loc_140BC789B
 * 0000000140BC7881: test    r8d, r8d
 * 0000000140BC7884: jz      short loc_140BC789B
 * 0000000140BC7886: mov     rax, [r14+238h]
 * 0000000140BC788D: lea     rcx, [r9-8]
 * 0000000140BC7891: mov     rdx, [rcx]
 * 0000000140BC7894: call    KeGuardDispatchICall
 * 0000000140BC7899: jmp     short loc_140BC78B3
 * 0000000140BC789B: mov     rax, [r14+108h]
 * 0000000140BC78A2: jmp     short loc_140BC78AB
 * 0000000140BC78A4: mov     rax, [r14+368h]
 * 0000000140BC78AB: mov     rcx, r9
 * 0000000140BC78AE: call    KeGuardDispatchICall
 * 0000000140BC78B3: mov     [r14+944h], ebx
 * 0000000140BC78BA: and     dword ptr [r14+9D8h], 0FFFFFFFDh
 * 0000000140BC78C2: jmp     short loc_140BC78D2
 * 0000000140BC78C4: mov     r14, rsi
 * 0000000140BC78C7: mov     [rsp+9D0h+var_978], rsi
 * 0000000140BC78CC: mov     [rsi+804h], eax
 * 0000000140BC78D2: mov     eax, 6
 * 0000000140BC78D7: lea     r12, [r14+r15]
 * 0000000140BC78DB: add     [r14+82Ch], eax
 * 0000000140BC78E2: lea     rdi, [rbp+8D0h+var_6C8]
 * 0000000140BC78E9: mov     [rbp+8D0h+var_7A8], r12
 * 0000000140BC78F0: lea     rsi, [rbp+8D0h+var_7E0]
 * 0000000140BC78F7: mov     [rbp+8D0h+var_8B0], r12
 * 0000000140BC78FB: xor     r10d, r10d
 * 0000000140BC78FE: lea     ebx, [rax-5]
 * 0000000140BC7901: mov     [rsp+9D0h+var_968], rdi
 * 0000000140BC7906: mov     [rbp+8D0h+var_940], rax
 * 0000000140BC790A: mov     r13d, [rsi]
 * 0000000140BC790D: mov     rdx, rax
 * 0000000140BC7910: mov     r15, [rdi]
 * 0000000140BC7913: mov     ecx, 30h ; '0'
 * 0000000140BC7918: mov     [rsp+9D0h+var_958], r13d
 * 0000000140BC791D: mov     rax, r12
 * 0000000140BC7920: mov     [rax], r10
 * 0000000140BC7923: add     ecx, 0FFFFFFF8h
 * 0000000140BC7926: add     rax, 8
 * 0000000140BC792A: sub     rdx, rbx
 * 0000000140BC792D: jnz     short loc_140BC7920
 * 0000000140BC792F: test    ecx, ecx
 * 0000000140BC7931: jz      short loc_140BC7942
 * 0000000140BC7933: mov     edx, 0FFFFFFFFh
 * 0000000140BC7938: mov     [rax], r10b
 * 0000000140BC793B: add     rax, rbx
 * 0000000140BC793E: add     ecx, edx
 * 0000000140BC7940: jnz     short loc_140BC7938
 * 0000000140BC7942: mov     [r12], r10d
 * 0000000140BC7946: lea     rcx, [r15+r13]
 * 0000000140BC794A: mov     [r12+8], r15
 * 0000000140BC794F: mov     r9, r15
 * 0000000140BC7952: mov     [r12+10h], r13d
 * 0000000140BC7957: mov     rax, r15
 * 0000000140BC795A: add     [r14+848h], r13d
 * 0000000140BC7961: mov     r11d, [r14+834h]
 * 0000000140BC7968: mov     rbx, [r14+838h]
 * 0000000140BC796F: cmp     r15, rcx
 * 0000000140BC7972: jnb     short loc_140BC7984
 * 0000000140BC7974: mov     edx, 40h ; '@'
 * 0000000140BC7979: prefetchnta byte ptr [rax]
 * 0000000140BC797C: add     rax, rdx
 * 0000000140BC797F: cmp     rax, rcx
 * 0000000140BC7982: jb      short loc_140BC7979
 * 0000000140BC7984: mov     r10d, r13d
 * 0000000140BC7987: mov     r8, rbx
 * 0000000140BC798A: shr     r10d, 7
 * 0000000140BC798E: test    r10d, r10d
 * 0000000140BC7991: jz      short loc_140BC7A09
 * 0000000140BC7993: mov     rdi, 7010008004002001h
 * 0000000140BC799D: mov     r14d, 1
 * 0000000140BC79A3: mov     r13d, 0FFFFFFFFh
 * 0000000140BC79A9: mov     eax, 8
 * 0000000140BC79AE: xor     r8, [r9]
 * 0000000140BC79B1: mov     ecx, r11d
 * 0000000140BC79B4: rol     r8, cl
 * 0000000140BC79B7: xor     r8, [r9+8]
 * 0000000140BC79BB: add     r9, 10h
 * 0000000140BC79BF: rol     r8, cl
 * 0000000140BC79C2: sub     rax, r14
 * 0000000140BC79C5: jnz     short loc_140BC79AE
 * 0000000140BC79C7: mov     rcx, r9
 * 0000000140BC79CA: sub     rcx, r15
 * 0000000140BC79CD: xor     rcx, rbx
 * 0000000140BC79D0: mov     rax, rcx
 * 0000000140BC79D3: rol     rax, 11h
 * 0000000140BC79D7: xor     rcx, rax
 * 0000000140BC79DA: mov     rax, rdi
 * 0000000140BC79DD: mul     rcx
 * 0000000140BC79E0: xor     r11d, eax
 * 0000000140BC79E3: mov     [rbp+8D0h+var_580], rdx
 * 0000000140BC79EA: xor     r11d, edx
 * 0000000140BC79ED: and     r11d, 3Fh
 * 0000000140BC79F1: cmovz   r11d, r14d
 * 0000000140BC79F5: add     r10d, r13d
 * 0000000140BC79F8: jnz     short loc_140BC79A9
 * 0000000140BC79FA: mov     r14, [rsp+9D0h+var_978]
 * 0000000140BC79FF: mov     r13d, [rsp+9D0h+var_958]
 * 0000000140BC7A04: mov     rdi, [rsp+9D0h+var_968]
 * 0000000140BC7A09: mov     edx, r13d
 * 0000000140BC7A0C: mov     ebx, 1
 * 0000000140BC7A11: and     edx, 7Fh
 * 0000000140BC7A14: cmp     edx, 8
 * 0000000140BC7A17: jb      short loc_140BC7A34
 * 0000000140BC7A19: mov     eax, edx
 * 0000000140BC7A1B: shr     rax, 3
 * 0000000140BC7A1F: xor     r8, [r9]
 * 0000000140BC7A22: mov     ecx, r11d
 * 0000000140BC7A25: rol     r8, cl
 * 0000000140BC7A28: add     r9, 8
 * 0000000140BC7A2C: add     edx, 0FFFFFFF8h
 * 0000000140BC7A2F: sub     rax, rbx
 * 0000000140BC7A32: jnz     short loc_140BC7A1F
 * 0000000140BC7A34: xor     r10d, r10d
 * 0000000140BC7A37: test    edx, edx
 * 0000000140BC7A39: jz      short loc_140BC7A5B
 * 0000000140BC7A3B: mov     r14d, 0FFFFFFFFh
 * 0000000140BC7A41: movzx   eax, byte ptr [r9]
 * 0000000140BC7A45: mov     ecx, r11d
 * 0000000140BC7A48: xor     r8, rax
 * 0000000140BC7A4B: add     r9, rbx
 * 0000000140BC7A4E: rol     r8, cl
 * 0000000140BC7A51: add     edx, r14d
 * 0000000140BC7A54: jnz     short loc_140BC7A41
 * 0000000140BC7A56: mov     r14, [rsp+9D0h+var_978]
 * 0000000140BC7A5B: mov     rax, r8
 * 0000000140BC7A5E: jmp     short loc_140BC7A63
 * 0000000140BC7A60: xor     r8d, eax
 * 0000000140BC7A63: shr     rax, 1Fh
 * 0000000140BC7A67: test    rax, rax
 * 0000000140BC7A6A: jnz     short loc_140BC7A60
 * 0000000140BC7A6C: btr     r8d, 1Fh
 * 0000000140BC7A71: lea     r15d, [rax+4]
 * 0000000140BC7A75: mov     [r12+14h], r8d
 * 0000000140BC7A7A: lea     eax, [r15+2]
 * 0000000140BC7A7E: add     [r14+848h], r13d
 * 0000000140BC7A85: add     rdi, 8
 * 0000000140BC7A89: mov     r12, [rbp+8D0h+var_7A8]
 * 0000000140BC7A90: add     rsi, r15
 * 0000000140BC7A93: add     r12, 30h ; '0'
 * 0000000140BC7A97: mov     [rsp+9D0h+var_968], rdi
 * 0000000140BC7A9C: sub     [rbp+8D0h+var_940], rbx
 * 0000000140BC7AA0: mov     [rbp+8D0h+var_7A8], r12
 * 0000000140BC7AA7: jnz     loc_140BC790A
 * 0000000140BC7AAD: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC7AB2: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC7AB9: mov     [rbp+8D0h+var_8C0], r14
 * 0000000140BC7ABD: test    r14, r14
 * 0000000140BC7AC0: jnz     short loc_140BC7ACC
 * 0000000140BC7AC2: mov     ecx, 0C000009Ah
 * 0000000140BC7AC7: jmp     loc_140BC94B1
 * 0000000140BC7ACC: mov     rbx, [rbp+8D0h+var_8B0]
 * 0000000140BC7AD0: mov     r12, [rbp+8D0h+var_910]
 * 0000000140BC7AD4: mov     dword ptr [rbx], 2Ch ; ','
 * 0000000140BC7ADA: mov     [rbx+18h], r12
 * 0000000140BC7ADE: test    dword ptr [r14+9D8h], 8100000h
 * 0000000140BC7AE9: jnz     short loc_140BC7B11
 * 0000000140BC7AEB: bt      dword ptr [r14+9DCh], 0Fh
 * 0000000140BC7AF4: jnb     short loc_140BC7B11
 * 0000000140BC7AF6: mov     ecx, 1
 * 0000000140BC7AFB: mov     rdx, r12
 * 0000000140BC7AFE: or      [rbx+20h], ecx
 * 0000000140BC7B01: mov     rcx, r14
 * 0000000140BC7B04: call    sub_140BD8D30
 * 0000000140BC7B09: test    eax, eax
 * 0000000140BC7B0B: jz      short loc_140BC7B11
 * 0000000140BC7B0D: or      [rbx+20h], r15d
 * 0000000140BC7B11: mov     r8d, dword ptr [rsp+9D0h+var_960]
 * 0000000140BC7B16: lea     rax, [rbp+8D0h+var_830]
 * 0000000140BC7B1D: mov     rdx, [rbp+8D0h+var_930]
 * 0000000140BC7B21: lea     rcx, [rbp+8D0h+var_8C0]
 * 0000000140BC7B25: mov     [rsp+9D0h+var_9A0], rax
 * 0000000140BC7B2A: mov     r9, r12
 * 0000000140BC7B2D: lea     rax, [rbp+8D0h+var_884]
 * 0000000140BC7B31: mov     [rbp+8D0h+var_8B8], r14
 * 0000000140BC7B35: mov     [rsp+9D0h+var_9A8], rax
 * 0000000140BC7B3A: mov     dword ptr [rsp+9D0h+BugCheckParameter4], 9
 * 0000000140BC7B42: call    sub_140BD60B0
 * 0000000140BC7B47: xor     r8d, r8d
 * 0000000140BC7B4A: mov     ecx, eax
 * 0000000140BC7B4C: test    eax, eax
 * 0000000140BC7B4E: js      loc_140BC94B1
 * 0000000140BC7B54: mov     rbx, [rbp+8D0h+var_8C0]
 * 0000000140BC7B58: lea     r10d, [r8+1]
 * 0000000140BC7B5C: mov     rcx, [rbp+8D0h+var_8B0]
 * 0000000140BC7B60: mov     rax, rbx
 * 0000000140BC7B63: mov     r9d, [rbp+8D0h+var_830]
 * 0000000140BC7B6A: sub     rax, r14
 * 0000000140BC7B6D: sub     r9d, [rbp+8D0h+var_884]
 * 0000000140BC7B71: add     rcx, rax
 * 0000000140BC7B74: mov     r15d, [rbp+8D0h+var_884]
 * 0000000140BC7B78: mov     [rbp+8D0h+var_8B0], rcx
 * 0000000140BC7B7C: add     r15, r12
 * 0000000140BC7B7F: mov     [rbp+8D0h+var_8B8], rbx
 * 0000000140BC7B83: lea     r13, [rcx+0C0h]
 * 0000000140BC7B8A: lea     ecx, [r8+30h]
 * 0000000140BC7B8E: mov     rax, r13
 * 0000000140BC7B91: lea     edx, [rcx-2Ah]
 * 0000000140BC7B94: mov     [rax], r8
 * 0000000140BC7B97: add     ecx, 0FFFFFFF8h
 * 0000000140BC7B9A: add     rax, 8
 * 0000000140BC7B9E: sub     rdx, r10
 * 0000000140BC7BA1: jnz     short loc_140BC7B94
 * 0000000140BC7BA3: mov     rdx, r10
 * 0000000140BC7BA6: test    ecx, ecx
 * 0000000140BC7BA8: jz      short loc_140BC7BBB
 * 0000000140BC7BAA: mov     r10d, 0FFFFFFFFh
 * 0000000140BC7BB0: mov     [rax], r8b
 * 0000000140BC7BB3: add     rax, rdx
 * 0000000140BC7BB6: add     ecx, r10d
 * 0000000140BC7BB9: jnz     short loc_140BC7BB0
 * 0000000140BC7BBB: mov     [r13+0], r8d
 * 0000000140BC7BBF: mov     r10, r15
 * 0000000140BC7BC2: mov     [r13+8], r15
 * 0000000140BC7BC6: mov     rax, r15
 * 0000000140BC7BC9: mov     [r13+10h], r9d
 * 0000000140BC7BCD: add     [rbx+848h], r9d
 * 0000000140BC7BD4: mov     r11d, [rbx+834h]
 * 0000000140BC7BDB: mov     r12, [rbx+838h]
 * 0000000140BC7BE2: mov     ecx, r9d
 * 0000000140BC7BE5: add     rcx, r15
 * 0000000140BC7BE8: cmp     r15, rcx
 * 0000000140BC7BEB: jnb     short loc_140BC7BFE
 * 0000000140BC7BED: mov     r8d, 40h ; '@'
 * 0000000140BC7BF3: prefetchnta byte ptr [rax]
 * 0000000140BC7BF6: add     rax, r8
 * 0000000140BC7BF9: cmp     rax, rcx
 * 0000000140BC7BFC: jb      short loc_140BC7BF3
 * 0000000140BC7BFE: mov     r14d, r9d
 * 0000000140BC7C01: mov     r8, r12
 * 0000000140BC7C04: shr     r14d, 7
 * 0000000140BC7C08: test    r14d, r14d
 * 0000000140BC7C0B: jz      short loc_140BC7C7E
 * 0000000140BC7C0D: mov     esi, 0FFFFFFFFh
 * 0000000140BC7C12: mov     rdi, 7010008004002001h
 * 0000000140BC7C1C: mov     eax, 8
 * 0000000140BC7C21: xor     r8, [r10]
 * 0000000140BC7C24: mov     ecx, r11d
 * 0000000140BC7C27: rol     r8, cl
 * 0000000140BC7C2A: xor     r8, [r10+8]
 * 0000000140BC7C2E: add     r10, 10h
 * 0000000140BC7C32: rol     r8, cl
 * 0000000140BC7C35: sub     rax, rdx
 * 0000000140BC7C38: jnz     short loc_140BC7C21
 * 0000000140BC7C3A: mov     rcx, r10
 * 0000000140BC7C3D: sub     rcx, r15
 * 0000000140BC7C40: xor     rcx, r12
 * 0000000140BC7C43: mov     rax, rcx
 * 0000000140BC7C46: rol     rax, 11h
 * 0000000140BC7C4A: xor     rcx, rax
 * 0000000140BC7C4D: mov     rax, rdi
 * 0000000140BC7C50: mul     rcx
 * 0000000140BC7C53: xor     r11d, edx
 * 0000000140BC7C56: mov     [rbp+8D0h+var_578], rdx
 * 0000000140BC7C5D: xor     r11d, eax
 * 0000000140BC7C60: mov     edx, 1
 * 0000000140BC7C65: and     r11d, 3Fh
 * 0000000140BC7C69: cmovz   r11d, edx
 * 0000000140BC7C6D: add     r14d, esi
 * 0000000140BC7C70: jnz     short loc_140BC7C1C
 * 0000000140BC7C72: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC7C77: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC7C7E: and     r9d, 7Fh
 * 0000000140BC7C82: mov     r12d, 1
 * 0000000140BC7C88: cmp     r9d, 8
 * 0000000140BC7C8C: jb      short loc_140BC7CAB
 * 0000000140BC7C8E: mov     eax, r9d
 * 0000000140BC7C91: shr     rax, 3
 * 0000000140BC7C95: xor     r8, [r10]
 * 0000000140BC7C98: mov     ecx, r11d
 * 0000000140BC7C9B: rol     r8, cl
 * 0000000140BC7C9E: add     r10, 8
 * 0000000140BC7CA2: add     r9d, 0FFFFFFF8h
 * 0000000140BC7CA6: sub     rax, r12
 * 0000000140BC7CA9: jnz     short loc_140BC7C95
 * 0000000140BC7CAB: xor     r15d, r15d
 * 0000000140BC7CAE: test    r9d, r9d
 * 0000000140BC7CB1: jz      short loc_140BC7CD2
 * 0000000140BC7CB3: mov     esi, 0FFFFFFFFh
 * 0000000140BC7CB8: movzx   eax, byte ptr [r10]
 * 0000000140BC7CBC: mov     ecx, r11d
 * 0000000140BC7CBF: xor     r8, rax
 * 0000000140BC7CC2: add     r10, r12
 * 0000000140BC7CC5: rol     r8, cl
 * 0000000140BC7CC8: add     r9d, esi
 * 0000000140BC7CCB: jnz     short loc_140BC7CB8
 * 0000000140BC7CCD: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC7CD2: mov     rax, r8
 * 0000000140BC7CD5: jmp     short loc_140BC7CDA
 * 0000000140BC7CD7: xor     r8d, eax
 * 0000000140BC7CDA: shr     rax, 1Fh
 * 0000000140BC7CDE: test    rax, rax
 * 0000000140BC7CE1: jnz     short loc_140BC7CD7
 * 0000000140BC7CE3: btr     r8d, 1Fh
 * 0000000140BC7CE8: mov     [rbp+8D0h+var_8B8], rbx
 * 0000000140BC7CEC: mov     [r13+14h], r8d
 * 0000000140BC7CF0: mov     rax, [rbp+8D0h+var_8B0]
 * 0000000140BC7CF4: mov     dword ptr [rax+0F0h], 30h ; '0'
 * 0000000140BC7CFE: mov     rax, [rbp+8D0h+var_8B0]
 * 0000000140BC7D02: add     rax, 60h ; '`'
 * 0000000140BC7D06: mov     [rbp+8D0h+var_860], rax
 * 0000000140BC7D0A: jnz     loc_140BC7FAA
 * 0000000140BC7D10: mov     r14d, [rbx+804h]
 * 0000000140BC7D17: mov     r8d, [rbx+944h]
 * 0000000140BC7D1E: lea     eax, [r14+30h]
 * 0000000140BC7D22: cmp     eax, [rbx+0A64h]
 * 0000000140BC7D28: jbe     loc_140BC7E0D
 * 0000000140BC7D2E: mov     edx, eax
 * 0000000140BC7D30: mov     rcx, rbx
 * 0000000140BC7D33: call    sub_140BD7AF8
 * 0000000140BC7D38: mov     [rsp+9D0h+var_968], rax
 * 0000000140BC7D3D: mov     r13, rax
 * 0000000140BC7D40: test    rax, rax
 * 0000000140BC7D43: jnz     short loc_140BC7D4E
 * 0000000140BC7D45: mov     [rbp+8D0h+var_8C0], r15
 * 0000000140BC7D49: jmp     loc_140BC7AC2
 * 0000000140BC7D4E: mov     ecx, [rbx+9D8h]
 * 0000000140BC7D54: mov     eax, 2
 * 0000000140BC7D59: test    al, cl
 * 0000000140BC7D5B: jnz     loc_140BC7E03
 * 0000000140BC7D61: mov     eax, [rbx+804h]
 * 0000000140BC7D67: and     ecx, 10000000h
 * 0000000140BC7D6D: mov     r8, [rbx+7E8h]
 * 0000000140BC7D74: neg     ecx
 * 0000000140BC7D76: sbb     edx, edx
 * 0000000140BC7D78: and     edx, [rbx+944h]
 * 0000000140BC7D7E: cmp     eax, 8
 * 0000000140BC7D81: jb      short loc_140BC7D98
 * 0000000140BC7D83: mov     ecx, eax
 * 0000000140BC7D85: shr     rcx, 3
 * 0000000140BC7D89: mov     [rbx], r15
 * 0000000140BC7D8C: add     eax, 0FFFFFFF8h
 * 0000000140BC7D8F: add     rbx, 8
 * 0000000140BC7D93: sub     rcx, r12
 * 0000000140BC7D96: jnz     short loc_140BC7D89
 * 0000000140BC7D98: test    eax, eax
 * 0000000140BC7D9A: jz      short loc_140BC7DAB
 * 0000000140BC7D9C: mov     ecx, 0FFFFFFFFh
 * 0000000140BC7DA1: mov     [rbx], r15b
 * 0000000140BC7DA4: add     rbx, r12
 * 0000000140BC7DA7: add     eax, ecx
 * 0000000140BC7DA9: jnz     short loc_140BC7DA1
 * 0000000140BC7DAB: mov     ebx, [r13+944h]
 * 0000000140BC7DB2: mov     [r13+944h], edx
 * 0000000140BC7DB9: cmp     edx, 3
 * 0000000140BC7DBC: jz      short loc_140BC7DED
 * 0000000140BC7DBE: test    dword ptr [r13+9D8h], 8000000h
 * 0000000140BC7DC9: jnz     short loc_140BC7DE4
 * 0000000140BC7DCB: test    edx, edx
 * 0000000140BC7DCD: jz      short loc_140BC7DE4
 * 0000000140BC7DCF: mov     rax, [r13+238h]
 * 0000000140BC7DD6: lea     rcx, [r8-8]
 * 0000000140BC7DDA: mov     rdx, [rcx]
 * 0000000140BC7DDD: call    KeGuardDispatchICall
 * 0000000140BC7DE2: jmp     short loc_140BC7DFC
 * 0000000140BC7DE4: mov     rax, [r13+108h]
 * 0000000140BC7DEB: jmp     short loc_140BC7DF4
 * 0000000140BC7DED: mov     rax, [r13+368h]
 * 0000000140BC7DF4: mov     rcx, r8
 * 0000000140BC7DF7: call    KeGuardDispatchICall
 * 0000000140BC7DFC: mov     [r13+944h], ebx
 * 0000000140BC7E03: and     dword ptr [r13+9D8h], 0FFFFFFFDh
 * 0000000140BC7E0B: jmp     short loc_140BC7E1B
 * 0000000140BC7E0D: mov     r13, rbx
 * 0000000140BC7E10: mov     [rsp+9D0h+var_968], rbx
 * 0000000140BC7E15: mov     [rbx+804h], eax
 * 0000000140BC7E1B: add     [r13+82Ch], r12d
 * 0000000140BC7E22: mov     ecx, 30h ; '0'
 * 0000000140BC7E27: add     r14, r13
 * 0000000140BC7E2A: mov     [rbp+8D0h+var_708], r14
 * 0000000140BC7E31: mov     rax, r14
 * 0000000140BC7E34: lea     edx, [rcx-2Ah]
 * 0000000140BC7E37: mov     [rax], r15
 * 0000000140BC7E3A: add     ecx, 0FFFFFFF8h
 * 0000000140BC7E3D: add     rax, 8
 * 0000000140BC7E41: sub     rdx, r12
 * 0000000140BC7E44: jnz     short loc_140BC7E37
 * 0000000140BC7E46: test    ecx, ecx
 * 0000000140BC7E48: jz      short loc_140BC7E59
 * 0000000140BC7E4A: mov     edx, 0FFFFFFFFh
 * 0000000140BC7E4F: mov     [rax], r15b
 * 0000000140BC7E52: add     rax, r12
 * 0000000140BC7E55: add     ecx, edx
 * 0000000140BC7E57: jnz     short loc_140BC7E4F
 * 0000000140BC7E59: mov     r12, [rbp+8D0h+var_920]
 * 0000000140BC7E5D: mov     r15d, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BC7E64: mov     r9, r12
 * 0000000140BC7E67: mov     dword ptr [r14], 0Dh
 * 0000000140BC7E6E: mov     [r14+8], r12
 * 0000000140BC7E72: mov     [r14+10h], r15d
 * 0000000140BC7E76: add     [r13+848h], r15d
 * 0000000140BC7E7D: lea     rcx, [r12+r15]
 * 0000000140BC7E81: mov     r10d, [r13+834h]
 * 0000000140BC7E88: mov     rbx, [r13+838h]
 * 0000000140BC7E8F: cmp     r12, rcx
 * 0000000140BC7E92: jnb     short loc_140BC7EA7
 * 0000000140BC7E94: mov     rax, r12
 * 0000000140BC7E97: mov     edx, 40h ; '@'
 * 0000000140BC7E9C: prefetchnta byte ptr [rax]
 * 0000000140BC7E9F: add     rax, rdx
 * 0000000140BC7EA2: cmp     rax, rcx
 * 0000000140BC7EA5: jb      short loc_140BC7E9C
 * 0000000140BC7EA7: mov     r11d, r15d
 * 0000000140BC7EAA: mov     r8, rbx
 * 0000000140BC7EAD: shr     r11d, 7
 * 0000000140BC7EB1: test    r11d, r11d
 * 0000000140BC7EB4: jz      short loc_140BC7F2F
 * 0000000140BC7EB6: mov     esi, 1
 * 0000000140BC7EBB: mov     rdi, 7010008004002001h
 * 0000000140BC7EC5: mov     r15d, 0FFFFFFFFh
 * 0000000140BC7ECB: mov     eax, 8
 * 0000000140BC7ED0: xor     r8, [r9]
 * 0000000140BC7ED3: mov     ecx, r10d
 * 0000000140BC7ED6: rol     r8, cl
 * 0000000140BC7ED9: xor     r8, [r9+8]
 * 0000000140BC7EDD: add     r9, 10h
 * 0000000140BC7EE1: rol     r8, cl
 * 0000000140BC7EE4: sub     rax, rsi
 * 0000000140BC7EE7: jnz     short loc_140BC7ED0
 * 0000000140BC7EE9: mov     rcx, r9
 * 0000000140BC7EEC: sub     rcx, r12
 * 0000000140BC7EEF: xor     rcx, rbx
 * 0000000140BC7EF2: mov     rax, rcx
 * 0000000140BC7EF5: rol     rax, 11h
 * 0000000140BC7EF9: xor     rcx, rax
 * 0000000140BC7EFC: mov     rax, rdi
 * 0000000140BC7EFF: mul     rcx
 * 0000000140BC7F02: xor     r10d, edx
 * 0000000140BC7F05: mov     [rbp+8D0h+var_570], rdx
 * 0000000140BC7F0C: xor     r10d, eax
 * 0000000140BC7F0F: and     r10d, 3Fh
 * 0000000140BC7F13: cmovz   r10d, esi
 * 0000000140BC7F17: add     r11d, r15d
 * 0000000140BC7F1A: jnz     short loc_140BC7ECB
 * 0000000140BC7F1C: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC7F21: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC7F28: mov     r15d, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BC7F2F: mov     edx, r15d
 * 0000000140BC7F32: mov     ebx, 1
 * 0000000140BC7F37: and     edx, 7Fh
 * 0000000140BC7F3A: cmp     edx, 8
 * 0000000140BC7F3D: jb      short loc_140BC7F5A
 * 0000000140BC7F3F: mov     eax, edx
 * 0000000140BC7F41: shr     rax, 3
 * 0000000140BC7F45: xor     r8, [r9]
 * 0000000140BC7F48: mov     ecx, r10d
 * 0000000140BC7F4B: rol     r8, cl
 * 0000000140BC7F4E: add     r9, 8
 * 0000000140BC7F52: add     edx, 0FFFFFFF8h
 * 0000000140BC7F55: sub     rax, rbx
 * 0000000140BC7F58: jnz     short loc_140BC7F45
 * 0000000140BC7F5A: test    edx, edx
 * 0000000140BC7F5C: jz      short loc_140BC7F7C
 * 0000000140BC7F5E: mov     esi, 0FFFFFFFFh
 * 0000000140BC7F63: movzx   eax, byte ptr [r9]
 * 0000000140BC7F67: mov     ecx, r10d
 * 0000000140BC7F6A: xor     r8, rax
 * 0000000140BC7F6D: add     r9, rbx
 * 0000000140BC7F70: rol     r8, cl
 * 0000000140BC7F73: add     edx, esi
 * 0000000140BC7F75: jnz     short loc_140BC7F63
 * 0000000140BC7F77: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC7F7C: mov     rax, r8
 * 0000000140BC7F7F: jmp     short loc_140BC7F84
 * 0000000140BC7F81: xor     r8d, eax
 * 0000000140BC7F84: shr     rax, 1Fh
 * 0000000140BC7F88: test    rax, rax
 * 0000000140BC7F8B: jnz     short loc_140BC7F81
 * 0000000140BC7F8D: btr     r8d, 1Fh
 * 0000000140BC7F92: mov     [r14+14h], r8d
 * 0000000140BC7F96: mov     rax, [rbp+8D0h+var_708]
 * 0000000140BC7F9D: mov     [rbp+8D0h+var_860], rax
 * 0000000140BC7FA1: add     [r13+848h], r15d
 * 0000000140BC7FA8: jmp     short loc_140BC7FC3
 * 0000000140BC7FAA: mov     r15d, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BC7FB1: mov     r13, rbx
 * 0000000140BC7FB4: mov     r12, [rbp+8D0h+var_920]
 * 0000000140BC7FB8: mov     [rsp+9D0h+var_968], rbx
 * 0000000140BC7FBD: mov     dword ptr [rax], 0Dh
 * 0000000140BC7FC3: test    dword ptr [r13+9D8h], 20000000h
 * 0000000140BC7FCE: jz      short loc_140BC7FEB
 * 0000000140BC7FD0: test    r15d, r15d
 * 0000000140BC7FD3: jz      short loc_140BC7FEB
 * 0000000140BC7FD5: mov     r9, [rbp+8D0h+var_860]
 * 0000000140BC7FD9: mov     r8d, r15d
 * 0000000140BC7FDC: add     r9, 1Ch
 * 0000000140BC7FE0: mov     rdx, r12
 * 0000000140BC7FE3: mov     rcx, r13
 * 0000000140BC7FE6: call    sub_14051927C
 * 0000000140BC7FEB: mov     rax, [rbp+8D0h+var_860]
 * 0000000140BC7FEF: xor     r15d, r15d
 * 0000000140BC7FF2: mov     [rbp+8D0h+var_8C0], r13
 * 0000000140BC7FF6: mov     [rax+18h], r15d
 * 0000000140BC7FFA: lea     r12d, [r15+1]
 * 0000000140BC7FFE: mov     rax, [rbp+8D0h+var_860]
 * 0000000140BC8002: or      [rax+18h], r12d
 * 0000000140BC8006: test    r13, r13
 * 0000000140BC8009: jz      loc_140BC7AC2
 * 0000000140BC800F: mov     rbx, [rbp+8D0h+var_8B0]
 * 0000000140BC8013: mov     [rbp+8D0h+var_8B8], r13
 * 0000000140BC8017: mov     dword ptr [rbx+90h], 23h ; '#'
 * 0000000140BC8021: cmp     dword ptr [rbx+0A0h], 94h
 * 0000000140BC802B: jb      loc_140BC81C9
 * 0000000140BC8031: mov     r15, [rbp+8D0h+var_910]
 * 0000000140BC8035: mov     rax, [r13+208h]
 * 0000000140BC803C: mov     rcx, r15
 * 0000000140BC803F: mov     r14, [rbx+98h]
 * 0000000140BC8046: call    KeGuardDispatchICall
 * 0000000140BC804B: xor     ecx, ecx
 * 0000000140BC804D: test    rax, rax
 * 0000000140BC8050: jnz     short loc_140BC805B
 * 0000000140BC8052: mov     [rbp+8D0h+var_8C0], rcx
 * 0000000140BC8056: jmp     loc_140BC7AC2
 * 0000000140BC805B: mov     r8d, [rax+50h]
 * 0000000140BC805F: mov     edx, [rbx+0B8h]
 * 0000000140BC8065: add     r8, r15
 * 0000000140BC8068: or      edx, 2
 * 0000000140BC806B: mov     [rbx+0B8h], edx
 * 0000000140BC8071: mov     ecx, edx
 * 0000000140BC8073: mov     rax, [r14+70h]
 * 0000000140BC8077: cmp     rax, r15
 * 0000000140BC807A: jb      short loc_140BC8094
 * 0000000140BC807C: cmp     rax, r8
 * 0000000140BC807F: jnb     short loc_140BC8094
 * 0000000140BC8081: mov     rax, [rax]
 * 0000000140BC8084: or      ecx, 4
 * 0000000140BC8087: mov     [rbx+0A8h], rax
 * 0000000140BC808E: mov     [rbx+0B8h], ecx
 * 0000000140BC8094: mov     rax, [r14+78h]
 * 0000000140BC8098: mov     r14, [rbp+8D0h+var_910]
 * 0000000140BC809C: cmp     rax, r14
 * 0000000140BC809F: jb      short loc_140BC80B9
 * 0000000140BC80A1: cmp     rax, r8
 * 0000000140BC80A4: jnb     short loc_140BC80B9
 * 0000000140BC80A6: mov     rax, [rax]
 * 0000000140BC80A9: or      ecx, 8
 * 0000000140BC80AC: mov     [rbx+0B0h], rax
 * 0000000140BC80B3: mov     [rbx+0B8h], ecx
 * 0000000140BC80B9: xor     r15d, r15d
 * 0000000140BC80BC: bt      dword ptr [r13+9D8h], 15h
 * 0000000140BC80C5: mov     [rbp+8D0h+var_8B8], r13
 * 0000000140BC80C9: jnb     loc_140BC94AA
 * 0000000140BC80CF: mov     rax, [r13+208h]
 * 0000000140BC80D6: mov     rcx, r14
 * 0000000140BC80D9: call    KeGuardDispatchICall
 * 0000000140BC80DE: xor     r11d, r11d
 * 0000000140BC80E1: mov     [rbp+8D0h+var_950], rax
 * 0000000140BC80E5: mov     r15, rax
 * 0000000140BC80E8: test    rax, rax
 * 0000000140BC80EB: jz      loc_140BC777A
 * 0000000140BC80F1: movzx   r10d, word ptr [r15+6]
 * 0000000140BC80F6: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140BC8100: mov     ecx, dword ptr [rsp+9D0h+var_960]
 * 0000000140BC8104: mul     rcx
 * 0000000140BC8107: mov     word ptr [rbp+8D0h+arg_8], r10w
 * 0000000140BC810F: mov     r9, rdx
 * 0000000140BC8112: shr     r9, 3
 * 0000000140BC8116: mov     [rbp+8D0h+var_940], r9
 * 0000000140BC811A: test    r10w, r10w
 * 0000000140BC811E: jnz     loc_140BC8248
 * 0000000140BC8124: mov     ecx, [r13+9D8h]
 * 0000000140BC812B: bt      ecx, 14h
 * 0000000140BC812F: jnb     loc_140BD3507
 * 0000000140BC8135: xor     r15d, r15d
 * 0000000140BC8138: cmp     [r13+918h], r15d
 * 0000000140BC813F: jnz     loc_140BC777A
 * 0000000140BC8145: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC814F: add     rax, r13
 * 0000000140BC8152: mov     [r13+920h], rax
 * 0000000140BC8159: mov     [r13+928h], r15
 * 0000000140BC8160: mov     qword ptr [r13+930h], 10Fh
 * 0000000140BC816B: mov     [r13+938h], r14
 * 0000000140BC8172: mov     [r13+918h], r12d
 * 0000000140BC8179: bt      ecx, 1Dh
 * 0000000140BC817D: jb      loc_140BC777A
 * 0000000140BC8183: bt      dword ptr [r13+9DCh], 15h
 * 0000000140BC818C: jnb     loc_140BC777A
 * 0000000140BC8192: test    r12b, cl
 * 0000000140BC8195: jz      loc_140BC777A
 * 0000000140BC819B: mov     ecx, [r13+0A74h]
 * 0000000140BC81A2: mov     eax, [r13+804h]
 * 0000000140BC81A9: mov     r10, [r13+838h]
 * 0000000140BC81B0: sub     eax, ecx
 * 0000000140BC81B2: mov     r8, [r13+0A78h]
 * 0000000140BC81B9: lea     rdx, [rcx+r13]
 * 0000000140BC81BD: mov     ecx, eax
 * 0000000140BC81BF: shr     rcx, 3
 * 0000000140BC81C3: lea     r9, [rdx+rcx*8]
 * 0000000140BC81C7: jmp     short loc_140BC81F3
 * 0000000140BC81C9: mov     r14, [rbp+8D0h+var_910]
 * 0000000140BC81CD: jmp     loc_140BC80BC
 * 0000000140BC81D2: xor     [rdx], r8
 * 0000000140BC81D5: mov     rax, [rdx]
 * 0000000140BC81D8: movzx   ecx, r8b
 * 0000000140BC81DC: xor     rax, r10
 * 0000000140BC81DF: and     ecx, 3Fh
 * 0000000140BC81E2: ror     r8, cl
 * 0000000140BC81E5: add     r8, rax
 * 0000000140BC81E8: xor     r8, 0EFAh
 * 0000000140BC81EF: add     rdx, 8
 * 0000000140BC81F3: cmp     rdx, r9
 * 0000000140BC81F6: jnz     short loc_140BC81D2
 * 0000000140BC81F8: btr     dword ptr [r13+9DCh], 15h
 * 0000000140BC8201: cmp     r8, [r13+0A80h]
 * 0000000140BC8208: jz      loc_140BC777A
 * 0000000140BC820E: mov     rax, [r13+588h]
 * 0000000140BC8215: mov     ecx, [r13+804h]
 * 0000000140BC821C: mov     [rax], r13
 * 0000000140BC821F: mov     [rax+10h], ecx
 * 0000000140BC8222: mov     rdx, [r13+0A80h]
 * 0000000140BC8229: cmp     [r13+918h], r15d
 * 0000000140BC8230: jnz     short loc_140BC8240
 * 0000000140BC8232: mov     rax, [r13+588h]
 * 0000000140BC8239: xor     rdx, r8
 * 0000000140BC823C: mov     [rax+18h], rdx
 * 0000000140BC8240: mov     rcx, r13
 * 0000000140BC8243: jmp     loc_140BC776D
 * 0000000140BC8248: mov     rdx, [rbp+8D0h+var_930]
 * 0000000140BC824C: movzx   r12d, word ptr [r15+14h]
 * 0000000140BC8251: mov     r13, rdx
 * 0000000140BC8254: mov     eax, r9d
 * 0000000140BC8257: add     r12, 18h
 * 0000000140BC825B: add     r12, r15
 * 0000000140BC825E: mov     [rsp+9D0h+var_978], r12
 * 0000000140BC8263: lea     rcx, [rax+rax*2]
 * 0000000140BC8267: lea     rax, [rdx+rcx*4]
 * 0000000140BC826B: mov     ecx, r11d
 * 0000000140BC826E: mov     [rbp+8D0h+var_908], rax
 * 0000000140BC8272: mov     rax, [rsp+9D0h+var_968]
 * 0000000140BC8277: mov     [rsp+9D0h+var_958], ecx
 * 0000000140BC827B: mov     rbx, rax
 * 0000000140BC827E: test    r10w, r10w
 * 0000000140BC8282: jz      loc_140BC8828
 * 0000000140BC8288: mov     r11, [rbp+8D0h+var_908]
 * 0000000140BC828C: mov     r8, r12
 * 0000000140BC828F: mov     [rbp+8D0h+var_920], r12
 * 0000000140BC8293: xor     r15d, r15d
 * 0000000140BC8296: mov     edx, [r8+10h]
 * 0000000140BC829A: mov     eax, [r8+8]
 * 0000000140BC829E: cmp     edx, eax
 * 0000000140BC82A0: mov     r9d, [r8+0Ch]
 * 0000000140BC82A4: cmovbe  edx, eax
 * 0000000140BC82A7: mov     [rbp+8D0h+var_928], r9d
 * 0000000140BC82AB: add     edx, r9d
 * 0000000140BC82AE: mov     [rbp+8D0h+var_938], edx
 * 0000000140BC82B1: test    ecx, ecx
 * 0000000140BC82B3: jz      short loc_140BC82CB
 * 0000000140BC82B5: lea     eax, [rcx-1]
 * 0000000140BC82B8: lea     rax, [rax+rax*4]
 * 0000000140BC82BC: cmp     edx, [r12+rax*8+0Ch]
 * 0000000140BC82C1: jb      loc_140BC8643
 * 0000000140BC82C7: mov     ecx, [rsp+9D0h+var_958]
 * 0000000140BC82CB: cmp     r13, r11
 * 0000000140BC82CE: jz      loc_140BC8614
 * 0000000140BC82D4: mov     ecx, [r13+0]
 * 0000000140BC82D8: mov     eax, [r13+4]
 * 0000000140BC82DC: cmp     ecx, edx
 * 0000000140BC82DE: jnb     loc_140BC85FF
 * 0000000140BC82E4: cmp     eax, r9d
 * 0000000140BC82E7: jbe     loc_140BC85FF
 * 0000000140BC82ED: cmp     ecx, r9d
 * 0000000140BC82F0: jb      loc_140BC875A
 * 0000000140BC82F6: cmp     eax, edx
 * 0000000140BC82F8: ja      loc_140BC875A
 * 0000000140BC82FE: mov     eax, [r13+8]
 * 0000000140BC8302: mov     ecx, 1
 * 0000000140BC8307: mov     [rbp+8D0h+var_568], r13
 * 0000000140BC830E: test    cl, al
 * 0000000140BC8310: jnz     short loc_140BC831D
 * 0000000140BC8312: test    byte ptr [rax+r14], 20h
 * 0000000140BC8317: jz      loc_140BC85F1
 * 0000000140BC831D: mov     eax, [r8+8]
 * 0000000140BC8321: mov     rcx, r13
 * 0000000140BC8324: mov     r14d, [r8+10h]
 * 0000000140BC8328: cmp     r14d, eax
 * 0000000140BC832B: mov     r12d, [r8+0Ch]
 * 0000000140BC832F: mov     rdx, [rbp+8D0h+var_910]
 * 0000000140BC8333: cmovbe  r14d, eax
 * 0000000140BC8337: mov     rax, [rbx+418h]
 * 0000000140BC833E: add     r14d, r12d
 * 0000000140BC8341: call    KeGuardDispatchICall
 * 0000000140BC8346: mov     r15, rax
 * 0000000140BC8349: cmp     [rax], r12d
 * 0000000140BC834C: jb      short loc_140BC8358
 * 0000000140BC834E: cmp     [rax+4], r14d
 * 0000000140BC8352: jbe     loc_140BC8486
 * 0000000140BC8358: mov     r8, [rbp+8D0h+var_910]; BugCheckParameter2
 * 0000000140BC835C: mov     ecx, 80000000h
 * 0000000140BC8361: sub     eax, r8d
 * 0000000140BC8364: or      eax, ecx
 * 0000000140BC8366: mov     rcx, rbx
 * 0000000140BC8369: mov     ecx, [rbx+9D8h]
 * 0000000140BC836F: bt      ecx, 14h
 * 0000000140BC8373: jnb     loc_140BD3583
 * 0000000140BC8379: xor     r11d, r11d
 * 0000000140BC837C: cmp     [rbx+918h], r11d
 * 0000000140BC8383: jnz     loc_140BC8486
 * 0000000140BC8389: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC8393: lea     edx, [r11+1]
 * 0000000140BC8397: add     rax, rbx
 * 0000000140BC839A: mov     [rbx+920h], rax
 * 0000000140BC83A1: mov     [rbx+928h], r11
 * 0000000140BC83A8: mov     qword ptr [rbx+930h], 10Fh
 * 0000000140BC83B3: mov     [rbx+938h], r8
 * 0000000140BC83BA: mov     [rbx+918h], edx
 * 0000000140BC83C0: bt      ecx, 1Dh
 * 0000000140BC83C4: jb      loc_140BC8486
 * 0000000140BC83CA: test    dword ptr [rbx+9DCh], 200000h
 * 0000000140BC83D4: jz      loc_140BC8486
 * 0000000140BC83DA: test    dl, cl
 * 0000000140BC83DC: jz      loc_140BC8486
 * 0000000140BC83E2: mov     ecx, [rbx+0A74h]
 * 0000000140BC83E8: mov     eax, [rbx+804h]
 * 0000000140BC83EE: mov     r10, [rbx+838h]
 * 0000000140BC83F5: sub     eax, ecx
 * 0000000140BC83F7: mov     r8, [rbx+0A78h]
 * 0000000140BC83FE: lea     rdx, [rcx+rbx]
 * 0000000140BC8402: mov     ecx, eax
 * 0000000140BC8404: shr     rcx, 3
 * 0000000140BC8408: lea     r9, [rdx+rcx*8]
 * 0000000140BC840C: jmp     short loc_140BC842F
 * 0000000140BC840E: xor     [rdx], r8
 * 0000000140BC8411: mov     rax, [rdx]
 * 0000000140BC8414: movzx   ecx, r8b
 * 0000000140BC8418: xor     rax, r10
 * 0000000140BC841B: and     ecx, 3Fh
 * 0000000140BC841E: ror     r8, cl
 * 0000000140BC8421: add     r8, rax
 * 0000000140BC8424: xor     r8, 0EFAh
 * 0000000140BC842B: add     rdx, 8
 * 0000000140BC842F: cmp     rdx, r9
 * 0000000140BC8432: jnz     short loc_140BC840E
 * 0000000140BC8434: btr     dword ptr [rbx+9DCh], 15h
 * 0000000140BC843C: cmp     r8, [rbx+0A80h]
 * 0000000140BC8443: jz      short loc_140BC8486
 * 0000000140BC8445: mov     ecx, [rbx+804h]
 * 0000000140BC844B: mov     rax, [rbx+588h]
 * 0000000140BC8452: mov     [rax], rbx
 * 0000000140BC8455: mov     [rax+10h], ecx
 * 0000000140BC8458: mov     rcx, [rbx+0A80h]
 * 0000000140BC845F: cmp     [rbx+918h], r11d
 * 0000000140BC8466: jnz     short loc_140BC8476
 * 0000000140BC8468: mov     rax, [rbx+588h]
 * 0000000140BC846F: xor     rcx, r8
 * 0000000140BC8472: mov     [rax+18h], rcx
 * 0000000140BC8476: xor     edx, edx
 * 0000000140BC8478: mov     r9d, 100h
 * 0000000140BC847E: mov     rcx, rbx
 * 0000000140BC8481: call    sub_140BD8384
 * 0000000140BC8486: mov     r8d, [r15]
 * 0000000140BC8489: mov     rcx, r15
 * 0000000140BC848C: add     r8, [rbp+8D0h+var_910]
 * 0000000140BC8490: mov     rax, [rbx+420h]
 * 0000000140BC8497: mov     rdx, [rbp+8D0h+var_910]
 * 0000000140BC849B: call    KeGuardDispatchICall
 * 0000000140BC84A0: cmp     [rax], r12d
 * 0000000140BC84A3: jb      short loc_140BC84AF
 * 0000000140BC84A5: cmp     [rax+4], r14d
 * 0000000140BC84A9: jbe     loc_140BC85DF
 * 0000000140BC84AF: mov     r14, [rbp+8D0h+var_910]
 * 0000000140BC84B3: mov     ecx, 80000000h
 * 0000000140BC84B8: sub     eax, r14d
 * 0000000140BC84BB: or      eax, ecx
 * 0000000140BC84BD: mov     rcx, rbx
 * 0000000140BC84C0: mov     ecx, [rbx+9D8h]
 * 0000000140BC84C6: bt      ecx, 14h
 * 0000000140BC84CA: jnb     loc_140BD355A
 * 0000000140BC84D0: xor     r15d, r15d
 * 0000000140BC84D3: cmp     [rbx+918h], r15d
 * 0000000140BC84DA: jnz     loc_140BC85E6
 * 0000000140BC84E0: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC84EA: lea     edx, [r15+1]
 * 0000000140BC84EE: add     rax, rbx
 * 0000000140BC84F1: mov     [rbx+920h], rax
 * 0000000140BC84F8: mov     [rbx+928h], r15
 * 0000000140BC84FF: mov     qword ptr [rbx+930h], 10Fh
 * 0000000140BC850A: mov     [rbx+938h], r14
 * 0000000140BC8511: mov     [rbx+918h], edx
 * 0000000140BC8517: bt      ecx, 1Dh
 * 0000000140BC851B: jb      loc_140BC85E6
 * 0000000140BC8521: test    dword ptr [rbx+9DCh], 200000h
 * 0000000140BC852B: jz      loc_140BC85E6
 * 0000000140BC8531: test    dl, cl
 * 0000000140BC8533: jz      loc_140BC85E6
 * 0000000140BC8539: mov     ecx, [rbx+0A74h]
 * 0000000140BC853F: mov     eax, [rbx+804h]
 * 0000000140BC8545: mov     r10, [rbx+838h]
 * 0000000140BC854C: sub     eax, ecx
 * 0000000140BC854E: mov     r8, [rbx+0A78h]
 * 0000000140BC8555: lea     rdx, [rcx+rbx]
 * 0000000140BC8559: mov     ecx, eax
 * 0000000140BC855B: shr     rcx, 3
 * 0000000140BC855F: lea     r9, [rdx+rcx*8]
 * 0000000140BC8563: jmp     short loc_140BC8586
 * 0000000140BC8565: xor     [rdx], r8
 * 0000000140BC8568: mov     rax, [rdx]
 * 0000000140BC856B: movzx   ecx, r8b
 * 0000000140BC856F: xor     rax, r10
 * 0000000140BC8572: and     ecx, 3Fh
 * 0000000140BC8575: ror     r8, cl
 * 0000000140BC8578: add     r8, rax
 * 0000000140BC857B: xor     r8, 0EFAh
 * 0000000140BC8582: add     rdx, 8
 * 0000000140BC8586: cmp     rdx, r9
 * 0000000140BC8589: jnz     short loc_140BC8565
 * 0000000140BC858B: btr     dword ptr [rbx+9DCh], 15h
 * 0000000140BC8593: cmp     r8, [rbx+0A80h]
 * 0000000140BC859A: jz      short loc_140BC85E6
 * 0000000140BC859C: mov     ecx, [rbx+804h]
 * 0000000140BC85A2: mov     rax, [rbx+588h]
 * 0000000140BC85A9: mov     [rax], rbx
 * 0000000140BC85AC: mov     [rax+10h], ecx
 * 0000000140BC85AF: mov     rcx, [rbx+0A80h]
 * 0000000140BC85B6: cmp     [rbx+918h], r15d
 * 0000000140BC85BD: jnz     short loc_140BC85CD
 * 0000000140BC85BF: mov     rax, [rbx+588h]
 * 0000000140BC85C6: xor     rcx, r8
 * 0000000140BC85C9: mov     [rax+18h], rcx
 * 0000000140BC85CD: xor     edx, edx
 * 0000000140BC85CF: mov     r9d, 100h
 * 0000000140BC85D5: mov     rcx, rbx
 * 0000000140BC85D8: call    sub_140BD8384
 * 0000000140BC85DD: jmp     short loc_140BC85E6
 * 0000000140BC85DF: mov     r14, [rbp+8D0h+var_910]
 * 0000000140BC85E3: xor     r15d, r15d
 * 0000000140BC85E6: mov     edx, [rbp+8D0h+var_938]
 * 0000000140BC85E9: mov     r8, [rbp+8D0h+var_920]
 * 0000000140BC85ED: mov     r9d, [rbp+8D0h+var_928]
 * 0000000140BC85F1: add     r13, 0Ch
 * 0000000140BC85F5: cmp     r13, [rbp+8D0h+var_908]
 * 0000000140BC85F9: jnz     loc_140BC82D4
 * 0000000140BC85FF: mov     ecx, [rsp+9D0h+var_958]
 * 0000000140BC8603: movzx   r10d, word ptr [rbp+8D0h+arg_8]
 * 0000000140BC860B: mov     r12, [rsp+9D0h+var_978]
 * 0000000140BC8610: mov     r11, [rbp+8D0h+var_908]
 * 0000000140BC8614: add     r8, 28h ; '('
 * 0000000140BC8618: movzx   eax, r10w
 * 0000000140BC861C: mov     edx, 1
 * 0000000140BC8621: mov     [rbp+8D0h+var_920], r8
 * 0000000140BC8625: add     ecx, edx
 * 0000000140BC8627: mov     [rsp+9D0h+var_958], ecx
 * 0000000140BC862B: cmp     ecx, eax
 * 0000000140BC862D: jb      loc_140BC8296
 * 0000000140BC8633: mov     r9, [rbp+8D0h+var_940]
 * 0000000140BC8637: xor     r11d, r11d
 * 0000000140BC863A: mov     r15, [rbp+8D0h+var_950]
 * 0000000140BC863E: jmp     loc_140BC882D
 * 0000000140BC8643: mov     ecx, [rbx+9D8h]
 * 0000000140BC8649: bt      ecx, 14h
 * 0000000140BC864D: jnb     loc_140BD352F
 * 0000000140BC8653: cmp     [rbx+918h], r15d
 * 0000000140BC865A: jnz     loc_140BC777A
 * 0000000140BC8660: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC866A: mov     edx, 1
 * 0000000140BC866F: add     rax, rbx
 * 0000000140BC8672: mov     [rbx+920h], rax
 * 0000000140BC8679: mov     [rbx+928h], r15
 * 0000000140BC8680: mov     qword ptr [rbx+930h], 10Fh
 * 0000000140BC868B: mov     [rbx+938h], r14
 * 0000000140BC8692: mov     [rbx+918h], edx
 * 0000000140BC8698: bt      ecx, 1Dh
 * 0000000140BC869C: jb      loc_140BC777A
 * 0000000140BC86A2: test    dword ptr [rbx+9DCh], 200000h
 * 0000000140BC86AC: jz      loc_140BC777A
 * 0000000140BC86B2: test    dl, cl
 * 0000000140BC86B4: jz      loc_140BC777A
 * 0000000140BC86BA: mov     ecx, [rbx+0A74h]
 * 0000000140BC86C0: mov     eax, [rbx+804h]
 * 0000000140BC86C6: mov     r10, [rbx+838h]
 * 0000000140BC86CD: sub     eax, ecx
 * 0000000140BC86CF: mov     r8, [rbx+0A78h]
 * 0000000140BC86D6: lea     rdx, [rcx+rbx]
 * 0000000140BC86DA: mov     ecx, eax
 * 0000000140BC86DC: shr     rcx, 3
 * 0000000140BC86E0: lea     r9, [rdx+rcx*8]
 * 0000000140BC86E4: jmp     short loc_140BC8707
 * 0000000140BC86E6: xor     [rdx], r8
 * 0000000140BC86E9: mov     rax, [rdx]
 * 0000000140BC86EC: movzx   ecx, r8b
 * 0000000140BC86F0: xor     rax, r10
 * 0000000140BC86F3: and     ecx, 3Fh
 * 0000000140BC86F6: ror     r8, cl
 * 0000000140BC86F9: add     r8, rax
 * 0000000140BC86FC: xor     r8, 0EFAh
 * 0000000140BC8703: add     rdx, 8
 * 0000000140BC8707: cmp     rdx, r9
 * 0000000140BC870A: jnz     short loc_140BC86E6
 * 0000000140BC870C: btr     dword ptr [rbx+9DCh], 15h
 * 0000000140BC8714: cmp     r8, [rbx+0A80h]
 * 0000000140BC871B: jz      loc_140BC777A
 * 0000000140BC8721: mov     ecx, [rbx+804h]
 * 0000000140BC8727: mov     rax, [rbx+588h]
 * 0000000140BC872E: mov     [rax], rbx
 * 0000000140BC8731: mov     [rax+10h], ecx
 * 0000000140BC8734: mov     rcx, [rbx+0A80h]
 * 0000000140BC873B: cmp     [rbx+918h], r15d
 * 0000000140BC8742: jnz     short loc_140BC8752
 * 0000000140BC8744: mov     rax, [rbx+588h]
 * 0000000140BC874B: xor     rcx, r8
 * 0000000140BC874E: mov     [rax+18h], rcx
 * 0000000140BC8752: mov     rcx, rbx
 * 0000000140BC8755: jmp     loc_140BC776D
 * 0000000140BC875A: mov     ecx, [rbx+9D8h]
 * 0000000140BC8760: bt      ecx, 14h
 * 0000000140BC8764: jnb     loc_140BD35A9
 * 0000000140BC876A: cmp     [rbx+918h], r15d
 * 0000000140BC8771: jnz     loc_140BC777A
 * 0000000140BC8777: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC8781: mov     edx, 1
 * 0000000140BC8786: add     rax, rbx
 * 0000000140BC8789: mov     [rbx+920h], rax
 * 0000000140BC8790: mov     [rbx+928h], r15
 * 0000000140BC8797: mov     qword ptr [rbx+930h], 10Fh
 * 0000000140BC87A2: mov     [rbx+938h], r14
 * 0000000140BC87A9: mov     [rbx+918h], edx
 * 0000000140BC87AF: bt      ecx, 1Dh
 * 0000000140BC87B3: jb      loc_140BC777A
 * 0000000140BC87B9: test    dword ptr [rbx+9DCh], 200000h
 * 0000000140BC87C3: jz      loc_140BC777A
 * 0000000140BC87C9: test    dl, cl
 * 0000000140BC87CB: jz      loc_140BC777A
 * 0000000140BC87D1: mov     ecx, [rbx+0A74h]
 * 0000000140BC87D7: mov     eax, [rbx+804h]
 * 0000000140BC87DD: mov     r10, [rbx+838h]
 * 0000000140BC87E4: sub     eax, ecx
 * 0000000140BC87E6: mov     r8, [rbx+0A78h]
 * 0000000140BC87ED: lea     rdx, [rcx+rbx]
 * 0000000140BC87F1: mov     ecx, eax
 * 0000000140BC87F3: shr     rcx, 3
 * 0000000140BC87F7: lea     r9, [rdx+rcx*8]
 * 0000000140BC87FB: jmp     short loc_140BC881E
 * 0000000140BC87FD: xor     [rdx], r8
 * 0000000140BC8800: mov     rax, [rdx]
 * 0000000140BC8803: movzx   ecx, r8b
 * 0000000140BC8807: xor     rax, r10
 * 0000000140BC880A: and     ecx, 3Fh
 * 0000000140BC880D: ror     r8, cl
 * 0000000140BC8810: add     r8, rax
 * 0000000140BC8813: xor     r8, 0EFAh
 * 0000000140BC881A: add     rdx, 8
 * 0000000140BC881E: cmp     rdx, r9
 * 0000000140BC8821: jnz     short loc_140BC87FD
 * 0000000140BC8823: jmp     loc_140BC870C
 * 0000000140BC8828: mov     edx, 1
 * 0000000140BC882D: cmp     r13, [rbp+8D0h+var_908]
 * 0000000140BC8831: jz      loc_140BC8903
 * 0000000140BC8837: mov     ecx, [rbx+9D8h]
 * 0000000140BC883D: bt      ecx, 14h
 * 0000000140BC8841: jnb     loc_140BD35D4
 * 0000000140BC8847: xor     r15d, r15d
 * 0000000140BC884A: cmp     [rbx+918h], r15d
 * 0000000140BC8851: jnz     loc_140BC777A
 * 0000000140BC8857: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC8861: add     rax, rbx
 * 0000000140BC8864: mov     [rbx+920h], rax
 * 0000000140BC886B: mov     [rbx+928h], r15
 * 0000000140BC8872: mov     qword ptr [rbx+930h], 10Fh
 * 0000000140BC887D: mov     [rbx+938h], r14
 * 0000000140BC8884: mov     [rbx+918h], edx
 * 0000000140BC888A: bt      ecx, 1Dh
 * 0000000140BC888E: jb      loc_140BC777A
 * 0000000140BC8894: test    dword ptr [rbx+9DCh], 200000h
 * 0000000140BC889E: jz      loc_140BC777A
 * 0000000140BC88A4: test    dl, cl
 * 0000000140BC88A6: jz      loc_140BC777A
 * 0000000140BC88AC: mov     ecx, [rbx+0A74h]
 * 0000000140BC88B2: mov     eax, [rbx+804h]
 * 0000000140BC88B8: mov     r10, [rbx+838h]
 * 0000000140BC88BF: sub     eax, ecx
 * 0000000140BC88C1: mov     r8, [rbx+0A78h]
 * 0000000140BC88C8: lea     rdx, [rcx+rbx]
 * 0000000140BC88CC: mov     ecx, eax
 * 0000000140BC88CE: shr     rcx, 3
 * 0000000140BC88D2: lea     r9, [rdx+rcx*8]
 * 0000000140BC88D6: jmp     short loc_140BC88F9
 * 0000000140BC88D8: xor     [rdx], r8
 * 0000000140BC88DB: mov     rax, [rdx]
 * 0000000140BC88DE: movzx   ecx, r8b
 * 0000000140BC88E2: xor     rax, r10
 * 0000000140BC88E5: and     ecx, 3Fh
 * 0000000140BC88E8: ror     r8, cl
 * 0000000140BC88EB: add     r8, rax
 * 0000000140BC88EE: xor     r8, 0EFAh
 * 0000000140BC88F5: add     rdx, 8
 * 0000000140BC88F9: cmp     rdx, r9
 * 0000000140BC88FC: jnz     short loc_140BC88D8
 * 0000000140BC88FE: jmp     loc_140BC870C
 * 0000000140BC8903: test    r9d, r9d
 * 0000000140BC8906: jz      short loc_140BC8911
 * 0000000140BC8908: lea     edx, [r9+6]
 * 0000000140BC890C: and     edx, 0FFFFFFF8h
 * 0000000140BC890F: jmp     short loc_140BC8914
 * 0000000140BC8911: mov     edx, r11d
 * 0000000140BC8914: mov     r14d, [rbx+804h]
 * 0000000140BC891B: mov     r8d, [rbx+944h]
 * 0000000140BC8922: movzx   eax, r10w
 * 0000000140BC8926: lea     ecx, [rax+rax*2]
 * 0000000140BC8929: lea     eax, [rdx+rcx*8]
 * 0000000140BC892C: lea     ecx, [r14+30h]
 * 0000000140BC8930: add     ecx, eax
 * 0000000140BC8932: cmp     ecx, [rbx+0A64h]
 * 0000000140BC8938: jbe     loc_140BC8A28
 * 0000000140BC893E: mov     edx, ecx
 * 0000000140BC8940: mov     rcx, rbx
 * 0000000140BC8943: call    sub_140BD7AF8
 * 0000000140BC8948: xor     r11d, r11d
 * 0000000140BC894B: mov     r13, rax
 * 0000000140BC894E: test    rax, rax
 * 0000000140BC8951: jz      loc_140BC7AC2
 * 0000000140BC8957: mov     ecx, [rbx+9D8h]
 * 0000000140BC895D: lea     eax, [r11+2]
 * 0000000140BC8961: test    al, cl
 * 0000000140BC8963: jnz     loc_140BC8A12
 * 0000000140BC8969: mov     eax, [rbx+804h]
 * 0000000140BC896F: lea     r9d, [r11+1]
 * 0000000140BC8973: mov     r8, [rbx+7E8h]
 * 0000000140BC897A: and     ecx, 10000000h
 * 0000000140BC8980: neg     ecx
 * 0000000140BC8982: sbb     edx, edx
 * 0000000140BC8984: and     edx, [rbx+944h]
 * 0000000140BC898A: cmp     eax, 8
 * 0000000140BC898D: jb      short loc_140BC89A4
 * 0000000140BC898F: mov     ecx, eax
 * 0000000140BC8991: shr     rcx, 3
 * 0000000140BC8995: mov     [rbx], r11
 * 0000000140BC8998: add     eax, 0FFFFFFF8h
 * 0000000140BC899B: add     rbx, 8
 * 0000000140BC899F: sub     rcx, r9
 * 0000000140BC89A2: jnz     short loc_140BC8995
 * 0000000140BC89A4: test    eax, eax
 * 0000000140BC89A6: jz      short loc_140BC89B7
 * 0000000140BC89A8: mov     ecx, 0FFFFFFFFh
 * 0000000140BC89AD: mov     [rbx], r11b
 * 0000000140BC89B0: add     rbx, r9
 * 0000000140BC89B3: add     eax, ecx
 * 0000000140BC89B5: jnz     short loc_140BC89AD
 * 0000000140BC89B7: mov     ebx, [r13+944h]
 * 0000000140BC89BE: mov     [r13+944h], edx
 * 0000000140BC89C5: cmp     edx, 3
 * 0000000140BC89C8: jz      short loc_140BC89F9
 * 0000000140BC89CA: test    dword ptr [r13+9D8h], 8000000h
 * 0000000140BC89D5: jnz     short loc_140BC89F0
 * 0000000140BC89D7: test    edx, edx
 * 0000000140BC89D9: jz      short loc_140BC89F0
 * 0000000140BC89DB: mov     rax, [r13+238h]
 * 0000000140BC89E2: lea     rcx, [r8-8]
 * 0000000140BC89E6: mov     rdx, [rcx]
 * 0000000140BC89E9: call    KeGuardDispatchICall
 * 0000000140BC89EE: jmp     short loc_140BC8A08
 * 0000000140BC89F0: mov     rax, [r13+108h]
 * 0000000140BC89F7: jmp     short loc_140BC8A00
 * 0000000140BC89F9: mov     rax, [r13+368h]
 * 0000000140BC8A00: mov     rcx, r8
 * 0000000140BC8A03: call    KeGuardDispatchICall
 * 0000000140BC8A08: mov     [r13+944h], ebx
 * 0000000140BC8A0F: xor     r11d, r11d
 * 0000000140BC8A12: and     dword ptr [r13+9D8h], 0FFFFFFFDh
 * 0000000140BC8A1A: mov     r9, [rbp+8D0h+var_940]
 * 0000000140BC8A1E: movzx   r10d, word ptr [rbp+8D0h+arg_8]
 * 0000000140BC8A26: jmp     short loc_140BC8A31
 * 0000000140BC8A28: mov     r13, rbx
 * 0000000140BC8A2B: mov     [rbx+804h], ecx
 * 0000000140BC8A31: mov     eax, 1
 * 0000000140BC8A36: lea     rdx, [r14+r13]
 * 0000000140BC8A3A: add     [r13+82Ch], eax
 * 0000000140BC8A41: mov     [rbp+8D0h+var_6D0], rdx
 * 0000000140BC8A48: lea     ecx, [rax+2Fh]
 * 0000000140BC8A4B: mov     rax, rdx
 * 0000000140BC8A4E: lea     r8d, [rcx-2Ah]
 * 0000000140BC8A52: lea     r14d, [rcx-2Fh]
 * 0000000140BC8A56: mov     [rax], r11
 * 0000000140BC8A59: add     ecx, 0FFFFFFF8h
 * 0000000140BC8A5C: add     rax, 8
 * 0000000140BC8A60: sub     r8, r14
 * 0000000140BC8A63: jnz     short loc_140BC8A56
 * 0000000140BC8A65: test    ecx, ecx
 * 0000000140BC8A67: jz      short loc_140BC8A7A
 * 0000000140BC8A69: mov     r8d, 0FFFFFFFFh
 * 0000000140BC8A6F: mov     [rax], r11b
 * 0000000140BC8A72: add     rax, r14
 * 0000000140BC8A75: add     ecx, r8d
 * 0000000140BC8A78: jnz     short loc_140BC8A6F
 * 0000000140BC8A7A: mov     rbx, [rbp+8D0h+var_930]
 * 0000000140BC8A7E: mov     dword ptr [rdx], 1Eh
 * 0000000140BC8A84: mov     [rdx+8], rbx
 * 0000000140BC8A88: mov     [rdx+10h], r11d
 * 0000000140BC8A8C: mov     rcx, [r13+838h]
 * 0000000140BC8A93: mov     rax, rcx
 * 0000000140BC8A96: jmp     short loc_140BC8A9A
 * 0000000140BC8A98: xor     ecx, eax
 * 0000000140BC8A9A: shr     rax, 1Fh
 * 0000000140BC8A9E: test    rax, rax
 * 0000000140BC8AA1: jnz     short loc_140BC8A98
 * 0000000140BC8AA3: mov     rax, [rbp+8D0h+var_910]
 * 0000000140BC8AA7: btr     ecx, 1Fh
 * 0000000140BC8AAB: mov     [rdx+14h], ecx
 * 0000000140BC8AAE: mov     rcx, [rbp+8D0h+var_6D0]
 * 0000000140BC8AB5: mov     [rbp+8D0h+var_858], rcx
 * 0000000140BC8AB9: mov     [rbp+8D0h+var_8C0], r13
 * 0000000140BC8ABD: mov     [rcx+18h], rax
 * 0000000140BC8AC1: mov     ecx, [r15+50h]
 * 0000000140BC8AC5: xor     r15d, r15d
 * 0000000140BC8AC8: mov     rax, [rbp+8D0h+var_858]
 * 0000000140BC8ACC: mov     [rax+20h], ecx
 * 0000000140BC8ACF: mov     rax, [rbp+8D0h+var_858]
 * 0000000140BC8AD3: mov     ecx, dword ptr [rsp+9D0h+var_960]
 * 0000000140BC8AD7: mov     [rax+24h], ecx
 * 0000000140BC8ADA: mov     rax, [rbp+8D0h+var_858]
 * 0000000140BC8ADE: mov     [rax+28h], r10w
 * 0000000140BC8AE3: mov     rcx, [rbp+8D0h+var_858]
 * 0000000140BC8AE7: lea     rdx, [rcx+30h]
 * 0000000140BC8AEB: mov     [rbp+8D0h+var_940], rdx
 * 0000000140BC8AEF: test    r9d, r9d
 * 0000000140BC8AF2: jz      short loc_140BC8B05
 * 0000000140BC8AF4: lea     r11d, [r9-1]
 * 0000000140BC8AF8: add     r11, 7
 * 0000000140BC8AFC: and     r11, 0FFFFFFFFFFFFFFF8h
 * 0000000140BC8B00: add     r11, rdx
 * 0000000140BC8B03: jmp     short loc_140BC8B08
 * 0000000140BC8B05: mov     r11, rdx
 * 0000000140BC8B08: movzx   eax, word ptr [rcx+28h]
 * 0000000140BC8B0C: mov     [rbp+8D0h+var_920], r11
 * 0000000140BC8B10: lea     rcx, [rax+rax*2]
 * 0000000140BC8B14: lea     r8, [r11+rcx*8]
 * 0000000140BC8B18: mov     [rbp+8D0h+var_950], r8
 * 0000000140BC8B1C: lea     rax, [rbx+0Ch]
 * 0000000140BC8B20: test    r9d, r9d
 * 0000000140BC8B23: jnz     short loc_140BC8B29
 * 0000000140BC8B25: mov     rax, [rbp+8D0h+var_908]
 * 0000000140BC8B29: mov     [rsp+9D0h+var_968], rax
 * 0000000140BC8B2E: cmp     r15w, r10w
 * 0000000140BC8B32: jnb     short loc_140BC8B68
 * 0000000140BC8B34: mov     esi, 2
 * 0000000140BC8B39: movzx   edx, r10w
 * 0000000140BC8B3D: lea     rax, [r11+8]
 * 0000000140BC8B41: lea     r10d, [rsi+0Ah]
 * 0000000140BC8B45: mov     rcx, rsi
 * 0000000140BC8B48: mov     [rax-8], r15d
 * 0000000140BC8B4C: mov     [rax-4], r15d
 * 0000000140BC8B50: mov     dword ptr [rax], 80000000h
 * 0000000140BC8B56: add     rax, r10
 * 0000000140BC8B59: sub     rcx, r14
 * 0000000140BC8B5C: jnz     short loc_140BC8B48
 * 0000000140BC8B5E: sub     rdx, r14
 * 0000000140BC8B61: jnz     short loc_140BC8B45
 * 0000000140BC8B63: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC8B68: cmp     r11, r8
 * 0000000140BC8B6B: jz      loc_140BC94AA
 * 0000000140BC8B71: test    dword ptr [r12+24h], 2000000h
 * 0000000140BC8B7A: mov     [rbp+8D0h+var_938], r15d
 * 0000000140BC8B7E: jnz     short loc_140BC8BC2
 * 0000000140BC8B80: mov     ecx, [r12]
 * 0000000140BC8B84: lea     rax, [r12+4]
 * 0000000140BC8B89: cmp     ecx, 54494E49h
 * 0000000140BC8B8F: jnz     short loc_140BC8B99
 * 0000000140BC8B91: cmp     dword ptr [rax], 4742444Bh
 * 0000000140BC8B97: jz      short loc_140BC8BC2
 * 0000000140BC8B99: cmp     ecx, 45474150h
 * 0000000140BC8B9F: jnz     short loc_140BC8BCE
 * 0000000140BC8BA1: movzx   ecx, word ptr [rax]
 * 0000000140BC8BA4: mov     eax, 7877h
 * 0000000140BC8BA9: cmp     cx, ax
 * 0000000140BC8BAC: jz      short loc_140BC8BC2
 * 0000000140BC8BAE: mov     eax, 7277h
 * 0000000140BC8BB3: cmp     cx, ax
 * 0000000140BC8BB6: jz      short loc_140BC8BC2
 * 0000000140BC8BB8: mov     eax, 7777h
 * 0000000140BC8BBD: cmp     cx, ax
 * 0000000140BC8BC0: jnz     short loc_140BC8BE0
 * 0000000140BC8BC2: mov     r15d, r14d
 * 0000000140BC8BC5: mov     [rbp+8D0h+var_938], r14d
 * 0000000140BC8BC9: jmp     loc_140BC8CB5
 * 0000000140BC8BCE: cmp     ecx, 41525245h
 * 0000000140BC8BD4: jnz     short loc_140BC8BE0
 * 0000000140BC8BD6: mov     ecx, 4154h
 * 0000000140BC8BDB: cmp     [rax], cx
 * 0000000140BC8BDE: jz      short loc_140BC8BC2
 * 0000000140BC8BE0: mov     r9, [r13+958h]
 * 0000000140BC8BE7: mov     r10d, 7
 * 0000000140BC8BED: mov     r11, [r13+960h]
 * 0000000140BC8BF4: mov     rdx, r12
 * 0000000140BC8BF7: mov     rbx, [r13+968h]
 * 0000000140BC8BFE: mov     r8, [r13+950h]
 * 0000000140BC8C05: mov     cl, [rdx]
 * 0000000140BC8C07: add     rdx, r14
 * 0000000140BC8C0A: mov     al, [r8]
 * 0000000140BC8C0D: add     r8, r14
 * 0000000140BC8C10: cmp     cl, al
 * 0000000140BC8C12: jnz     short loc_140BC8C23
 * 0000000140BC8C14: mov     eax, 0FFFFFFFFh
 * 0000000140BC8C19: add     r10d, eax
 * 0000000140BC8C1C: jnz     short loc_140BC8C05
 * 0000000140BC8C1E: jmp     loc_140BC8CA6
 * 0000000140BC8C23: mov     edx, 8
 * 0000000140BC8C28: mov     r8, r12
 * 0000000140BC8C2B: mov     rcx, [r8]
 * 0000000140BC8C2E: add     r8, 8
 * 0000000140BC8C32: mov     rax, [r9]
 * 0000000140BC8C35: add     r9, 8
 * 0000000140BC8C39: cmp     rcx, rax
 * 0000000140BC8C3C: jnz     short loc_140BC8C65
 * 0000000140BC8C3E: add     edx, 0FFFFFFF8h
 * 0000000140BC8C41: cmp     edx, 8
 * 0000000140BC8C44: jnb     short loc_140BC8C2B
 * 0000000140BC8C46: test    edx, edx
 * 0000000140BC8C48: jz      short loc_140BC8CA6
 * 0000000140BC8C4A: mov     cl, [r8]
 * 0000000140BC8C4D: add     r8, r14
 * 0000000140BC8C50: mov     al, [r9]
 * 0000000140BC8C53: add     r9, r14
 * 0000000140BC8C56: cmp     cl, al
 * 0000000140BC8C58: jnz     short loc_140BC8C65
 * 0000000140BC8C5A: mov     eax, 0FFFFFFFFh
 * 0000000140BC8C5F: add     edx, eax
 * 0000000140BC8C61: jnz     short loc_140BC8C4A
 * 0000000140BC8C63: jmp     short loc_140BC8CA6
 * 0000000140BC8C65: mov     r8d, 4
 * 0000000140BC8C6B: mov     rdx, r12
 * 0000000140BC8C6E: mov     r9d, 0FFFFFFFFh
 * 0000000140BC8C74: mov     cl, [rdx]
 * 0000000140BC8C76: add     rdx, r14
 * 0000000140BC8C79: mov     al, [r11]
 * 0000000140BC8C7C: add     r11, r14
 * 0000000140BC8C7F: cmp     cl, al
 * 0000000140BC8C81: jnz     short loc_140BC8C8A
 * 0000000140BC8C83: add     r8d, r9d
 * 0000000140BC8C86: jnz     short loc_140BC8C74
 * 0000000140BC8C88: jmp     short loc_140BC8CA6
 * 0000000140BC8C8A: mov     r8d, 6
 * 0000000140BC8C90: mov     rdx, r12
 * 0000000140BC8C93: mov     cl, [rdx]
 * 0000000140BC8C95: add     rdx, r14
 * 0000000140BC8C98: mov     al, [rbx]
 * 0000000140BC8C9A: add     rbx, r14
 * 0000000140BC8C9D: cmp     cl, al
 * 0000000140BC8C9F: jnz     short loc_140BC8CAD
 * 0000000140BC8CA1: add     r8d, r9d
 * 0000000140BC8CA4: jnz     short loc_140BC8C93
 * 0000000140BC8CA6: mov     r15d, r14d
 * 0000000140BC8CA9: mov     [rbp+8D0h+var_938], r14d
 * 0000000140BC8CAD: mov     rbx, [rbp+8D0h+var_930]
 * 0000000140BC8CB1: mov     r11, [rbp+8D0h+var_920]
 * 0000000140BC8CB5: mov     ecx, [r12+24h]
 * 0000000140BC8CBA: xor     r10d, r10d
 * 0000000140BC8CBD: test    ecx, ecx
 * 0000000140BC8CBF: jns     short loc_140BC8CCA
 * 0000000140BC8CC1: mov     r15d, r14d
 * 0000000140BC8CC4: mov     [rbp+8D0h+var_938], r14d
 * 0000000140BC8CC8: jmp     short loc_140BC8CCF
 * 0000000140BC8CCA: test    r15d, r15d
 * 0000000140BC8CCD: jz      short loc_140BC8CF7
 * 0000000140BC8CCF: cmp     dword ptr [r12], 54494E49h
 * 0000000140BC8CD7: jnz     short loc_140BC8CF7
 * 0000000140BC8CD9: cmp     dword ptr [r12+4], 4742444Bh
 * 0000000140BC8CE2: jnz     short loc_140BC8CF7
 * 0000000140BC8CE4: test    dword ptr [r13+9DCh], 2000h
 * 0000000140BC8CEF: cmovnz  r15d, r10d
 * 0000000140BC8CF3: mov     [rbp+8D0h+var_938], r15d
 * 0000000140BC8CF7: test    dword ptr [r13+9DCh], 4000h
 * 0000000140BC8D02: mov     r9, [rbp+8D0h+var_910]
 * 0000000140BC8D06: jz      short loc_140BC8D27
 * 0000000140BC8D08: bt      ecx, 1Dh
 * 0000000140BC8D0C: jnb     short loc_140BC8D27
 * 0000000140BC8D0E: cmp     r9, [r13+5E0h]
 * 0000000140BC8D15: jz      short loc_140BC8D20
 * 0000000140BC8D17: cmp     r9, [r13+5E8h]
 * 0000000140BC8D1E: jnz     short loc_140BC8D27
 * 0000000140BC8D20: mov     r15d, r14d
 * 0000000140BC8D23: mov     [rbp+8D0h+var_938], r14d
 * 0000000140BC8D27: mov     edx, [r12+0Ch]
 * 0000000140BC8D2C: mov     r14d, [r12+10h]
 * 0000000140BC8D31: mov     eax, [r12+8]
 * 0000000140BC8D36: cmp     r14d, eax
 * 0000000140BC8D39: mov     r8, [rbp+8D0h+var_908]
 * 0000000140BC8D3D: cmovbe  r14d, eax
 * 0000000140BC8D41: mov     dword ptr [rsp+9D0h+var_960], edx
 * 0000000140BC8D45: add     r14d, edx
 * 0000000140BC8D48: mov     dword ptr [rbp+8D0h+arg_8], edx
 * 0000000140BC8D4E: mov     [rsp+9D0h+var_958], r14d
 * 0000000140BC8D53: cmp     rbx, r8
 * 0000000140BC8D56: jz      loc_140BC8F1B
 * 0000000140BC8D5C: mov     eax, [rbx]
 * 0000000140BC8D5E: mov     ecx, [rbx+4]
 * 0000000140BC8D61: mov     r12d, ecx
 * 0000000140BC8D64: cmp     eax, edx
 * 0000000140BC8D66: jbe     loc_140BC8F21
 * 0000000140BC8D6C: mov     dword ptr [rbp+8D0h+arg_8], edx
 * 0000000140BC8D72: cmp     ecx, r14d
 * 0000000140BC8D75: ja      loc_140BC8F40
 * 0000000140BC8D7B: mov     dword ptr [rbp+8D0h+arg_8], edx
 * 0000000140BC8D81: test    r15d, r15d
 * 0000000140BC8D84: jnz     loc_140BC8F56
 * 0000000140BC8D8A: mov     [r11], edx
 * 0000000140BC8D8D: lea     rbx, [r9+rdx]
 * 0000000140BC8D91: mov     [r11+4], eax
 * 0000000140BC8D95: lea     rdx, [rbp+8D0h+var_7E0]
 * 0000000140BC8D9C: mov     r9d, eax
 * 0000000140BC8D9F: mov     dword ptr [rbp+8D0h+arg_8], eax
 * 0000000140BC8DA5: sub     r9d, [r11]
 * 0000000140BC8DA8: lea     r8, [rbp+8D0h+var_6C8]
 * 0000000140BC8DAF: mov     r11d, r9d
 * 0000000140BC8DB2: add     r11, rbx
 * 0000000140BC8DB5: mov     rcx, [r8]
 * 0000000140BC8DB8: mov     eax, [rdx]
 * 0000000140BC8DBA: add     rax, rcx
 * 0000000140BC8DBD: cmp     rbx, rax
 * 0000000140BC8DC0: jnb     short loc_140BC8DCB
 * 0000000140BC8DC2: cmp     r11, rcx
 * 0000000140BC8DC5: ja      loc_140BC8F2D
 * 0000000140BC8DCB: inc     r10d
 * 0000000140BC8DCE: add     r8, 8
 * 0000000140BC8DD2: add     rdx, 4
 * 0000000140BC8DD6: cmp     r10d, 6
 * 0000000140BC8DDA: jb      short loc_140BC8DB5
 * 0000000140BC8DDC: add     [r13+848h], r9d
 * 0000000140BC8DE3: mov     r11, rbx
 * 0000000140BC8DE6: mov     r15d, [r13+834h]
 * 0000000140BC8DED: mov     rax, rbx
 * 0000000140BC8DF0: mov     r14, [r13+838h]
 * 0000000140BC8DF7: mov     ecx, r9d
 * 0000000140BC8DFA: add     rcx, rbx
 * 0000000140BC8DFD: cmp     rbx, rcx
 * 0000000140BC8E00: jnb     short loc_140BC8E12
 * 0000000140BC8E02: mov     edx, 40h ; '@'
 * 0000000140BC8E07: prefetchnta byte ptr [rax]
 * 0000000140BC8E0A: add     rax, rdx
 * 0000000140BC8E0D: cmp     rax, rcx
 * 0000000140BC8E10: jb      short loc_140BC8E07
 * 0000000140BC8E12: mov     r10d, r9d
 * 0000000140BC8E15: mov     r8, r14
 * 0000000140BC8E18: shr     r10d, 7
 * 0000000140BC8E1C: mov     edx, 1
 * 0000000140BC8E21: test    r10d, r10d
 * 0000000140BC8E24: jz      short loc_140BC8E96
 * 0000000140BC8E26: mov     esi, 0FFFFFFFFh
 * 0000000140BC8E2B: mov     rdi, 7010008004002001h
 * 0000000140BC8E35: mov     eax, 8
 * 0000000140BC8E3A: xor     r8, [r11]
 * 0000000140BC8E3D: mov     ecx, r15d
 * 0000000140BC8E40: rol     r8, cl
 * 0000000140BC8E43: xor     r8, [r11+8]
 * 0000000140BC8E47: add     r11, 10h
 * 0000000140BC8E4B: rol     r8, cl
 * 0000000140BC8E4E: sub     rax, rdx
 * 0000000140BC8E51: jnz     short loc_140BC8E3A
 * 0000000140BC8E53: mov     rcx, r11
 * 0000000140BC8E56: sub     rcx, rbx
 * 0000000140BC8E59: xor     rcx, r14
 * 0000000140BC8E5C: mov     rax, rcx
 * 0000000140BC8E5F: rol     rax, 11h
 * 0000000140BC8E63: xor     rcx, rax
 * 0000000140BC8E66: mov     rax, rdi
 * 0000000140BC8E69: mul     rcx
 * 0000000140BC8E6C: xor     eax, edx
 * 0000000140BC8E6E: mov     [rbp+8D0h+var_560], rdx
 * 0000000140BC8E75: xor     r15d, eax
 * 0000000140BC8E78: mov     edx, 1
 * 0000000140BC8E7D: and     r15d, 3Fh
 * 0000000140BC8E81: cmovz   r15d, edx
 * 0000000140BC8E85: add     r10d, esi
 * 0000000140BC8E88: jnz     short loc_140BC8E35
 * 0000000140BC8E8A: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC8E8F: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC8E96: and     r9d, 7Fh
 * 0000000140BC8E9A: cmp     r9d, 8
 * 0000000140BC8E9E: jb      short loc_140BC8EBD
 * 0000000140BC8EA0: mov     eax, r9d
 * 0000000140BC8EA3: shr     rax, 3
 * 0000000140BC8EA7: xor     r8, [r11]
 * 0000000140BC8EAA: mov     ecx, r15d
 * 0000000140BC8EAD: rol     r8, cl
 * 0000000140BC8EB0: add     r11, 8
 * 0000000140BC8EB4: add     r9d, 0FFFFFFF8h
 * 0000000140BC8EB8: sub     rax, rdx
 * 0000000140BC8EBB: jnz     short loc_140BC8EA7
 * 0000000140BC8EBD: xor     r10d, r10d
 * 0000000140BC8EC0: test    r9d, r9d
 * 0000000140BC8EC3: jz      short loc_140BC8EE4
 * 0000000140BC8EC5: mov     esi, 0FFFFFFFFh
 * 0000000140BC8ECA: movzx   eax, byte ptr [r11]
 * 0000000140BC8ECE: mov     ecx, r15d
 * 0000000140BC8ED1: xor     r8, rax
 * 0000000140BC8ED4: add     r11, rdx
 * 0000000140BC8ED7: rol     r8, cl
 * 0000000140BC8EDA: add     r9d, esi
 * 0000000140BC8EDD: jnz     short loc_140BC8ECA
 * 0000000140BC8EDF: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC8EE4: mov     rax, r8
 * 0000000140BC8EE7: jmp     short loc_140BC8EEC
 * 0000000140BC8EE9: xor     r8d, eax
 * 0000000140BC8EEC: shr     rax, 1Fh
 * 0000000140BC8EF0: test    rax, rax
 * 0000000140BC8EF3: jnz     short loc_140BC8EE9
 * 0000000140BC8EF5: mov     rcx, [rbp+8D0h+var_920]
 * 0000000140BC8EF9: btr     r8d, 1Fh
 * 0000000140BC8EFE: mov     r14d, [rsp+9D0h+var_958]
 * 0000000140BC8F03: mov     r15d, [rbp+8D0h+var_938]
 * 0000000140BC8F07: mov     rbx, [rbp+8D0h+var_930]
 * 0000000140BC8F0B: mov     [rcx+8], r8d
 * 0000000140BC8F0F: mov     ecx, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BC8F15: mov     r8, [rbp+8D0h+var_908]
 * 0000000140BC8F19: jmp     short loc_140BC8F42
 * 0000000140BC8F1B: mov     eax, r10d
 * 0000000140BC8F1E: mov     r12d, r10d
 * 0000000140BC8F21: mov     ecx, edx
 * 0000000140BC8F23: cmp     eax, edx
 * 0000000140BC8F25: jb      loc_140BC9298
 * 0000000140BC8F2B: jmp     short loc_140BC8F42
 * 0000000140BC8F2D: mov     ecx, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BC8F33: xor     r10d, r10d
 * 0000000140BC8F36: mov     r8, [rbp+8D0h+var_908]
 * 0000000140BC8F3A: mov     rbx, [rbp+8D0h+var_930]
 * 0000000140BC8F3E: jmp     short loc_140BC8F42
 * 0000000140BC8F40: mov     ecx, edx
 * 0000000140BC8F42: cmp     r12d, r14d
 * 0000000140BC8F45: ja      loc_140BC9298
 * 0000000140BC8F4B: cmp     rbx, r8
 * 0000000140BC8F4E: jz      loc_140BC9298
 * 0000000140BC8F54: jmp     short loc_140BC8F58
 * 0000000140BC8F56: mov     ecx, edx
 * 0000000140BC8F58: mov     rax, [rsp+9D0h+var_968]
 * 0000000140BC8F5D: cmp     rax, r8
 * 0000000140BC8F60: jz      loc_140BC9298
 * 0000000140BC8F66: mov     r12d, [rax+4]
 * 0000000140BC8F6A: cmp     r12d, r14d
 * 0000000140BC8F6D: ja      loc_140BC9298
 * 0000000140BC8F73: mov     ecx, 0Ch
 * 0000000140BC8F78: cmp     rax, r8
 * 0000000140BC8F7B: jz      loc_140BC9292
 * 0000000140BC8F81: test    r15d, r15d
 * 0000000140BC8F84: jz      short loc_140BC8F8E
 * 0000000140BC8F86: mov     r8b, 80h
 * 0000000140BC8F89: jmp     loc_140BC925D
 * 0000000140BC8F8E: mov     r15d, [rax]
 * 0000000140BC8F91: mov     r14d, [rbx+4]
 * 0000000140BC8F95: mov     dword ptr [rbp+8D0h+arg_8], r15d
 * 0000000140BC8F9C: cmp     r15d, r14d
 * 0000000140BC8F9F: jnb     loc_140BC90D0
 * 0000000140BC8FA5: mov     ecx, [r13+9D8h]
 * 0000000140BC8FAC: bt      ecx, 14h
 * 0000000140BC8FB0: jnb     loc_140BD35FF
 * 0000000140BC8FB6: cmp     [r13+918h], r10d
 * 0000000140BC8FBD: jnz     loc_140BC90D0
 * 0000000140BC8FC3: mov     rdx, [rbp+8D0h+var_910]
 * 0000000140BC8FC7: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC8FD1: add     rax, r13
 * 0000000140BC8FD4: mov     [r13+920h], rax
 * 0000000140BC8FDB: mov     [r13+928h], r10
 * 0000000140BC8FE2: mov     qword ptr [r13+930h], 10Fh
 * 0000000140BC8FED: mov     [r13+938h], rdx
 * 0000000140BC8FF4: mov     edx, 1
 * 0000000140BC8FF9: mov     [r13+918h], edx
 * 0000000140BC9000: bt      ecx, 1Dh
 * 0000000140BC9004: jb      loc_140BC90D0
 * 0000000140BC900A: test    dword ptr [r13+9DCh], 200000h
 * 0000000140BC9015: jz      loc_140BC90D0
 * 0000000140BC901B: test    dl, cl
 * 0000000140BC901D: jz      loc_140BC90D0
 * 0000000140BC9023: mov     ecx, [r13+0A74h]
 * 0000000140BC902A: mov     eax, [r13+804h]
 * 0000000140BC9031: mov     r10, [r13+838h]
 * 0000000140BC9038: sub     eax, ecx
 * 0000000140BC903A: mov     r8, [r13+0A78h]
 * 0000000140BC9041: lea     rdx, [rcx+r13]
 * 0000000140BC9045: mov     ecx, eax
 * 0000000140BC9047: shr     rcx, 3
 * 0000000140BC904B: lea     r9, [rdx+rcx*8]
 * 0000000140BC904F: jmp     short loc_140BC9072
 * 0000000140BC9051: xor     [rdx], r8
 * 0000000140BC9054: mov     rax, [rdx]
 * 0000000140BC9057: movzx   ecx, r8b
 * 0000000140BC905B: xor     rax, r10
 * 0000000140BC905E: and     ecx, 3Fh
 * 0000000140BC9061: ror     r8, cl
 * 0000000140BC9064: add     r8, rax
 * 0000000140BC9067: xor     r8, 0EFAh
 * 0000000140BC906E: add     rdx, 8
 * 0000000140BC9072: cmp     rdx, r9
 * 0000000140BC9075: jnz     short loc_140BC9051
 * 0000000140BC9077: btr     dword ptr [r13+9DCh], 15h
 * 0000000140BC9080: cmp     r8, [r13+0A80h]
 * 0000000140BC9087: jz      short loc_140BC90CD
 * 0000000140BC9089: mov     rax, [r13+588h]
 * 0000000140BC9090: mov     ecx, [r13+804h]
 * 0000000140BC9097: mov     [rax], r13
 * 0000000140BC909A: mov     [rax+10h], ecx
 * 0000000140BC909D: xor     eax, eax
 * 0000000140BC909F: mov     rcx, [r13+0A80h]
 * 0000000140BC90A6: cmp     [r13+918h], eax
 * 0000000140BC90AD: jnz     short loc_140BC90BD
 * 0000000140BC90AF: mov     rax, [r13+588h]
 * 0000000140BC90B6: xor     rcx, r8
 * 0000000140BC90B9: mov     [rax+18h], rcx
 * 0000000140BC90BD: xor     edx, edx
 * 0000000140BC90BF: mov     r9d, 100h
 * 0000000140BC90C5: mov     rcx, r13
 * 0000000140BC90C8: call    sub_140BD8384
 * 0000000140BC90CD: xor     r10d, r10d
 * 0000000140BC90D0: mov     r9d, r15d
 * 0000000140BC90D3: lea     rdx, [rbp+8D0h+var_7E0]
 * 0000000140BC90DA: sub     r9d, r14d
 * 0000000140BC90DD: lea     r8, [rbp+8D0h+var_6C8]
 * 0000000140BC90E4: mov     rbx, r14
 * 0000000140BC90E7: mov     r11d, r9d
 * 0000000140BC90EA: add     rbx, [rbp+8D0h+var_910]
 * 0000000140BC90EE: add     r11, rbx
 * 0000000140BC90F1: mov     rcx, [r8]
 * 0000000140BC90F4: mov     eax, [rdx]
 * 0000000140BC90F6: add     rax, rcx
 * 0000000140BC90F9: cmp     rbx, rax
 * 0000000140BC90FC: jnb     short loc_140BC9107
 * 0000000140BC90FE: cmp     r11, rcx
 * 0000000140BC9101: ja      loc_140BC9245
 * 0000000140BC9107: mov     eax, 4
 * 0000000140BC910C: inc     r10d
 * 0000000140BC910F: add     rdx, rax
 * 0000000140BC9112: add     r8, 8
 * 0000000140BC9116: cmp     r10d, 6
 * 0000000140BC911A: jb      short loc_140BC90F1
 * 0000000140BC911C: cmp     r9d, eax
 * 0000000140BC911F: jb      loc_140BC9245
 * 0000000140BC9125: add     [r13+848h], r9d
 * 0000000140BC912C: mov     r11, rbx
 * 0000000140BC912F: mov     r14d, [r13+834h]
 * 0000000140BC9136: mov     rax, rbx
 * 0000000140BC9139: mov     r15, [r13+838h]
 * 0000000140BC9140: mov     ecx, r9d
 * 0000000140BC9143: add     rcx, rbx
 * 0000000140BC9146: cmp     rbx, rcx
 * 0000000140BC9149: jnb     short loc_140BC915B
 * 0000000140BC914B: mov     edx, 40h ; '@'
 * 0000000140BC9150: prefetchnta byte ptr [rax]
 * 0000000140BC9153: add     rax, rdx
 * 0000000140BC9156: cmp     rax, rcx
 * 0000000140BC9159: jb      short loc_140BC9150
 * 0000000140BC915B: mov     r10d, r9d
 * 0000000140BC915E: mov     r8, r15
 * 0000000140BC9161: shr     r10d, 7
 * 0000000140BC9165: mov     edx, 1
 * 0000000140BC916A: test    r10d, r10d
 * 0000000140BC916D: jz      short loc_140BC91E0
 * 0000000140BC916F: mov     esi, 0FFFFFFFFh
 * 0000000140BC9174: mov     rdi, 7010008004002001h
 * 0000000140BC917E: mov     eax, 8
 * 0000000140BC9183: xor     r8, [r11]
 * 0000000140BC9186: mov     ecx, r14d
 * 0000000140BC9189: rol     r8, cl
 * 0000000140BC918C: xor     r8, [r11+8]
 * 0000000140BC9190: add     r11, 10h
 * 0000000140BC9194: rol     r8, cl
 * 0000000140BC9197: sub     rax, rdx
 * 0000000140BC919A: jnz     short loc_140BC9183
 * 0000000140BC919C: mov     rcx, r11
 * 0000000140BC919F: sub     rcx, rbx
 * 0000000140BC91A2: xor     rcx, r15
 * 0000000140BC91A5: mov     rax, rcx
 * 0000000140BC91A8: rol     rax, 11h
 * 0000000140BC91AC: xor     rcx, rax
 * 0000000140BC91AF: mov     rax, rdi
 * 0000000140BC91B2: mul     rcx
 * 0000000140BC91B5: xor     r14d, eax
 * 0000000140BC91B8: mov     [rbp+8D0h+var_558], rdx
 * 0000000140BC91BF: xor     r14d, edx
 * 0000000140BC91C2: mov     edx, 1
 * 0000000140BC91C7: and     r14d, 3Fh
 * 0000000140BC91CB: cmovz   r14d, edx
 * 0000000140BC91CF: add     r10d, esi
 * 0000000140BC91D2: jnz     short loc_140BC917E
 * 0000000140BC91D4: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC91D9: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC91E0: and     r9d, 7Fh
 * 0000000140BC91E4: cmp     r9d, 8
 * 0000000140BC91E8: jb      short loc_140BC9207
 * 0000000140BC91EA: mov     eax, r9d
 * 0000000140BC91ED: shr     rax, 3
 * 0000000140BC91F1: xor     r8, [r11]
 * 0000000140BC91F4: mov     ecx, r14d
 * 0000000140BC91F7: rol     r8, cl
 * 0000000140BC91FA: add     r11, 8
 * 0000000140BC91FE: add     r9d, 0FFFFFFF8h
 * 0000000140BC9202: sub     rax, rdx
 * 0000000140BC9205: jnz     short loc_140BC91F1
 * 0000000140BC9207: xor     r10d, r10d
 * 0000000140BC920A: test    r9d, r9d
 * 0000000140BC920D: jz      short loc_140BC922E
 * 0000000140BC920F: mov     esi, 0FFFFFFFFh
 * 0000000140BC9214: movzx   eax, byte ptr [r11]
 * 0000000140BC9218: mov     ecx, r14d
 * 0000000140BC921B: xor     r8, rax
 * 0000000140BC921E: add     r11, rdx
 * 0000000140BC9221: rol     r8, cl
 * 0000000140BC9224: add     r9d, esi
 * 0000000140BC9227: jnz     short loc_140BC9214
 * 0000000140BC9229: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC922E: mov     rax, r8
 * 0000000140BC9231: jmp     short loc_140BC9236
 * 0000000140BC9233: xor     r8b, al
 * 0000000140BC9236: shr     rax, 7
 * 0000000140BC923A: test    rax, rax
 * 0000000140BC923D: jnz     short loc_140BC9233
 * 0000000140BC923F: and     r8b, 7Fh
 * 0000000140BC9243: jmp     short loc_140BC924B
 * 0000000140BC9245: xor     r10d, r10d
 * 0000000140BC9248: mov     r8b, 80h
 * 0000000140BC924B: mov     rbx, [rbp+8D0h+var_930]
 * 0000000140BC924F: mov     ecx, 0Ch
 * 0000000140BC9254: mov     r15d, [rbp+8D0h+var_938]
 * 0000000140BC9258: mov     r14d, [rsp+9D0h+var_958]
 * 0000000140BC925D: mov     rax, [rbp+8D0h+var_940]
 * 0000000140BC9261: add     rbx, rcx
 * 0000000140BC9264: inc     [rbp+8D0h+var_940]
 * 0000000140BC9268: mov     [rbp+8D0h+var_930], rbx
 * 0000000140BC926C: mov     [rax], r8b
 * 0000000140BC926F: mov     rax, [rsp+9D0h+var_968]
 * 0000000140BC9274: mov     r8, [rbp+8D0h+var_908]
 * 0000000140BC9278: add     rax, rcx
 * 0000000140BC927B: mov     [rsp+9D0h+var_968], rax
 * 0000000140BC9280: cmp     rax, r8
 * 0000000140BC9283: jz      short loc_140BC9289
 * 0000000140BC9285: mov     r12d, [rax+4]
 * 0000000140BC9289: cmp     r12d, r14d
 * 0000000140BC928C: jbe     loc_140BC8F78
 * 0000000140BC9292: mov     ecx, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BC9298: test    r15d, r15d
 * 0000000140BC929B: jnz     loc_140BC942D
 * 0000000140BC92A1: cmp     ecx, r14d
 * 0000000140BC92A4: jz      loc_140BC942D
 * 0000000140BC92AA: mov     rax, [rbp+8D0h+var_920]
 * 0000000140BC92AE: lea     rdx, [rbp+8D0h+var_7E0]
 * 0000000140BC92B5: mov     r9d, r14d
 * 0000000140BC92B8: lea     r8, [rbp+8D0h+var_6C8]
 * 0000000140BC92BF: mov     [rax+0Ch], ecx
 * 0000000140BC92C2: mov     [rax+10h], r14d
 * 0000000140BC92C6: mov     eax, [rax+0Ch]
 * 0000000140BC92C9: sub     r9d, eax
 * 0000000140BC92CC: mov     ebx, eax
 * 0000000140BC92CE: add     rbx, [rbp+8D0h+var_910]
 * 0000000140BC92D2: mov     r11d, r9d
 * 0000000140BC92D5: add     r11, rbx
 * 0000000140BC92D8: xor     r15d, r15d
 * 0000000140BC92DB: mov     r10d, r15d
 * 0000000140BC92DE: lea     r12d, [r15+1]
 * 0000000140BC92E2: mov     rcx, [r8]
 * 0000000140BC92E5: mov     eax, [rdx]
 * 0000000140BC92E7: add     rax, rcx
 * 0000000140BC92EA: cmp     rbx, rax
 * 0000000140BC92ED: jnb     short loc_140BC92F8
 * 0000000140BC92EF: cmp     r11, rcx
 * 0000000140BC92F2: ja      loc_140BC9427
 * 0000000140BC92F8: add     r10d, r12d
 * 0000000140BC92FB: add     r8, 8
 * 0000000140BC92FF: add     rdx, 4
 * 0000000140BC9303: cmp     r10d, 6
 * 0000000140BC9307: jb      short loc_140BC92E2
 * 0000000140BC9309: add     [r13+848h], r9d
 * 0000000140BC9310: mov     r10, rbx
 * 0000000140BC9313: mov     r14d, [r13+834h]
 * 0000000140BC931A: mov     rax, rbx
 * 0000000140BC931D: mov     r15, [r13+838h]
 * 0000000140BC9324: mov     ecx, r9d
 * 0000000140BC9327: add     rcx, rbx
 * 0000000140BC932A: cmp     rbx, rcx
 * 0000000140BC932D: jnb     short loc_140BC933F
 * 0000000140BC932F: mov     edx, 40h ; '@'
 * 0000000140BC9334: prefetchnta byte ptr [rax]
 * 0000000140BC9337: add     rax, rdx
 * 0000000140BC933A: cmp     rax, rcx
 * 0000000140BC933D: jb      short loc_140BC9334
 * 0000000140BC933F: mov     r11d, r9d
 * 0000000140BC9342: mov     r8, r15
 * 0000000140BC9345: shr     r11d, 7
 * 0000000140BC9349: test    r11d, r11d
 * 0000000140BC934C: jz      short loc_140BC93B5
 * 0000000140BC934E: mov     rsi, 7010008004002001h
 * 0000000140BC9358: mov     eax, 8
 * 0000000140BC935D: xor     r8, [r10]
 * 0000000140BC9360: mov     ecx, r14d
 * 0000000140BC9363: rol     r8, cl
 * 0000000140BC9366: xor     r8, [r10+8]
 * 0000000140BC936A: add     r10, 10h
 * 0000000140BC936E: rol     r8, cl
 * 0000000140BC9371: sub     rax, r12
 * 0000000140BC9374: jnz     short loc_140BC935D
 * 0000000140BC9376: mov     rcx, r10
 * 0000000140BC9379: sub     rcx, rbx
 * 0000000140BC937C: xor     rcx, r15
 * 0000000140BC937F: mov     rax, rcx
 * 0000000140BC9382: rol     rax, 11h
 * 0000000140BC9386: xor     rcx, rax
 * 0000000140BC9389: mov     rax, rsi
 * 0000000140BC938C: mul     rcx
 * 0000000140BC938F: xor     r14d, eax
 * 0000000140BC9392: mov     [rbp+8D0h+var_550], rdx
 * 0000000140BC9399: xor     r14d, edx
 * 0000000140BC939C: mov     edx, 0FFFFFFFFh
 * 0000000140BC93A1: and     r14d, 3Fh
 * 0000000140BC93A5: cmovz   r14d, r12d
 * 0000000140BC93A9: add     r11d, edx
 * 0000000140BC93AC: jnz     short loc_140BC9358
 * 0000000140BC93AE: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC93B3: jmp     short loc_140BC93BA
 * 0000000140BC93B5: mov     edx, 0FFFFFFFFh
 * 0000000140BC93BA: and     r9d, 7Fh
 * 0000000140BC93BE: cmp     r9d, 8
 * 0000000140BC93C2: jb      short loc_140BC93E1
 * 0000000140BC93C4: mov     eax, r9d
 * 0000000140BC93C7: shr     rax, 3
 * 0000000140BC93CB: xor     r8, [r10]
 * 0000000140BC93CE: mov     ecx, r14d
 * 0000000140BC93D1: rol     r8, cl
 * 0000000140BC93D4: add     r10, 8
 * 0000000140BC93D8: add     r9d, 0FFFFFFF8h
 * 0000000140BC93DC: sub     rax, r12
 * 0000000140BC93DF: jnz     short loc_140BC93CB
 * 0000000140BC93E1: xor     r15d, r15d
 * 0000000140BC93E4: test    r9d, r9d
 * 0000000140BC93E7: jz      short loc_140BC93FE
 * 0000000140BC93E9: movzx   eax, byte ptr [r10]
 * 0000000140BC93ED: mov     ecx, r14d
 * 0000000140BC93F0: xor     r8, rax
 * 0000000140BC93F3: add     r10, r12
 * 0000000140BC93F6: rol     r8, cl
 * 0000000140BC93F9: add     r9d, edx
 * 0000000140BC93FC: jnz     short loc_140BC93E9
 * 0000000140BC93FE: mov     rax, r8
 * 0000000140BC9401: jmp     short loc_140BC9406
 * 0000000140BC9403: xor     r8d, eax
 * 0000000140BC9406: shr     rax, 1Fh
 * 0000000140BC940A: test    rax, rax
 * 0000000140BC940D: jnz     short loc_140BC9403
 * 0000000140BC940F: mov     r11, [rbp+8D0h+var_920]
 * 0000000140BC9413: btr     r8d, 1Fh
 * 0000000140BC9418: mov     r14d, [rsp+9D0h+var_958]
 * 0000000140BC941D: mov     rbx, [rbp+8D0h+var_930]
 * 0000000140BC9421: mov     [r11+14h], r8d
 * 0000000140BC9425: jmp     short loc_140BC9434
 * 0000000140BC9427: mov     rbx, [rbp+8D0h+var_930]
 * 0000000140BC942B: jmp     short loc_140BC9430
 * 0000000140BC942D: xor     r15d, r15d
 * 0000000140BC9430: mov     r11, [rbp+8D0h+var_920]
 * 0000000140BC9434: mov     rdx, [rbp+8D0h+var_908]
 * 0000000140BC9438: cmp     rbx, rdx
 * 0000000140BC943B: jz      short loc_140BC9480
 * 0000000140BC943D: mov     eax, [rbx]
 * 0000000140BC943F: mov     ecx, [rbx+4]
 * 0000000140BC9442: cmp     eax, dword ptr [rsp+9D0h+var_960]
 * 0000000140BC9446: jb      short loc_140BC9480
 * 0000000140BC9448: cmp     ecx, r14d
 * 0000000140BC944B: ja      short loc_140BC9480
 * 0000000140BC944D: mov     r8, [rsp+9D0h+var_968]
 * 0000000140BC9452: cmp     r8, rdx
 * 0000000140BC9455: jz      short loc_140BC9474
 * 0000000140BC9457: mov     rax, [rbp+8D0h+var_940]
 * 0000000140BC945B: mov     byte ptr [rax], 80h
 * 0000000140BC945E: inc     rax
 * 0000000140BC9461: mov     [rbp+8D0h+var_940], rax
 * 0000000140BC9465: mov     eax, 0Ch
 * 0000000140BC946A: add     r8, rax
 * 0000000140BC946D: mov     [rsp+9D0h+var_968], r8
 * 0000000140BC9472: jmp     short loc_140BC9479
 * 0000000140BC9474: mov     eax, 0Ch
 * 0000000140BC9479: add     rbx, rax
 * 0000000140BC947C: mov     [rbp+8D0h+var_930], rbx
 * 0000000140BC9480: mov     r12, [rsp+9D0h+var_978]
 * 0000000140BC9485: add     r11, 18h
 * 0000000140BC9489: add     r12, 28h ; '('
 * 0000000140BC948D: mov     [rbp+8D0h+var_920], r11
 * 0000000140BC9491: mov     r14d, 1
 * 0000000140BC9497: mov     [rsp+9D0h+var_978], r12
 * 0000000140BC949C: cmp     r11, [rbp+8D0h+var_950]
 * 0000000140BC94A0: jnz     loc_140BC8B71
 * 0000000140BC94A6: mov     r13, [rbp+8D0h+var_8C0]
 * 0000000140BC94AA: mov     [rbp+8D0h+var_8B8], r13
 * 0000000140BC94AE: mov     ecx, r15d
 * 0000000140BC94B1: mov     rbx, [rbp+8D0h+var_900]
 * 0000000140BC94B5: mov     rdx, [rsp+9D0h+var_980]
 * 0000000140BC94BA: mov     r8d, 80000000h
 * 0000000140BC94C0: sub     rdx, rsi
 * 0000000140BC94C3: mov     rsi, [rbp+8D0h+var_8B8]
 * 0000000140BC94C7: add     rdx, rsi
 * 0000000140BC94CA: mov     [rsp+9D0h+var_970], rsi
 * 0000000140BC94CF: mov     [rsp+9D0h+var_980], rdx
 * 0000000140BC94D4: lea     eax, [rcx+r8]
 * 0000000140BC94D8: test    r8d, eax
 * 0000000140BC94DB: jnz     short loc_140BC94E5
 * 0000000140BC94DD: cmp     ecx, 0C000010Eh
 * 0000000140BC94E3: jnz     short loc_140BC94E9
 * 0000000140BC94E5: mov     [rdx+28h], rbx
 * 0000000140BC94E9: mov     r13d, [rbp+8D0h+var_948]
 * 0000000140BC94ED: jmp     loc_140BC9BBF
 * 0000000140BC94F2: xor     edi, edi
 * 0000000140BC94F4: mov     [rbp+8D0h+var_948], r15d
 * 0000000140BC94F8: mov     r14, r13
 * 0000000140BC94FB: mov     r12d, edi
 * 0000000140BC94FE: mov     r13d, edi
 * 0000000140BC9501: mov     [rbp+8D0h+var_888], edi
 * 0000000140BC9504: lea     r8, [rbp+8D0h+var_808]
 * 0000000140BC950B: mov     rax, [rsi+2F8h]
 * 0000000140BC9512: lea     rdx, [rbp+8D0h+var_888]
 * 0000000140BC9516: mov     ecx, r12d
 * 0000000140BC9519: call    KeGuardDispatchICall
 * 0000000140BC951E: test    eax, eax
 * 0000000140BC9520: jz      loc_140BC95B4
 * 0000000140BC9526: mov     rax, [rsi+2D8h]
 * 0000000140BC952D: mov     rcx, [rbp+8D0h+var_808]
 * 0000000140BC9534: call    KeGuardDispatchICall
 * 0000000140BC9539: mov     rbx, rax
 * 0000000140BC953C: test    rax, rax
 * 0000000140BC953F: jz      short loc_140BC958F
 * 0000000140BC9541: mov     rax, [rsi+2E0h]
 * 0000000140BC9548: inc     r15d
 * 0000000140BC954B: mov     rcx, rbx
 * 0000000140BC954E: mov     [rbp+8D0h+var_948], r15d
 * 0000000140BC9552: call    KeGuardDispatchICall
 * 0000000140BC9557: mov     r15, rax
 * 0000000140BC955A: lea     rdx, [rbp+8D0h+var_548]
 * 0000000140BC9561: mov     rax, [rsi+218h]
 * 0000000140BC9568: mov     rcx, r15
 * 0000000140BC956B: call    KeGuardDispatchICall
 * 0000000140BC9570: test    rax, rax
 * 0000000140BC9573: jz      short loc_140BC95D7
 * 0000000140BC9575: mov     rax, [rsi+2E8h]
 * 0000000140BC957C: mov     rdx, rbx
 * 0000000140BC957F: mov     rcx, [rbp+8D0h+var_808]
 * 0000000140BC9586: call    KeGuardDispatchICall
 * 0000000140BC958B: mov     r15d, [rbp+8D0h+var_948]
 * 0000000140BC958F: mov     rax, [rsi+2F8h]
 * 0000000140BC9596: lea     r8, [rbp+8D0h+var_808]
 * 0000000140BC959D: lea     rdx, [rbp+8D0h+var_888]
 * 0000000140BC95A1: mov     ecx, r12d
 * 0000000140BC95A4: call    KeGuardDispatchICall
 * 0000000140BC95A9: test    eax, eax
 * 0000000140BC95AB: jnz     loc_140BC9526
 * 0000000140BC95B1: lea     ebx, [rax+1]
 * 0000000140BC95B4: mov     r15d, [rbp+8D0h+var_948]
 * 0000000140BC95B8: add     r12d, ebx
 * 0000000140BC95BB: add     r13, rbx
 * 0000000140BC95BE: cmp     r12d, 3
 * 0000000140BC95C2: jb      loc_140BC9501
 * 0000000140BC95C8: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC95CF: mov     r13d, r15d
 * 0000000140BC95D2: jmp     loc_140BC9BC4
 * 0000000140BC95D7: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BC95E1: mov     ebx, 1
 * 0000000140BC95E6: jz      short loc_140BC9630
 * 0000000140BC95E8: mov     rcx, [rsi+0AC8h]
 * 0000000140BC95EF: lea     edx, [rbx+2Fh]
 * 0000000140BC95F2: lea     r8d, [rbx+5]
 * 0000000140BC95F6: mov     rax, [r14]
 * 0000000140BC95F9: add     edx, 0FFFFFFF8h
 * 0000000140BC95FC: mov     [rcx], rax
 * 0000000140BC95FF: add     r14, 8
 * 0000000140BC9603: add     rcx, 8
 * 0000000140BC9607: sub     r8, rbx
 * 0000000140BC960A: jnz     short loc_140BC95F6
 * 0000000140BC960C: test    edx, edx
 * 0000000140BC960E: jz      short loc_140BC9629
 * 0000000140BC9610: mov     esi, 0FFFFFFFFh
 * 0000000140BC9615: mov     al, [r14]
 * 0000000140BC9618: add     r14, rbx
 * 0000000140BC961B: mov     [rcx], al
 * 0000000140BC961D: add     rcx, rbx
 * 0000000140BC9620: add     edx, esi
 * 0000000140BC9622: jnz     short loc_140BC9615
 * 0000000140BC9624: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC9629: mov     r14, [rsi+0AC8h]
 * 0000000140BC9630: mov     [r14+18h], r15
 * 0000000140BC9634: mov     rax, [rsi+588h]
 * 0000000140BC963B: mov     [rax], r14
 * 0000000140BC963E: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140BC9645: mov     rax, [rsi+588h]
 * 0000000140BC964C: mov     [rax+8], r15
 * 0000000140BC9650: mov     dword ptr [rax+14h], 1000h
 * 0000000140BC9657: cmp     [rsi+918h], edi
 * 0000000140BC965D: jnz     loc_140BC95B4
 * 0000000140BC9663: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC966D: add     rax, rsi
 * 0000000140BC9670: mov     [rsi+920h], rax
 * 0000000140BC9677: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC9681: add     rax, r14
 * 0000000140BC9684: mov     [rsi+928h], rax
 * 0000000140BC968B: movsxd  rax, dword ptr [r14]
 * 0000000140BC968E: mov     [rsi+930h], rax
 * 0000000140BC9695: mov     [rsi+938h], r13
 * 0000000140BC969C: mov     [rsi+918h], ebx
 * 0000000140BC96A2: mov     ecx, [rsi+9D8h]
 * 0000000140BC96A8: bt      ecx, 1Dh
 * 0000000140BC96AC: jb      loc_140BC95B4
 * 0000000140BC96B2: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC96BC: jz      loc_140BC95B4
 * 0000000140BC96C2: test    bl, cl
 * 0000000140BC96C4: jz      loc_140BC95B4
 * 0000000140BC96CA: mov     ecx, [rsi+0A74h]
 * 0000000140BC96D0: mov     eax, [rsi+804h]
 * 0000000140BC96D6: mov     r10, [rsi+838h]
 * 0000000140BC96DD: sub     eax, ecx
 * 0000000140BC96DF: mov     r8, [rsi+0A78h]
 * 0000000140BC96E6: lea     rdx, [rcx+rsi]
 * 0000000140BC96EA: mov     ecx, eax
 * 0000000140BC96EC: shr     rcx, 3
 * 0000000140BC96F0: lea     r9, [rdx+rcx*8]
 * 0000000140BC96F4: jmp     short loc_140BC9717
 * 0000000140BC96F6: xor     [rdx], r8
 * 0000000140BC96F9: mov     rax, [rdx]
 * 0000000140BC96FC: movzx   ecx, r8b
 * 0000000140BC9700: xor     rax, r10
 * 0000000140BC9703: and     ecx, 3Fh
 * 0000000140BC9706: ror     r8, cl
 * 0000000140BC9709: add     r8, rax
 * 0000000140BC970C: xor     r8, 0EFAh
 * 0000000140BC9713: add     rdx, 8
 * 0000000140BC9717: cmp     rdx, r9
 * 0000000140BC971A: jnz     short loc_140BC96F6
 * 0000000140BC971C: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC9724: cmp     r8, [rsi+0A80h]
 * 0000000140BC972B: jz      loc_140BC95B4
 * 0000000140BC9731: mov     ecx, [rsi+804h]
 * 0000000140BC9737: mov     rax, [rsi+588h]
 * 0000000140BC973E: mov     [rax], rsi
 * 0000000140BC9741: mov     [rax+10h], ecx
 * 0000000140BC9744: mov     rcx, [rsi+0A80h]
 * 0000000140BC974B: cmp     [rsi+918h], edi
 * 0000000140BC9751: jnz     short loc_140BC9761
 * 0000000140BC9753: mov     rax, [rsi+588h]
 * 0000000140BC975A: xor     rcx, r8
 * 0000000140BC975D: mov     [rax+18h], rcx
 * 0000000140BC9761: xor     edx, edx
 * 0000000140BC9763: mov     r9d, 100h
 * 0000000140BC9769: mov     rcx, rsi
 * 0000000140BC976C: call    sub_140BD8384
 * 0000000140BC9771: jmp     loc_140BC95B4
 * 0000000140BC9776: mov     rbx, r13
 * 0000000140BC9779: mov     [rbp+8D0h+var_7A0], r15
 * 0000000140BC9780: mov     r13d, r15d
 * 0000000140BC9783: mov     r15, cr8
 * 0000000140BC9787: mov     [rbp+8D0h+arg_8], r15
 * 0000000140BC978E: mov     eax, 0Ch
 * 0000000140BC9793: mov     cr8, rax
 * 0000000140BC9797: mov     rax, [rsi+308h]
 * 0000000140BC979E: lea     rcx, [rbp+8D0h+var_7A0]
 * 0000000140BC97A5: call    KeGuardDispatchICall
 * 0000000140BC97AA: mov     r14, rax
 * 0000000140BC97AD: test    rax, rax
 * 0000000140BC97B0: jz      loc_140BC99A3
 * 0000000140BC97B6: xor     edi, edi
 * 0000000140BC97B8: lea     r15d, [rdi+1]
 * 0000000140BC97BC: mov     rax, [rsi+218h]
 * 0000000140BC97C3: lea     rdx, [rbp+8D0h+var_540]
 * 0000000140BC97CA: mov     rcx, r14
 * 0000000140BC97CD: add     r13d, r15d
 * 0000000140BC97D0: call    KeGuardDispatchICall
 * 0000000140BC97D5: test    rax, rax
 * 0000000140BC97D8: jnz     loc_140BC9976
 * 0000000140BC97DE: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BC97E8: jz      short loc_140BC9830
 * 0000000140BC97EA: mov     rcx, [rsi+0AC8h]
 * 0000000140BC97F1: lea     edx, [rax+30h]
 * 0000000140BC97F4: mov     r8, r12
 * 0000000140BC97F7: mov     rax, [rbx]
 * 0000000140BC97FA: add     edx, 0FFFFFFF8h
 * 0000000140BC97FD: mov     [rcx], rax
 * 0000000140BC9800: add     rbx, 8
 * 0000000140BC9804: add     rcx, 8
 * 0000000140BC9808: sub     r8, r15
 * 0000000140BC980B: jnz     short loc_140BC97F7
 * 0000000140BC980D: test    edx, edx
 * 0000000140BC980F: jz      short loc_140BC9829
 * 0000000140BC9811: mov     esi, 0FFFFFFFFh
 * 0000000140BC9816: mov     al, [rbx]
 * 0000000140BC9818: add     rbx, r15
 * 0000000140BC981B: mov     [rcx], al
 * 0000000140BC981D: add     rcx, r15
 * 0000000140BC9820: add     edx, esi
 * 0000000140BC9822: jnz     short loc_140BC9816
 * 0000000140BC9824: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC9829: mov     rbx, [rsi+0AC8h]
 * 0000000140BC9830: mov     [rbx+18h], r14
 * 0000000140BC9834: mov     rax, [rsi+588h]
 * 0000000140BC983B: mov     [rax], rbx
 * 0000000140BC983E: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140BC9845: mov     rax, [rsi+588h]
 * 0000000140BC984C: mov     [rax+8], r14
 * 0000000140BC9850: mov     dword ptr [rax+14h], 1000h
 * 0000000140BC9857: cmp     [rsi+918h], edi
 * 0000000140BC985D: jnz     loc_140BC9976
 * 0000000140BC9863: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC986D: add     rax, rsi
 * 0000000140BC9870: mov     [rsi+920h], rax
 * 0000000140BC9877: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC9881: add     rax, rbx
 * 0000000140BC9884: mov     [rsi+928h], rax
 * 0000000140BC988B: movsxd  rax, dword ptr [rbx]
 * 0000000140BC988E: mov     [rsi+930h], rax
 * 0000000140BC9895: mov     qword ptr [rsi+938h], 4
 * 0000000140BC98A0: mov     [rsi+918h], r15d
 * 0000000140BC98A7: mov     ecx, [rsi+9D8h]
 * 0000000140BC98AD: bt      ecx, 1Dh
 * 0000000140BC98B1: jb      loc_140BC9976
 * 0000000140BC98B7: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC98C1: jz      loc_140BC9976
 * 0000000140BC98C7: test    r15b, cl
 * 0000000140BC98CA: jz      loc_140BC9976
 * 0000000140BC98D0: mov     ecx, [rsi+0A74h]
 * 0000000140BC98D6: mov     eax, [rsi+804h]
 * 0000000140BC98DC: mov     r10, [rsi+838h]
 * 0000000140BC98E3: sub     eax, ecx
 * 0000000140BC98E5: mov     r8, [rsi+0A78h]
 * 0000000140BC98EC: lea     rdx, [rcx+rsi]
 * 0000000140BC98F0: mov     ecx, eax
 * 0000000140BC98F2: shr     rcx, 3
 * 0000000140BC98F6: lea     r9, [rdx+rcx*8]
 * 0000000140BC98FA: jmp     short loc_140BC991D
 * 0000000140BC98FC: xor     [rdx], r8
 * 0000000140BC98FF: mov     rax, [rdx]
 * 0000000140BC9902: movzx   ecx, r8b
 * 0000000140BC9906: xor     rax, r10
 * 0000000140BC9909: and     ecx, 3Fh
 * 0000000140BC990C: ror     r8, cl
 * 0000000140BC990F: add     r8, rax
 * 0000000140BC9912: xor     r8, 0EFAh
 * 0000000140BC9919: add     rdx, 8
 * 0000000140BC991D: cmp     rdx, r9
 * 0000000140BC9920: jnz     short loc_140BC98FC
 * 0000000140BC9922: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC992A: cmp     r8, [rsi+0A80h]
 * 0000000140BC9931: jz      short loc_140BC9976
 * 0000000140BC9933: mov     rax, [rsi+588h]
 * 0000000140BC993A: mov     ecx, [rsi+804h]
 * 0000000140BC9940: mov     [rax], rsi
 * 0000000140BC9943: mov     [rax+10h], ecx
 * 0000000140BC9946: mov     rax, [rsi+0A80h]
 * 0000000140BC994D: cmp     [rsi+918h], edi
 * 0000000140BC9953: jnz     short loc_140BC9966
 * 0000000140BC9955: mov     rcx, r8
 * 0000000140BC9958: xor     rcx, rax
 * 0000000140BC995B: mov     rax, [rsi+588h]
 * 0000000140BC9962: mov     [rax+18h], rcx
 * 0000000140BC9966: xor     edx, edx
 * 0000000140BC9968: mov     r9d, 100h
 * 0000000140BC996E: mov     rcx, rsi
 * 0000000140BC9971: call    sub_140BD8384
 * 0000000140BC9976: mov     rax, [rsi+308h]
 * 0000000140BC997D: lea     rcx, [rbp+8D0h+var_7A0]
 * 0000000140BC9984: call    KeGuardDispatchICall
 * 0000000140BC9989: mov     r14, rax
 * 0000000140BC998C: test    rax, rax
 * 0000000140BC998F: jnz     loc_140BC97BC
 * 0000000140BC9995: mov     r15, [rbp+8D0h+arg_8]
 * 0000000140BC999C: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC99A3: movzx   eax, r15b
 * 0000000140BC99A7: mov     cr8, rax
 * 0000000140BC99AB: jmp     loc_140BC9BBF
 * 0000000140BC99B0: mov     [rbp+8D0h+var_790], r15
 * 0000000140BC99B7: lea     rcx, [rbp+8D0h+var_790]
 * 0000000140BC99BE: mov     rax, [rsi+300h]
 * 0000000140BC99C5: mov     rbx, r13
 * 0000000140BC99C8: mov     r13d, r15d
 * 0000000140BC99CB: call    KeGuardDispatchICall
 * 0000000140BC99D0: mov     r14, rax
 * 0000000140BC99D3: test    rax, rax
 * 0000000140BC99D6: jz      loc_140BC9BBF
 * 0000000140BC99DC: mov     edi, 1
 * 0000000140BC99E1: mov     rax, [rsi+218h]
 * 0000000140BC99E8: lea     rdx, [rbp+8D0h+var_538]
 * 0000000140BC99EF: mov     rcx, r14
 * 0000000140BC99F2: add     r13d, edi
 * 0000000140BC99F5: call    KeGuardDispatchICall
 * 0000000140BC99FA: test    rax, rax
 * 0000000140BC99FD: jnz     loc_140BC9B99
 * 0000000140BC9A03: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BC9A0D: jz      short loc_140BC9A55
 * 0000000140BC9A0F: mov     rcx, [rsi+0AC8h]
 * 0000000140BC9A16: lea     edx, [rax+30h]
 * 0000000140BC9A19: mov     r8, r12
 * 0000000140BC9A1C: mov     rax, [rbx]
 * 0000000140BC9A1F: add     edx, 0FFFFFFF8h
 * 0000000140BC9A22: mov     [rcx], rax
 * 0000000140BC9A25: add     rbx, 8
 * 0000000140BC9A29: add     rcx, 8
 * 0000000140BC9A2D: sub     r8, rdi
 * 0000000140BC9A30: jnz     short loc_140BC9A1C
 * 0000000140BC9A32: test    edx, edx
 * 0000000140BC9A34: jz      short loc_140BC9A4E
 * 0000000140BC9A36: mov     esi, 0FFFFFFFFh
 * 0000000140BC9A3B: mov     al, [rbx]
 * 0000000140BC9A3D: add     rbx, rdi
 * 0000000140BC9A40: mov     [rcx], al
 * 0000000140BC9A42: add     rcx, rdi
 * 0000000140BC9A45: add     edx, esi
 * 0000000140BC9A47: jnz     short loc_140BC9A3B
 * 0000000140BC9A49: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC9A4E: mov     rbx, [rsi+0AC8h]
 * 0000000140BC9A55: mov     [rbx+18h], r14
 * 0000000140BC9A59: mov     rax, [rsi+588h]
 * 0000000140BC9A60: mov     [rax], rbx
 * 0000000140BC9A63: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140BC9A6A: mov     rax, [rsi+588h]
 * 0000000140BC9A71: mov     [rax+8], r14
 * 0000000140BC9A75: mov     dword ptr [rax+14h], 1000h
 * 0000000140BC9A7C: cmp     [rsi+918h], r15d
 * 0000000140BC9A83: jnz     loc_140BC9B99
 * 0000000140BC9A89: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC9A93: add     rax, rsi
 * 0000000140BC9A96: mov     [rsi+920h], rax
 * 0000000140BC9A9D: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC9AA7: add     rax, rbx
 * 0000000140BC9AAA: mov     [rsi+928h], rax
 * 0000000140BC9AB1: movsxd  rax, dword ptr [rbx]
 * 0000000140BC9AB4: mov     [rsi+930h], rax
 * 0000000140BC9ABB: mov     qword ptr [rsi+938h], 3
 * 0000000140BC9AC6: mov     [rsi+918h], edi
 * 0000000140BC9ACC: mov     ecx, [rsi+9D8h]
 * 0000000140BC9AD2: bt      ecx, 1Dh
 * 0000000140BC9AD6: jb      loc_140BC9B99
 * 0000000140BC9ADC: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC9AE6: jz      loc_140BC9B99
 * 0000000140BC9AEC: test    dil, cl
 * 0000000140BC9AEF: jz      loc_140BC9B99
 * 0000000140BC9AF5: mov     ecx, [rsi+0A74h]
 * 0000000140BC9AFB: mov     eax, [rsi+804h]
 * 0000000140BC9B01: mov     r10, [rsi+838h]
 * 0000000140BC9B08: sub     eax, ecx
 * 0000000140BC9B0A: mov     r8, [rsi+0A78h]
 * 0000000140BC9B11: lea     rdx, [rcx+rsi]
 * 0000000140BC9B15: mov     ecx, eax
 * 0000000140BC9B17: shr     rcx, 3
 * 0000000140BC9B1B: lea     r9, [rdx+rcx*8]
 * 0000000140BC9B1F: jmp     short loc_140BC9B42
 * 0000000140BC9B21: xor     [rdx], r8
 * 0000000140BC9B24: mov     rax, [rdx]
 * 0000000140BC9B27: movzx   ecx, r8b
 * 0000000140BC9B2B: xor     rax, r10
 * 0000000140BC9B2E: and     ecx, 3Fh
 * 0000000140BC9B31: ror     r8, cl
 * 0000000140BC9B34: add     r8, rax
 * 0000000140BC9B37: xor     r8, 0EFAh
 * 0000000140BC9B3E: add     rdx, 8
 * 0000000140BC9B42: cmp     rdx, r9
 * 0000000140BC9B45: jnz     short loc_140BC9B21
 * 0000000140BC9B47: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC9B4F: cmp     r8, [rsi+0A80h]
 * 0000000140BC9B56: jz      short loc_140BC9B99
 * 0000000140BC9B58: mov     ecx, [rsi+804h]
 * 0000000140BC9B5E: mov     rax, [rsi+588h]
 * 0000000140BC9B65: mov     [rax], rsi
 * 0000000140BC9B68: mov     [rax+10h], ecx
 * 0000000140BC9B6B: mov     rcx, [rsi+0A80h]
 * 0000000140BC9B72: cmp     [rsi+918h], r15d
 * 0000000140BC9B79: jnz     short loc_140BC9B89
 * 0000000140BC9B7B: mov     rax, [rsi+588h]
 * 0000000140BC9B82: xor     rcx, r8
 * 0000000140BC9B85: mov     [rax+18h], rcx
 * 0000000140BC9B89: xor     edx, edx
 * 0000000140BC9B8B: mov     r9d, 100h
 * 0000000140BC9B91: mov     rcx, rsi
 * 0000000140BC9B94: call    sub_140BD8384
 * 0000000140BC9B99: mov     rax, [rsi+300h]
 * 0000000140BC9BA0: lea     rcx, [rbp+8D0h+var_790]
 * 0000000140BC9BA7: call    KeGuardDispatchICall
 * 0000000140BC9BAC: mov     r14, rax
 * 0000000140BC9BAF: test    rax, rax
 * 0000000140BC9BB2: jnz     loc_140BC99E1
 * 0000000140BC9BB8: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC9BBF: mov     ebx, 1
 * 0000000140BC9BC4: shl     r13d, 0Ch
 * 0000000140BC9BC8: xor     r15d, r15d
 * 0000000140BC9BCB: add     [rsi+848h], r13d
 * 0000000140BC9BD2: mov     eax, [rsi+848h]
 * 0000000140BC9BD8: add     [rsi+844h], ebx
 * 0000000140BC9BDE: cmp     eax, [rsi+84Ch]
 * 0000000140BC9BE4: jge     short loc_140BC9C05
 * 0000000140BC9BE6: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BC9BEB: lea     r12d, [r15+6]
 * 0000000140BC9BEF: mov     r11d, 1000h
 * 0000000140BC9BF5: lea     r14d, [r15+5]
 * 0000000140BC9BF9: jmp     loc_140BC6BBD
 * 0000000140BC9BFE: mov     [rsi+844h], r15d
 * 0000000140BC9C05: mov     [rsp+9D0h+var_970], rsi
 * 0000000140BC9C0A: jmp     loc_140BC3B5D
 * 0000000140BC9C0F: mov     edx, [r13+2Ch]
 * 0000000140BC9C13: lea     rcx, [rbp+8D0h+var_2F8]
 * 0000000140BC9C1A: mov     rax, [rsi+1B0h]
 * 0000000140BC9C21: mov     ebx, [r13+28h]
 * 0000000140BC9C25: call    KeGuardDispatchICall
 * 0000000140BC9C2A: mov     rax, [rsi+1E0h]
 * 0000000140BC9C31: lea     rdx, [rbp+8D0h+var_2E8]
 * 0000000140BC9C38: lea     rcx, [rbp+8D0h+var_2F8]
 * 0000000140BC9C3F: call    KeGuardDispatchICall
 * 0000000140BC9C44: test    ebx, ebx
 * 0000000140BC9C46: mov     rbx, cr4
 * 0000000140BC9C49: jnz     short loc_140BC9C4E
 * 0000000140BC9C4B: mov     rbx, cr0
 * 0000000140BC9C4E: mov     rax, [rsi+1A8h]
 * 0000000140BC9C55: lea     rcx, [rbp+8D0h+var_2E8]
 * 0000000140BC9C5C: call    KeGuardDispatchICall
 * 0000000140BC9C61: mov     r8, [r13+18h]
 * 0000000140BC9C65: mov     rdx, [r13+20h]
 * 0000000140BC9C69: and     r8, rbx
 * 0000000140BC9C6C: cmp     r8, rdx
 * 0000000140BC9C6F: jz      loc_140BC3D97
 * 0000000140BC9C75: mov     ecx, [r13+2Ch]
 * 0000000140BC9C79: mov     eax, [r13+28h]
 * 0000000140BC9C7D: shl     rcx, 20h
 * 0000000140BC9C81: or      rcx, rax
 * 0000000140BC9C84: cmp     [rsi+918h], r15d
 * 0000000140BC9C8B: jnz     loc_140BC3D97
 * 0000000140BC9C91: mov     rax, [rsi+588h]
 * 0000000140BC9C98: xor     rdx, r8
 * 0000000140BC9C9B: mov     [rax+18h], rdx
 * 0000000140BC9C9F: cmp     [rsi+918h], r15d
 * 0000000140BC9CA6: jnz     loc_140BC3D97
 * 0000000140BC9CAC: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC9CB6: mov     ebx, 1
 * 0000000140BC9CBB: add     rax, rsi
 * 0000000140BC9CBE: mov     [rsi+920h], rax
 * 0000000140BC9CC5: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC9CCF: add     rax, r13
 * 0000000140BC9CD2: mov     [rsi+928h], rax
 * 0000000140BC9CD9: movsxd  rax, dword ptr [r13+0]
 * 0000000140BC9CDD: mov     [rsi+930h], rax
 * 0000000140BC9CE4: mov     [rsi+938h], rcx
 * 0000000140BC9CEB: mov     [rsi+918h], ebx
 * 0000000140BC9CF1: mov     ecx, [rsi+9D8h]
 * 0000000140BC9CF7: bt      ecx, 1Dh
 * 0000000140BC9CFB: jb      loc_140BCE398
 * 0000000140BC9D01: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC9D0B: jz      loc_140BCE398
 * 0000000140BC9D11: test    bl, cl
 * 0000000140BC9D13: jz      loc_140BCE398
 * 0000000140BC9D19: mov     ecx, [rsi+0A74h]
 * 0000000140BC9D1F: mov     eax, [rsi+804h]
 * 0000000140BC9D25: mov     r10, [rsi+838h]
 * 0000000140BC9D2C: sub     eax, ecx
 * 0000000140BC9D2E: mov     r8, [rsi+0A78h]
 * 0000000140BC9D35: lea     rdx, [rcx+rsi]
 * 0000000140BC9D39: mov     ecx, eax
 * 0000000140BC9D3B: shr     rcx, 3
 * 0000000140BC9D3F: lea     r9, [rdx+rcx*8]
 * 0000000140BC9D43: jmp     short loc_140BC9D66
 * 0000000140BC9D45: xor     [rdx], r8
 * 0000000140BC9D48: mov     rax, [rdx]
 * 0000000140BC9D4B: movzx   ecx, r8b
 * 0000000140BC9D4F: xor     rax, r10
 * 0000000140BC9D52: and     ecx, 3Fh
 * 0000000140BC9D55: ror     r8, cl
 * 0000000140BC9D58: add     r8, rax
 * 0000000140BC9D5B: xor     r8, 0EFAh
 * 0000000140BC9D62: add     rdx, 8
 * 0000000140BC9D66: cmp     rdx, r9
 * 0000000140BC9D69: jnz     short loc_140BC9D45
 * 0000000140BC9D6B: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC9D73: cmp     r8, [rsi+0A80h]
 * 0000000140BC9D7A: jz      loc_140BCE398
 * 0000000140BC9D80: mov     ecx, [rsi+804h]
 * 0000000140BC9D86: mov     rax, [rsi+588h]
 * 0000000140BC9D8D: mov     [rax], rsi
 * 0000000140BC9D90: mov     [rax+10h], ecx
 * 0000000140BC9D93: mov     rcx, [rsi+0A80h]
 * 0000000140BC9D9A: cmp     [rsi+918h], r15d
 * 0000000140BC9DA1: jnz     short loc_140BC9DB1
 * 0000000140BC9DA3: xor     rcx, r8
 * 0000000140BC9DA6: mov     rax, [rsi+588h]
 * 0000000140BC9DAD: mov     [rax+18h], rcx
 * 0000000140BC9DB1: xor     edx, edx
 * 0000000140BC9DB3: mov     r9d, 100h
 * 0000000140BC9DB9: mov     rcx, rsi
 * 0000000140BC9DBC: call    sub_140BD8384
 * 0000000140BC9DC1: jmp     loc_140BCE398
 * 0000000140BC9DC6: mov     r9, [r13+8]
 * 0000000140BC9DCA: mov     r8d, [rsi+844h]
 * 0000000140BC9DD1: mov     [rbp+8D0h+var_920], r9
 * 0000000140BC9DD5: lea     rax, [r8+r8*2]
 * 0000000140BC9DD9: lea     rcx, [r9+rax*4]
 * 0000000140BC9DDD: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140BC9DE7: lea     r11, [rcx+0Ch]
 * 0000000140BC9DEB: mov     [rbp+8D0h+arg_8], rcx
 * 0000000140BC9DF2: mov     ecx, [r13+24h]
 * 0000000140BC9DF6: mul     rcx
 * 0000000140BC9DF9: mov     [rsp+9D0h+var_968], r11
 * 0000000140BC9DFE: mov     r10, rdx
 * 0000000140BC9E01: shr     r10, 3
 * 0000000140BC9E05: mov     eax, r10d
 * 0000000140BC9E08: mov     [rbp+8D0h+var_908], r10
 * 0000000140BC9E0C: lea     rcx, [rax+rax*2]
 * 0000000140BC9E10: lea     rax, [r9+rcx*4]
 * 0000000140BC9E14: mov     [rbp+8D0h+var_900], rax
 * 0000000140BC9E18: lea     rax, [r13+30h]
 * 0000000140BC9E1C: lea     r12, [r8+rax]
 * 0000000140BC9E20: mov     [rsp+9D0h+var_978], r12
 * 0000000140BC9E25: lea     r9d, [r10-1]
 * 0000000140BC9E29: test    r10d, r10d
 * 0000000140BC9E2C: jz      short loc_140BC9E3E
 * 0000000140BC9E2E: mov     edx, r9d
 * 0000000140BC9E31: add     rdx, 7
 * 0000000140BC9E35: and     rdx, 0FFFFFFFFFFFFFFF8h
 * 0000000140BC9E39: add     rdx, rax
 * 0000000140BC9E3C: jmp     short loc_140BC9E41
 * 0000000140BC9E3E: mov     rdx, rax
 * 0000000140BC9E41: movzx   eax, word ptr [r13+28h]
 * 0000000140BC9E46: mov     [rbp+8D0h+var_940], rdx
 * 0000000140BC9E4A: lea     rcx, [rax+rax*2]
 * 0000000140BC9E4E: lea     rax, [rdx+rcx*8]
 * 0000000140BC9E52: mov     [rbp+8D0h+var_930], rax
 * 0000000140BC9E56: test    r10d, r10d
 * 0000000140BC9E59: jz      loc_140BCA0E7
 * 0000000140BC9E5F: cmp     r8d, r9d
 * 0000000140BC9E62: jnb     loc_140BCA0DA
 * 0000000140BC9E68: mov     rdi, [rbp+8D0h+arg_8]
 * 0000000140BC9E6F: cmp     [r12], r15b
 * 0000000140BC9E73: jl      loc_140BCA074
 * 0000000140BC9E79: mov     eax, [rdi+4]
 * 0000000140BC9E7C: mov     r14d, [r11]
 * 0000000140BC9E7F: mov     r15d, eax
 * 0000000140BC9E82: add     r15, [r13+18h]
 * 0000000140BC9E86: sub     r14d, eax
 * 0000000140BC9E89: add     [rsi+848h], r14d
 * 0000000140BC9E90: mov     r9, r15
 * 0000000140BC9E93: mov     r11d, [rsi+834h]
 * 0000000140BC9E9A: mov     rax, r15
 * 0000000140BC9E9D: mov     rbx, [rsi+838h]
 * 0000000140BC9EA4: mov     ecx, r14d
 * 0000000140BC9EA7: add     rcx, r15
 * 0000000140BC9EAA: mov     [rbp+8D0h+var_950], r15
 * 0000000140BC9EAE: cmp     r15, rcx
 * 0000000140BC9EB1: jnb     short loc_140BC9EC3
 * 0000000140BC9EB3: mov     edx, 40h ; '@'
 * 0000000140BC9EB8: prefetchnta byte ptr [rax]
 * 0000000140BC9EBB: add     rax, rdx
 * 0000000140BC9EBE: cmp     rax, rcx
 * 0000000140BC9EC1: jb      short loc_140BC9EB8
 * 0000000140BC9EC3: mov     r10d, r14d
 * 0000000140BC9EC6: mov     r8, rbx
 * 0000000140BC9EC9: shr     r10d, 7
 * 0000000140BC9ECD: mov     r13d, 1
 * 0000000140BC9ED3: test    r10d, r10d
 * 0000000140BC9ED6: jz      short loc_140BC9F42
 * 0000000140BC9ED8: mov     esi, 0FFFFFFFFh
 * 0000000140BC9EDD: mov     r12, 7010008004002001h
 * 0000000140BC9EE7: mov     eax, 8
 * 0000000140BC9EEC: xor     r8, [r9]
 * 0000000140BC9EEF: mov     ecx, r11d
 * 0000000140BC9EF2: rol     r8, cl
 * 0000000140BC9EF5: xor     r8, [r9+8]
 * 0000000140BC9EF9: add     r9, 10h
 * 0000000140BC9EFD: rol     r8, cl
 * 0000000140BC9F00: sub     rax, r13
 * 0000000140BC9F03: jnz     short loc_140BC9EEC
 * 0000000140BC9F05: mov     rcx, r9
 * 0000000140BC9F08: sub     rcx, r15
 * 0000000140BC9F0B: xor     rcx, rbx
 * 0000000140BC9F0E: mov     rax, rcx
 * 0000000140BC9F11: rol     rax, 11h
 * 0000000140BC9F15: xor     rcx, rax
 * 0000000140BC9F18: mov     rax, r12
 * 0000000140BC9F1B: mul     rcx
 * 0000000140BC9F1E: xor     r11d, edx
 * 0000000140BC9F21: mov     [rbp+8D0h+var_530], rdx
 * 0000000140BC9F28: xor     r11d, eax
 * 0000000140BC9F2B: and     r11d, 3Fh
 * 0000000140BC9F2F: cmovz   r11d, r13d
 * 0000000140BC9F33: add     r10d, esi
 * 0000000140BC9F36: jnz     short loc_140BC9EE7
 * 0000000140BC9F38: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC9F3D: mov     r12, [rsp+9D0h+var_978]
 * 0000000140BC9F42: mov     edx, r14d
 * 0000000140BC9F45: and     edx, 7Fh
 * 0000000140BC9F48: cmp     edx, 8
 * 0000000140BC9F4B: jb      short loc_140BC9F68
 * 0000000140BC9F4D: mov     eax, edx
 * 0000000140BC9F4F: shr     rax, 3
 * 0000000140BC9F53: xor     r8, [r9]
 * 0000000140BC9F56: mov     ecx, r11d
 * 0000000140BC9F59: rol     r8, cl
 * 0000000140BC9F5C: add     r9, 8
 * 0000000140BC9F60: add     edx, 0FFFFFFF8h
 * 0000000140BC9F63: sub     rax, r13
 * 0000000140BC9F66: jnz     short loc_140BC9F53
 * 0000000140BC9F68: xor     r10d, r10d
 * 0000000140BC9F6B: test    edx, edx
 * 0000000140BC9F6D: jz      short loc_140BC9F8F
 * 0000000140BC9F6F: mov     r12d, 0FFFFFFFFh
 * 0000000140BC9F75: movzx   eax, byte ptr [r9]
 * 0000000140BC9F79: mov     ecx, r11d
 * 0000000140BC9F7C: xor     r8, rax
 * 0000000140BC9F7F: add     r9, r13
 * 0000000140BC9F82: rol     r8, cl
 * 0000000140BC9F85: add     edx, r12d
 * 0000000140BC9F88: jnz     short loc_140BC9F75
 * 0000000140BC9F8A: mov     r12, [rsp+9D0h+var_978]
 * 0000000140BC9F8F: mov     rax, r8
 * 0000000140BC9F92: jmp     short loc_140BC9F97
 * 0000000140BC9F94: xor     r8b, al
 * 0000000140BC9F97: shr     rax, 7
 * 0000000140BC9F9B: test    rax, rax
 * 0000000140BC9F9E: jnz     short loc_140BC9F94
 * 0000000140BC9FA0: movzx   eax, byte ptr [r12]
 * 0000000140BC9FA5: movzx   r13d, r8b
 * 0000000140BC9FA9: and     eax, 7Fh
 * 0000000140BC9FAC: and     r13d, 7Fh
 * 0000000140BC9FB0: cmp     r13d, eax
 * 0000000140BC9FB3: jz      loc_140BCA057
 * 0000000140BC9FB9: mov     ecx, r14d
 * 0000000140BC9FBC: test    r14d, r14d
 * 0000000140BC9FBF: jz      loc_140BCA122
 * 0000000140BC9FC5: mov     eax, [rsi+9DCh]
 * 0000000140BC9FCB: mov     edx, 40h ; '@'
 * 0000000140BC9FD0: test    dl, al
 * 0000000140BC9FD2: jz      loc_140BCA122
 * 0000000140BC9FD8: mov     r14, cr8
 * 0000000140BC9FDC: mov     rbx, r15
 * 0000000140BC9FDF: lea     r12, [r15-1]
 * 0000000140BC9FE3: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140BC9FEA: add     r12, rcx
 * 0000000140BC9FED: or      r12, 0FFFh
 * 0000000140BC9FF4: lea     r15, [rbx-1]
 * 0000000140BC9FF8: mov     eax, 2
 * 0000000140BC9FFD: mov     cr8, rax
 * 0000000140BCA001: mov     rax, [rsi+468h]
 * 0000000140BCA008: xor     edx, edx
 * 0000000140BCA00A: mov     rcx, rbx
 * 0000000140BCA00D: call    KeGuardDispatchICall
 * 0000000140BCA012: cmp     eax, 0C000022Dh
 * 0000000140BCA017: jnz     short loc_140BCA02F
 * 0000000140BCA019: mov     eax, 1
 * 0000000140BCA01E: cmp     r14b, al
 * 0000000140BCA021: ja      short loc_140BCA03A
 * 0000000140BCA023: movzx   eax, r14b
 * 0000000140BCA027: mov     cr8, rax
 * 0000000140BCA02B: mov     al, [rbx]
 * 0000000140BCA02D: jmp     short loc_140BC9FF8
 * 0000000140BCA02F: xor     r10d, r10d
 * 0000000140BCA032: test    eax, eax
 * 0000000140BCA034: js      loc_140BCA111
 * 0000000140BCA03A: mov     eax, 1000h
 * 0000000140BCA03F: add     rbx, rax
 * 0000000140BCA042: add     r15, rax
 * 0000000140BCA045: cmp     r15, r12
 * 0000000140BCA048: jnz     short loc_140BCA001
 * 0000000140BCA04A: movzx   eax, r14b
 * 0000000140BCA04E: mov     cr8, rax
 * 0000000140BCA052: mov     r12, [rsp+9D0h+var_978]
 * 0000000140BCA057: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BCA05C: mov     ebx, 1
 * 0000000140BCA061: xor     r15d, r15d
 * 0000000140BCA064: mov     r11, [rsp+9D0h+var_968]
 * 0000000140BCA069: mov     ecx, 40h ; '@'
 * 0000000140BCA06E: add     [rsi+848h], ecx
 * 0000000140BCA074: mov     eax, 0Ch
 * 0000000140BCA079: add     r12, rbx
 * 0000000140BCA07C: add     r11, rax
 * 0000000140BCA07F: mov     [rsp+9D0h+var_978], r12
 * 0000000140BCA084: add     rdi, rax
 * 0000000140BCA087: mov     [rsp+9D0h+var_968], r11
 * 0000000140BCA08C: cmp     r11, [rbp+8D0h+var_900]
 * 0000000140BCA090: jnb     short loc_140BCA0A4
 * 0000000140BCA092: mov     eax, [rsi+84Ch]
 * 0000000140BCA098: cmp     [rsi+848h], eax
 * 0000000140BCA09E: jl      loc_140BC9E6F
 * 0000000140BCA0A4: sub     rdi, [rbp+8D0h+var_920]
 * 0000000140BCA0A8: mov     rax, 2AAAAAAAAAAAAAABh
 * 0000000140BCA0B2: mov     r10, [rbp+8D0h+var_908]
 * 0000000140BCA0B6: imul    rdi
 * 0000000140BCA0B9: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BCA0C0: sar     rdx, 1
 * 0000000140BCA0C3: mov     rax, rdx
 * 0000000140BCA0C6: shr     rax, 3Fh
 * 0000000140BCA0CA: add     rdx, rax
 * 0000000140BCA0CD: mov     [rsi+844h], edx
 * 0000000140BCA0D3: mov     r8d, edx
 * 0000000140BCA0D6: mov     rdx, [rbp+8D0h+var_940]
 * 0000000140BCA0DA: lea     eax, [r10-1]
 * 0000000140BCA0DE: cmp     r8d, eax
 * 0000000140BCA0E1: jb      loc_140BC3B5D
 * 0000000140BCA0E7: mov     eax, [rsi+84Ch]
 * 0000000140BCA0ED: cmp     [rsi+848h], eax
 * 0000000140BCA0F3: jge     loc_140BC3B5D
 * 0000000140BCA0F9: test    r10d, r10d
 * 0000000140BCA0FC: jz      loc_140BCA277
 * 0000000140BCA102: sub     r8d, r10d
 * 0000000140BCA105: add     r8d, ebx
 * 0000000140BCA108: lea     rcx, [r8+r8*2]
 * 0000000140BCA10C: jmp     loc_140BCA27E
 * 0000000140BCA111: movzx   eax, r14b
 * 0000000140BCA115: mov     cr8, rax
 * 0000000140BCA119: mov     r15, [rbp+8D0h+var_950]
 * 0000000140BCA11D: mov     r12, [rsp+9D0h+var_978]
 * 0000000140BCA122: movzx   eax, byte ptr [r12]
 * 0000000140BCA127: and     eax, 7Fh
 * 0000000140BCA12A: cmp     [rsi+918h], r10d
 * 0000000140BCA131: jnz     loc_140BCA057
 * 0000000140BCA137: mov     ecx, r13d
 * 0000000140BCA13A: xor     rcx, rax
 * 0000000140BCA13D: mov     rax, [rsi+588h]
 * 0000000140BCA144: mov     [rax+18h], rcx
 * 0000000140BCA148: cmp     [rsi+918h], r10d
 * 0000000140BCA14F: jnz     loc_140BCA057
 * 0000000140BCA155: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BCA15A: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BCA164: add     rax, rsi
 * 0000000140BCA167: mov     ebx, 1
 * 0000000140BCA16C: mov     [rsi+920h], rax
 * 0000000140BCA173: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BCA17D: add     rax, r13
 * 0000000140BCA180: mov     [rsi+928h], rax
 * 0000000140BCA187: movsxd  rax, dword ptr [r13+0]
 * 0000000140BCA18B: mov     [rsi+930h], rax
 * 0000000140BCA192: mov     [rsi+938h], r15
 * 0000000140BCA199: mov     [rsi+918h], ebx
 * 0000000140BCA19F: mov     ecx, [rsi+9D8h]
 * 0000000140BCA1A5: bt      ecx, 1Dh
 * 0000000140BCA1A9: jb      loc_140BCA061
 * 0000000140BCA1AF: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCA1B9: jz      loc_140BCA061
 * 0000000140BCA1BF: test    bl, cl
 * 0000000140BCA1C1: jz      loc_140BCA061
 * 0000000140BCA1C7: mov     ecx, [rsi+0A74h]
 * 0000000140BCA1CD: mov     eax, [rsi+804h]
 * 0000000140BCA1D3: mov     r10, [rsi+838h]
 * 0000000140BCA1DA: sub     eax, ecx
 * 0000000140BCA1DC: mov     r8, [rsi+0A78h]
 * 0000000140BCA1E3: lea     rdx, [rcx+rsi]
 * 0000000140BCA1E7: mov     ecx, eax
 * 0000000140BCA1E9: shr     rcx, 3
 * 0000000140BCA1ED: lea     r9, [rdx+rcx*8]
 * 0000000140BCA1F1: jmp     short loc_140BCA214
 * 0000000140BCA1F3: xor     [rdx], r8
 * 0000000140BCA1F6: mov     rax, [rdx]
 * 0000000140BCA1F9: movzx   ecx, r8b
 * 0000000140BCA1FD: xor     rax, r10
 * 0000000140BCA200: and     ecx, 3Fh
 * 0000000140BCA203: ror     r8, cl
 * 0000000140BCA206: add     r8, rax
 * 0000000140BCA209: xor     r8, 0EFAh
 * 0000000140BCA210: add     rdx, 8
 * 0000000140BCA214: cmp     rdx, r9
 * 0000000140BCA217: jnz     short loc_140BCA1F3
 * 0000000140BCA219: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCA221: cmp     r8, [rsi+0A80h]
 * 0000000140BCA228: jz      loc_140BCA061
 * 0000000140BCA22E: mov     ecx, [rsi+804h]
 * 0000000140BCA234: xor     r15d, r15d
 * 0000000140BCA237: mov     rax, [rsi+588h]
 * 0000000140BCA23E: mov     [rax], rsi
 * 0000000140BCA241: mov     [rax+10h], ecx
 * 0000000140BCA244: mov     rcx, [rsi+0A80h]
 * 0000000140BCA24B: cmp     [rsi+918h], r15d
 * 0000000140BCA252: jnz     short loc_140BCA262
 * 0000000140BCA254: mov     rax, [rsi+588h]
 * 0000000140BCA25B: xor     rcx, r8
 * 0000000140BCA25E: mov     [rax+18h], rcx
 * 0000000140BCA262: xor     edx, edx
 * 0000000140BCA264: mov     r9d, 100h
 * 0000000140BCA26A: mov     rcx, rsi
 * 0000000140BCA26D: call    sub_140BD8384
 * 0000000140BCA272: jmp     loc_140BCA064
 * 0000000140BCA277: mov     eax, r8d
 * 0000000140BCA27A: lea     rcx, [rax+rax*2]
 * 0000000140BCA27E: lea     rcx, [rdx+rcx*8]
 * 0000000140BCA282: mov     [rbp+8D0h+var_940], rcx
 * 0000000140BCA286: mov     rdi, [rsp+9D0h+var_980]
 * 0000000140BCA28B: lea     r15, [rcx+8]
 * 0000000140BCA28F: mov     eax, 2
 * 0000000140BCA294: mov     [rsp+9D0h+var_978], r15
 * 0000000140BCA299: xor     edx, edx
 * 0000000140BCA29B: mov     [rsp+9D0h+var_968], rax
 * 0000000140BCA2A0: mov     r13d, eax
 * 0000000140BCA2A3: lea     eax, [rdx+0Ch]
 * 0000000140BCA2A6: cmp     [r15], edx
 * 0000000140BCA2A9: jl      loc_140BCA5FA
 * 0000000140BCA2AF: mov     eax, [r15-8]
 * 0000000140BCA2B3: mov     r14d, [r15-4]
 * 0000000140BCA2B7: mov     r12d, eax
 * 0000000140BCA2BA: add     r12, [rdi+18h]
 * 0000000140BCA2BE: sub     r14d, eax
 * 0000000140BCA2C1: add     [rsi+848h], r14d
 * 0000000140BCA2C8: mov     r8, r12
 * 0000000140BCA2CB: mov     r10d, [rsi+834h]
 * 0000000140BCA2D2: mov     rax, r12
 * 0000000140BCA2D5: mov     r11, [rsi+838h]
 * 0000000140BCA2DC: mov     ecx, r14d
 * 0000000140BCA2DF: add     rcx, r12
 * 0000000140BCA2E2: mov     [rbp+8D0h+var_950], r12
 * 0000000140BCA2E6: cmp     r12, rcx
 * 0000000140BCA2E9: jnb     short loc_140BCA2FC
 * 0000000140BCA2EB: mov     r9d, 40h ; '@'
 * 0000000140BCA2F1: prefetchnta byte ptr [rax]
 * 0000000140BCA2F4: add     rax, r9
 * 0000000140BCA2F7: cmp     rax, rcx
 * 0000000140BCA2FA: jb      short loc_140BCA2F1
 * 0000000140BCA2FC: mov     r9d, r14d
 * 0000000140BCA2FF: mov     rbx, r11
 * 0000000140BCA302: shr     r9d, 7
 * 0000000140BCA306: test    r9d, r9d
 * 0000000140BCA309: jz      short loc_140BCA37F
 * 0000000140BCA30B: mov     esi, 0FFFFFFFFh
 * 0000000140BCA310: mov     r13d, 1
 * 0000000140BCA316: mov     r15, 7010008004002001h
 * 0000000140BCA320: mov     eax, 8
 * 0000000140BCA325: xor     rbx, [r8]
 * 0000000140BCA328: mov     ecx, r10d
 * 0000000140BCA32B: rol     rbx, cl
 * 0000000140BCA32E: xor     rbx, [r8+8]
 * 0000000140BCA332: add     r8, 10h
 * 0000000140BCA336: rol     rbx, cl
 * 0000000140BCA339: sub     rax, r13
 * 0000000140BCA33C: jnz     short loc_140BCA325
 * 0000000140BCA33E: mov     rcx, r8
 * 0000000140BCA341: sub     rcx, r12
 * 0000000140BCA344: xor     rcx, r11
 * 0000000140BCA347: mov     rax, rcx
 * 0000000140BCA34A: rol     rax, 11h
 * 0000000140BCA34E: xor     rcx, rax
 * 0000000140BCA351: mov     rax, r15
 * 0000000140BCA354: mul     rcx
 * 0000000140BCA357: xor     eax, edx
 * 0000000140BCA359: mov     [rbp+8D0h+var_528], rdx
 * 0000000140BCA360: xor     r10d, eax
 * 0000000140BCA363: and     r10d, 3Fh
 * 0000000140BCA367: cmovz   r10d, r13d
 * 0000000140BCA36B: add     r9d, esi
 * 0000000140BCA36E: jnz     short loc_140BCA320
 * 0000000140BCA370: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BCA375: mov     r15, [rsp+9D0h+var_978]
 * 0000000140BCA37A: mov     r13, [rsp+9D0h+var_968]
 * 0000000140BCA37F: mov     edx, r14d
 * 0000000140BCA382: mov     r9d, 1
 * 0000000140BCA388: and     edx, 7Fh
 * 0000000140BCA38B: cmp     edx, 8
 * 0000000140BCA38E: jb      short loc_140BCA3AB
 * 0000000140BCA390: mov     eax, edx
 * 0000000140BCA392: shr     rax, 3
 * 0000000140BCA396: xor     rbx, [r8]
 * 0000000140BCA399: mov     ecx, r10d
 * 0000000140BCA39C: rol     rbx, cl
 * 0000000140BCA39F: add     r8, 8
 * 0000000140BCA3A3: add     edx, 0FFFFFFF8h
 * 0000000140BCA3A6: sub     rax, r9
 * 0000000140BCA3A9: jnz     short loc_140BCA396
 * 0000000140BCA3AB: xor     r11d, r11d
 * 0000000140BCA3AE: test    edx, edx
 * 0000000140BCA3B0: jz      short loc_140BCA3D2
 * 0000000140BCA3B2: mov     r15d, 0FFFFFFFFh
 * 0000000140BCA3B8: movzx   eax, byte ptr [r8]
 * 0000000140BCA3BC: mov     ecx, r10d
 * 0000000140BCA3BF: xor     rbx, rax
 * 0000000140BCA3C2: add     r8, r9
 * 0000000140BCA3C5: rol     rbx, cl
 * 0000000140BCA3C8: add     edx, r15d
 * 0000000140BCA3CB: jnz     short loc_140BCA3B8
 * 0000000140BCA3CD: mov     r15, [rsp+9D0h+var_978]
 * 0000000140BCA3D2: mov     rax, rbx
 * 0000000140BCA3D5: jmp     short loc_140BCA3D9
 * 0000000140BCA3D7: xor     ebx, eax
 * 0000000140BCA3D9: shr     rax, 1Fh
 * 0000000140BCA3DD: test    rax, rax
 * 0000000140BCA3E0: jnz     short loc_140BCA3D7
 * 0000000140BCA3E2: mov     eax, [r15]
 * 0000000140BCA3E5: btr     ebx, 1Fh
 * 0000000140BCA3E9: btr     eax, 1Fh
 * 0000000140BCA3ED: cmp     ebx, eax
 * 0000000140BCA3EF: jz      loc_140BCA602
 * 0000000140BCA3F5: mov     ecx, r14d
 * 0000000140BCA3F8: test    r14d, r14d
 * 0000000140BCA3FB: jz      loc_140BCA4B7
 * 0000000140BCA401: mov     eax, [rsi+9DCh]
 * 0000000140BCA407: mov     edx, 40h ; '@'
 * 0000000140BCA40C: test    dl, al
 * 0000000140BCA40E: jz      loc_140BCA4B7
 * 0000000140BCA414: mov     r15, cr8
 * 0000000140BCA418: mov     r14, r12
 * 0000000140BCA41B: lea     r13, [r12-1]
 * 0000000140BCA420: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140BCA427: add     r13, rcx
 * 0000000140BCA42A: or      r13, 0FFFh
 * 0000000140BCA431: lea     r12, [r14-1]
 * 0000000140BCA435: mov     eax, 2
 * 0000000140BCA43A: mov     cr8, rax
 * 0000000140BCA43E: mov     rax, [rsi+468h]
 * 0000000140BCA445: xor     edx, edx
 * 0000000140BCA447: mov     rcx, r14
 * 0000000140BCA44A: call    KeGuardDispatchICall
 * 0000000140BCA44F: cmp     eax, 0C000022Dh
 * 0000000140BCA454: jnz     short loc_140BCA46D
 * 0000000140BCA456: mov     eax, 1
 * 0000000140BCA45B: cmp     r15b, al
 * 0000000140BCA45E: ja      short loc_140BCA474
 * 0000000140BCA460: movzx   eax, r15b
 * 0000000140BCA464: mov     cr8, rax
 * 0000000140BCA468: mov     al, [r14]
 * 0000000140BCA46B: jmp     short loc_140BCA435
 * 0000000140BCA46D: xor     r11d, r11d
 * 0000000140BCA470: test    eax, eax
 * 0000000140BCA472: js      short loc_140BCA4A1
 * 0000000140BCA474: mov     r11d, 1000h
 * 0000000140BCA47A: add     r14, r11
 * 0000000140BCA47D: add     r12, r11
 * 0000000140BCA480: cmp     r12, r13
 * 0000000140BCA483: jnz     short loc_140BCA43E
 * 0000000140BCA485: movzx   eax, r15b
 * 0000000140BCA489: mov     cr8, rax
 * 0000000140BCA48D: mov     r15, [rsp+9D0h+var_978]
 * 0000000140BCA492: mov     ebx, 1
 * 0000000140BCA497: mov     r13, [rsp+9D0h+var_968]
 * 0000000140BCA49C: jmp     loc_140BCA60D
 * 0000000140BCA4A1: movzx   eax, r15b
 * 0000000140BCA4A5: mov     cr8, rax
 * 0000000140BCA4A9: mov     r12, [rbp+8D0h+var_950]
 * 0000000140BCA4AD: mov     r15, [rsp+9D0h+var_978]
 * 0000000140BCA4B2: mov     r13, [rsp+9D0h+var_968]
 * 0000000140BCA4B7: mov     eax, [r15]
 * 0000000140BCA4BA: btr     eax, 1Fh
 * 0000000140BCA4BE: cmp     [rsi+918h], r11d
 * 0000000140BCA4C5: jnz     loc_140BCA602
 * 0000000140BCA4CB: mov     ecx, ebx
 * 0000000140BCA4CD: xor     rcx, rax
 * 0000000140BCA4D0: mov     rax, [rsi+588h]
 * 0000000140BCA4D7: mov     [rax+18h], rcx
 * 0000000140BCA4DB: cmp     [rsi+918h], r11d
 * 0000000140BCA4E2: jnz     loc_140BCA602
 * 0000000140BCA4E8: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BCA4F2: mov     ebx, 1
 * 0000000140BCA4F7: add     rax, rsi
 * 0000000140BCA4FA: mov     [rsi+920h], rax
 * 0000000140BCA501: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BCA50B: add     rax, rdi
 * 0000000140BCA50E: mov     [rsi+928h], rax
 * 0000000140BCA515: movsxd  rax, dword ptr [rdi]
 * 0000000140BCA518: mov     [rsi+930h], rax
 * 0000000140BCA51F: mov     [rsi+938h], r12
 * 0000000140BCA526: mov     [rsi+918h], ebx
 * 0000000140BCA52C: mov     ecx, [rsi+9D8h]
 * 0000000140BCA532: bt      ecx, 1Dh
 * 0000000140BCA536: jb      loc_140BCA607
 * 0000000140BCA53C: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCA546: jz      loc_140BCA607
 * 0000000140BCA54C: test    bl, cl
 * 0000000140BCA54E: jz      loc_140BCA607
 * 0000000140BCA554: mov     ecx, [rsi+0A74h]
 * 0000000140BCA55A: mov     eax, [rsi+804h]
 * 0000000140BCA560: mov     r10, [rsi+838h]
 * 0000000140BCA567: sub     eax, ecx
 * 0000000140BCA569: mov     r8, [rsi+0A78h]
 * 0000000140BCA570: lea     rdx, [rcx+rsi]
 * 0000000140BCA574: mov     ecx, eax
 * 0000000140BCA576: shr     rcx, 3
 * 0000000140BCA57A: lea     r9, [rdx+rcx*8]
 * 0000000140BCA57E: jmp     short loc_140BCA5A1
 * 0000000140BCA580: xor     [rdx], r8
 * 0000000140BCA583: mov     rax, [rdx]
 * 0000000140BCA586: movzx   ecx, r8b
 * 0000000140BCA58A: xor     rax, r10
 * 0000000140BCA58D: and     ecx, 3Fh
 * 0000000140BCA590: ror     r8, cl
 * 0000000140BCA593: add     r8, rax
 * 0000000140BCA596: xor     r8, 0EFAh
 * 0000000140BCA59D: add     rdx, 8
 * 0000000140BCA5A1: cmp     rdx, r9
 * 0000000140BCA5A4: jnz     short loc_140BCA580
 * 0000000140BCA5A6: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCA5AE: cmp     r8, [rsi+0A80h]
 * 0000000140BCA5B5: jz      short loc_140BCA607
 * 0000000140BCA5B7: mov     ecx, [rsi+804h]
 * 0000000140BCA5BD: mov     rax, [rsi+588h]
 * 0000000140BCA5C4: mov     [rax], rsi
 * 0000000140BCA5C7: mov     [rax+10h], ecx
 * 0000000140BCA5CA: mov     rcx, [rsi+0A80h]
 * 0000000140BCA5D1: cmp     [rsi+918h], r11d
 * 0000000140BCA5D8: jnz     short loc_140BCA5E8
 * 0000000140BCA5DA: mov     rax, [rsi+588h]
 * 0000000140BCA5E1: xor     rcx, r8
 * 0000000140BCA5E4: mov     [rax+18h], rcx
 * 0000000140BCA5E8: xor     edx, edx
 * 0000000140BCA5EA: mov     r9d, 100h
 * 0000000140BCA5F0: mov     rcx, rsi
 * 0000000140BCA5F3: call    sub_140BD8384
 * 0000000140BCA5F8: jmp     short loc_140BCA607
 * 0000000140BCA5FA: mov     r11d, 1000h
 * 0000000140BCA600: jmp     short loc_140BCA614
 * 0000000140BCA602: mov     ebx, 1
 * 0000000140BCA607: mov     r11d, 1000h
 * 0000000140BCA60D: mov     eax, 0Ch
 * 0000000140BCA612: xor     edx, edx
 * 0000000140BCA614: add     r15, rax
 * 0000000140BCA617: sub     r13, rbx
 * 0000000140BCA61A: mov     [rsp+9D0h+var_978], r15
 * 0000000140BCA61F: mov     [rsp+9D0h+var_968], r13
 * 0000000140BCA624: jnz     loc_140BCA2A6
 * 0000000140BCA62A: mov     rcx, [rbp+8D0h+var_940]
 * 0000000140BCA62E: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BCA635: add     [rsi+844h], ebx
 * 0000000140BCA63B: add     rcx, 18h
 * 0000000140BCA63F: mov     [rbp+8D0h+var_940], rcx
 * 0000000140BCA643: cmp     rcx, [rbp+8D0h+var_930]
 * 0000000140BCA647: jz      short loc_140BCA660
 * 0000000140BCA649: mov     eax, [rsi+84Ch]
 * 0000000140BCA64F: cmp     [rsi+848h], eax
 * 0000000140BCA655: jl      loc_140BCA286
 * 0000000140BCA65B: jmp     loc_140BC33D5
 * 0000000140BCA660: xor     r15d, r15d
 * 0000000140BCA663: mov     [rsi+844h], r15d
 * 0000000140BCA66A: jmp     loc_140BC2FA9
 * 0000000140BCA66F: cmp     r10d, edx
 * 0000000140BCA672: jg      loc_140BCD134
 * 0000000140BCA678: jz      short loc_140BCA6C5
 * 0000000140BCA67A: mov     ecx, r10d
 * 0000000140BCA67D: sub     ecx, 1Fh
 * 0000000140BCA680: jz      loc_140BCB79C
 * 0000000140BCA686: sub     ecx, 1
 * 0000000140BCA689: jz      loc_140BCB78C
 * 0000000140BCA68F: sub     ecx, 1
 * 0000000140BCA692: jz      loc_140BCB77C
 * 0000000140BCA698: sub     ecx, 2
 * 0000000140BCA69B: jz      loc_140BCB191
 * 0000000140BCA6A1: sub     ecx, 1
 * 0000000140BCA6A4: jz      loc_140BCA9DC
 * 0000000140BCA6AA: sub     ecx, 1
 * 0000000140BCA6AD: jz      loc_140BCA8EE
 * 0000000140BCA6B3: sub     ecx, 1
 * 0000000140BCA6B6: jz      loc_140BCA78C
 * 0000000140BCA6BC: cmp     ecx, 1
 * 0000000140BCA6BF: jnz     loc_140BCD176
 * 0000000140BCA6C5: mov     eax, [r13+24h]
 * 0000000140BCA6C9: add     [rsi+848h], eax
 * 0000000140BCA6CF: mov     r11d, [r13+20h]
 * 0000000140BCA6D3: mov     r9d, [r13+24h]
 * 0000000140BCA6D7: add     r11, rsi
 * 0000000140BCA6DA: mov     r14d, [rsi+834h]
 * 0000000140BCA6E1: mov     r10, r11
 * 0000000140BCA6E4: mov     r15, [rsi+838h]
 * 0000000140BCA6EB: mov     rax, r11
 * 0000000140BCA6EE: lea     rcx, [r11+r9]
 * 0000000140BCA6F2: cmp     r11, rcx
 * 0000000140BCA6F5: jnb     short loc_140BCA707
 * 0000000140BCA6F7: mov     edx, 40h ; '@'
 * 0000000140BCA6FC: prefetchnta byte ptr [rax]
 * 0000000140BCA6FF: add     rax, rdx
 * 0000000140BCA702: cmp     rax, rcx
 * 0000000140BCA705: jb      short loc_140BCA6FC
 * 0000000140BCA707: mov     ebx, r9d
 * 0000000140BCA70A: mov     r8, r15
 * 0000000140BCA70D: shr     ebx, 7
 * 0000000140BCA710: test    ebx, ebx
 * 0000000140BCA712: jz      loc_140BD0316
 * 0000000140BCA718: mov     esi, 1
 * 0000000140BCA71D: mov     rdi, 7010008004002001h
 * 0000000140BCA727: mov     eax, 8
 * 0000000140BCA72C: xor     r8, [r10]
 * 0000000140BCA72F: mov     ecx, r14d
 * 0000000140BCA732: rol     r8, cl
 * 0000000140BCA735: xor     r8, [r10+8]
 * 0000000140BCA739: add     r10, 10h
 * 0000000140BCA73D: rol     r8, cl
 * 0000000140BCA740: sub     rax, rsi
 * 0000000140BCA743: jnz     short loc_140BCA72C
 * 0000000140BCA745: mov     rcx, r10
 * 0000000140BCA748: sub     rcx, r11
 * 0000000140BCA74B: xor     rcx, r15
 * 0000000140BCA74E: mov     rax, rcx
 * 0000000140BCA751: rol     rax, 11h
 * 0000000140BCA755: xor     rcx, rax
 * 0000000140BCA758: mov     rax, rdi
 * 0000000140BCA75B: mul     rcx
 * 0000000140BCA75E: xor     eax, edx
 * 0000000140BCA760: mov     [rbp+8D0h+var_4C0], rdx
 * 0000000140BCA767: xor     r14d, eax
 * 0000000140BCA76A: mov     edx, 0FFFFFFFFh
 * 0000000140BCA76F: and     r14d, 3Fh
 * 0000000140BCA773: cmovz   r14d, esi
 * 0000000140BCA777: add     ebx, edx
 * 0000000140BCA779: jnz     short loc_140BCA727
 * 0000000140BCA77B: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BCA780: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BCA787: jmp     loc_140BD031B
 * 0000000140BCA78C: mov     edx, [r13+2Ch]
 * 0000000140BCA790: lea     rcx, [rbp+8D0h+var_2D8]
 * 0000000140BCA797: mov     rax, [rsi+1B0h]
 * 0000000140BCA79E: call    KeGuardDispatchICall
 * 0000000140BCA7A3: mov     rax, [rsi+1E0h]
 * 0000000140BCA7AA: lea     rdx, [rbp+8D0h+var_200]
 * 0000000140BCA7B1: lea     rcx, [rbp+8D0h+var_2D8]
 * 0000000140BCA7B8: call    KeGuardDispatchICall
 * 0000000140BCA7BD: xor     ecx, ecx
 * 0000000140BCA7BF: xgetbv
 * 0000000140BCA7C2: shl     rdx, 20h
 * 0000000140BCA7C6: lea     rcx, [rbp+8D0h+var_200]
 * 0000000140BCA7CD: or      rdx, rax
 * 0000000140BCA7D0: mov     rax, [rsi+1A8h]
 * 0000000140BCA7D7: mov     rbx, rdx
 * 0000000140BCA7DA: call    KeGuardDispatchICall
 * 0000000140BCA7DF: mov     r8, [r13+18h]
 * 0000000140BCA7E3: mov     rdx, [r13+20h]
 * 0000000140BCA7E7: and     r8, rbx
 * 0000000140BCA7EA: cmp     r8, rdx
 * 0000000140BCA7ED: jz      loc_140BC3D97
 * 0000000140BCA7F3: mov     ecx, [r13+2Ch]
 * 0000000140BCA7F7: mov     eax, [r13+28h]
 * 0000000140BCA7FB: shl     rcx, 20h
 * 0000000140BCA7FF: or      rcx, rax
 * 0000000140BCA802: cmp     [rsi+918h], r15d
 * 0000000140BCA809: jnz     loc_140BC3D97
 * 0000000140BCA80F: mov     rax, [rsi+588h]
 * 0000000140BCA816: xor     rdx, r8
 * 0000000140BCA819: mov     [rax+18h], rdx
 * 0000000140BCA81D: cmp     [rsi+918h], r15d
 * 0000000140BCA824: jnz     loc_140BC3D97
 * 0000000140BCA82A: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BCA834: mov     ebx, 1
 * 0000000140BCA839: add     rax, rsi
 * 0000000140BCA83C: mov     [rsi+920h], rax
 * 0000000140BCA843: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BCA84D: add     rax, r13
 * 0000000140BCA850: mov     [rsi+928h], rax
 * 0000000140BCA857: movsxd  rax, dword ptr [r13+0]
 * 0000000140BCA85B: mov     [rsi+930h], rax
 * 0000000140BCA862: mov     [rsi+938h], rcx
 * 0000000140BCA869: mov     [rsi+918h], ebx
 * 0000000140BCA86F: mov     ecx, [rsi+9D8h]
 * 0000000140BCA875: bt      ecx, 1Dh
 * 0000000140BCA879: jb      loc_140BCE398
 * 0000000140BCA87F: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCA889: jz      loc_140BCE398
 * 0000000140BCA88F: test    bl, cl
 * 0000000140BCA891: jz      loc_140BCE398
 * 0000000140BCA897: mov     ecx, [rsi+0A74h]
 * 0000000140BCA89D: mov     eax, [rsi+804h]
 * 0000000140BCA8A3: mov     r10, [rsi+838h]
 * 0000000140BCA8AA: sub     eax, ecx
 * 0000000140BCA8AC: mov     r8, [rsi+0A78h]
 * 0000000140BCA8B3: lea     rdx, [rcx+rsi]
 * 0000000140BCA8B7: mov     ecx, eax
 * 0000000140BCA8B9: shr     rcx, 3
 * 0000000140BCA8BD: lea     r9, [rdx+rcx*8]
 * 0000000140BCA8C1: jmp     short loc_140BCA8E4
 * 0000000140BCA8C3: xor     [rdx], r8
 * 0000000140BCA8C6: mov     rax, [rdx]
 * 0000000140BCA8C9: movzx   ecx, r8b
 * 0000000140BCA8CD: xor     rax, r10
 * 0000000140BCA8D0: and     ecx, 3Fh
 * 0000000140BCA8D3: ror     r8, cl
 * 0000000140BCA8D6: add     r8, rax
 * 0000000140BCA8D9: xor     r8, 0EFAh
 * 0000000140BCA8E0: add     rdx, 8
 * 0000000140BCA8E4: cmp     rdx, r9
 * 0000000140BCA8E7: jnz     short loc_140BCA8C3
 * 0000000140BCA8E9: jmp     loc_140BC9D6B
 * 0000000140BCA8EE: mov     eax, [rsi+9DCh]
 * 0000000140BCA8F4: test    al, 4
 * 0000000140BCA8F6: jnz     loc_140BC2FAF
 * 0000000140BCA8FC: mov     rax, [rsi+428h]
 * 0000000140BCA903: call    KeGuardDispatchICall
 * 0000000140BCA908: test    al, al
 * 0000000140BCA90A: jz      loc_140BCE398
 * 0000000140BCA910: cmp     [rsi+918h], r15d
 * 0000000140BCA917: jnz     loc_140BCE398
 * 0000000140BCA91D: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BCA927: add     rax, rsi
 * 0000000140BCA92A: mov     [rsi+920h], rax
 * 0000000140BCA931: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BCA93B: add     rax, r13
 * 0000000140BCA93E: mov     [rsi+928h], rax
 * 0000000140BCA945: movsxd  rax, dword ptr [r13+0]
 * 0000000140BCA949: mov     [rsi+930h], rax
 * 0000000140BCA950: mov     [rsi+938h], r15
 * 0000000140BCA957: mov     [rsi+918h], ebx
 * 0000000140BCA95D: mov     ecx, [rsi+9D8h]
 * 0000000140BCA963: bt      ecx, 1Dh
 * 0000000140BCA967: jb      loc_140BCE398
 * 0000000140BCA96D: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCA977: jz      loc_140BCE398
 * 0000000140BCA97D: test    bl, cl
 * 0000000140BCA97F: jz      loc_140BCE398
 * 0000000140BCA985: mov     ecx, [rsi+0A74h]
 * 0000000140BCA98B: mov     eax, [rsi+804h]
 * 0000000140BCA991: mov     r10, [rsi+838h]
 * 0000000140BCA998: sub     eax, ecx
 * 0000000140BCA99A: mov     r8, [rsi+0A78h]
 * 0000000140BCA9A1: lea     rdx, [rcx+rsi]
 * 0000000140BCA9A5: mov     ecx, eax
 * 0000000140BCA9A7: shr     rcx, 3
 * 0000000140BCA9AB: lea     r9, [rdx+rcx*8]
 * 0000000140BCA9AF: jmp     short loc_140BCA9D2
 * 0000000140BCA9B1: xor     [rdx], r8
 * 0000000140BCA9B4: mov     rax, [rdx]
 * 0000000140BCA9B7: movzx   ecx, r8b
 * 0000000140BCA9BB: xor     rax, r10
 * 0000000140BCA9BE: and     ecx, 3Fh
 * 0000000140BCA9C1: ror     r8, cl
 * 0000000140BCA9C4: add     r8, rax
 * 0000000140BCA9C7: xor     r8, 0EFAh
 * 0000000140BCA9CE: add     rdx, 8
 * 0000000140BCA9D2: cmp     rdx, r9
 * 0000000140BCA9D5: jnz     short loc_140BCA9B1
 * 0000000140BCA9D7: jmp     loc_140BC9D6B
 * 0000000140BCA9DC: mov     r14, [r13+8]
 * 0000000140BCA9E0: mov     r8d, [r13+10h]
 * 0000000140BCA9E4: mov     r9, r14
 * 0000000140BCA9E7: add     [rsi+848h], r8d
 * 0000000140BCA9EE: mov     rax, r14
 * 0000000140BCA9F1: mov     r10d, [rsi+834h]
 * 0000000140BCA9F8: mov     r15, [rsi+838h]
 * 0000000140BCA9FF: lea     rcx, [r14+r8]
 * 0000000140BCAA03: cmp     r14, rcx
 * 0000000140BCAA06: jnb     short loc_140BCAA18
 * 0000000140BCAA08: mov     edx, 40h ; '@'
 * 0000000140BCAA0D: prefetchnta byte ptr [rax]
 * 0000000140BCAA10: add     rax, rdx
 * 0000000140BCAA13: cmp     rax, rcx
 * 0000000140BCAA16: jb      short loc_140BCAA0D
 * 0000000140BCAA18: mov     r11d, r8d
 * 0000000140BCAA1B: mov     rbx, r15
 * 0000000140BCAA1E: shr     r11d, 7
 * 0000000140BCAA22: mov     edx, 1
 * 0000000140BCAA27: mov     r12d, 0FFFFFFFFh
 * 0000000140BCAA2D: test    r11d, r11d
 * 0000000140BCAA30: jz      short loc_140BCAA97
 * 0000000140BCAA32: mov     rsi, 7010008004002001h
 * 0000000140BCAA3C: mov     eax, 8
 * 0000000140BCAA41: xor     rbx, [r9]
 * 0000000140BCAA44: mov     ecx, r10d
 * 0000000140BCAA47: rol     rbx, cl
 * 0000000140BCAA4A: xor     rbx, [r9+8]
 * 0000000140BCAA4E: add     r9, 10h
 * 0000000140BCAA52: rol     rbx, cl
 * 0000000140BCAA55: sub     rax, rdx
 * 0000000140BCAA58: jnz     short loc_140BCAA41
 * 0000000140BCAA5A: mov     rcx, r9
 * 0000000140BCAA5D: sub     rcx, r14
 * 0000000140BCAA60: xor     rcx, r15
 * 0000000140BCAA63: mov     rax, rcx
 * 0000000140BCAA66: rol     rax, 11h
 * 0000000140BCAA6A: xor     rcx, rax
 * 0000000140BCAA6D: mov     rax, rsi
 * 0000000140BCAA70: mul     rcx
 * 0000000140BCAA73: xor     r10d, edx
 * 0000000140BCAA76: mov     [rbp+8D0h+var_520], rdx
 * 0000000140BCAA7D: xor     r10d, eax
 * 0000000140BCAA80: mov     edx, 1
 * 0000000140BCAA85: and     r10d, 3Fh
 * 0000000140BCAA89: cmovz   r10d, edx
 * 0000000140BCAA8D: add     r11d, r12d
 * 0000000140BCAA90: jnz     short loc_140BCAA3C
 * 0000000140BCAA92: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BCAA97: and     r8d, 7Fh
 * 0000000140BCAA9B: cmp     r8d, 8
 * 0000000140BCAA9F: jb      short loc_140BCAABE
 * 0000000140BCAAA1: mov     eax, r8d
 * 0000000140BCAAA4: shr     rax, 3
 * 0000000140BCAAA8: xor     rbx, [r9]
 * 0000000140BCAAAB: mov     ecx, r10d
 * 0000000140BCAAAE: rol     rbx, cl
 * 0000000140BCAAB1: add     r9, 8
 * 0000000140BCAAB5: add     r8d, 0FFFFFFF8h
 * 0000000140BCAAB9: sub     rax, rdx
 * 0000000140BCAABC: jnz     short loc_140BCAAA8
 * 0000000140BCAABE: xor     r11d, r11d
 * 0000000140BCAAC1: test    r8d, r8d
 * 0000000140BCAAC4: jz      short loc_140BCAADB
 * 0000000140BCAAC6: movzx   eax, byte ptr [r9]
 * 0000000140BCAACA: mov     ecx, r10d
 * 0000000140BCAACD: xor     rbx, rax
 * 0000000140BCAAD0: add     r9, rdx
 * 0000000140BCAAD3: rol     rbx, cl
 * 0000000140BCAAD6: add     r8d, r12d
 * 0000000140BCAAD9: jnz     short loc_140BCAAC6
 * 0000000140BCAADB: mov     rax, rbx
 * 0000000140BCAADE: jmp     short loc_140BCAAE2
 * 0000000140BCAAE0: xor     ebx, eax
 * 0000000140BCAAE2: shr     rax, 1Fh
 * 0000000140BCAAE6: test    rax, rax
 * 0000000140BCAAE9: jnz     short loc_140BCAAE0
 * 0000000140BCAAEB: btr     ebx, 1Fh
 * 0000000140BCAAEF: mov     r12d, r11d
 * 0000000140BCAAF2: cmp     ebx, [r13+14h]
 * 0000000140BCAAF6: jz      loc_140BCAD0E
 * 0000000140BCAAFC: cmp     [r13+0], r11d
 * 0000000140BCAB00: jnz     short loc_140BCAB0A
 * 0000000140BCAB02: cmp     [r13+18h], r11d
 * 0000000140BCAB06: cmovnz  r12d, edx
 * 0000000140BCAB0A: mov     ecx, [r13+10h]
 * 0000000140BCAB0E: mov     rdx, [r13+8]
 * 0000000140BCAB12: test    rcx, rcx
 * 0000000140BCAB15: jz      loc_140BCABCD
 * 0000000140BCAB1B: mov     eax, [rsi+9DCh]
 * 0000000140BCAB21: mov     r8d, 40h ; '@'
 * 0000000140BCAB27: test    r8b, al
 * 0000000140BCAB2A: jz      loc_140BCABCD
 * 0000000140BCAB30: mov     r15, cr8
 * 0000000140BCAB34: lea     eax, [r8-3Eh]
 * 0000000140BCAB38: mov     cr8, rax
 * 0000000140BCAB3C: mov     r14, rdx
 * 0000000140BCAB3F: lea     rax, [rcx-1]
 * 0000000140BCAB43: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140BCAB4A: add     rax, rdx
 * 0000000140BCAB4D: or      rax, 0FFFh
 * 0000000140BCAB53: mov     [rbp+8D0h+var_950], rax
 * 0000000140BCAB57: lea     r13, [r14-1]
 * 0000000140BCAB5B: mov     rax, [rsi+468h]
 * 0000000140BCAB62: xor     edx, edx
 * 0000000140BCAB64: mov     rcx, r14
 * 0000000140BCAB67: call    KeGuardDispatchICall
 * 0000000140BCAB6C: xor     r11d, r11d
 * 0000000140BCAB6F: cmp     eax, 0C000022Dh
 * 0000000140BCAB74: jnz     short loc_140BCAB99
 * 0000000140BCAB76: test    r12d, r12d
 * 0000000140BCAB79: jnz     short loc_140BCABC0
 * 0000000140BCAB7B: lea     eax, [r11+1]
 * 0000000140BCAB7F: cmp     r15b, al
 * 0000000140BCAB82: ja      short loc_140BCAB9D
 * 0000000140BCAB84: movzx   eax, r15b
 * 0000000140BCAB88: mov     cr8, rax
 * 0000000140BCAB8C: mov     al, [r14]
 * 0000000140BCAB8F: lea     eax, [r11+2]
 * 0000000140BCAB93: mov     cr8, rax
 * 0000000140BCAB97: jmp     short loc_140BCAB5B
 * 0000000140BCAB99: test    eax, eax
 * 0000000140BCAB9B: js      short loc_140BCABC0
 * 0000000140BCAB9D: mov     eax, 1000h
 * 0000000140BCABA2: add     r14, rax
 * 0000000140BCABA5: add     r13, rax
 * 0000000140BCABA8: cmp     r13, [rbp+8D0h+var_950]
 * 0000000140BCABAC: jnz     short loc_140BCAB5B
 * 0000000140BCABAE: movzx   eax, r15b
 * 0000000140BCABB2: mov     cr8, rax
 * 0000000140BCABB6: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BCABBB: jmp     loc_140BCAD0E
 * 0000000140BCABC0: movzx   eax, r15b
 * 0000000140BCABC4: mov     cr8, rax
 * 0000000140BCABC8: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BCABCD: mov     eax, [r13+14h]
 * 0000000140BCABD1: cmp     [rsi+918h], r11d
 * 0000000140BCABD8: jnz     short loc_140BCABEC
 * 0000000140BCABDA: mov     ecx, eax
 * 0000000140BCABDC: mov     eax, ebx
 * 0000000140BCABDE: xor     rcx, rax
 * 0000000140BCABE1: mov     rax, [rsi+588h]
 * 0000000140BCABE8: mov     [rax+18h], rcx
 * 0000000140BCABEC: mov     rcx, [r13+8]
 * 0000000140BCABF0: cmp     [rsi+918h], r11d
 * 0000000140BCABF7: jnz     loc_140BCAD0E
 * 0000000140BCABFD: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BCAC07: mov     edx, 1
 * 0000000140BCAC0C: add     rax, rsi
 * 0000000140BCAC0F: mov     [rsi+920h], rax
 * 0000000140BCAC16: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BCAC20: add     rax, r13
 * 0000000140BCAC23: mov     [rsi+928h], rax
 * 0000000140BCAC2A: movsxd  rax, dword ptr [r13+0]
 * 0000000140BCAC2E: mov     [rsi+930h], rax
 * 0000000140BCAC35: mov     [rsi+938h], rcx
 * 0000000140BCAC3C: mov     [rsi+918h], edx
 * 0000000140BCAC42: mov     ecx, [rsi+9D8h]
 * 0000000140BCAC48: bt      ecx, 1Dh
 * 0000000140BCAC4C: jb      loc_140BCAD0E
 * 0000000140BCAC52: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCAC5C: jz      loc_140BCAD0E
 * 0000000140BCAC62: test    dl, cl
 * 0000000140BCAC64: jz      loc_140BCAD0E
 * 0000000140BCAC6A: mov     ecx, [rsi+0A74h]
 * 0000000140BCAC70: mov     eax, [rsi+804h]
 * 0000000140BCAC76: mov     r10, [rsi+838h]
 * 0000000140BCAC7D: sub     eax, ecx
 * 0000000140BCAC7F: mov     r8, [rsi+0A78h]
 * 0000000140BCAC86: lea     rdx, [rcx+rsi]
 * 0000000140BCAC8A: mov     ecx, eax
 * 0000000140BCAC8C: shr     rcx, 3
 * 0000000140BCAC90: lea     r9, [rdx+rcx*8]
 * 0000000140BCAC94: jmp     short loc_140BCACB7
 * 0000000140BCAC96: xor     [rdx], r8
 * 0000000140BCAC99: mov     rax, [rdx]
 * 0000000140BCAC9C: movzx   ecx, r8b
 * 0000000140BCACA0: xor     rax, r10
 * 0000000140BCACA3: and     ecx, 3Fh
 * 0000000140BCACA6: ror     r8, cl
 * 0000000140BCACA9: add     r8, rax
 * 0000000140BCACAC: xor     r8, 0EFAh
 * 0000000140BCACB3: add     rdx, 8
 * 0000000140BCACB7: cmp     rdx, r9
 * 0000000140BCACBA: jnz     short loc_140BCAC96
 * 0000000140BCACBC: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCACC4: cmp     r8, [rsi+0A80h]
 * 0000000140BCACCB: jz      short loc_140BCAD0E
 * 0000000140BCACCD: mov     ecx, [rsi+804h]
 * 0000000140BCACD3: mov     rax, [rsi+588h]
 * 0000000140BCACDA: mov     [rax], rsi
 * 0000000140BCACDD: mov     [rax+10h], ecx
 * 0000000140BCACE0: mov     rcx, [rsi+0A80h]
 * 0000000140BCACE7: cmp     [rsi+918h], r11d
 * 0000000140BCACEE: jnz     short loc_140BCACFE
 * 0000000140BCACF0: mov     rax, [rsi+588h]
 * 0000000140BCACF7: xor     rcx, r8
 * 0000000140BCACFA: mov     [rax+18h], rcx
 * 0000000140BCACFE: xor     edx, edx
 * 0000000140BCAD00: mov     r9d, 100h
 * 0000000140BCAD06: mov     rcx, rsi
 * 0000000140BCAD09: call    sub_140BD8384
 * 0000000140BCAD0E: mov     rcx, [rsi+538h]
 * 0000000140BCAD15: mov     r14, cr8
 * 0000000140BCAD19: mov     eax, 0Fh
 * 0000000140BCAD1E: mov     cr8, rax
 * 0000000140BCAD22: mov     rax, [rsi+160h]
 * 0000000140BCAD29: call    KeGuardDispatchICall
 * 0000000140BCAD2E: mov     rax, [rsi+620h]
 * 0000000140BCAD35: mov     rcx, [rax]
 * 0000000140BCAD38: mov     eax, [rcx]
 * 0000000140BCAD3A: lea     rbx, [rcx+10h]
 * 0000000140BCAD3E: mov     r15b, [rcx+0Ch]
 * 0000000140BCAD42: lea     rcx, [rax+rax*2]
 * 0000000140BCAD46: lea     r12, [rbx+rcx*8]
 * 0000000140BCAD4A: mov     edx, 18h
 * 0000000140BCAD4F: lea     r8, [r13+18h]
 * 0000000140BCAD53: mov     r9, rbx
 * 0000000140BCAD56: mov     rcx, [r9]
 * 0000000140BCAD59: add     r9, 8
 * 0000000140BCAD5D: mov     rax, [r8]
 * 0000000140BCAD60: add     r8, 8
 * 0000000140BCAD64: cmp     rcx, rax
 * 0000000140BCAD67: jnz     short loc_140BCAD96
 * 0000000140BCAD69: add     edx, 0FFFFFFF8h
 * 0000000140BCAD6C: cmp     edx, 8
 * 0000000140BCAD6F: jnb     short loc_140BCAD56
 * 0000000140BCAD71: test    edx, edx
 * 0000000140BCAD73: jz      short loc_140BCAD9F
 * 0000000140BCAD75: mov     r11d, 1
 * 0000000140BCAD7B: mov     cl, [r9]
 * 0000000140BCAD7E: add     r9, r11
 * 0000000140BCAD81: mov     al, [r8]
 * 0000000140BCAD84: add     r8, r11
 * 0000000140BCAD87: cmp     cl, al
 * 0000000140BCAD89: jnz     short loc_140BCAD96
 * 0000000140BCAD8B: mov     eax, 0FFFFFFFFh
 * 0000000140BCAD90: add     edx, eax
 * 0000000140BCAD92: jnz     short loc_140BCAD7B
 * 0000000140BCAD94: jmp     short loc_140BCAD9F
 * 0000000140BCAD96: add     rbx, 18h
 * 0000000140BCAD9A: cmp     rbx, r12
 * 0000000140BCAD9D: jb      short loc_140BCAD4A
 * 0000000140BCAD9F: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BCADA4: mov     rcx, [rsi+538h]
 * 0000000140BCADAB: mov     rax, [rsi+1A0h]
 * 0000000140BCADB2: call    KeGuardDispatchICall
 * 0000000140BCADB7: movzx   eax, r14b
 * 0000000140BCADBB: mov     cr8, rax
 * 0000000140BCADBF: xor     r11d, r11d
 * 0000000140BCADC2: lea     r14d, [r11+1]
 * 0000000140BCADC6: test    r15b, r15b
 * 0000000140BCADC9: jz      loc_140BCAF03
 * 0000000140BCADCF: mov     ecx, [rsi+9DCh]
 * 0000000140BCADD5: lea     eax, [r11+10h]
 * 0000000140BCADD9: test    al, cl
 * 0000000140BCADDB: jz      loc_140BCAEF9
 * 0000000140BCADE1: cmp     [rsi+918h], r11d
 * 0000000140BCADE8: jnz     loc_140BCAEF9
 * 0000000140BCADEE: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BCADF8: add     rax, rsi
 * 0000000140BCADFB: mov     [rsi+920h], rax
 * 0000000140BCAE02: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BCAE0C: add     rax, r13
 * 0000000140BCAE0F: mov     [rsi+928h], rax
 * 0000000140BCAE16: movsxd  rax, dword ptr [r13+0]
 * 0000000140BCAE1A: mov     [rsi+930h], rax
 * 0000000140BCAE21: mov     [rsi+938h], r14
 * 0000000140BCAE28: mov     [rsi+918h], r14d
 * 0000000140BCAE2F: mov     eax, [rsi+9D8h]
 * 0000000140BCAE35: bt      eax, 1Dh
 * 0000000140BCAE39: jb      loc_140BCAEF9
 * 0000000140BCAE3F: bt      ecx, 15h
 * 0000000140BCAE43: jnb     loc_140BCAEF9
 * 0000000140BCAE49: test    r14b, al
 * 0000000140BCAE4C: jz      loc_140BCAEF9
 * 0000000140BCAE52: mov     ecx, [rsi+0A74h]
 * 0000000140BCAE58: mov     eax, [rsi+804h]
 * 0000000140BCAE5E: mov     r10, [rsi+838h]
 * 0000000140BCAE65: sub     eax, ecx
 * 0000000140BCAE67: mov     r8, [rsi+0A78h]
 * 0000000140BCAE6E: lea     rdx, [rcx+rsi]
 * 0000000140BCAE72: mov     ecx, eax
 * 0000000140BCAE74: shr     rcx, 3
 * 0000000140BCAE78: lea     r9, [rdx+rcx*8]
 * 0000000140BCAE7C: jmp     short loc_140BCAE9F
 * 0000000140BCAE7E: xor     [rdx], r8
 * 0000000140BCAE81: mov     rax, [rdx]
 * 0000000140BCAE84: movzx   ecx, r8b
 * 0000000140BCAE88: xor     rax, r10
 * 0000000140BCAE8B: and     ecx, 3Fh
 * 0000000140BCAE8E: ror     r8, cl
 * 0000000140BCAE91: add     r8, rax
 * 0000000140BCAE94: xor     r8, 0EFAh
 * 0000000140BCAE9B: add     rdx, 8
 * 0000000140BCAE9F: cmp     rdx, r9
 * 0000000140BCAEA2: jnz     short loc_140BCAE7E
 * 0000000140BCAEA4: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCAEAC: cmp     r8, [rsi+0A80h]
 * 0000000140BCAEB3: jz      short loc_140BCAEF9
 * 0000000140BCAEB5: mov     ecx, [rsi+804h]
 * 0000000140BCAEBB: mov     rax, [rsi+588h]
 * 0000000140BCAEC2: mov     [rax], rsi
 * 0000000140BCAEC5: mov     [rax+10h], ecx
 * 0000000140BCAEC8: mov     rcx, [rsi+0A80h]
 * 0000000140BCAECF: cmp     [rsi+918h], r11d
 * 0000000140BCAED6: jnz     short loc_140BCAEE6
 * 0000000140BCAED8: mov     rax, [rsi+588h]
 * 0000000140BCAEDF: xor     rcx, r8
 * 0000000140BCAEE2: mov     [rax+18h], rcx
 * 0000000140BCAEE6: xor     edx, edx
 * 0000000140BCAEE8: mov     r9d, 100h
 * 0000000140BCAEEE: mov     rcx, rsi
 * 0000000140BCAEF1: call    sub_140BD8384
 * 0000000140BCAEF6: xor     r11d, r11d
 * 0000000140BCAEF9: cmp     [r13+18h], r14
 * 0000000140BCAEFD: jz      loc_140BCB02A
 * 0000000140BCAF03: cmp     rbx, r12
 * 0000000140BCAF06: jnz     loc_140BCB02A
 * 0000000140BCAF0C: mov     r12, 0B3B74BDEE4453415h
 * 0000000140BCAF16: cmp     [rsi+918h], r11d
 * 0000000140BCAF1D: jnz     loc_140BCB034
 * 0000000140BCAF23: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BCAF2D: add     rax, rsi
 * 0000000140BCAF30: mov     [rsi+920h], rax
 * 0000000140BCAF37: lea     rax, [r12+r13]
 * 0000000140BCAF3B: mov     [rsi+928h], rax
 * 0000000140BCAF42: movsxd  rax, dword ptr [r13+0]
 * 0000000140BCAF46: mov     [rsi+930h], rax
 * 0000000140BCAF4D: mov     [rsi+938h], rbx
 * 0000000140BCAF54: mov     [rsi+918h], r14d
 * 0000000140BCAF5B: mov     ecx, [rsi+9D8h]
 * 0000000140BCAF61: bt      ecx, 1Dh
 * 0000000140BCAF65: jb      loc_140BCB034
 * 0000000140BCAF6B: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCAF75: jz      loc_140BCB034
 * 0000000140BCAF7B: test    r14b, cl
 * 0000000140BCAF7E: jz      loc_140BCB034
 * 0000000140BCAF84: mov     ecx, [rsi+0A74h]
 * 0000000140BCAF8A: mov     eax, [rsi+804h]
 * 0000000140BCAF90: mov     r10, [rsi+838h]
 * 0000000140BCAF97: sub     eax, ecx
 * 0000000140BCAF99: mov     r8, [rsi+0A78h]
 * 0000000140BCAFA0: lea     rdx, [rcx+rsi]
 * 0000000140BCAFA4: mov     ecx, eax
 * 0000000140BCAFA6: shr     rcx, 3
 * 0000000140BCAFAA: lea     r9, [rdx+rcx*8]
 * 0000000140BCAFAE: jmp     short loc_140BCAFD1
 * 0000000140BCAFB0: xor     [rdx], r8
 * 0000000140BCAFB3: mov     rax, [rdx]
 * 0000000140BCAFB6: movzx   ecx, r8b
 * 0000000140BCAFBA: xor     rax, r10
 * 0000000140BCAFBD: and     ecx, 3Fh
 * 0000000140BCAFC0: ror     r8, cl
 * 0000000140BCAFC3: add     r8, rax
 * 0000000140BCAFC6: xor     r8, 0EFAh
 * 0000000140BCAFCD: add     rdx, 8
 * 0000000140BCAFD1: cmp     rdx, r9
 * 0000000140BCAFD4: jnz     short loc_140BCAFB0
 * 0000000140BCAFD6: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCAFDE: cmp     r8, [rsi+0A80h]
 * 0000000140BCAFE5: jz      short loc_140BCB034
 * 0000000140BCAFE7: mov     ecx, [rsi+804h]
 * 0000000140BCAFED: mov     rax, [rsi+588h]
 * 0000000140BCAFF4: mov     [rax], rsi
 * 0000000140BCAFF7: mov     [rax+10h], ecx
 * 0000000140BCAFFA: mov     rcx, [rsi+0A80h]
 * 0000000140BCB001: cmp     [rsi+918h], r11d
 * 0000000140BCB008: jnz     short loc_140BCB018
 * 0000000140BCB00A: mov     rax, [rsi+588h]
 * 0000000140BCB011: xor     rcx, r8
 * 0000000140BCB014: mov     [rax+18h], rcx
 * 0000000140BCB018: xor     edx, edx
 * 0000000140BCB01A: mov     r9d, 100h
 * 0000000140BCB020: mov     rcx, rsi
 * 0000000140BCB023: call    sub_140BD8384
 * 0000000140BCB028: jmp     short loc_140BCB034
 * 0000000140BCB02A: mov     r12, 0B3B74BDEE4453415h
 * 0000000140BCB034: mov     rcx, [rsi+538h]
 * 0000000140BCB03B: mov     r15, cr8
 * 0000000140BCB03F: mov     eax, 0Fh
 * 0000000140BCB044: mov     cr8, rax
 * 0000000140BCB048: mov     rax, [rsi+160h]
 * 0000000140BCB04F: call    KeGuardDispatchICall
 * 0000000140BCB054: mov     rax, [rsi+620h]
 * 0000000140BCB05B: mov     rcx, [rax]
 * 0000000140BCB05E: mov     eax, [rcx]
 * 0000000140BCB060: lea     rbx, [rcx+10h]
 * 0000000140BCB064: lea     rcx, [rax+rax*2]
 * 0000000140BCB068: xor     eax, eax
 * 0000000140BCB06A: lea     r14, [rbx+rcx*8]
 * 0000000140BCB06E: jmp     short loc_140BCB097
 * 0000000140BCB070: mov     rcx, [rbx+8]
 * 0000000140BCB074: cmp     rcx, rdx
 * 0000000140BCB077: jb      short loc_140BCB0A3
 * 0000000140BCB079: mov     rax, rcx
 * 0000000140BCB07C: and     rax, 0FFFFFFFFFFFFF000h
 * 0000000140BCB082: cmp     rax, rcx
 * 0000000140BCB085: jnz     short loc_140BCB0A3
 * 0000000140BCB087: mov     eax, [rbx+10h]
 * 0000000140BCB08A: add     rax, rcx
 * 0000000140BCB08D: cmp     rax, rcx
 * 0000000140BCB090: jbe     short loc_140BCB0A3
 * 0000000140BCB092: cmp     rax, rdx
 * 0000000140BCB095: jz      short loc_140BCB0A3
 * 0000000140BCB097: add     rbx, 18h
 * 0000000140BCB09B: mov     rdx, rax
 * 0000000140BCB09E: cmp     rbx, r14
 * 0000000140BCB0A1: jb      short loc_140BCB070
 * 0000000140BCB0A3: mov     rcx, [rsi+538h]
 * 0000000140BCB0AA: mov     rax, [rsi+1A0h]
 * 0000000140BCB0B1: call    KeGuardDispatchICall
 * 0000000140BCB0B6: movzx   eax, r15b
 * 0000000140BCB0BA: mov     cr8, rax
 * 0000000140BCB0BE: xor     r15d, r15d
 * 0000000140BCB0C1: cmp     rbx, r14
 * 0000000140BCB0C4: jz      loc_140BD045B
 * 0000000140BCB0CA: cmp     [rsi+918h], r15d
 * 0000000140BCB0D1: jnz     loc_140BC3B58
 * 0000000140BCB0D7: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BCB0E1: add     rax, rsi
 * 0000000140BCB0E4: mov     [rsi+920h], rax
 * 0000000140BCB0EB: lea     rax, [r12+r13]
 * 0000000140BCB0EF: mov     [rsi+928h], rax
 * 0000000140BCB0F6: movsxd  rax, dword ptr [r13+0]
 * 0000000140BCB0FA: mov     [rsi+930h], rax
 * 0000000140BCB101: mov     [rsi+938h], rbx
 * 0000000140BCB108: lea     ebx, [r15+1]
 * 0000000140BCB10C: mov     [rsi+918h], ebx
 * 0000000140BCB112: mov     ecx, [rsi+9D8h]
 * 0000000140BCB118: bt      ecx, 1Dh
 * 0000000140BCB11C: jb      loc_140BC3B5D
 * 0000000140BCB122: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCB12C: jz      loc_140BC3B5D
 * 0000000140BCB132: test    bl, cl
 * 0000000140BCB134: jz      loc_140BC3B5D
 * 0000000140BCB13A: mov     ecx, [rsi+0A74h]
 * 0000000140BCB140: mov     eax, [rsi+804h]
 * 0000000140BCB146: mov     r10, [rsi+838h]
 * 0000000140BCB14D: sub     eax, ecx
 * 0000000140BCB14F: mov     r8, [rsi+0A78h]
 * 0000000140BCB156: lea     rdx, [rcx+rsi]
 * 0000000140BCB15A: mov     ecx, eax
 * 0000000140BCB15C: shr     rcx, 3
 * 0000000140BCB160: lea     r9, [rdx+rcx*8]
 * 0000000140BCB164: jmp     short loc_140BCB187
 * 0000000140BCB166: xor     [rdx], r8
 * 0000000140BCB169: mov     rax, [rdx]
 * 0000000140BCB16C: movzx   ecx, r8b
 * 0000000140BCB170: xor     rax, r10
 * 0000000140BCB173: and     ecx, 3Fh
 * 0000000140BCB176: ror     r8, cl
 * 0000000140BCB179: add     r8, rax
 * 0000000140BCB17C: xor     r8, 0EFAh
 * 0000000140BCB183: add     rdx, 8
 * 0000000140BCB187: cmp     rdx, r9
 * 0000000140BCB18A: jnz     short loc_140BCB166
 * 0000000140BCB18C: jmp     loc_140BC4A63
 * 0000000140BCB191: mov     r14, [r13+8]
 * 0000000140BCB195: mov     r8d, [r13+10h]
 * 0000000140BCB199: mov     r9, r14
 * 0000000140BCB19C: add     [rsi+848h], r8d
 * 0000000140BCB1A3: mov     rax, r14
 * 0000000140BCB1A6: mov     r11d, [rsi+834h]
 * 0000000140BCB1AD: mov     r15, [rsi+838h]
 * 0000000140BCB1B4: lea     rcx, [r14+r8]
 * 0000000140BCB1B8: cmp     r14, rcx
 * 0000000140BCB1BB: jnb     short loc_140BCB1CD
 * 0000000140BCB1BD: mov     edx, 40h ; '@'
 * 0000000140BCB1C2: prefetchnta byte ptr [rax]
 * 0000000140BCB1C5: add     rax, rdx
 * 0000000140BCB1C8: cmp     rax, rcx
 * 0000000140BCB1CB: jb      short loc_140BCB1C2
 * 0000000140BCB1CD: mov     r10d, r8d
 * 0000000140BCB1D0: mov     rbx, r15
 * 0000000140BCB1D3: shr     r10d, 7
 * 0000000140BCB1D7: mov     edx, 1
 * 0000000140BCB1DC: mov     r12d, 0FFFFFFFFh
 * 0000000140BCB1E2: test    r10d, r10d
 * 0000000140BCB1E5: jz      short loc_140BCB24B
 * 0000000140BCB1E7: mov     rsi, 7010008004002001h
 * 0000000140BCB1F1: mov     eax, 8
 * 0000000140BCB1F6: xor     rbx, [r9]
 * 0000000140BCB1F9: mov     ecx, r11d
 * 0000000140BCB1FC: rol     rbx, cl
 * 0000000140BCB1FF: xor     rbx, [r9+8]
 * 0000000140BCB203: add     r9, 10h
 * 0000000140BCB207: rol     rbx, cl
 * 0000000140BCB20A: sub     rax, rdx
 * 0000000140BCB20D: jnz     short loc_140BCB1F6
 * 0000000140BCB20F: mov     rcx, r9
 * 0000000140BCB212: sub     rcx, r14
 * 0000000140BCB215: xor     rcx, r15
 * 0000000140BCB218: mov     rax, rcx
 * 0000000140BCB21B: rol     rax, 11h
 * 0000000140BCB21F: xor     rcx, rax
 * 0000000140BCB222: mov     rax, rsi
 * 0000000140BCB225: mul     rcx
 * 0000000140BCB228: xor     eax, edx
 * 0000000140BCB22A: mov     [rbp+8D0h+var_518], rdx
 * 0000000140BCB231: xor     r11d, eax
 * 0000000140BCB234: mov     edx, 1
 * 0000000140BCB239: and     r11d, 3Fh
 * 0000000140BCB23D: cmovz   r11d, edx
 * 0000000140BCB241: add     r10d, r12d
 * 0000000140BCB244: jnz     short loc_140BCB1F1
 * 0000000140BCB246: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BCB24B: and     r8d, 7Fh
 * 0000000140BCB24F: cmp     r8d, 8
 * 0000000140BCB253: jb      short loc_140BCB272
 * 0000000140BCB255: mov     eax, r8d
 * 0000000140BCB258: shr     rax, 3
 * 0000000140BCB25C: xor     rbx, [r9]
 * 0000000140BCB25F: mov     ecx, r11d
 * 0000000140BCB262: rol     rbx, cl
 * 0000000140BCB265: add     r9, 8
 * 0000000140BCB269: add     r8d, 0FFFFFFF8h
 * 0000000140BCB26D: sub     rax, rdx
 * 0000000140BCB270: jnz     short loc_140BCB25C
 * 0000000140BCB272: xor     r15d, r15d
 * 0000000140BCB275: test    r8d, r8d
 * 0000000140BCB278: jz      short loc_140BCB28F
 * 0000000140BCB27A: movzx   eax, byte ptr [r9]
 * 0000000140BCB27E: mov     ecx, r11d
 * 0000000140BCB281: xor     rbx, rax
 * 0000000140BCB284: add     r9, rdx
 * 0000000140BCB287: rol     rbx, cl
 * 0000000140BCB28A: add     r8d, r12d
 * 0000000140BCB28D: jnz     short loc_140BCB27A
 * 0000000140BCB28F: mov     rax, rbx
 * 0000000140BCB292: jmp     short loc_140BCB296
 * 0000000140BCB294: xor     ebx, eax
 * 0000000140BCB296: shr     rax, 1Fh
 * 0000000140BCB29A: test    rax, rax
 * 0000000140BCB29D: jnz     short loc_140BCB294
 * 0000000140BCB29F: btr     ebx, 1Fh
 * 0000000140BCB2A3: mov     r12d, r15d
 * 0000000140BCB2A6: cmp     ebx, [r13+14h]
 * 0000000140BCB2AA: jz      loc_140BCB4E0
 * 0000000140BCB2B0: cmp     [r13+0], r15d
 * 0000000140BCB2B4: jnz     short loc_140BCB2BE
 * 0000000140BCB2B6: cmp     [r13+18h], r15d
 * 0000000140BCB2BA: cmovnz  r12d, edx
 * 0000000140BCB2BE: mov     ecx, [r13+10h]
 * 0000000140BCB2C2: mov     rdx, [r13+8]
 * 0000000140BCB2C6: test    rcx, rcx
 * 0000000140BCB2C9: jz      loc_140BCB395
 * 0000000140BCB2CF: mov     eax, [rsi+9DCh]
 * 0000000140BCB2D5: mov     r8d, 40h ; '@'
 * 0000000140BCB2DB: test    r8b, al
 * 0000000140BCB2DE: jz      loc_140BCB395
 * 0000000140BCB2E4: mov     r15, cr8
 * 0000000140BCB2E8: lea     eax, [r8-3Eh]
 * 0000000140BCB2EC: mov     cr8, rax
 * 0000000140BCB2F0: mov     r14, rdx
 * 0000000140BCB2F3: lea     rax, [rcx-1]
 * 0000000140BCB2F7: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140BCB2FE: add     rax, rdx
 * 0000000140BCB301: or      rax, 0FFFh
 * 0000000140BCB307: mov     [rbp+8D0h+var_950], rax
 * 0000000140BCB30B: lea     r13, [r14-1]
 * 0000000140BCB30F: mov     rax, [rsi+468h]
 * 0000000140BCB316: xor     edx, edx
 * 0000000140BCB318: mov     rcx, r14
 * 0000000140BCB31B: call    KeGuardDispatchICall
 * 0000000140BCB320: cmp     eax, 0C000022Dh
 * 0000000140BCB325: jnz     short loc_140BCB34C
 * 0000000140BCB327: test    r12d, r12d
 * 0000000140BCB32A: jnz     short loc_140BCB385
 * 0000000140BCB32C: lea     eax, [r12+1]
 * 0000000140BCB331: cmp     r15b, al
 * 0000000140BCB334: ja      short loc_140BCB350
 * 0000000140BCB336: movzx   eax, r15b
 * 0000000140BCB33A: mov     cr8, rax
 * 0000000140BCB33E: mov     al, [r14]
 * 0000000140BCB341: lea     eax, [r12+2]
 * 0000000140BCB346: mov     cr8, rax
 * 0000000140BCB34A: jmp     short loc_140BCB30F
 * 0000000140BCB34C: test    eax, eax
 * 0000000140BCB34E: js      short loc_140BCB385
 * 0000000140BCB350: mov     r11d, 1000h
 * 0000000140BCB356: add     r14, r11
 * 0000000140BCB359: add     r13, r11
 * 0000000140BCB35C: cmp     r13, [rbp+8D0h+var_950]
 * 0000000140BCB360: jnz     short loc_140BCB30F
 * 0000000140BCB362: movzx   eax, r15b
 * 0000000140BCB366: mov     cr8, rax
 * 0000000140BCB36A: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BCB36F: xor     r15d, r15d
 * 0000000140BCB372: mov     r14, 0A3A03F5891C8B4E8h
 * 0000000140BCB37C: lea     ebx, [r15+1]
 * 0000000140BCB380: jmp     loc_140BCB4F5
 * 0000000140BCB385: movzx   eax, r15b
 * 0000000140BCB389: mov     cr8, rax
 * 0000000140BCB38D: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BCB392: xor     r15d, r15d
 * 0000000140BCB395: mov     eax, [r13+14h]
 * 0000000140BCB399: cmp     [rsi+918h], r15d
 * 0000000140BCB3A0: jnz     short loc_140BCB3B2
 * 0000000140BCB3A2: mov     ecx, ebx
 * 0000000140BCB3A4: xor     rcx, rax
 * 0000000140BCB3A7: mov     rax, [rsi+588h]
 * 0000000140BCB3AE: mov     [rax+18h], rcx
 * 0000000140BCB3B2: mov     r14, 0A3A03F5891C8B4E8h
 * 0000000140BCB3BC: mov     rcx, [r13+8]
 * 0000000140BCB3C0: mov     r8, 0B3B74BDEE4453415h
 * 0000000140BCB3CA: mov     ebx, 1
 * 0000000140BCB3CF: cmp     [rsi+918h], r15d
 * 0000000140BCB3D6: jnz     loc_140BCB4D8
 * 0000000140BCB3DC: lea     rax, [rsi+r14]
 * 0000000140BCB3E0: mov     [rsi+920h], rax
 * 0000000140BCB3E7: lea     rax, [r8+r13]
 * 0000000140BCB3EB: mov     [rsi+928h], rax
 * 0000000140BCB3F2: movsxd  rax, dword ptr [r13+0]
 * 0000000140BCB3F6: mov     [rsi+930h], rax
 * 0000000140BCB3FD: mov     [rsi+938h], rcx
 * 0000000140BCB404: mov     [rsi+918h], ebx
 * 0000000140BCB40A: mov     ecx, [rsi+9D8h]
 * 0000000140BCB410: bt      ecx, 1Dh
 * 0000000140BCB414: jb      loc_140BCB4D8
 * 0000000140BCB41A: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCB424: jz      loc_140BCB4D8
 * 0000000140BCB42A: test    bl, cl
 * 0000000140BCB42C: jz      loc_140BCB4D8
 * 0000000140BCB432: mov     ecx, [rsi+0A74h]
 * 0000000140BCB438: mov     eax, [rsi+804h]
 * 0000000140BCB43E: mov     r10, [rsi+838h]
 * 0000000140BCB445: sub     eax, ecx
 * 0000000140BCB447: mov     r8, [rsi+0A78h]
 * 0000000140BCB44E: lea     rdx, [rcx+rsi]
 * 0000000140BCB452: mov     ecx, eax
 * 0000000140BCB454: shr     rcx, 3
 * 0000000140BCB458: lea     r9, [rdx+rcx*8]
 * 0000000140BCB45C: jmp     short loc_140BCB47F
 * 0000000140BCB45E: xor     [rdx], r8
 * 0000000140BCB461: mov     rax, [rdx]
 * 0000000140BCB464: movzx   ecx, r8b
 * 0000000140BCB468: xor     rax, r10
 * 0000000140BCB46B: and     ecx, 3Fh
 * 0000000140BCB46E: ror     r8, cl
 * 0000000140BCB471: add     r8, rax
 * 0000000140BCB474: xor     r8, 0EFAh
 * 0000000140BCB47B: add     rdx, 8
 * 0000000140BCB47F: cmp     rdx, r9
 * 0000000140BCB482: jnz     short loc_140BCB45E
 * 0000000140BCB484: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCB48C: cmp     r8, [rsi+0A80h]
 * 0000000140BCB493: jz      short loc_140BCB4EF
 * 0000000140BCB495: mov     ecx, [rsi+804h]
 * 0000000140BCB49B: mov     rax, [rsi+588h]
 * 0000000140BCB4A2: mov     [rax], rsi
 * 0000000140BCB4A5: mov     [rax+10h], ecx
 * 0000000140BCB4A8: mov     rcx, [rsi+0A80h]
 * 0000000140BCB4AF: cmp     [rsi+918h], r15d
 * 0000000140BCB4B6: jnz     short loc_140BCB4C6
 * 0000000140BCB4B8: mov     rax, [rsi+588h]
 * 0000000140BCB4BF: xor     rcx, r8
 * 0000000140BCB4C2: mov     [rax+18h], rcx
 * 0000000140BCB4C6: xor     edx, edx
 * 0000000140BCB4C8: mov     r9d, 100h
 * 0000000140BCB4CE: mov     rcx, rsi
 * 0000000140BCB4D1: call    sub_140BD8384
 * 0000000140BCB4D6: jmp     short loc_140BCB4EF
 * 0000000140BCB4D8: mov     r11d, 1000h
 * 0000000140BCB4DE: jmp     short loc_140BCB4FF
 * 0000000140BCB4E0: mov     ebx, 1
 * 0000000140BCB4E5: mov     r14, 0A3A03F5891C8B4E8h
 * 0000000140BCB4EF: mov     r11d, 1000h
 * 0000000140BCB4F5: mov     r8, 0B3B74BDEE4453415h
 * 0000000140BCB4FF: mov     eax, [r13+28h]
 * 0000000140BCB503: mov     ecx, 2
 * 0000000140BCB508: test    cl, al
 * 0000000140BCB50A: jz      loc_140BC2FA9
 * 0000000140BCB510: mov     rbx, [r13+8]
 * 0000000140BCB514: test    al, 4
 * 0000000140BCB516: jz      loc_140BCB668
 * 0000000140BCB51C: mov     rax, [rbx+70h]
 * 0000000140BCB520: mov     rdx, [r13+18h]
 * 0000000140BCB524: mov     rcx, [rax]
 * 0000000140BCB527: cmp     rcx, rdx
 * 0000000140BCB52A: jz      loc_140BCB668
 * 0000000140BCB530: mov     rax, [rsi+588h]
 * 0000000140BCB537: mov     [rax], rcx
 * 0000000140BCB53A: mov     dword ptr [rax+10h], 100h
 * 0000000140BCB541: cmp     [rsi+918h], r15d
 * 0000000140BCB548: jnz     short loc_140BCB558
 * 0000000140BCB54A: mov     rax, [rsi+588h]
 * 0000000140BCB551: xor     rcx, rdx
 * 0000000140BCB554: mov     [rax+18h], rcx
 * 0000000140BCB558: mov     rcx, [rbx+70h]
 * 0000000140BCB55C: cmp     [rsi+918h], r15d
 * 0000000140BCB563: jnz     loc_140BCB668
 * 0000000140BCB569: lea     rax, [rsi+r14]
 * 0000000140BCB56D: mov     edx, 1
 * 0000000140BCB572: mov     [rsi+920h], rax
 * 0000000140BCB579: lea     rax, [r8+r13]
 * 0000000140BCB57D: mov     [rsi+928h], rax
 * 0000000140BCB584: movsxd  rax, dword ptr [r13+0]
 * 0000000140BCB588: mov     [rsi+930h], rax
 * 0000000140BCB58F: mov     [rsi+938h], rcx
 * 0000000140BCB596: mov     [rsi+918h], edx
 * 0000000140BCB59C: mov     ecx, [rsi+9D8h]
 * 0000000140BCB5A2: bt      ecx, 1Dh
 * 0000000140BCB5A6: jb      loc_140BCB668
 * 0000000140BCB5AC: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCB5B6: jz      loc_140BCB668
 * 0000000140BCB5BC: test    dl, cl
 * 0000000140BCB5BE: jz      loc_140BCB668
 * 0000000140BCB5C4: mov     ecx, [rsi+0A74h]
 * 0000000140BCB5CA: mov     eax, [rsi+804h]
 * 0000000140BCB5D0: mov     r10, [rsi+838h]
 * 0000000140BCB5D7: sub     eax, ecx
 * 0000000140BCB5D9: mov     r8, [rsi+0A78h]
 * 0000000140BCB5E0: lea     rdx, [rcx+rsi]
 * 0000000140BCB5E4: mov     ecx, eax
 * 0000000140BCB5E6: shr     rcx, 3
 * 0000000140BCB5EA: lea     r9, [rdx+rcx*8]
 * 0000000140BCB5EE: jmp     short loc_140BCB611
 * 0000000140BCB5F0: xor     [rdx], r8
 * 0000000140BCB5F3: mov     rax, [rdx]
 * 0000000140BCB5F6: movzx   ecx, r8b
 * 0000000140BCB5FA: xor     rax, r10
 * 0000000140BCB5FD: and     ecx, 3Fh
 * 0000000140BCB600: ror     r8, cl
 * 0000000140BCB603: add     r8, rax
 * 0000000140BCB606: xor     r8, 0EFAh
 * 0000000140BCB60D: add     rdx, 8
 * 0000000140BCB611: cmp     rdx, r9
 * 0000000140BCB614: jnz     short loc_140BCB5F0
 * 0000000140BCB616: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCB61E: cmp     r8, [rsi+0A80h]
 * 0000000140BCB625: jz      short loc_140BCB668
 * 0000000140BCB627: mov     ecx, [rsi+804h]
 * 0000000140BCB62D: mov     rax, [rsi+588h]
 * 0000000140BCB634: mov     [rax], rsi
 * 0000000140BCB637: mov     [rax+10h], ecx
 * 0000000140BCB63A: mov     rcx, [rsi+0A80h]
 * 0000000140BCB641: cmp     [rsi+918h], r15d
 * 0000000140BCB648: jnz     short loc_140BCB658
 * 0000000140BCB64A: mov     rax, [rsi+588h]
 * 0000000140BCB651: xor     rcx, r8
 * 0000000140BCB654: mov     [rax+18h], rcx
 * 0000000140BCB658: xor     edx, edx
 * 0000000140BCB65A: mov     r9d, 100h
 * 0000000140BCB660: mov     rcx, rsi
 * 0000000140BCB663: call    sub_140BD8384
 * 0000000140BCB668: mov     eax, [r13+28h]
 * 0000000140BCB66C: test    al, 8
 * 0000000140BCB66E: jz      loc_140BC3B58
 * 0000000140BCB674: mov     rax, [rbx+78h]
 * 0000000140BCB678: mov     rdx, [r13+20h]
 * 0000000140BCB67C: mov     rcx, [rax]
 * 0000000140BCB67F: cmp     rcx, rdx
 * 0000000140BCB682: jz      loc_140BC3B58
 * 0000000140BCB688: mov     rax, [rsi+588h]
 * 0000000140BCB68F: mov     [rax], rcx
 * 0000000140BCB692: mov     dword ptr [rax+10h], 100h
 * 0000000140BCB699: cmp     [rsi+918h], r15d
 * 0000000140BCB6A0: jnz     short loc_140BCB6B0
 * 0000000140BCB6A2: mov     rax, [rsi+588h]
 * 0000000140BCB6A9: xor     rcx, rdx
 * 0000000140BCB6AC: mov     [rax+18h], rcx
 * 0000000140BCB6B0: mov     rcx, [rbx+78h]
 * 0000000140BCB6B4: mov     ebx, 1
 * 0000000140BCB6B9: cmp     [rsi+918h], r15d
 * 0000000140BCB6C0: jnz     loc_140BC3B5D
 * 0000000140BCB6C6: lea     rax, [rsi+r14]
 * 0000000140BCB6CA: mov     [rsi+920h], rax
 * 0000000140BCB6D1: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BCB6DB: add     rax, r13
 * 0000000140BCB6DE: mov     [rsi+928h], rax
 * 0000000140BCB6E5: movsxd  rax, dword ptr [r13+0]
 * 0000000140BCB6E9: mov     [rsi+930h], rax
 * 0000000140BCB6F0: mov     [rsi+938h], rcx
 * 0000000140BCB6F7: mov     [rsi+918h], ebx
 * 0000000140BCB6FD: mov     ecx, [rsi+9D8h]
 * 0000000140BCB703: bt      ecx, 1Dh
 * 0000000140BCB707: jb      loc_140BC3B5D
 * 0000000140BCB70D: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCB717: jz      loc_140BC3B5D
 * 0000000140BCB71D: test    bl, cl
 * 0000000140BCB71F: jz      loc_140BC3B5D
 * 0000000140BCB725: mov     ecx, [rsi+0A74h]
 * 0000000140BCB72B: mov     eax, [rsi+804h]
 * 0000000140BCB731: mov     r10, [rsi+838h]
 * 0000000140BCB738: sub     eax, ecx
 * 0000000140BCB73A: mov     r8, [rsi+0A78h]
 * 0000000140BCB741: lea     rdx, [rcx+rsi]
 * 0000000140BCB745: mov     ecx, eax
 * 0000000140BCB747: shr     rcx, 3
 * 0000000140BCB74B: lea     r9, [rdx+rcx*8]
 * 0000000140BCB74F: jmp     short loc_140BCB772
 * 0000000140BCB751: xor     [rdx], r8
 * 0000000140BCB754: mov     rax, [rdx]
 * 0000000140BCB757: movzx   ecx, r8b
 * 0000000140BCB75B: xor     rax, r10
 * 0000000140BCB75E: and     ecx, 3Fh
 * 0000000140BCB761: ror     r8, cl
 * 0000000140BCB764: add     r8, rax
 * 0000000140BCB767: xor     r8, 0EFAh
 * 0000000140BCB76E: add     rdx, 8
 * 0000000140BCB772: cmp     rdx, r9
 * 0000000140BCB775: jnz     short loc_140BCB751
 * 0000000140BCB777: jmp     loc_140BC4A63
 * 0000000140BCB77C: mov     rdx, r13
 * 0000000140BCB77F: mov     rcx, rsi
 * 0000000140BCB782: call    sub_140519364
 * 0000000140BCB787: jmp     loc_140BCE398
 * 0000000140BCB78C: mov     rdx, r13
 * 0000000140BCB78F: mov     rcx, rsi
 * 0000000140BCB792: call    sub_14051A468
 * 0000000140BCB797: jmp     loc_140BCE398
 * 0000000140BCB79C: mov     eax, [rsi+850h]
 * 0000000140BCB7A2: test    bl, al
 * 0000000140BCB7A4: jz      loc_140BC2FAF
 * 0000000140BCB7AA: mov     rax, [rsi+568h]
 * 0000000140BCB7B1: cmp     [rax+20h], r15
 * 0000000140BCB7B5: jnz     short loc_140BCB7BF
 * 0000000140BCB7B7: mov     rbx, r15
 * 0000000140BCB7BA: jmp     loc_140BCB8D2
 * 0000000140BCB7BF: mov     ecx, [rsi+9BCh]
 * 0000000140BCB7C5: mov     r12d, 0FFFFFFFFh
 * 0000000140BCB7CB: cmp     ecx, r12d
 * 0000000140BCB7CE: jnz     short loc_140BCB7DA
 * 0000000140BCB7D0: mov     [rsi+9BCh], r15d
 * 0000000140BCB7D7: mov     ecx, r15d
 * 0000000140BCB7DA: mov     rax, [rsi+288h]
 * 0000000140BCB7E1: call    KeGuardDispatchICall
 * 0000000140BCB7E6: mov     rbx, rax
 * 0000000140BCB7E9: test    rax, rax
 * 0000000140BCB7EC: jnz     short loc_140BCB804
 * 0000000140BCB7EE: mov     rax, [rsi+290h]
 * 0000000140BCB7F5: xor     ecx, ecx
 * 0000000140BCB7F7: call    KeGuardDispatchICall
 * 0000000140BCB7FC: mov     rbx, rax
 * 0000000140BCB7FF: test    rax, rax
 * 0000000140BCB802: jz      short loc_140BCB7B7
 * 0000000140BCB804: lea     r14, [rsi+988h]
 * 0000000140BCB80B: jmp     short loc_140BCB828
 * 0000000140BCB80D: mov     rax, [rsi+290h]
 * 0000000140BCB814: mov     rcx, rbx
 * 0000000140BCB817: call    KeGuardDispatchICall
 * 0000000140BCB81C: mov     rbx, rax
 * 0000000140BCB81F: test    rax, rax
 * 0000000140BCB822: jz      loc_140BCB8B1
 * 0000000140BCB828: mov     rax, [rsi+2A0h]
 * 0000000140BCB82F: mov     rdx, r14
 * 0000000140BCB832: mov     rcx, rbx
 * 0000000140BCB835: call    KeGuardDispatchICall
 * 0000000140BCB83A: test    eax, eax
 * 0000000140BCB83C: js      short loc_140BCB80D
 * 0000000140BCB83E: mov     rax, [rsi+3D0h]
 * 0000000140BCB845: lea     rdx, [rbp+8D0h+var_710]
 * 0000000140BCB84C: xor     r9d, r9d
 * 0000000140BCB84F: xor     r8d, r8d
 * 0000000140BCB852: lea     ecx, [r9+1Ah]
 * 0000000140BCB856: call    KeGuardDispatchICall
 * 0000000140BCB85B: mov     r14d, eax
 * 0000000140BCB85E: lea     rdx, [rsi+988h]
 * 0000000140BCB865: mov     rax, [rsi+2A8h]
 * 0000000140BCB86C: mov     rcx, rbx
 * 0000000140BCB86F: call    KeGuardDispatchICall
 * 0000000140BCB874: mov     rax, [rsi+290h]
 * 0000000140BCB87B: mov     rcx, rbx
 * 0000000140BCB87E: call    KeGuardDispatchICall
 * 0000000140BCB883: mov     rbx, rax
 * 0000000140BCB886: test    rax, rax
 * 0000000140BCB889: jz      short loc_140BCB8BD
 * 0000000140BCB88B: mov     rax, [rsi+2B0h]
 * 0000000140BCB892: mov     rcx, rbx
 * 0000000140BCB895: call    KeGuardDispatchICall
 * 0000000140BCB89A: mov     [rsi+9BCh], eax
 * 0000000140BCB8A0: mov     rcx, rbx
 * 0000000140BCB8A3: mov     rax, [rsi+298h]
 * 0000000140BCB8AA: call    KeGuardDispatchICall
 * 0000000140BCB8AF: jmp     short loc_140BCB8C4
 * 0000000140BCB8B1: mov     [rsi+9BCh], r12d
 * 0000000140BCB8B8: jmp     loc_140BCB7B7
 * 0000000140BCB8BD: mov     [rsi+9BCh], r12d
 * 0000000140BCB8C4: mov     rbx, [rbp+8D0h+var_710]
 * 0000000140BCB8CB: test    r14d, r14d
 * 0000000140BCB8CE: cmovs   rbx, r15
 * 0000000140BCB8D2: mov     rax, [rsi+3B0h]
 * 0000000140BCB8D9: xor     ecx, ecx
 * 0000000140BCB8DB: mov     [rsp+9D0h+var_968], rbx
 * 0000000140BCB8E0: mov     [rsp+9D0h+var_958], r15d
 * 0000000140BCB8E5: call    KeGuardDispatchICall
 * 0000000140BCB8EA: xor     r12d, r12d
 * 0000000140BCB8ED: mov     [rbp+8D0h+var_930], rax
 * 0000000140BCB8F1: mov     r14, rax
 * 0000000140BCB8F4: test    rax, rax
 * 0000000140BCB8F7: jz      loc_140BCC91A
 * 0000000140BCB8FD: mov     rcx, r14
 * 0000000140BCB900: cmp     rbx, r14
 * 0000000140BCB903: jnz     loc_140BCC0D6
 * 0000000140BCB909: mov     rax, [rsi+3A0h]
 * 0000000140BCB910: call    KeGuardDispatchICall
 * 0000000140BCB915: test    eax, eax
 * 0000000140BCB917: js      loc_140BCC8E7
 * 0000000140BCB91D: mov     rax, [rsi+3E0h]
 * 0000000140BCB924: mov     rcx, r14
 * 0000000140BCB927: call    KeGuardDispatchICall
 * 0000000140BCB92C: movzx   ebx, al
 * 0000000140BCB92F: lea     rdx, [rbp+8D0h+var_918]
 * 0000000140BCB933: mov     rax, [rsi+3E8h]
 * 0000000140BCB93A: mov     rcx, r14
 * 0000000140BCB93D: call    KeGuardDispatchICall
 * 0000000140BCB942: mov     byte ptr [rbp+8D0h+arg_8], al
 * 0000000140BCB948: mov     rcx, r14
 * 0000000140BCB94B: mov     rax, [rsi+3F0h]
 * 0000000140BCB952: call    KeGuardDispatchICall
 * 0000000140BCB957: mov     [rbp+8D0h+var_950], rax
 * 0000000140BCB95B: cmp     bl, 61h ; 'a'
 * 0000000140BCB95E: jz      loc_140BCBAA9
 * 0000000140BCB964: cmp     [rsi+918h], r12d
 * 0000000140BCB96B: jnz     loc_140BCBAA9
 * 0000000140BCB971: mov     rax, [rsi+588h]
 * 0000000140BCB978: mov     ecx, ebx
 * 0000000140BCB97A: xor     rcx, 61h
 * 0000000140BCB97E: mov     [rax+18h], rcx
 * 0000000140BCB982: cmp     [rsi+918h], r12d
 * 0000000140BCB989: jnz     loc_140BCBAA9
 * 0000000140BCB98F: mov     rdx, [rsp+9D0h+var_980]
 * 0000000140BCB994: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140BCB99E: mov     r9, 0B3B74BDEE4453415h
 * 0000000140BCB9A8: mov     r8d, 1
 * 0000000140BCB9AE: lea     rax, [rsi+r10]
 * 0000000140BCB9B2: mov     [rsi+920h], rax
 * 0000000140BCB9B9: lea     rax, [rdx+r9]
 * 0000000140BCB9BD: mov     [rsi+928h], rax
 * 0000000140BCB9C4: movsxd  rax, dword ptr [rdx]
 * 0000000140BCB9C7: mov     [rsi+930h], rax
 * 0000000140BCB9CE: mov     [rsi+938h], r14
 * 0000000140BCB9D5: mov     [rsi+918h], r8d
 * 0000000140BCB9DC: mov     ecx, [rsi+9D8h]
 * 0000000140BCB9E2: bt      ecx, 1Dh
 * 0000000140BCB9E6: jb      loc_140BCBAC8
 * 0000000140BCB9EC: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCB9F6: jz      loc_140BCBAC8
 * 0000000140BCB9FC: test    r8b, cl
 * 0000000140BCB9FF: jz      loc_140BCBAC8
 * 0000000140BCBA05: mov     ecx, [rsi+0A74h]
 * 0000000140BCBA0B: mov     eax, [rsi+804h]
 * 0000000140BCBA11: mov     r10, [rsi+838h]
 * 0000000140BCBA18: sub     eax, ecx
 * 0000000140BCBA1A: mov     r8, [rsi+0A78h]
 * 0000000140BCBA21: lea     rdx, [rcx+rsi]
 * 0000000140BCBA25: mov     ecx, eax
 * 0000000140BCBA27: shr     rcx, 3
 * 0000000140BCBA2B: lea     r9, [rdx+rcx*8]
 * 0000000140BCBA2F: jmp     short loc_140BCBA52
 * 0000000140BCBA31: xor     [rdx], r8
 * 0000000140BCBA34: mov     rax, [rdx]
 * 0000000140BCBA37: movzx   ecx, r8b
 * 0000000140BCBA3B: xor     rax, r10
 * 0000000140BCBA3E: and     ecx, 3Fh
 * 0000000140BCBA41: ror     r8, cl
 * 0000000140BCBA44: add     r8, rax
 * 0000000140BCBA47: xor     r8, 0EFAh
 * 0000000140BCBA4E: add     rdx, 8
 * 0000000140BCBA52: cmp     rdx, r9
 * 0000000140BCBA55: jnz     short loc_140BCBA31
 * 0000000140BCBA57: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCBA5F: cmp     r8, [rsi+0A80h]
 * 0000000140BCBA66: jz      short loc_140BCBAA9
 * 0000000140BCBA68: mov     ecx, [rsi+804h]
 * 0000000140BCBA6E: mov     rax, [rsi+588h]
 * 0000000140BCBA75: mov     [rax], rsi
 * 0000000140BCBA78: mov     [rax+10h], ecx
 * 0000000140BCBA7B: mov     rcx, [rsi+0A80h]
 * 0000000140BCBA82: cmp     [rsi+918h], r12d
 * 0000000140BCBA89: jnz     short loc_140BCBA99
 * 0000000140BCBA8B: mov     rax, [rsi+588h]
 * 0000000140BCBA92: xor     rcx, r8
 * 0000000140BCBA95: mov     [rax+18h], rcx
 * 0000000140BCBA99: xor     edx, edx
 * 0000000140BCBA9B: mov     r9d, 100h
 * 0000000140BCBAA1: mov     rcx, rsi
 * 0000000140BCBAA4: call    sub_140BD8384
 * 0000000140BCBAA9: mov     rdx, [rsp+9D0h+var_980]
 * 0000000140BCBAAE: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140BCBAB8: mov     r9, 0B3B74BDEE4453415h
 * 0000000140BCBAC2: mov     r8d, 1
 * 0000000140BCBAC8: mov     ecx, ebx
 * 0000000140BCBACA: mov     r14b, r12b
 * 0000000140BCBACD: and     ecx, 7
 * 0000000140BCBAD0: sub     ecx, 1
 * 0000000140BCBAD3: jz      loc_140BCBC09
 * 0000000140BCBAD9: xor     r11d, r11d
 * 0000000140BCBADC: cmp     ecx, 1
 * 0000000140BCBADF: jz      loc_140BCBBFC
 * 0000000140BCBAE5: test    bl, 7
 * 0000000140BCBAE8: jz      loc_140BCBC0F
 * 0000000140BCBAEE: cmp     [rsi+918h], r11d
 * 0000000140BCBAF5: jnz     loc_140BCBC0F
 * 0000000140BCBAFB: lea     rax, [rsi+r10]
 * 0000000140BCBAFF: mov     [rsi+920h], rax
 * 0000000140BCBB06: lea     rax, [rdx+r9]
 * 0000000140BCBB0A: mov     [rsi+928h], rax
 * 0000000140BCBB11: movsxd  rax, dword ptr [rdx]
 * 0000000140BCBB14: mov     [rsi+930h], rax
 * 0000000140BCBB1B: mov     rax, [rbp+8D0h+var_930]
 * 0000000140BCBB1F: mov     [rsi+938h], rax
 * 0000000140BCBB26: mov     [rsi+918h], r8d
 * 0000000140BCBB2D: mov     ecx, [rsi+9D8h]
 * 0000000140BCBB33: bt      ecx, 1Dh
 * 0000000140BCBB37: jb      loc_140BCBC0F
 * 0000000140BCBB3D: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCBB47: jz      loc_140BCBC0F
 * 0000000140BCBB4D: test    r8b, cl
 * 0000000140BCBB50: jz      loc_140BCBC0F
 * 0000000140BCBB56: mov     ecx, [rsi+0A74h]
 * 0000000140BCBB5C: mov     eax, [rsi+804h]
 * 0000000140BCBB62: mov     r10, [rsi+838h]
 * 0000000140BCBB69: sub     eax, ecx
 * 0000000140BCBB6B: mov     r8, [rsi+0A78h]
 * 0000000140BCBB72: lea     rdx, [rcx+rsi]
 * 0000000140BCBB76: mov     ecx, eax
 * 0000000140BCBB78: shr     rcx, 3
 * 0000000140BCBB7C: lea     r9, [rdx+rcx*8]
 * 0000000140BCBB80: jmp     short loc_140BCBBA3
 * 0000000140BCBB82: xor     [rdx], r8
 * 0000000140BCBB85: mov     rax, [rdx]
 * 0000000140BCBB88: movzx   ecx, r8b
 * 0000000140BCBB8C: xor     rax, r10
 * 0000000140BCBB8F: and     ecx, 3Fh
 * 0000000140BCBB92: ror     r8, cl
 * 0000000140BCBB95: add     r8, rax
 * 0000000140BCBB98: xor     r8, 0EFAh
 * 0000000140BCBB9F: add     rdx, 8
 * 0000000140BCBBA3: cmp     rdx, r9
 * 0000000140BCBBA6: jnz     short loc_140BCBB82
 * 0000000140BCBBA8: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCBBB0: cmp     r8, [rsi+0A80h]
 * 0000000140BCBBB7: jz      short loc_140BCBC0F
 * 0000000140BCBBB9: mov     ecx, [rsi+804h]
 * 0000000140BCBBBF: mov     rax, [rsi+588h]
 * 0000000140BCBBC6: mov     [rax], rsi
 * 0000000140BCBBC9: mov     [rax+10h], ecx
 * 0000000140BCBBCC: mov     rcx, [rsi+0A80h]
 * 0000000140BCBBD3: cmp     [rsi+918h], r11d
 * 0000000140BCBBDA: jnz     short loc_140BCBBEA
 * 0000000140BCBBDC: mov     rax, [rsi+588h]
 * 0000000140BCBBE3: xor     rcx, r8
 * 0000000140BCBBE6: mov     [rax+18h], rcx
 * 0000000140BCBBEA: xor     edx, edx
 * 0000000140BCBBEC: mov     r9d, 100h
 * 0000000140BCBBF2: mov     rcx, rsi
 * 0000000140BCBBF5: call    sub_140BD8384
 * 0000000140BCBBFA: jmp     short loc_140BCBC0C
 * 0000000140BCBBFC: mov     eax, 10h
 * 0000000140BCBC01: mov     r14b, al
 * 0000000140BCBC04: mov     r12b, al
 * 0000000140BCBC07: jmp     short loc_140BCBC0F
 * 0000000140BCBC09: mov     r14b, 30h ; '0'
 * 0000000140BCBC0C: xor     r11d, r11d
 * 0000000140BCBC0F: mov     r15, [rsi+5C0h]
 * 0000000140BCBC16: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140BCBC20: mov     dil, byte ptr [rbp+8D0h+arg_8]
 * 0000000140BCBC27: mov     r9, 0B3B74BDEE4453415h
 * 0000000140BCBC31: mov     rdx, [rsp+9D0h+var_980]
 * 0000000140BCBC36: mov     r8d, 1
 * 0000000140BCBC3C: shr     rbx, 4
 * 0000000140BCBC40: or      r14b, [r15+rbx*2]
 * 0000000140BCBC44: cmp     r14b, dil
 * 0000000140BCBC47: mov     r14, [rbp+8D0h+var_930]
 * 0000000140BCBC4B: jz      loc_140BCBD78
 * 0000000140BCBC51: cmp     [rsi+918h], r11d
 * 0000000140BCBC58: jnz     loc_140BCBD78
 * 0000000140BCBC5E: lea     rax, [rsi+r10]
 * 0000000140BCBC62: mov     [rsi+920h], rax
 * 0000000140BCBC69: lea     rax, [rdx+r9]
 * 0000000140BCBC6D: mov     [rsi+928h], rax
 * 0000000140BCBC74: movsxd  rax, dword ptr [rdx]
 * 0000000140BCBC77: mov     [rsi+930h], rax
 * 0000000140BCBC7E: mov     [rsi+938h], r14
 * 0000000140BCBC85: mov     [rsi+918h], r8d
 * 0000000140BCBC8C: mov     ecx, [rsi+9D8h]
 * 0000000140BCBC92: bt      ecx, 1Dh
 * 0000000140BCBC96: jb      loc_140BCBD78
 * 0000000140BCBC9C: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCBCA6: jz      loc_140BCBD78
 * 0000000140BCBCAC: test    r8b, cl
 * 0000000140BCBCAF: jz      loc_140BCBD78
 * 0000000140BCBCB5: mov     ecx, [rsi+0A74h]
 * 0000000140BCBCBB: mov     eax, [rsi+804h]
 * 0000000140BCBCC1: mov     r10, [rsi+838h]
 * 0000000140BCBCC8: sub     eax, ecx
 * 0000000140BCBCCA: mov     r8, [rsi+0A78h]
 * 0000000140BCBCD1: lea     rdx, [rcx+rsi]
 * 0000000140BCBCD5: mov     ecx, eax
 * 0000000140BCBCD7: shr     rcx, 3
 * 0000000140BCBCDB: lea     r9, [rdx+rcx*8]
 * 0000000140BCBCDF: jmp     short loc_140BCBD02
 * 0000000140BCBCE1: xor     [rdx], r8
 * 0000000140BCBCE4: mov     rax, [rdx]
 * 0000000140BCBCE7: movzx   ecx, r8b
 * 0000000140BCBCEB: xor     rax, r10
 * 0000000140BCBCEE: and     ecx, 3Fh
 * 0000000140BCBCF1: ror     r8, cl
 * 0000000140BCBCF4: add     r8, rax
 * 0000000140BCBCF7: xor     r8, 0EFAh
 * 0000000140BCBCFE: add     rdx, 8
 * 0000000140BCBD02: cmp     rdx, r9
 * 0000000140BCBD05: jnz     short loc_140BCBCE1
 * 0000000140BCBD07: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCBD0F: cmp     r8, [rsi+0A80h]
 * 0000000140BCBD16: jz      short loc_140BCBD59
 * 0000000140BCBD18: mov     ecx, [rsi+804h]
 * 0000000140BCBD1E: mov     rax, [rsi+588h]
 * 0000000140BCBD25: mov     [rax], rsi
 * 0000000140BCBD28: mov     [rax+10h], ecx
 * 0000000140BCBD2B: mov     rcx, [rsi+0A80h]
 * 0000000140BCBD32: cmp     [rsi+918h], r11d
 * 0000000140BCBD39: jnz     short loc_140BCBD49
 * 0000000140BCBD3B: mov     rax, [rsi+588h]
 * 0000000140BCBD42: xor     rcx, r8
 * 0000000140BCBD45: mov     [rax+18h], rcx
 * 0000000140BCBD49: xor     edx, edx
 * 0000000140BCBD4B: mov     r9d, 100h
 * 0000000140BCBD51: mov     rcx, rsi
 * 0000000140BCBD54: call    sub_140BD8384
 * 0000000140BCBD59: mov     rdx, [rsp+9D0h+var_980]
 * 0000000140BCBD5E: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140BCBD68: mov     r9, 0B3B74BDEE4453415h
 * 0000000140BCBD72: mov     r8d, 1
 * 0000000140BCBD78: or      r12b, [r15+rbx*2+1]
 * 0000000140BCBD7D: cmp     r12b, [rbp+8D0h+var_918]
 * 0000000140BCBD81: jz      loc_140BCBE94
 * 0000000140BCBD87: xor     r12d, r12d
 * 0000000140BCBD8A: cmp     [rsi+918h], r12d
 * 0000000140BCBD91: jnz     loc_140BCBE97
 * 0000000140BCBD97: lea     rax, [rsi+r10]
 * 0000000140BCBD9B: mov     [rsi+920h], rax
 * 0000000140BCBDA2: lea     rax, [rdx+r9]
 * 0000000140BCBDA6: mov     [rsi+928h], rax
 * 0000000140BCBDAD: movsxd  rax, dword ptr [rdx]
 * 0000000140BCBDB0: mov     [rsi+930h], rax
 * 0000000140BCBDB7: mov     [rsi+938h], r14
 * 0000000140BCBDBE: mov     [rsi+918h], r8d
 * 0000000140BCBDC5: mov     ecx, [rsi+9D8h]
 * 0000000140BCBDCB: bt      ecx, 1Dh
 * 0000000140BCBDCF: jb      loc_140BCBE97
 * 0000000140BCBDD5: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCBDDF: jz      loc_140BCBE97
 * 0000000140BCBDE5: test    r8b, cl
 * 0000000140BCBDE8: jz      loc_140BCBE97
 * 0000000140BCBDEE: mov     ecx, [rsi+0A74h]
 * 0000000140BCBDF4: mov     eax, [rsi+804h]
 * 0000000140BCBDFA: mov     r10, [rsi+838h]
 * 0000000140BCBE01: sub     eax, ecx
 * 0000000140BCBE03: mov     r8, [rsi+0A78h]
 * 0000000140BCBE0A: lea     rdx, [rcx+rsi]
 * 0000000140BCBE0E: mov     ecx, eax
 * 0000000140BCBE10: shr     rcx, 3
 * 0000000140BCBE14: lea     r9, [rdx+rcx*8]
 * 0000000140BCBE18: jmp     short loc_140BCBE3B
 * 0000000140BCBE1A: xor     [rdx], r8
 * 0000000140BCBE1D: mov     rax, [rdx]
 * 0000000140BCBE20: movzx   ecx, r8b
 * 0000000140BCBE24: xor     rax, r10
 * 0000000140BCBE27: and     ecx, 3Fh
 * 0000000140BCBE2A: ror     r8, cl
 * 0000000140BCBE2D: add     r8, rax
 * 0000000140BCBE30: xor     r8, 0EFAh
 * 0000000140BCBE37: add     rdx, 8
 * 0000000140BCBE3B: cmp     rdx, r9
 * 0000000140BCBE3E: jnz     short loc_140BCBE1A
 * 0000000140BCBE40: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCBE48: cmp     r8, [rsi+0A80h]
 * 0000000140BCBE4F: jz      short loc_140BCBE97
 * 0000000140BCBE51: mov     ecx, [rsi+804h]
 * 0000000140BCBE57: mov     rax, [rsi+588h]
 * 0000000140BCBE5E: mov     [rax], rsi
 * 0000000140BCBE61: mov     [rax+10h], ecx
 * 0000000140BCBE64: mov     rcx, [rsi+0A80h]
 * 0000000140BCBE6B: cmp     [rsi+918h], r12d
 * 0000000140BCBE72: jnz     short loc_140BCBE82
 * 0000000140BCBE74: mov     rax, [rsi+588h]
 * 0000000140BCBE7B: xor     rcx, r8
 * 0000000140BCBE7E: mov     [rax+18h], rcx
 * 0000000140BCBE82: xor     edx, edx
 * 0000000140BCBE84: mov     r9d, 100h
 * 0000000140BCBE8A: mov     rcx, rsi
 * 0000000140BCBE8D: call    sub_140BD8384
 * 0000000140BCBE92: jmp     short loc_140BCBE97
 * 0000000140BCBE94: xor     r12d, r12d
 * 0000000140BCBE97: cmp     r14, [rsi+4D8h]
 * 0000000140BCBE9E: jz      loc_140BCC8C3
 * 0000000140BCBEA4: mov     rax, [rsi+3D8h]
 * 0000000140BCBEAB: mov     edx, 1
 * 0000000140BCBEB0: mov     rcx, r14
 * 0000000140BCBEB3: call    KeGuardDispatchICall
 * 0000000140BCBEB8: mov     rbx, rax
 * 0000000140BCBEBB: test    rax, rax
 * 0000000140BCBEBE: jz      loc_140BCC8C3
 * 0000000140BCBEC4: mov     rcx, [rax]
 * 0000000140BCBEC7: mov     r15, rax
 * 0000000140BCBECA: test    rcx, rcx
 * 0000000140BCBECD: jz      loc_140BCC8B4
 * 0000000140BCBED3: mov     r12, [rbp+8D0h+var_950]
 * 0000000140BCBED7: mov     r15, [rbp+8D0h+var_930]
 * 0000000140BCBEDB: mov     [rsp+9D0h+var_978], rax
 * 0000000140BCBEE0: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 0000000140BCBEE4: mov     [rbx], rcx
 * 0000000140BCBEE7: mov     rax, [rsi+1F0h]
 * 0000000140BCBEEE: call    KeGuardDispatchICall
 * 0000000140BCBEF3: mov     rcx, [rbx+8]
 * 0000000140BCBEF7: movzx   edx, [rbp+8D0h+var_918]
 * 0000000140BCBEFB: mov     r14, rcx
 * 0000000140BCBEFE: movzx   eax, dil
 * 0000000140BCBF02: and     r14, 0FFFFFFFFFFFF0000h
 * 0000000140BCBF09: cmp     r14, r12
 * 0000000140BCBF0C: cmovz   edx, eax
 * 0000000140BCBF0F: mov     rax, [rsi+3F8h]
 * 0000000140BCBF16: shr     rcx, 6
 * 0000000140BCBF1A: and     cl, 0Fh
 * 0000000140BCBF1D: call    KeGuardDispatchICall
 * 0000000140BCBF22: xor     r11d, r11d
 * 0000000140BCBF25: test    eax, eax
 * 0000000140BCBF27: jnz     loc_140BCC0BC
 * 0000000140BCBF2D: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BCBF37: lea     r9d, [r11+1]
 * 0000000140BCBF3B: jz      short loc_140BCBF89
 * 0000000140BCBF3D: mov     rcx, [rsi+0AC8h]
 * 0000000140BCBF44: lea     edx, [rax+30h]
 * 0000000140BCBF47: lea     r8d, [r11+6]
 * 0000000140BCBF4B: mov     rax, [r13+0]
 * 0000000140BCBF4F: add     edx, 0FFFFFFF8h
 * 0000000140BCBF52: mov     [rcx], rax
 * 0000000140BCBF55: add     r13, 8
 * 0000000140BCBF59: add     rcx, 8
 * 0000000140BCBF5D: sub     r8, r9
 * 0000000140BCBF60: jnz     short loc_140BCBF4B
 * 0000000140BCBF62: test    edx, edx
 * 0000000140BCBF64: jz      short loc_140BCBF82
 * 0000000140BCBF66: mov     edi, 0FFFFFFFFh
 * 0000000140BCBF6B: mov     al, [r13+0]
 * 0000000140BCBF6F: add     r13, r9
 * 0000000140BCBF72: mov     [rcx], al
 * 0000000140BCBF74: add     rcx, r9
 * 0000000140BCBF77: add     edx, edi
 * 0000000140BCBF79: jnz     short loc_140BCBF6B
 * 0000000140BCBF7B: mov     dil, byte ptr [rbp+8D0h+arg_8]
 * 0000000140BCBF82: mov     r13, [rsi+0AC8h]
 * 0000000140BCBF89: mov     [r13+18h], r14
 * 0000000140BCBF8D: mov     rax, [rbx]
 * 0000000140BCBF90: mov     [r13+20h], rax
 * 0000000140BCBF94: mov     eax, [rbx+8]
 * 0000000140BCBF97: shr     rax, 6
 * 0000000140BCBF9B: and     al, 0Fh
 * 0000000140BCBF9D: mov     [r13+28h], al
 * 0000000140BCBFA1: cmp     [rsi+918h], r11d
 * 0000000140BCBFA8: jnz     loc_140BCC0BC
 * 0000000140BCBFAE: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BCBFB8: add     rax, rsi
 * 0000000140BCBFBB: mov     [rsi+920h], rax
 * 0000000140BCBFC2: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BCBFCC: add     rax, r13
 * 0000000140BCBFCF: mov     [rsi+928h], rax
 * 0000000140BCBFD6: movsxd  rax, dword ptr [r13+0]
 * 0000000140BCBFDA: mov     [rsi+930h], rax
 * 0000000140BCBFE1: mov     [rsi+938h], r15
 * 0000000140BCBFE8: mov     [rsi+918h], r9d
 * 0000000140BCBFEF: mov     ecx, [rsi+9D8h]
 * 0000000140BCBFF5: bt      ecx, 1Dh
 * 0000000140BCBFF9: jb      loc_140BCC0BC
 * 0000000140BCBFFF: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCC009: jz      loc_140BCC0BC
 * 0000000140BCC00F: test    r9b, cl
 * 0000000140BCC012: jz      loc_140BCC0BC
 * 0000000140BCC018: mov     ecx, [rsi+0A74h]
 * 0000000140BCC01E: mov     eax, [rsi+804h]
 * 0000000140BCC024: mov     r10, [rsi+838h]
 * 0000000140BCC02B: sub     eax, ecx
 * 0000000140BCC02D: mov     r8, [rsi+0A78h]
 * 0000000140BCC034: lea     rdx, [rcx+rsi]
 * 0000000140BCC038: mov     ecx, eax
 * 0000000140BCC03A: shr     rcx, 3
 * 0000000140BCC03E: lea     r9, [rdx+rcx*8]
 * 0000000140BCC042: jmp     short loc_140BCC065
 * 0000000140BCC044: xor     [rdx], r8
 * 0000000140BCC047: mov     rax, [rdx]
 * 0000000140BCC04A: movzx   ecx, r8b
 * 0000000140BCC04E: xor     rax, r10
 * 0000000140BCC051: and     ecx, 3Fh
 * 0000000140BCC054: ror     r8, cl
 * 0000000140BCC057: add     r8, rax
 * 0000000140BCC05A: xor     r8, 0EFAh
 * 0000000140BCC061: add     rdx, 8
 * 0000000140BCC065: cmp     rdx, r9
 * 0000000140BCC068: jnz     short loc_140BCC044
 * 0000000140BCC06A: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCC072: cmp     r8, [rsi+0A80h]
 * 0000000140BCC079: jz      short loc_140BCC0BC
 * 0000000140BCC07B: mov     ecx, [rsi+804h]
 * 0000000140BCC081: mov     rax, [rsi+588h]
 * 0000000140BCC088: mov     [rax], rsi
 * 0000000140BCC08B: mov     [rax+10h], ecx
 * 0000000140BCC08E: mov     rcx, [rsi+0A80h]
 * 0000000140BCC095: cmp     [rsi+918h], r11d
 * 0000000140BCC09C: jnz     short loc_140BCC0AC
 * 0000000140BCC09E: mov     rax, [rsi+588h]
 * 0000000140BCC0A5: xor     rcx, r8
 * 0000000140BCC0A8: mov     [rax+18h], rcx
 * 0000000140BCC0AC: xor     edx, edx
 * 0000000140BCC0AE: mov     r9d, 100h
 * 0000000140BCC0B4: mov     rcx, rsi
 * 0000000140BCC0B7: call    sub_140BD8384
 * 0000000140BCC0BC: add     rbx, 30h ; '0'
 * 0000000140BCC0C0: mov     rcx, [rbx]
 * 0000000140BCC0C3: test    rcx, rcx
 * 0000000140BCC0C6: jnz     loc_140BCBEE0
 * 0000000140BCC0CC: mov     r15, [rsp+9D0h+var_978]
 * 0000000140BCC0D1: jmp     loc_140BCC8AD
 * 0000000140BCC0D6: mov     rax, [rsi+3C8h]
 * 0000000140BCC0DD: call    KeGuardDispatchICall
 * 0000000140BCC0E2: test    eax, eax
 * 0000000140BCC0E4: jz      loc_140BCC8EC
 * 0000000140BCC0EA: mov     rax, [rsi+3A0h]
 * 0000000140BCC0F1: mov     rcx, r14
 * 0000000140BCC0F4: call    KeGuardDispatchICall
 * 0000000140BCC0F9: test    eax, eax
 * 0000000140BCC0FB: js      loc_140BCC8E7
 * 0000000140BCC101: mov     rax, [rsi+3E0h]
 * 0000000140BCC108: mov     rcx, r14
 * 0000000140BCC10B: call    KeGuardDispatchICall
 * 0000000140BCC110: movzx   ebx, al
 * 0000000140BCC113: lea     rdx, [rbp+8D0h+var_917]
 * 0000000140BCC117: mov     rax, [rsi+3E8h]
 * 0000000140BCC11E: mov     rcx, r14
 * 0000000140BCC121: call    KeGuardDispatchICall
 * 0000000140BCC126: movzx   edi, al
 * 0000000140BCC129: mov     rcx, r14
 * 0000000140BCC12C: mov     rax, [rsi+3F0h]
 * 0000000140BCC133: call    KeGuardDispatchICall
 * 0000000140BCC138: mov     [rbp+8D0h+arg_8], rax
 * 0000000140BCC13F: cmp     bl, 61h ; 'a'
 * 0000000140BCC142: jz      loc_140BCC28D
 * 0000000140BCC148: cmp     [rsi+918h], r12d
 * 0000000140BCC14F: jnz     loc_140BCC28D
 * 0000000140BCC155: mov     rax, [rsi+588h]
 * 0000000140BCC15C: mov     ecx, ebx
 * 0000000140BCC15E: xor     rcx, 61h
 * 0000000140BCC162: mov     [rax+18h], rcx
 * 0000000140BCC166: cmp     [rsi+918h], r12d
 * 0000000140BCC16D: jnz     loc_140BCC28D
 * 0000000140BCC173: mov     rdx, [rsp+9D0h+var_980]
 * 0000000140BCC178: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140BCC182: mov     r9, 0B3B74BDEE4453415h
 * 0000000140BCC18C: mov     r8d, 1
 * 0000000140BCC192: lea     rax, [rsi+r10]
 * 0000000140BCC196: mov     [rsi+920h], rax
 * 0000000140BCC19D: lea     rax, [rdx+r9]
 * 0000000140BCC1A1: mov     [rsi+928h], rax
 * 0000000140BCC1A8: movsxd  rax, dword ptr [rdx]
 * 0000000140BCC1AB: mov     [rsi+930h], rax
 * 0000000140BCC1B2: mov     [rsi+938h], r14
 * 0000000140BCC1B9: mov     [rsi+918h], r8d
 * 0000000140BCC1C0: mov     ecx, [rsi+9D8h]
 * 0000000140BCC1C6: bt      ecx, 1Dh
 * 0000000140BCC1CA: jb      loc_140BCC2AC
 * 0000000140BCC1D0: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCC1DA: jz      loc_140BCC2AC
 * 0000000140BCC1E0: test    r8b, cl
 * 0000000140BCC1E3: jz      loc_140BCC2AC
 * 0000000140BCC1E9: mov     ecx, [rsi+0A74h]
 * 0000000140BCC1EF: mov     eax, [rsi+804h]
 * 0000000140BCC1F5: mov     r10, [rsi+838h]
 * 0000000140BCC1FC: sub     eax, ecx
 * 0000000140BCC1FE: mov     r8, [rsi+0A78h]
 * 0000000140BCC205: lea     rdx, [rcx+rsi]
 * 0000000140BCC209: mov     ecx, eax
 * 0000000140BCC20B: shr     rcx, 3
 * 0000000140BCC20F: lea     r9, [rdx+rcx*8]
 * 0000000140BCC213: jmp     short loc_140BCC236
 * 0000000140BCC215: xor     [rdx], r8
 * 0000000140BCC218: mov     rax, [rdx]
 * 0000000140BCC21B: movzx   ecx, r8b
 * 0000000140BCC21F: xor     rax, r10
 * 0000000140BCC222: and     ecx, 3Fh
 * 0000000140BCC225: ror     r8, cl
 * 0000000140BCC228: add     r8, rax
 * 0000000140BCC22B: xor     r8, 0EFAh
 * 0000000140BCC232: add     rdx, 8
 * 0000000140BCC236: cmp     rdx, r9
 * 0000000140BCC239: jnz     short loc_140BCC215
 * 0000000140BCC23B: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCC243: cmp     r8, [rsi+0A80h]
 * 0000000140BCC24A: jz      short loc_140BCC28D
 * 0000000140BCC24C: mov     ecx, [rsi+804h]
 * 0000000140BCC252: mov     rax, [rsi+588h]
 * 0000000140BCC259: mov     [rax], rsi
 * 0000000140BCC25C: mov     [rax+10h], ecx
 * 0000000140BCC25F: mov     rcx, [rsi+0A80h]
 * 0000000140BCC266: cmp     [rsi+918h], r12d
 * 0000000140BCC26D: jnz     short loc_140BCC27D
 * 0000000140BCC26F: mov     rax, [rsi+588h]
 * 0000000140BCC276: xor     rcx, r8
 * 0000000140BCC279: mov     [rax+18h], rcx
 * 0000000140BCC27D: xor     edx, edx
 * 0000000140BCC27F: mov     r9d, 100h
 * 0000000140BCC285: mov     rcx, rsi
 * 0000000140BCC288: call    sub_140BD8384
 * 0000000140BCC28D: mov     rdx, [rsp+9D0h+var_980]
 * 0000000140BCC292: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140BCC29C: mov     r9, 0B3B74BDEE4453415h
 * 0000000140BCC2A6: mov     r8d, 1
 * 0000000140BCC2AC: mov     ecx, ebx
 * 0000000140BCC2AE: mov     r14b, r12b
 * 0000000140BCC2B1: and     ecx, 7
 * 0000000140BCC2B4: sub     ecx, 1
 * 0000000140BCC2B7: jz      loc_140BCC3ED
 * 0000000140BCC2BD: xor     r11d, r11d
 * 0000000140BCC2C0: cmp     ecx, 1
 * 0000000140BCC2C3: jz      loc_140BCC3E0
 * 0000000140BCC2C9: test    bl, 7
 * 0000000140BCC2CC: jz      loc_140BCC3F3
 * 0000000140BCC2D2: cmp     [rsi+918h], r11d
 * 0000000140BCC2D9: jnz     loc_140BCC3F3
 * 0000000140BCC2DF: lea     rax, [rsi+r10]
 * 0000000140BCC2E3: mov     [rsi+920h], rax
 * 0000000140BCC2EA: lea     rax, [rdx+r9]
 * 0000000140BCC2EE: mov     [rsi+928h], rax
 * 0000000140BCC2F5: movsxd  rax, dword ptr [rdx]
 * 0000000140BCC2F8: mov     [rsi+930h], rax
 * 0000000140BCC2FF: mov     rax, [rbp+8D0h+var_930]
 * 0000000140BCC303: mov     [rsi+938h], rax
 * 0000000140BCC30A: mov     [rsi+918h], r8d
 * 0000000140BCC311: mov     ecx, [rsi+9D8h]
 * 0000000140BCC317: bt      ecx, 1Dh
 * 0000000140BCC31B: jb      loc_140BCC3F3
 * 0000000140BCC321: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCC32B: jz      loc_140BCC3F3
 * 0000000140BCC331: test    r8b, cl
 * 0000000140BCC334: jz      loc_140BCC3F3
 * 0000000140BCC33A: mov     ecx, [rsi+0A74h]
 * 0000000140BCC340: mov     eax, [rsi+804h]
 * 0000000140BCC346: mov     r10, [rsi+838h]
 * 0000000140BCC34D: sub     eax, ecx
 * 0000000140BCC34F: mov     r8, [rsi+0A78h]
 * 0000000140BCC356: lea     rdx, [rcx+rsi]
 * 0000000140BCC35A: mov     ecx, eax
 * 0000000140BCC35C: shr     rcx, 3
 * 0000000140BCC360: lea     r9, [rdx+rcx*8]
 * 0000000140BCC364: jmp     short loc_140BCC387
 * 0000000140BCC366: xor     [rdx], r8
 * 0000000140BCC369: mov     rax, [rdx]
 * 0000000140BCC36C: movzx   ecx, r8b
 * 0000000140BCC370: xor     rax, r10
 * 0000000140BCC373: and     ecx, 3Fh
 * 0000000140BCC376: ror     r8, cl
 * 0000000140BCC379: add     r8, rax
 * 0000000140BCC37C: xor     r8, 0EFAh
 * 0000000140BCC383: add     rdx, 8
 * 0000000140BCC387: cmp     rdx, r9
 * 0000000140BCC38A: jnz     short loc_140BCC366
 * 0000000140BCC38C: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCC394: cmp     r8, [rsi+0A80h]
 * 0000000140BCC39B: jz      short loc_140BCC3F3
 * 0000000140BCC39D: mov     ecx, [rsi+804h]
 * 0000000140BCC3A3: mov     rax, [rsi+588h]
 * 0000000140BCC3AA: mov     [rax], rsi
 * 0000000140BCC3AD: mov     [rax+10h], ecx
 * 0000000140BCC3B0: mov     rcx, [rsi+0A80h]
 * 0000000140BCC3B7: cmp     [rsi+918h], r11d
 * 0000000140BCC3BE: jnz     short loc_140BCC3CE
 * 0000000140BCC3C0: mov     rax, [rsi+588h]
 * 0000000140BCC3C7: xor     rcx, r8
 * 0000000140BCC3CA: mov     [rax+18h], rcx
 * 0000000140BCC3CE: xor     edx, edx
 * 0000000140BCC3D0: mov     r9d, 100h
 * 0000000140BCC3D6: mov     rcx, rsi
 * 0000000140BCC3D9: call    sub_140BD8384
 * 0000000140BCC3DE: jmp     short loc_140BCC3F0
 * 0000000140BCC3E0: mov     eax, 10h
 * 0000000140BCC3E5: mov     r14b, al
 * 0000000140BCC3E8: mov     r12b, al
 * 0000000140BCC3EB: jmp     short loc_140BCC3F3
 * 0000000140BCC3ED: mov     r14b, 30h ; '0'
 * 0000000140BCC3F0: xor     r11d, r11d
 * 0000000140BCC3F3: mov     r15, [rsi+5C0h]
 * 0000000140BCC3FA: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140BCC404: mov     rdx, [rsp+9D0h+var_980]
 * 0000000140BCC409: mov     r9, 0B3B74BDEE4453415h
 * 0000000140BCC413: shr     rbx, 4
 * 0000000140BCC417: mov     r8d, 1
 * 0000000140BCC41D: or      r14b, [r15+rbx*2]
 * 0000000140BCC421: cmp     r14b, dil
 * 0000000140BCC424: mov     r14, [rbp+8D0h+var_930]
 * 0000000140BCC428: jz      loc_140BCC555
 * 0000000140BCC42E: cmp     [rsi+918h], r11d
 * 0000000140BCC435: jnz     loc_140BCC555
 * 0000000140BCC43B: lea     rax, [rsi+r10]
 * 0000000140BCC43F: mov     [rsi+920h], rax
 * 0000000140BCC446: lea     rax, [rdx+r9]
 * 0000000140BCC44A: mov     [rsi+928h], rax
 * 0000000140BCC451: movsxd  rax, dword ptr [rdx]
 * 0000000140BCC454: mov     [rsi+930h], rax
 * 0000000140BCC45B: mov     [rsi+938h], r14
 * 0000000140BCC462: mov     [rsi+918h], r8d
 * 0000000140BCC469: mov     ecx, [rsi+9D8h]
 * 0000000140BCC46F: bt      ecx, 1Dh
 * 0000000140BCC473: jb      loc_140BCC555
 * 0000000140BCC479: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCC483: jz      loc_140BCC555
 * 0000000140BCC489: test    r8b, cl
 * 0000000140BCC48C: jz      loc_140BCC555
 * 0000000140BCC492: mov     ecx, [rsi+0A74h]
 * 0000000140BCC498: mov     eax, [rsi+804h]
 * 0000000140BCC49E: mov     r10, [rsi+838h]
 * 0000000140BCC4A5: sub     eax, ecx
 * 0000000140BCC4A7: mov     r8, [rsi+0A78h]
 * 0000000140BCC4AE: lea     rdx, [rcx+rsi]
 * 0000000140BCC4B2: mov     ecx, eax
 * 0000000140BCC4B4: shr     rcx, 3
 * 0000000140BCC4B8: lea     r9, [rdx+rcx*8]
 * 0000000140BCC4BC: jmp     short loc_140BCC4DF
 * 0000000140BCC4BE: xor     [rdx], r8
 * 0000000140BCC4C1: mov     rax, [rdx]
 * 0000000140BCC4C4: movzx   ecx, r8b
 * 0000000140BCC4C8: xor     rax, r10
 * 0000000140BCC4CB: and     ecx, 3Fh
 * 0000000140BCC4CE: ror     r8, cl
 * 0000000140BCC4D1: add     r8, rax
 * 0000000140BCC4D4: xor     r8, 0EFAh
 * 0000000140BCC4DB: add     rdx, 8
 * 0000000140BCC4DF: cmp     rdx, r9
 * 0000000140BCC4E2: jnz     short loc_140BCC4BE
 * 0000000140BCC4E4: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCC4EC: cmp     r8, [rsi+0A80h]
 * 0000000140BCC4F3: jz      short loc_140BCC536
 * 0000000140BCC4F5: mov     ecx, [rsi+804h]
 * 0000000140BCC4FB: mov     rax, [rsi+588h]
 * 0000000140BCC502: mov     [rax], rsi
 * 0000000140BCC505: mov     [rax+10h], ecx
 * 0000000140BCC508: mov     rcx, [rsi+0A80h]
 * 0000000140BCC50F: cmp     [rsi+918h], r11d
 * 0000000140BCC516: jnz     short loc_140BCC526
 * 0000000140BCC518: mov     rax, [rsi+588h]
 * 0000000140BCC51F: xor     rcx, r8
 * 0000000140BCC522: mov     [rax+18h], rcx
 * 0000000140BCC526: xor     edx, edx
 * 0000000140BCC528: mov     r9d, 100h
 * 0000000140BCC52E: mov     rcx, rsi
 * 0000000140BCC531: call    sub_140BD8384
 * 0000000140BCC536: mov     rdx, [rsp+9D0h+var_980]
 * 0000000140BCC53B: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140BCC545: mov     r9, 0B3B74BDEE4453415h
 * 0000000140BCC54F: mov     r8d, 1
 * 0000000140BCC555: or      r12b, [r15+rbx*2+1]
 * 0000000140BCC55A: cmp     r12b, [rbp+8D0h+var_917]
 * 0000000140BCC55E: jz      loc_140BCC671
 * 0000000140BCC564: xor     r12d, r12d
 * 0000000140BCC567: cmp     [rsi+918h], r12d
 * 0000000140BCC56E: jnz     loc_140BCC674
 * 0000000140BCC574: lea     rax, [rsi+r10]
 * 0000000140BCC578: mov     [rsi+920h], rax
 * 0000000140BCC57F: lea     rax, [rdx+r9]
 * 0000000140BCC583: mov     [rsi+928h], rax
 * 0000000140BCC58A: movsxd  rax, dword ptr [rdx]
 * 0000000140BCC58D: mov     [rsi+930h], rax
 * 0000000140BCC594: mov     [rsi+938h], r14
 * 0000000140BCC59B: mov     [rsi+918h], r8d
 * 0000000140BCC5A2: mov     ecx, [rsi+9D8h]
 * 0000000140BCC5A8: bt      ecx, 1Dh
 * 0000000140BCC5AC: jb      loc_140BCC674
 * 0000000140BCC5B2: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCC5BC: jz      loc_140BCC674
 * 0000000140BCC5C2: test    r8b, cl
 * 0000000140BCC5C5: jz      loc_140BCC674
 * 0000000140BCC5CB: mov     ecx, [rsi+0A74h]
 * 0000000140BCC5D1: mov     eax, [rsi+804h]
 * 0000000140BCC5D7: mov     r10, [rsi+838h]
 * 0000000140BCC5DE: sub     eax, ecx
 * 0000000140BCC5E0: mov     r8, [rsi+0A78h]
 * 0000000140BCC5E7: lea     rdx, [rcx+rsi]
 * 0000000140BCC5EB: mov     ecx, eax
 * 0000000140BCC5ED: shr     rcx, 3
 * 0000000140BCC5F1: lea     r9, [rdx+rcx*8]
 * 0000000140BCC5F5: jmp     short loc_140BCC618
 * 0000000140BCC5F7: xor     [rdx], r8
 * 0000000140BCC5FA: mov     rax, [rdx]
 * 0000000140BCC5FD: movzx   ecx, r8b
 * 0000000140BCC601: xor     rax, r10
 * 0000000140BCC604: and     ecx, 3Fh
 * 0000000140BCC607: ror     r8, cl
 * 0000000140BCC60A: add     r8, rax
 * 0000000140BCC60D: xor     r8, 0EFAh
 * 0000000140BCC614: add     rdx, 8
 * 0000000140BCC618: cmp     rdx, r9
 * 0000000140BCC61B: jnz     short loc_140BCC5F7
 * 0000000140BCC61D: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCC625: cmp     r8, [rsi+0A80h]
 * 0000000140BCC62C: jz      short loc_140BCC674
 * 0000000140BCC62E: mov     ecx, [rsi+804h]
 * 0000000140BCC634: mov     rax, [rsi+588h]
 * 0000000140BCC63B: mov     [rax], rsi
 * 0000000140BCC63E: mov     [rax+10h], ecx
 * 0000000140BCC641: mov     rcx, [rsi+0A80h]
 * 0000000140BCC648: cmp     [rsi+918h], r12d
 * 0000000140BCC64F: jnz     short loc_140BCC65F
 * 0000000140BCC651: mov     rax, [rsi+588h]
 * 0000000140BCC658: xor     rcx, r8
 * 0000000140BCC65B: mov     [rax+18h], rcx
 * 0000000140BCC65F: xor     edx, edx
 * 0000000140BCC661: mov     r9d, 100h
 * 0000000140BCC667: mov     rcx, rsi
 * 0000000140BCC66A: call    sub_140BD8384
 * 0000000140BCC66F: jmp     short loc_140BCC674
 * 0000000140BCC671: xor     r12d, r12d
 * 0000000140BCC674: cmp     r14, [rsi+4D8h]
 * 0000000140BCC67B: jz      loc_140BCC8C3
 * 0000000140BCC681: mov     rax, [rsi+3D8h]
 * 0000000140BCC688: mov     edx, 1
 * 0000000140BCC68D: mov     rcx, r14
 * 0000000140BCC690: call    KeGuardDispatchICall
 * 0000000140BCC695: mov     rbx, rax
 * 0000000140BCC698: test    rax, rax
 * 0000000140BCC69B: jz      loc_140BCC8C3
 * 0000000140BCC6A1: mov     rcx, [rax]
 * 0000000140BCC6A4: mov     r15, rax
 * 0000000140BCC6A7: test    rcx, rcx
 * 0000000140BCC6AA: jz      loc_140BCC8B4
 * 0000000140BCC6B0: mov     r12, [rbp+8D0h+arg_8]
 * 0000000140BCC6B7: mov     r15, [rbp+8D0h+var_930]
 * 0000000140BCC6BB: mov     [rbp+8D0h+var_950], rax
 * 0000000140BCC6BF: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 0000000140BCC6C3: mov     [rbx], rcx
 * 0000000140BCC6C6: mov     rax, [rsi+1F0h]
 * 0000000140BCC6CD: call    KeGuardDispatchICall
 * 0000000140BCC6D2: mov     rcx, [rbx+8]
 * 0000000140BCC6D6: movzx   edx, [rbp+8D0h+var_917]
 * 0000000140BCC6DA: mov     r14, rcx
 * 0000000140BCC6DD: mov     rax, [rsi+3F8h]
 * 0000000140BCC6E4: and     r14, 0FFFFFFFFFFFF0000h
 * 0000000140BCC6EB: cmp     r14, r12
 * 0000000140BCC6EE: cmovz   edx, edi
 * 0000000140BCC6F1: shr     rcx, 6
 * 0000000140BCC6F5: and     cl, 0Fh
 * 0000000140BCC6F8: call    KeGuardDispatchICall
 * 0000000140BCC6FD: xor     r11d, r11d
 * 0000000140BCC700: test    eax, eax
 * 0000000140BCC702: jnz     loc_140BCC899
 * 0000000140BCC708: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BCC712: lea     r9d, [r11+1]
 * 0000000140BCC716: jz      short loc_140BCC766
 * 0000000140BCC718: mov     rcx, [rsi+0AC8h]
 * 0000000140BCC71F: lea     edx, [rax+30h]
 * 0000000140BCC722: lea     r8d, [r11+6]
 * 0000000140BCC726: mov     rax, [r13+0]
 * 0000000140BCC72A: add     edx, 0FFFFFFF8h
 * 0000000140BCC72D: mov     [rcx], rax
 * 0000000140BCC730: add     r13, 8
 * 0000000140BCC734: add     rcx, 8
 * 0000000140BCC738: sub     r8, r9
 * 0000000140BCC73B: jnz     short loc_140BCC726
 * 0000000140BCC73D: test    edx, edx
 * 0000000140BCC73F: jz      short loc_140BCC75F
 * 0000000140BCC741: mov     r12d, 0FFFFFFFFh
 * 0000000140BCC747: mov     al, [r13+0]
 * 0000000140BCC74B: add     r13, r9
 * 0000000140BCC74E: mov     [rcx], al
 * 0000000140BCC750: add     rcx, r9
 * 0000000140BCC753: add     edx, r12d
 * 0000000140BCC756: jnz     short loc_140BCC747
 * 0000000140BCC758: mov     r12, [rbp+8D0h+arg_8]
 * 0000000140BCC75F: mov     r13, [rsi+0AC8h]
 * 0000000140BCC766: mov     [r13+18h], r14
 * 0000000140BCC76A: mov     rax, [rbx]
 * 0000000140BCC76D: mov     [r13+20h], rax
 * 0000000140BCC771: mov     eax, [rbx+8]
 * 0000000140BCC774: shr     rax, 6
 * 0000000140BCC778: and     al, 0Fh
 * 0000000140BCC77A: mov     [r13+28h], al
 * 0000000140BCC77E: cmp     [rsi+918h], r11d
 * 0000000140BCC785: jnz     loc_140BCC899
 * 0000000140BCC78B: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BCC795: add     rax, rsi
 * 0000000140BCC798: mov     [rsi+920h], rax
 * 0000000140BCC79F: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BCC7A9: add     rax, r13
 * 0000000140BCC7AC: mov     [rsi+928h], rax
 * 0000000140BCC7B3: movsxd  rax, dword ptr [r13+0]
 * 0000000140BCC7B7: mov     [rsi+930h], rax
 * 0000000140BCC7BE: mov     [rsi+938h], r15
 * 0000000140BCC7C5: mov     [rsi+918h], r9d
 * 0000000140BCC7CC: mov     ecx, [rsi+9D8h]
 * 0000000140BCC7D2: bt      ecx, 1Dh
 * 0000000140BCC7D6: jb      loc_140BCC899
 * 0000000140BCC7DC: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCC7E6: jz      loc_140BCC899
 * 0000000140BCC7EC: test    r9b, cl
 * 0000000140BCC7EF: jz      loc_140BCC899
 * 0000000140BCC7F5: mov     ecx, [rsi+0A74h]
 * 0000000140BCC7FB: mov     eax, [rsi+804h]
 * 0000000140BCC801: mov     r10, [rsi+838h]
 * 0000000140BCC808: sub     eax, ecx
 * 0000000140BCC80A: mov     r8, [rsi+0A78h]
 * 0000000140BCC811: lea     rdx, [rcx+rsi]
 * 0000000140BCC815: mov     ecx, eax
 * 0000000140BCC817: shr     rcx, 3
 * 0000000140BCC81B: lea     r9, [rdx+rcx*8]
 * 0000000140BCC81F: jmp     short loc_140BCC842
 * 0000000140BCC821: xor     [rdx], r8
 * 0000000140BCC824: mov     rax, [rdx]
 * 0000000140BCC827: movzx   ecx, r8b
 * 0000000140BCC82B: xor     rax, r10
 * 0000000140BCC82E: and     ecx, 3Fh
 * 0000000140BCC831: ror     r8, cl
 * 0000000140BCC834: add     r8, rax
 * 0000000140BCC837: xor     r8, 0EFAh
 * 0000000140BCC83E: add     rdx, 8
 * 0000000140BCC842: cmp     rdx, r9
 * 0000000140BCC845: jnz     short loc_140BCC821
 * 0000000140BCC847: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCC84F: cmp     r8, [rsi+0A80h]
 * 0000000140BCC856: jz      short loc_140BCC899
 * 0000000140BCC858: mov     ecx, [rsi+804h]
 * 0000000140BCC85E: mov     rax, [rsi+588h]
 * 0000000140BCC865: mov     [rax], rsi
 * 0000000140BCC868: mov     [rax+10h], ecx
 * 0000000140BCC86B: mov     rcx, [rsi+0A80h]
 * 0000000140BCC872: cmp     [rsi+918h], r11d
 * 0000000140BCC879: jnz     short loc_140BCC889
 * 0000000140BCC87B: mov     rax, [rsi+588h]
 * 0000000140BCC882: xor     rcx, r8
 * 0000000140BCC885: mov     [rax+18h], rcx
 * 0000000140BCC889: xor     edx, edx
 * 0000000140BCC88B: mov     r9d, 100h
 * 0000000140BCC891: mov     rcx, rsi
 * 0000000140BCC894: call    sub_140BD8384
 * 0000000140BCC899: add     rbx, 30h ; '0'
 * 0000000140BCC89D: mov     rcx, [rbx]
 * 0000000140BCC8A0: test    rcx, rcx
 * 0000000140BCC8A3: jnz     loc_140BCC6BF
 * 0000000140BCC8A9: mov     r15, [rbp+8D0h+var_950]
 * 0000000140BCC8AD: mov     r14, [rbp+8D0h+var_930]
 * 0000000140BCC8B1: xor     r12d, r12d
 * 0000000140BCC8B4: mov     rax, [rsi+108h]
 * 0000000140BCC8BB: mov     rcx, r15
 * 0000000140BCC8BE: call    KeGuardDispatchICall
 * 0000000140BCC8C3: mov     rax, [rsi+3A8h]
 * 0000000140BCC8CA: mov     rcx, r14
 * 0000000140BCC8CD: call    KeGuardDispatchICall
 * 0000000140BCC8D2: mov     r15d, [rsp+9D0h+var_958]
 * 0000000140BCC8D7: mov     eax, 8000h
 * 0000000140BCC8DC: add     [rsi+848h], eax
 * 0000000140BCC8E2: mov     rbx, [rsp+9D0h+var_968]
 * 0000000140BCC8E7: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BCC8EC: mov     rax, [rsi+3B0h]
 * 0000000140BCC8F3: inc     r15d
 * 0000000140BCC8F6: mov     rcx, r14
 * 0000000140BCC8F9: mov     [rsp+9D0h+var_958], r15d
 * 0000000140BCC8FE: call    KeGuardDispatchICall
 * 0000000140BCC903: mov     [rbp+8D0h+var_930], rax
 * 0000000140BCC907: mov     r14, rax
 * 0000000140BCC90A: test    rax, rax
 * 0000000140BCC90D: jnz     loc_140BCB8FD
 * 0000000140BCC913: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BCC91A: mov     r13, [rsi+4D8h]
 * 0000000140BCC921: mov     rax, [rsi+3A0h]
 * 0000000140BCC928: mov     rcx, r13
 * 0000000140BCC92B: call    KeGuardDispatchICall
 * 0000000140BCC930: test    eax, eax
 * 0000000140BCC932: js      loc_140BCD10E
 * 0000000140BCC938: mov     rax, [rsi+3E0h]
 * 0000000140BCC93F: mov     rcx, r13
 * 0000000140BCC942: call    KeGuardDispatchICall
 * 0000000140BCC947: movzx   ebx, al
 * 0000000140BCC94A: lea     rdx, [rbp+8D0h+var_916]
 * 0000000140BCC94E: mov     rax, [rsi+3E8h]
 * 0000000140BCC955: mov     rcx, r13
 * 0000000140BCC958: call    KeGuardDispatchICall
 * 0000000140BCC95D: mov     byte ptr [rbp+8D0h+arg_8], al
 * 0000000140BCC963: mov     rcx, r13
 * 0000000140BCC966: mov     rax, [rsi+3F0h]
 * 0000000140BCC96D: call    KeGuardDispatchICall
 * 0000000140BCC972: mov     [rbp+8D0h+var_950], rax
 * 0000000140BCC976: cmp     bl, 72h ; 'r'
 * 0000000140BCC979: jz      loc_140BCCAC4
 * 0000000140BCC97F: cmp     [rsi+918h], r12d
 * 0000000140BCC986: jnz     loc_140BCCAC4
 * 0000000140BCC98C: mov     rax, [rsi+588h]
 * 0000000140BCC993: mov     ecx, ebx
 * 0000000140BCC995: xor     rcx, 72h
 * 0000000140BCC999: mov     [rax+18h], rcx
 * 0000000140BCC99D: cmp     [rsi+918h], r12d
 * 0000000140BCC9A4: jnz     loc_140BCCAC4
 * 0000000140BCC9AA: mov     rdx, [rsp+9D0h+var_980]
 * 0000000140BCC9AF: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140BCC9B9: mov     r9, 0B3B74BDEE4453415h
 * 0000000140BCC9C3: mov     r8d, 1
 * 0000000140BCC9C9: lea     rax, [rsi+r10]
 * 0000000140BCC9CD: mov     [rsi+920h], rax
 * 0000000140BCC9D4: lea     rax, [rdx+r9]
 * 0000000140BCC9D8: mov     [rsi+928h], rax
 * 0000000140BCC9DF: movsxd  rax, dword ptr [rdx]
 * 0000000140BCC9E2: mov     [rsi+930h], rax
 * 0000000140BCC9E9: mov     [rsi+938h], r13
 * 0000000140BCC9F0: mov     [rsi+918h], r8d
 * 0000000140BCC9F7: mov     ecx, [rsi+9D8h]
 * 0000000140BCC9FD: bt      ecx, 1Dh
 * 0000000140BCCA01: jb      loc_140BCCAE3
 * 0000000140BCCA07: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCCA11: jz      loc_140BCCAE3
 * 0000000140BCCA17: test    r8b, cl
 * 0000000140BCCA1A: jz      loc_140BCCAE3
 * 0000000140BCCA20: mov     ecx, [rsi+0A74h]
 * 0000000140BCCA26: mov     eax, [rsi+804h]
 * 0000000140BCCA2C: mov     r10, [rsi+838h]
 * 0000000140BCCA33: sub     eax, ecx
 * 0000000140BCCA35: mov     r8, [rsi+0A78h]
 * 0000000140BCCA3C: lea     rdx, [rcx+rsi]
 * 0000000140BCCA40: mov     ecx, eax
 * 0000000140BCCA42: shr     rcx, 3
 * 0000000140BCCA46: lea     r9, [rdx+rcx*8]
 * 0000000140BCCA4A: jmp     short loc_140BCCA6D
 * 0000000140BCCA4C: xor     [rdx], r8
 * 0000000140BCCA4F: mov     rax, [rdx]
 * 0000000140BCCA52: movzx   ecx, r8b
 * 0000000140BCCA56: xor     rax, r10
 * 0000000140BCCA59: and     ecx, 3Fh
 * 0000000140BCCA5C: ror     r8, cl
 * 0000000140BCCA5F: add     r8, rax
 * 0000000140BCCA62: xor     r8, 0EFAh
 * 0000000140BCCA69: add     rdx, 8
 * 0000000140BCCA6D: cmp     rdx, r9
 * 0000000140BCCA70: jnz     short loc_140BCCA4C
 * 0000000140BCCA72: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCCA7A: cmp     r8, [rsi+0A80h]
 * 0000000140BCCA81: jz      short loc_140BCCAC4
 * 0000000140BCCA83: mov     ecx, [rsi+804h]
 * 0000000140BCCA89: mov     rax, [rsi+588h]
 * 0000000140BCCA90: mov     [rax], rsi
 * 0000000140BCCA93: mov     [rax+10h], ecx
 * 0000000140BCCA96: mov     rcx, [rsi+0A80h]
 * 0000000140BCCA9D: cmp     [rsi+918h], r12d
 * 0000000140BCCAA4: jnz     short loc_140BCCAB4
 * 0000000140BCCAA6: mov     rax, [rsi+588h]
 * 0000000140BCCAAD: xor     rcx, r8
 * 0000000140BCCAB0: mov     [rax+18h], rcx
 * 0000000140BCCAB4: xor     edx, edx
 * 0000000140BCCAB6: mov     r9d, 100h
 * 0000000140BCCABC: mov     rcx, rsi
 * 0000000140BCCABF: call    sub_140BD8384
 * 0000000140BCCAC4: mov     rdx, [rsp+9D0h+var_980]
 * 0000000140BCCAC9: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140BCCAD3: mov     r9, 0B3B74BDEE4453415h
 * 0000000140BCCADD: mov     r8d, 1
 * 0000000140BCCAE3: mov     ecx, ebx
 * 0000000140BCCAE5: mov     r14b, r12b
 * 0000000140BCCAE8: and     ecx, 7
 * 0000000140BCCAEB: sub     ecx, 1
 * 0000000140BCCAEE: jz      loc_140BCCC20
 * 0000000140BCCAF4: xor     r11d, r11d
 * 0000000140BCCAF7: cmp     ecx, 1
 * 0000000140BCCAFA: jz      loc_140BCCC13
 * 0000000140BCCB00: test    bl, 7
 * 0000000140BCCB03: jz      loc_140BCCC26
 * 0000000140BCCB09: cmp     [rsi+918h], r11d
 * 0000000140BCCB10: jnz     loc_140BCCC26
 * 0000000140BCCB16: lea     rax, [rsi+r10]
 * 0000000140BCCB1A: mov     [rsi+920h], rax
 * 0000000140BCCB21: lea     rax, [rdx+r9]
 * 0000000140BCCB25: mov     [rsi+928h], rax
 * 0000000140BCCB2C: movsxd  rax, dword ptr [rdx]
 * 0000000140BCCB2F: mov     [rsi+930h], rax
 * 0000000140BCCB36: mov     [rsi+938h], r13
 * 0000000140BCCB3D: mov     [rsi+918h], r8d
 * 0000000140BCCB44: mov     ecx, [rsi+9D8h]
 * 0000000140BCCB4A: bt      ecx, 1Dh
 * 0000000140BCCB4E: jb      loc_140BCCC26
 * 0000000140BCCB54: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCCB5E: jz      loc_140BCCC26
 * 0000000140BCCB64: test    r8b, cl
 * 0000000140BCCB67: jz      loc_140BCCC26
 * 0000000140BCCB6D: mov     ecx, [rsi+0A74h]
 * 0000000140BCCB73: mov     eax, [rsi+804h]
 * 0000000140BCCB79: mov     r10, [rsi+838h]
 * 0000000140BCCB80: sub     eax, ecx
 * 0000000140BCCB82: mov     r8, [rsi+0A78h]
 * 0000000140BCCB89: lea     rdx, [rcx+rsi]
 * 0000000140BCCB8D: mov     ecx, eax
 * 0000000140BCCB8F: shr     rcx, 3
 * 0000000140BCCB93: lea     r9, [rdx+rcx*8]
 * 0000000140BCCB97: jmp     short loc_140BCCBBA
 * 0000000140BCCB99: xor     [rdx], r8
 * 0000000140BCCB9C: mov     rax, [rdx]
 * 0000000140BCCB9F: movzx   ecx, r8b
 * 0000000140BCCBA3: xor     rax, r10
 * 0000000140BCCBA6: and     ecx, 3Fh
 * 0000000140BCCBA9: ror     r8, cl
 * 0000000140BCCBAC: add     r8, rax
 * 0000000140BCCBAF: xor     r8, 0EFAh
 * 0000000140BCCBB6: add     rdx, 8
 * 0000000140BCCBBA: cmp     rdx, r9
 * 0000000140BCCBBD: jnz     short loc_140BCCB99
 * 0000000140BCCBBF: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCCBC7: cmp     r8, [rsi+0A80h]
 * 0000000140BCCBCE: jz      short loc_140BCCC26
 * 0000000140BCCBD0: mov     ecx, [rsi+804h]
 * 0000000140BCCBD6: mov     rax, [rsi+588h]
 * 0000000140BCCBDD: mov     [rax], rsi
 * 0000000140BCCBE0: mov     [rax+10h], ecx
 * 0000000140BCCBE3: mov     rcx, [rsi+0A80h]
 * 0000000140BCCBEA: cmp     [rsi+918h], r11d
 * 0000000140BCCBF1: jnz     short loc_140BCCC01
 * 0000000140BCCBF3: mov     rax, [rsi+588h]
 * 0000000140BCCBFA: xor     rcx, r8
 * 0000000140BCCBFD: mov     [rax+18h], rcx
 * 0000000140BCCC01: xor     edx, edx
 * 0000000140BCCC03: mov     r9d, 100h
 * 0000000140BCCC09: mov     rcx, rsi
 * 0000000140BCCC0C: call    sub_140BD8384
 * 0000000140BCCC11: jmp     short loc_140BCCC23
 * 0000000140BCCC13: mov     eax, 10h
 * 0000000140BCCC18: mov     r14b, al
 * 0000000140BCCC1B: mov     r12b, al
 * 0000000140BCCC1E: jmp     short loc_140BCCC26
 * 0000000140BCCC20: mov     r14b, 30h ; '0'
 * 0000000140BCCC23: xor     r11d, r11d
 * 0000000140BCCC26: mov     r15, [rsi+5C0h]
 * 0000000140BCCC2D: mov     r9, 0A3A03F5891C8B4E8h
 * 0000000140BCCC37: mov     rdx, [rsp+9D0h+var_980]
 * 0000000140BCCC3C: mov     r8, 0B3B74BDEE4453415h
 * 0000000140BCCC46: shr     rbx, 4
 * 0000000140BCCC4A: or      r14b, [r15+rbx*2]
 * 0000000140BCCC4E: cmp     r14b, byte ptr [rbp+8D0h+arg_8]
 * 0000000140BCCC55: mov     r14d, 1
 * 0000000140BCCC5B: jz      loc_140BCCD82
 * 0000000140BCCC61: cmp     [rsi+918h], r11d
 * 0000000140BCCC68: jnz     loc_140BCCD82
 * 0000000140BCCC6E: lea     rax, [rsi+r9]
 * 0000000140BCCC72: mov     [rsi+920h], rax
 * 0000000140BCCC79: lea     rax, [rdx+r8]
 * 0000000140BCCC7D: mov     [rsi+928h], rax
 * 0000000140BCCC84: movsxd  rax, dword ptr [rdx]
 * 0000000140BCCC87: mov     [rsi+930h], rax
 * 0000000140BCCC8E: mov     [rsi+938h], r13
 * 0000000140BCCC95: mov     [rsi+918h], r14d
 * 0000000140BCCC9C: mov     ecx, [rsi+9D8h]
 * 0000000140BCCCA2: bt      ecx, 1Dh
 * 0000000140BCCCA6: jb      loc_140BCCD82
 * 0000000140BCCCAC: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCCCB6: jz      loc_140BCCD82
 * 0000000140BCCCBC: test    r14b, cl
 * 0000000140BCCCBF: jz      loc_140BCCD82
 * 0000000140BCCCC5: mov     ecx, [rsi+0A74h]
 * 0000000140BCCCCB: mov     eax, [rsi+804h]
 * 0000000140BCCCD1: mov     r10, [rsi+838h]
 * 0000000140BCCCD8: sub     eax, ecx
 * 0000000140BCCCDA: mov     r8, [rsi+0A78h]
 * 0000000140BCCCE1: lea     rdx, [rcx+rsi]
 * 0000000140BCCCE5: mov     ecx, eax
 * 0000000140BCCCE7: shr     rcx, 3
 * 0000000140BCCCEB: lea     r9, [rdx+rcx*8]
 * 0000000140BCCCEF: jmp     short loc_140BCCD12
 * 0000000140BCCCF1: xor     [rdx], r8
 * 0000000140BCCCF4: mov     rax, [rdx]
 * 0000000140BCCCF7: movzx   ecx, r8b
 * 0000000140BCCCFB: xor     rax, r10
 * 0000000140BCCCFE: and     ecx, 3Fh
 * 0000000140BCCD01: ror     r8, cl
 * 0000000140BCCD04: add     r8, rax
 * 0000000140BCCD07: xor     r8, 0EFAh
 * 0000000140BCCD0E: add     rdx, 8
 * 0000000140BCCD12: cmp     rdx, r9
 * 0000000140BCCD15: jnz     short loc_140BCCCF1
 * 0000000140BCCD17: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCCD1F: cmp     r8, [rsi+0A80h]
 * 0000000140BCCD26: jz      short loc_140BCCD69
 * 0000000140BCCD28: mov     ecx, [rsi+804h]
 * 0000000140BCCD2E: mov     rax, [rsi+588h]
 * 0000000140BCCD35: mov     [rax], rsi
 * 0000000140BCCD38: mov     [rax+10h], ecx
 * 0000000140BCCD3B: mov     rcx, [rsi+0A80h]
 * 0000000140BCCD42: cmp     [rsi+918h], r11d
 * 0000000140BCCD49: jnz     short loc_140BCCD59
 * 0000000140BCCD4B: mov     rax, [rsi+588h]
 * 0000000140BCCD52: xor     rcx, r8
 * 0000000140BCCD55: mov     [rax+18h], rcx
 * 0000000140BCCD59: xor     edx, edx
 * 0000000140BCCD5B: mov     r9d, 100h
 * 0000000140BCCD61: mov     rcx, rsi
 * 0000000140BCCD64: call    sub_140BD8384
 * 0000000140BCCD69: mov     rdx, [rsp+9D0h+var_980]
 * 0000000140BCCD6E: mov     r9, 0A3A03F5891C8B4E8h
 * 0000000140BCCD78: mov     r8, 0B3B74BDEE4453415h
 * 0000000140BCCD82: or      r12b, [r15+rbx*2+1]
 * 0000000140BCCD87: cmp     r12b, [rbp+8D0h+var_916]
 * 0000000140BCCD8B: jz      loc_140BCCE9C
 * 0000000140BCCD91: xor     r12d, r12d
 * 0000000140BCCD94: cmp     [rsi+918h], r12d
 * 0000000140BCCD9B: jnz     loc_140BCCE9C
 * 0000000140BCCDA1: lea     rax, [rsi+r9]
 * 0000000140BCCDA5: mov     [rsi+920h], rax
 * 0000000140BCCDAC: lea     rax, [rdx+r8]
 * 0000000140BCCDB0: mov     [rsi+928h], rax
 * 0000000140BCCDB7: movsxd  rax, dword ptr [rdx]
 * 0000000140BCCDBA: mov     [rsi+930h], rax
 * 0000000140BCCDC1: mov     [rsi+938h], r13
 * 0000000140BCCDC8: mov     [rsi+918h], r14d
 * 0000000140BCCDCF: mov     ecx, [rsi+9D8h]
 * 0000000140BCCDD5: bt      ecx, 1Dh
 * 0000000140BCCDD9: jb      loc_140BCCE9C
 * 0000000140BCCDDF: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCCDE9: jz      loc_140BCCE9C
 * 0000000140BCCDEF: test    r14b, cl
 * 0000000140BCCDF2: jz      loc_140BCCE9C
 * 0000000140BCCDF8: mov     ecx, [rsi+0A74h]
 * 0000000140BCCDFE: mov     eax, [rsi+804h]
 * 0000000140BCCE04: mov     r10, [rsi+838h]
 * 0000000140BCCE0B: sub     eax, ecx
 * 0000000140BCCE0D: mov     r8, [rsi+0A78h]
 * 0000000140BCCE14: lea     rdx, [rcx+rsi]
 * 0000000140BCCE18: mov     ecx, eax
 * 0000000140BCCE1A: shr     rcx, 3
 * 0000000140BCCE1E: lea     r9, [rdx+rcx*8]
 * 0000000140BCCE22: jmp     short loc_140BCCE45
 * 0000000140BCCE24: xor     [rdx], r8
 * 0000000140BCCE27: mov     rax, [rdx]
 * 0000000140BCCE2A: movzx   ecx, r8b
 * 0000000140BCCE2E: xor     rax, r10
 * 0000000140BCCE31: and     ecx, 3Fh
 * 0000000140BCCE34: ror     r8, cl
 * 0000000140BCCE37: add     r8, rax
 * 0000000140BCCE3A: xor     r8, 0EFAh
 * 0000000140BCCE41: add     rdx, 8
 * 0000000140BCCE45: cmp     rdx, r9
 * 0000000140BCCE48: jnz     short loc_140BCCE24
 * 0000000140BCCE4A: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCCE52: cmp     r8, [rsi+0A80h]
 * 0000000140BCCE59: jz      short loc_140BCCE9C
 * 0000000140BCCE5B: mov     ecx, [rsi+804h]
 * 0000000140BCCE61: mov     rax, [rsi+588h]
 * 0000000140BCCE68: mov     [rax], rsi
 * 0000000140BCCE6B: mov     [rax+10h], ecx
 * 0000000140BCCE6E: mov     rcx, [rsi+0A80h]
 * 0000000140BCCE75: cmp     [rsi+918h], r12d
 * 0000000140BCCE7C: jnz     short loc_140BCCE8C
 * 0000000140BCCE7E: mov     rax, [rsi+588h]
 * 0000000140BCCE85: xor     rcx, r8
 * 0000000140BCCE88: mov     [rax+18h], rcx
 * 0000000140BCCE8C: xor     edx, edx
 * 0000000140BCCE8E: mov     r9d, 100h
 * 0000000140BCCE94: mov     rcx, rsi
 * 0000000140BCCE97: call    sub_140BD8384
 * 0000000140BCCE9C: cmp     r13, [rsi+4D8h]
 * 0000000140BCCEA3: jz      loc_140BCD0EF
 * 0000000140BCCEA9: mov     rax, [rsi+3D8h]
 * 0000000140BCCEB0: mov     edx, r14d
 * 0000000140BCCEB3: mov     rcx, r13
 * 0000000140BCCEB6: call    KeGuardDispatchICall
 * 0000000140BCCEBB: mov     rbx, rax
 * 0000000140BCCEBE: test    rax, rax
 * 0000000140BCCEC1: jz      loc_140BCD0EF
 * 0000000140BCCEC7: mov     rcx, [rax]
 * 0000000140BCCECA: mov     r15, rax
 * 0000000140BCCECD: test    rcx, rcx
 * 0000000140BCCED0: jz      loc_140BCD0E0
 * 0000000140BCCED6: mov     dil, byte ptr [rbp+8D0h+arg_8]
 * 0000000140BCCEDD: mov     r12, [rbp+8D0h+var_950]
 * 0000000140BCCEE1: mov     r15, [rsp+9D0h+var_980]
 * 0000000140BCCEE6: mov     [rsp+9D0h+var_978], rax
 * 0000000140BCCEEB: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 0000000140BCCEEF: mov     [rbx], rcx
 * 0000000140BCCEF2: mov     rax, [rsi+1F0h]
 * 0000000140BCCEF9: call    KeGuardDispatchICall
 * 0000000140BCCEFE: mov     rcx, [rbx+8]
 * 0000000140BCCF02: movzx   edx, [rbp+8D0h+var_916]
 * 0000000140BCCF06: mov     r14, rcx
 * 0000000140BCCF09: movzx   eax, dil
 * 0000000140BCCF0D: and     r14, 0FFFFFFFFFFFF0000h
 * 0000000140BCCF14: cmp     r14, r12
 * 0000000140BCCF17: cmovz   edx, eax
 * 0000000140BCCF1A: mov     rax, [rsi+3F8h]
 * 0000000140BCCF21: shr     rcx, 6
 * 0000000140BCCF25: and     cl, 0Fh
 * 0000000140BCCF28: call    KeGuardDispatchICall
 * 0000000140BCCF2D: xor     r11d, r11d
 * 0000000140BCCF30: test    eax, eax
 * 0000000140BCCF32: jnz     loc_140BCD0C4
 * 0000000140BCCF38: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BCCF42: lea     r9d, [r11+1]
 * 0000000140BCCF46: jz      short loc_140BCCF92
 * 0000000140BCCF48: mov     rcx, [rsi+0AC8h]
 * 0000000140BCCF4F: lea     edx, [rax+30h]
 * 0000000140BCCF52: lea     r8d, [r11+6]
 * 0000000140BCCF56: mov     rax, [r15]
 * 0000000140BCCF59: add     edx, 0FFFFFFF8h
 * 0000000140BCCF5C: mov     [rcx], rax
 * 0000000140BCCF5F: add     r15, 8
 * 0000000140BCCF63: add     rcx, 8
 * 0000000140BCCF67: sub     r8, r9
 * 0000000140BCCF6A: jnz     short loc_140BCCF56
 * 0000000140BCCF6C: test    edx, edx
 * 0000000140BCCF6E: jz      short loc_140BCCF8B
 * 0000000140BCCF70: mov     edi, 0FFFFFFFFh
 * 0000000140BCCF75: mov     al, [r15]
 * 0000000140BCCF78: add     r15, r9
 * 0000000140BCCF7B: mov     [rcx], al
 * 0000000140BCCF7D: add     rcx, r9
 * 0000000140BCCF80: add     edx, edi
 * 0000000140BCCF82: jnz     short loc_140BCCF75
 * 0000000140BCCF84: mov     dil, byte ptr [rbp+8D0h+arg_8]
 * 0000000140BCCF8B: mov     r15, [rsi+0AC8h]
 * 0000000140BCCF92: mov     [r15+18h], r14
 * 0000000140BCCF96: mov     rax, [rbx]
 * 0000000140BCCF99: mov     [r15+20h], rax
 * 0000000140BCCF9D: mov     eax, [rbx+8]
 * 0000000140BCCFA0: shr     rax, 6
 * 0000000140BCCFA4: and     al, 0Fh
 * 0000000140BCCFA6: mov     [r15+28h], al
 * 0000000140BCCFAA: cmp     [rsi+918h], r11d
 * 0000000140BCCFB1: jnz     loc_140BCD0C4
 * 0000000140BCCFB7: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BCCFC1: add     rax, rsi
 * 0000000140BCCFC4: mov     [rsi+920h], rax
 * 0000000140BCCFCB: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BCCFD5: add     rax, r15
 * 0000000140BCCFD8: mov     [rsi+928h], rax
 * 0000000140BCCFDF: movsxd  rax, dword ptr [r15]
 * 0000000140BCCFE2: mov     [rsi+930h], rax
 * 0000000140BCCFE9: mov     [rsi+938h], r13
 * 0000000140BCCFF0: mov     [rsi+918h], r9d
 * 0000000140BCCFF7: mov     ecx, [rsi+9D8h]
 * 0000000140BCCFFD: bt      ecx, 1Dh
 * 0000000140BCD001: jb      loc_140BCD0C4
 * 0000000140BCD007: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCD011: jz      loc_140BCD0C4
 * 0000000140BCD017: test    r9b, cl
 * 0000000140BCD01A: jz      loc_140BCD0C4
 * 0000000140BCD020: mov     ecx, [rsi+0A74h]
 * 0000000140BCD026: mov     eax, [rsi+804h]
 * 0000000140BCD02C: mov     r10, [rsi+838h]
 * 0000000140BCD033: sub     eax, ecx
 * 0000000140BCD035: mov     r8, [rsi+0A78h]
 * 0000000140BCD03C: lea     rdx, [rcx+rsi]
 * 0000000140BCD040: mov     ecx, eax
 * 0000000140BCD042: shr     rcx, 3
 * 0000000140BCD046: lea     r9, [rdx+rcx*8]
 * 0000000140BCD04A: jmp     short loc_140BCD06D
 * 0000000140BCD04C: xor     [rdx], r8
 * 0000000140BCD04F: mov     rax, [rdx]
 * 0000000140BCD052: movzx   ecx, r8b
 * 0000000140BCD056: xor     rax, r10
 * 0000000140BCD059: and     ecx, 3Fh
 * 0000000140BCD05C: ror     r8, cl
 * 0000000140BCD05F: add     r8, rax
 * 0000000140BCD062: xor     r8, 0EFAh
 * 0000000140BCD069: add     rdx, 8
 * 0000000140BCD06D: cmp     rdx, r9
 * 0000000140BCD070: jnz     short loc_140BCD04C
 * 0000000140BCD072: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCD07A: cmp     r8, [rsi+0A80h]
 * 0000000140BCD081: jz      short loc_140BCD0C4
 * 0000000140BCD083: mov     ecx, [rsi+804h]
 * 0000000140BCD089: mov     rax, [rsi+588h]
 * 0000000140BCD090: mov     [rax], rsi
 * 0000000140BCD093: mov     [rax+10h], ecx
 * 0000000140BCD096: mov     rcx, [rsi+0A80h]
 * 0000000140BCD09D: cmp     [rsi+918h], r11d
 * 0000000140BCD0A4: jnz     short loc_140BCD0B4
 * 0000000140BCD0A6: mov     rax, [rsi+588h]
 * 0000000140BCD0AD: xor     rcx, r8
 * 0000000140BCD0B0: mov     [rax+18h], rcx
 * 0000000140BCD0B4: xor     edx, edx
 * 0000000140BCD0B6: mov     r9d, 100h
 * 0000000140BCD0BC: mov     rcx, rsi
 * 0000000140BCD0BF: call    sub_140BD8384
 * 0000000140BCD0C4: add     rbx, 30h ; '0'
 * 0000000140BCD0C8: mov     rcx, [rbx]
 * 0000000140BCD0CB: test    rcx, rcx
 * 0000000140BCD0CE: jnz     loc_140BCCEEB
 * 0000000140BCD0D4: mov     r15, [rsp+9D0h+var_978]
 * 0000000140BCD0D9: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BCD0E0: mov     rax, [rsi+108h]
 * 0000000140BCD0E7: mov     rcx, r15
 * 0000000140BCD0EA: call    KeGuardDispatchICall
 * 0000000140BCD0EF: mov     rax, [rsi+3A8h]
 * 0000000140BCD0F6: mov     rcx, r13
 * 0000000140BCD0F9: call    KeGuardDispatchICall
 * 0000000140BCD0FE: mov     r15d, [rsp+9D0h+var_958]
 * 0000000140BCD103: mov     eax, 8000h
 * 0000000140BCD108: add     [rsi+848h], eax
 * 0000000140BCD10E: mov     rcx, [rsp+9D0h+var_968]
 * 0000000140BCD113: test    rcx, rcx
 * 0000000140BCD116: jz      short loc_140BCD124
 * 0000000140BCD118: mov     rax, [rsi+1F0h]
 * 0000000140BCD11F: call    KeGuardDispatchICall
 * 0000000140BCD124: shl     r15d, 8
 * 0000000140BCD128: add     [rsi+848h], r15d
 * 0000000140BCD12F: jmp     loc_140BC2F9B
 * 0000000140BCD134: mov     ecx, r10d
 * 0000000140BCD137: sub     ecx, 29h ; ')'
 * 0000000140BCD13A: jz      loc_140BCA6C5
 * 0000000140BCD140: sub     ecx, 1
 * 0000000140BCD143: jz      loc_140BCA6C5
 * 0000000140BCD149: sub     ecx, 1
 * 0000000140BCD14C: jz      loc_140BCF4C9
 * 0000000140BCD152: sub     ecx, 1
 * 0000000140BCD155: jz      loc_140BCEB26
 * 0000000140BCD15B: sub     ecx, 2
 * 0000000140BCD15E: jz      loc_140BCEA28
 * 0000000140BCD164: sub     ecx, 1
 * 0000000140BCD167: jz      loc_140BCE74B
 * 0000000140BCD16D: cmp     ecx, 1
 * 0000000140BCD170: jz      loc_140BCE3A3
 * 0000000140BCD176: sub     r10d, 2
 * 0000000140BCD17A: jz      loc_140BCDC59
 * 0000000140BCD180: sub     r10d, 1
 * 0000000140BCD184: jz      loc_140BCD78F
 * 0000000140BCD18A: cmp     r10d, 14h
 * 0000000140BCD18E: jz      loc_140BCD275
 * 0000000140BCD194: cmp     [rsi+918h], r15d
 * 0000000140BCD19B: jnz     loc_140BC2FAF
 * 0000000140BCD1A1: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BCD1AB: add     rax, rsi
 * 0000000140BCD1AE: mov     [rsi+920h], rax
 * 0000000140BCD1B5: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BCD1BF: add     rax, r13
 * 0000000140BCD1C2: mov     [rsi+928h], rax
 * 0000000140BCD1C9: mov     qword ptr [rsi+930h], 101h
 * 0000000140BCD1D4: mov     [rsi+938h], r15
 * 0000000140BCD1DB: mov     [rsi+918h], ebx
 * 0000000140BCD1E1: mov     ecx, [rsi+9D8h]
 * 0000000140BCD1E7: bt      ecx, 1Dh
 * 0000000140BCD1EB: jb      loc_140BC2FAF
 * 0000000140BCD1F1: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCD1FB: jz      loc_140BC2FAF
 * 0000000140BCD201: test    bl, cl
 * 0000000140BCD203: jz      loc_140BC2FAF
 * 0000000140BCD209: mov     ecx, [rsi+0A74h]
 * 0000000140BCD20F: mov     eax, [rsi+804h]
 * 0000000140BCD215: mov     r10, [rsi+838h]
 * 0000000140BCD21C: sub     eax, ecx
 * 0000000140BCD21E: mov     r8, [rsi+0A78h]
 * 0000000140BCD225: lea     rdx, [rcx+rsi]
 * 0000000140BCD229: mov     ecx, eax
 * 0000000140BCD22B: shr     rcx, 3
 * 0000000140BCD22F: lea     r9, [rdx+rcx*8]
 * 0000000140BCD233: jmp     short loc_140BCD256
 * 0000000140BCD235: xor     [rdx], r8
 * 0000000140BCD238: mov     rax, [rdx]
 * 0000000140BCD23B: movzx   ecx, r8b
 * 0000000140BCD23F: xor     rax, r10
 * 0000000140BCD242: and     ecx, 3Fh
 * 0000000140BCD245: ror     r8, cl
 * 0000000140BCD248: add     r8, rax
 * 0000000140BCD24B: xor     r8, 0EFAh
 * 0000000140BCD252: add     rdx, 8
 * 0000000140BCD256: cmp     rdx, r9
 * 0000000140BCD259: jnz     short loc_140BCD235
 * 0000000140BCD25B: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCD263: cmp     r8, [rsi+0A80h]
 * 0000000140BCD26A: jz      loc_140BC2FAF
 * 0000000140BCD270: jmp     loc_140BC9D80
 * 0000000140BCD275: mov     edx, [r13+28h]
 * 0000000140BCD279: lea     rcx, [rbp+8D0h+var_2C0]
 * 0000000140BCD280: mov     rax, [rsi+1B0h]
 * 0000000140BCD287: call    KeGuardDispatchICall
 * 0000000140BCD28C: mov     rax, [rsi+1E0h]
 * 0000000140BCD293: lea     rdx, [rbp+8D0h+var_2B0]
 * 0000000140BCD29A: lea     rcx, [rbp+8D0h+var_2C0]
 * 0000000140BCD2A1: call    KeGuardDispatchICall
 * 0000000140BCD2A6: mov     rax, [rsi+0A58h]
 * 0000000140BCD2AD: test    rax, rax
 * 0000000140BCD2B0: jz      short loc_140BCD2BA
 * 0000000140BCD2B2: mov     ebx, [rax+320h]
 * 0000000140BCD2B8: jmp     short loc_140BCD2CB
 * 0000000140BCD2BA: mov     ecx, 832h
 * 0000000140BCD2BF: rdmsr
 * 0000000140BCD2C1: shl     rdx, 20h
 * 0000000140BCD2C5: or      rax, rdx
 * 0000000140BCD2C8: mov     rbx, rax
 * 0000000140BCD2CB: mov     rax, [rsi+0A58h]
 * 0000000140BCD2D2: test    rax, rax
 * 0000000140BCD2D5: jz      short loc_140BCD2E0
 * 0000000140BCD2D7: mov     r14d, [rax+340h]
 * 0000000140BCD2DE: jmp     short loc_140BCD2F1
 * 0000000140BCD2E0: mov     ecx, 834h
 * 0000000140BCD2E5: rdmsr
 * 0000000140BCD2E7: shl     rdx, 20h
 * 0000000140BCD2EB: or      rax, rdx
 * 0000000140BCD2EE: mov     r14, rax
 * 0000000140BCD2F1: mov     rax, [rsi+1A8h]
 * 0000000140BCD2F8: lea     rcx, [rbp+8D0h+var_2B0]
 * 0000000140BCD2FF: call    KeGuardDispatchICall
 * 0000000140BCD304: mov     ecx, 10h
 * 0000000140BCD309: test    [rsi+89Bh], cl
 * 0000000140BCD30F: jz      loc_140BCD458
 * 0000000140BCD315: cli
 * 0000000140BCD316: mov     rdx, [rsi+900h]
 * 0000000140BCD31D: mov     r8d, 26h ; '&'
 * 0000000140BCD323: mov     ecx, 130h
 * 0000000140BCD328: mov     rax, rdx
 * 0000000140BCD32B: lea     r9d, [r8-25h]
 * 0000000140BCD32F: mov     [rax], r15
 * 0000000140BCD332: add     ecx, 0FFFFFFF8h
 * 0000000140BCD335: add     rax, 8
 * 0000000140BCD339: sub     r8, r9
 * 0000000140BCD33C: jnz     short loc_140BCD32F
 * 0000000140BCD33E: test    ecx, ecx
 * 0000000140BCD340: jz      short loc_140BCD353
 * 0000000140BCD342: mov     r8d, 0FFFFFFFFh
 * 0000000140BCD348: mov     [rax], r15b
 * 0000000140BCD34B: add     rax, r9
 * 0000000140BCD34E: add     ecx, r8d
 * 0000000140BCD351: jnz     short loc_140BCD348
 * 0000000140BCD353: movups  xmm0, xmmword ptr [rsi+868h]
 * 0000000140BCD35A: mov     eax, 12Fh
 * 0000000140BCD35F: movdqu  xmmword ptr [rdx+10h], xmm0
 * 0000000140BCD364: movups  xmm1, xmmword ptr [rsi+878h]
 * 0000000140BCD36B: movdqu  xmmword ptr [rdx+20h], xmm1
 * 0000000140BCD370: movups  xmm0, xmmword ptr [rsi+888h]
 * 0000000140BCD377: movdqu  xmmword ptr [rdx+120h], xmm0
 * 0000000140BCD37F: mov     word ptr [rbp+8D0h+var_770], ax
 * 0000000140BCD386: lea     rax, [rsi+898h]
 * 0000000140BCD38D: mov     [rbp+162h], rdx
 * 0000000140BCD394: mov     rcx, rax
 * 0000000140BCD397: mov     [rdx+10h], ax
 * 0000000140BCD39B: shr     rcx, 10h
 * 0000000140BCD39F: mov     [rbp+8D0h+var_510], rax
 * 0000000140BCD3A6: shr     rax, 20h
 * 0000000140BCD3AA: mov     [rdx+16h], cx
 * 0000000140BCD3AE: mov     [rdx+18h], eax
 * 0000000140BCD3B1: sidt    fword ptr [rbp+8D0h+var_640]
 * 0000000140BCD3B8: lidt    fword ptr [rbp+8D0h+var_770]
 * 0000000140BCD3BF: test    dword ptr [rsi+9DCh], 20000h
 * 0000000140BCD3C9: jnz     short loc_140BCD40D
 * 0000000140BCD3CB: mov     rdx, gs:20h
 * 0000000140BCD3D4: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140BCD3DE: mov     rax, [rsi+4B8h]
 * 0000000140BCD3E5: add     rcx, rsi
 * 0000000140BCD3E8: mov     [rax], rcx
 * 0000000140BCD3EB: mov     rax, [rsi+4C0h]
 * 0000000140BCD3F2: mov     [rax], rdx
 * 0000000140BCD3F5: mov     rax, [rsi+4C8h]
 * 0000000140BCD3FC: mov     [rax], r15
 * 0000000140BCD3FF: mov     rax, [rsi+4D0h]
 * 0000000140BCD406: mov     qword ptr [rax], 115h
 * 0000000140BCD40D: call    KiErrata361Present
 * 0000000140BCD412: test    dword ptr [rsi+9DCh], 20000h
 * 0000000140BCD41C: jnz     short loc_140BCD450
 * 0000000140BCD41E: mov     rax, [rsi+4B8h]
 * 0000000140BCD425: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140BCD42F: mov     [rax], rcx
 * 0000000140BCD432: mov     rax, [rsi+4C0h]
 * 0000000140BCD439: mov     [rax], r15
 * 0000000140BCD43C: mov     rax, [rsi+4C8h]
 * 0000000140BCD443: mov     [rax], r15
 * 0000000140BCD446: mov     rax, [rsi+4D0h]
 * 0000000140BCD44D: mov     [rax], r15
 * 0000000140BCD450: lidt    fword ptr [rbp+8D0h+var_640]
 * 0000000140BCD457: sti
 * 0000000140BCD458: mov     eax, [r13+1Ch]
 * 0000000140BCD45C: mov     r8d, [r13+18h]
 * 0000000140BCD460: and     eax, ebx
 * 0000000140BCD462: cmp     eax, r8d
 * 0000000140BCD465: jnz     short loc_140BCD492
 * 0000000140BCD467: bt      ebx, 10h
 * 0000000140BCD46B: jb      loc_140BCD5E9
 * 0000000140BCD471: movzx   ecx, bl
 * 0000000140BCD474: sub     ecx, 0D1h
 * 0000000140BCD47A: jz      loc_140BCD5E9
 * 0000000140BCD480: sub     ecx, 2Ch ; ','
 * 0000000140BCD483: jz      loc_140BCD5E9
 * 0000000140BCD489: cmp     ecx, 1
 * 0000000140BCD48C: jz      loc_140BCD5E9
 * 0000000140BCD492: mov     edx, [r13+28h]
 * 0000000140BCD496: mov     rax, 32000000000h
 * 0000000140BCD4A0: shl     rdx, 30h
 * 0000000140BCD4A4: or      rdx, r8
 * 0000000140BCD4A7: or      rdx, rax
 * 0000000140BCD4AA: cmp     [rsi+918h], r15d
 * 0000000140BCD4B1: jnz     loc_140BCD5E9
 * 0000000140BCD4B7: mov     rax, [rsi+588h]
 * 0000000140BCD4BE: mov     ecx, ebx
 * 0000000140BCD4C0: xor     rcx, r8
 * 0000000140BCD4C3: mov     [rax+18h], rcx
 * 0000000140BCD4C7: cmp     [rsi+918h], r15d
 * 0000000140BCD4CE: jnz     loc_140BCD5E9
 * 0000000140BCD4D4: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140BCD4DE: mov     r9, 0B3B74BDEE4453415h
 * 0000000140BCD4E8: mov     ebx, 1
 * 0000000140BCD4ED: lea     rax, [rsi+r10]
 * 0000000140BCD4F1: mov     [rsi+920h], rax
 * 0000000140BCD4F8: lea     rax, [r9+r13]
 * 0000000140BCD4FC: mov     [rsi+928h], rax
 * 0000000140BCD503: movsxd  rax, dword ptr [r13+0]
 * 0000000140BCD507: mov     [rsi+930h], rax
 * 0000000140BCD50E: mov     [rsi+938h], rdx
 * 0000000140BCD515: mov     [rsi+918h], ebx
 * 0000000140BCD51B: mov     ecx, [rsi+9D8h]
 * 0000000140BCD521: bt      ecx, 1Dh
 * 0000000140BCD525: jb      loc_140BCD602
 * 0000000140BCD52B: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCD535: jz      loc_140BCD602
 * 0000000140BCD53B: test    bl, cl
 * 0000000140BCD53D: jz      loc_140BCD602
 * 0000000140BCD543: mov     ecx, [rsi+0A74h]
 * 0000000140BCD549: mov     eax, [rsi+804h]
 * 0000000140BCD54F: mov     r10, [rsi+838h]
 * 0000000140BCD556: sub     eax, ecx
 * 0000000140BCD558: mov     r8, [rsi+0A78h]
 * 0000000140BCD55F: lea     rdx, [rcx+rsi]
 * 0000000140BCD563: mov     ecx, eax
 * 0000000140BCD565: shr     rcx, 3
 * 0000000140BCD569: lea     r9, [rdx+rcx*8]
 * 0000000140BCD56D: jmp     short loc_140BCD590
 * 0000000140BCD56F: xor     [rdx], r8
 * 0000000140BCD572: mov     rax, [rdx]
 * 0000000140BCD575: movzx   ecx, r8b
 * 0000000140BCD579: xor     rax, r10
 * 0000000140BCD57C: and     ecx, 3Fh
 * 0000000140BCD57F: ror     r8, cl
 * 0000000140BCD582: add     r8, rax
 * 0000000140BCD585: xor     r8, 0EFAh
 * 0000000140BCD58C: add     rdx, 8
 * 0000000140BCD590: cmp     rdx, r9
 * 0000000140BCD593: jnz     short loc_140BCD56F
 * 0000000140BCD595: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCD59D: cmp     r8, [rsi+0A80h]
 * 0000000140BCD5A4: jz      short loc_140BCD5EE
 * 0000000140BCD5A6: mov     ecx, [rsi+804h]
 * 0000000140BCD5AC: mov     rax, [rsi+588h]
 * 0000000140BCD5B3: mov     [rax], rsi
 * 0000000140BCD5B6: mov     [rax+10h], ecx
 * 0000000140BCD5B9: mov     rcx, [rsi+0A80h]
 * 0000000140BCD5C0: cmp     [rsi+918h], r15d
 * 0000000140BCD5C7: jnz     short loc_140BCD5D7
 * 0000000140BCD5C9: mov     rax, [rsi+588h]
 * 0000000140BCD5D0: xor     rcx, r8
 * 0000000140BCD5D3: mov     [rax+18h], rcx
 * 0000000140BCD5D7: xor     edx, edx
 * 0000000140BCD5D9: mov     r9d, 100h
 * 0000000140BCD5DF: mov     rcx, rsi
 * 0000000140BCD5E2: call    sub_140BD8384
 * 0000000140BCD5E7: jmp     short loc_140BCD5EE
 * 0000000140BCD5E9: mov     ebx, 1
 * 0000000140BCD5EE: mov     r9, 0B3B74BDEE4453415h
 * 0000000140BCD5F8: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140BCD602: mov     eax, [r13+24h]
 * 0000000140BCD606: mov     r8d, [r13+20h]
 * 0000000140BCD60A: and     eax, r14d
 * 0000000140BCD60D: cmp     eax, r8d
 * 0000000140BCD610: jnz     short loc_140BCD63F
 * 0000000140BCD612: bt      r14d, 10h
 * 0000000140BCD617: jb      loc_140BCD77F
 * 0000000140BCD61D: movzx   ecx, r14b
 * 0000000140BCD621: sub     ecx, 0D1h
 * 0000000140BCD627: jz      loc_140BCD77F
 * 0000000140BCD62D: sub     ecx, 2Ch ; ','
 * 0000000140BCD630: jz      loc_140BCD77F
 * 0000000140BCD636: cmp     ecx, 1
 * 0000000140BCD639: jz      loc_140BCD77F
 * 0000000140BCD63F: mov     edx, [r13+28h]
 * 0000000140BCD643: mov     rax, 34000000000h
 * 0000000140BCD64D: shl     rdx, 30h
 * 0000000140BCD651: or      rdx, r8
 * 0000000140BCD654: or      rdx, rax
 * 0000000140BCD657: cmp     [rsi+918h], r15d
 * 0000000140BCD65E: jnz     loc_140BCD77F
 * 0000000140BCD664: mov     eax, r14d
 * 0000000140BCD667: mov     rcx, r8
 * 0000000140BCD66A: xor     rcx, rax
 * 0000000140BCD66D: mov     rax, [rsi+588h]
 * 0000000140BCD674: mov     [rax+18h], rcx
 * 0000000140BCD678: cmp     [rsi+918h], r15d
 * 0000000140BCD67F: jnz     loc_140BCD77F
 * 0000000140BCD685: lea     rax, [rsi+r10]
 * 0000000140BCD689: mov     [rsi+920h], rax
 * 0000000140BCD690: lea     rax, [r9+r13]
 * 0000000140BCD694: mov     [rsi+928h], rax
 * 0000000140BCD69B: movsxd  rax, dword ptr [r13+0]
 * 0000000140BCD69F: mov     [rsi+930h], rax
 * 0000000140BCD6A6: mov     [rsi+938h], rdx
 * 0000000140BCD6AD: mov     [rsi+918h], ebx
 * 0000000140BCD6B3: mov     ecx, [rsi+9D8h]
 * 0000000140BCD6B9: bt      ecx, 1Dh
 * 0000000140BCD6BD: jb      loc_140BCD77F
 * 0000000140BCD6C3: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCD6CD: jz      loc_140BCD77F
 * 0000000140BCD6D3: test    bl, cl
 * 0000000140BCD6D5: jz      loc_140BCD77F
 * 0000000140BCD6DB: mov     ecx, [rsi+0A74h]
 * 0000000140BCD6E1: mov     eax, [rsi+804h]
 * 0000000140BCD6E7: mov     r10, [rsi+838h]
 * 0000000140BCD6EE: sub     eax, ecx
 * 0000000140BCD6F0: mov     r8, [rsi+0A78h]
 * 0000000140BCD6F7: lea     rdx, [rcx+rsi]
 * 0000000140BCD6FB: mov     ecx, eax
 * 0000000140BCD6FD: shr     rcx, 3
 * 0000000140BCD701: lea     r9, [rdx+rcx*8]
 * 0000000140BCD705: jmp     short loc_140BCD728
 * 0000000140BCD707: xor     [rdx], r8
 * 0000000140BCD70A: mov     rax, [rdx]
 * 0000000140BCD70D: movzx   ecx, r8b
 * 0000000140BCD711: xor     rax, r10
 * 0000000140BCD714: and     ecx, 3Fh
 * 0000000140BCD717: ror     r8, cl
 * 0000000140BCD71A: add     r8, rax
 * 0000000140BCD71D: xor     r8, 0EFAh
 * 0000000140BCD724: add     rdx, 8
 * 0000000140BCD728: cmp     rdx, r9
 * 0000000140BCD72B: jnz     short loc_140BCD707
 * 0000000140BCD72D: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCD735: cmp     r8, [rsi+0A80h]
 * 0000000140BCD73C: jz      short loc_140BCD77F
 * 0000000140BCD73E: mov     ecx, [rsi+804h]
 * 0000000140BCD744: mov     rax, [rsi+588h]
 * 0000000140BCD74B: mov     [rax], rsi
 * 0000000140BCD74E: mov     [rax+10h], ecx
 * 0000000140BCD751: mov     rcx, [rsi+0A80h]
 * 0000000140BCD758: cmp     [rsi+918h], r15d
 * 0000000140BCD75F: jnz     short loc_140BCD76F
 * 0000000140BCD761: mov     rax, [rsi+588h]
 * 0000000140BCD768: xor     rcx, r8
 * 0000000140BCD76B: mov     [rax+18h], rcx
 * 0000000140BCD76F: xor     edx, edx
 * 0000000140BCD771: mov     r9d, 100h
 * 0000000140BCD777: mov     rcx, rsi
 * 0000000140BCD77A: call    sub_140BD8384
 * 0000000140BCD77F: mov     eax, 8000h
 * 0000000140BCD784: add     [rsi+848h], eax
 * 0000000140BCD78A: jmp     loc_140BCE398
 * 0000000140BCD78F: mov     edx, [r13+28h]
 * 0000000140BCD793: lea     rcx, [rbp+8D0h+var_2A0]
 * 0000000140BCD79A: mov     rax, [rsi+1B0h]
 * 0000000140BCD7A1: call    KeGuardDispatchICall
 * 0000000140BCD7A6: mov     rax, [rsi+1E0h]
 * 0000000140BCD7AD: lea     rdx, [rbp+8D0h+var_290]
 * 0000000140BCD7B4: lea     rcx, [rbp+8D0h+var_2A0]
 * 0000000140BCD7BB: call    KeGuardDispatchICall
 * 0000000140BCD7C0: lea     rdx, [rbp+8D0h+var_1F0]
 * 0000000140BCD7C7: lea     rcx, [rbp+8D0h+var_7C8]
 * 0000000140BCD7CE: call    KiGetGdtIdt
 * 0000000140BCD7D3: mov     r15, [rbp+8D0h+var_7C6]
 * 0000000140BCD7DA: mov     ecx, 2
 * 0000000140BCD7DF: mov     r14d, [r13+10h]
 * 0000000140BCD7E3: test    [rsi+89Bh], cl
 * 0000000140BCD7E9: jz      loc_140BCD917
 * 0000000140BCD7EF: mov     rdx, [rsi+900h]
 * 0000000140BCD7F6: mov     ecx, 130h
 * 0000000140BCD7FB: mov     rax, rdx
 * 0000000140BCD7FE: mov     r8d, 26h ; '&'
 * 0000000140BCD804: xor     r12d, r12d
 * 0000000140BCD807: mov     [rax], r12
 * 0000000140BCD80A: add     ecx, 0FFFFFFF8h
 * 0000000140BCD80D: add     rax, 8
 * 0000000140BCD811: sub     r8, rbx
 * 0000000140BCD814: jnz     short loc_140BCD807
 * 0000000140BCD816: test    ecx, ecx
 * 0000000140BCD818: jz      short loc_140BCD82B
 * 0000000140BCD81A: mov     r8d, 0FFFFFFFFh
 * 0000000140BCD820: mov     [rax], r12b
 * 0000000140BCD823: add     rax, rbx
 * 0000000140BCD826: add     ecx, r8d
 * 0000000140BCD829: jnz     short loc_140BCD820
 * 0000000140BCD82B: movups  xmm0, xmmword ptr [rsi+868h]
 * 0000000140BCD832: mov     eax, 12Fh
 * 0000000140BCD837: movdqu  xmmword ptr [rdx+10h], xmm0
 * 0000000140BCD83C: movups  xmm1, xmmword ptr [rsi+878h]
 * 0000000140BCD843: movdqu  xmmword ptr [rdx+20h], xmm1
 * 0000000140BCD848: movups  xmm0, xmmword ptr [rsi+888h]
 * 0000000140BCD84F: movdqu  xmmword ptr [rdx+120h], xmm0
 * 0000000140BCD857: mov     word ptr [rbp+8D0h+var_760], ax
 * 0000000140BCD85E: lea     rax, [rsi+898h]
 * 0000000140BCD865: mov     [rbp+172h], rdx
 * 0000000140BCD86C: mov     rcx, rax
 * 0000000140BCD86F: mov     [rdx+10h], ax
 * 0000000140BCD873: shr     rcx, 10h
 * 0000000140BCD877: mov     [rbp+8D0h+var_508], rax
 * 0000000140BCD87E: shr     rax, 20h
 * 0000000140BCD882: mov     [rdx+16h], cx
 * 0000000140BCD886: mov     [rdx+18h], eax
 * 0000000140BCD889: cli
 * 0000000140BCD88A: sidt    fword ptr [rbp+8D0h+var_678]
 * 0000000140BCD891: lidt    fword ptr [rbp+8D0h+var_760]
 * 0000000140BCD898: mov     dr7, r12
 * 0000000140BCD89C: lea     rax, [rsi+89Eh]
 * 0000000140BCD8A3: mov     [rdx+10h], ax
 * 0000000140BCD8A7: mov     rcx, rax
 * 0000000140BCD8AA: shr     rcx, 10h
 * 0000000140BCD8AE: shr     rax, 20h
 * 0000000140BCD8B2: mov     [rdx+16h], cx
 * 0000000140BCD8B6: mov     [rdx+18h], eax
 * 0000000140BCD8B9: test    byte ptr [rsi+89Bh], 20h
 * 0000000140BCD8C0: jnz     short loc_140BCD8D0
 * 0000000140BCD8C2: call    KiErrata704Present
 * 0000000140BCD8C7: mov     [rsi+908h], rax
 * 0000000140BCD8CE: jmp     short loc_140BCD901
 * 0000000140BCD8D0: lea     rbx, [rsi+8CAh]
 * 0000000140BCD8D7: call    KiGetSs
 * 0000000140BCD8DC: mov     [rbx], ax
 * 0000000140BCD8DF: mov     dr0, rbx
 * 0000000140BCD8E2: mov     eax, 70001h
 * 0000000140BCD8E7: mov     dr7, rax
 * 0000000140BCD8EA: mov     rcx, rbx
 * 0000000140BCD8ED: call    KiErrataSkx55Present
 * 0000000140BCD8F2: mov     [rsi+908h], rax
 * 0000000140BCD8F9: mov     dr7, r12
 * 0000000140BCD8FD: mov     dr0, r12
 * 0000000140BCD901: mov     eax, gs:1A4h
 * 0000000140BCD909: mov     [rsi+910h], eax
 * 0000000140BCD90F: lidt    fword ptr [rbp+8D0h+var_678]
 * 0000000140BCD916: sti
 * 0000000140BCD917: call    KiGetLdtr
 * 0000000140BCD91C: movzx   r12d, ax
 * 0000000140BCD920: call    KiGetTr
 * 0000000140BCD925: add     [rsi+848h], r14d
 * 0000000140BCD92C: lea     rcx, [r15+r14]
 * 0000000140BCD930: mov     r10d, [rsi+834h]
 * 0000000140BCD937: mov     r8, r15
 * 0000000140BCD93A: mov     r11, [rsi+838h]
 * 0000000140BCD941: movzx   r13d, ax
 * 0000000140BCD945: mov     rax, r15
 * 0000000140BCD948: cmp     r15, rcx
 * 0000000140BCD94B: jnb     short loc_140BCD95D
 * 0000000140BCD94D: mov     edx, 40h ; '@'
 * 0000000140BCD952: prefetchnta byte ptr [rax]
 * 0000000140BCD955: add     rax, rdx
 * 0000000140BCD958: cmp     rax, rcx
 * 0000000140BCD95B: jb      short loc_140BCD952
 * 0000000140BCD95D: mov     r9d, r14d
 * 0000000140BCD960: mov     rbx, r11
 * 0000000140BCD963: shr     r9d, 7
 * 0000000140BCD967: mov     edx, 1
 * 0000000140BCD96C: test    r9d, r9d
 * 0000000140BCD96F: jz      short loc_140BCD9E1
 * 0000000140BCD971: mov     esi, 0FFFFFFFFh
 * 0000000140BCD976: mov     rdi, 7010008004002001h
 * 0000000140BCD980: mov     eax, 8
 * 0000000140BCD985: xor     rbx, [r8]
 * 0000000140BCD988: mov     ecx, r10d
 * 0000000140BCD98B: rol     rbx, cl
 * 0000000140BCD98E: xor     rbx, [r8+8]
 * 0000000140BCD992: add     r8, 10h
 * 0000000140BCD996: rol     rbx, cl
 * 0000000140BCD999: sub     rax, rdx
 * 0000000140BCD99C: jnz     short loc_140BCD985
 * 0000000140BCD99E: mov     rcx, r8
 * 0000000140BCD9A1: sub     rcx, r15
 * 0000000140BCD9A4: xor     rcx, r11
 * 0000000140BCD9A7: mov     rax, rcx
 * 0000000140BCD9AA: rol     rax, 11h
 * 0000000140BCD9AE: xor     rcx, rax
 * 0000000140BCD9B1: mov     rax, rdi
 * 0000000140BCD9B4: mul     rcx
 * 0000000140BCD9B7: xor     eax, edx
 * 0000000140BCD9B9: mov     [rbp+8D0h+var_500], rdx
 * 0000000140BCD9C0: xor     r10d, eax
 * 0000000140BCD9C3: mov     edx, 1
 * 0000000140BCD9C8: and     r10d, 3Fh
 * 0000000140BCD9CC: cmovz   r10d, edx
 * 0000000140BCD9D0: add     r9d, esi
 * 0000000140BCD9D3: jnz     short loc_140BCD980
 * 0000000140BCD9D5: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BCD9DA: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BCD9E1: and     r14d, 7Fh
 * 0000000140BCD9E5: cmp     r14d, 8
 * 0000000140BCD9E9: jb      short loc_140BCDA08
 * 0000000140BCD9EB: mov     eax, r14d
 * 0000000140BCD9EE: shr     rax, 3
 * 0000000140BCD9F2: xor     rbx, [r8]
 * 0000000140BCD9F5: mov     ecx, r10d
 * 0000000140BCD9F8: rol     rbx, cl
 * 0000000140BCD9FB: add     r8, 8
 * 0000000140BCD9FF: add     r14d, 0FFFFFFF8h
 * 0000000140BCDA03: sub     rax, rdx
 * 0000000140BCDA06: jnz     short loc_140BCD9F2
 * 0000000140BCDA08: xor     r15d, r15d
 * 0000000140BCDA0B: test    r14d, r14d
 * 0000000140BCDA0E: jz      short loc_140BCDA2F
 * 0000000140BCDA10: mov     esi, 0FFFFFFFFh
 * 0000000140BCDA15: movzx   eax, byte ptr [r8]
 * 0000000140BCDA19: mov     ecx, r10d
 * 0000000140BCDA1C: xor     rbx, rax
 * 0000000140BCDA1F: add     r8, rdx
 * 0000000140BCDA22: rol     rbx, cl
 * 0000000140BCDA25: add     r14d, esi
 * 0000000140BCDA28: jnz     short loc_140BCDA15
 * 0000000140BCDA2A: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BCDA2F: mov     rax, rbx
 * 0000000140BCDA32: jmp     short loc_140BCDA36
 * 0000000140BCDA34: xor     ebx, eax
 * 0000000140BCDA36: shr     rax, 1Fh
 * 0000000140BCDA3A: test    rax, rax
 * 0000000140BCDA3D: jnz     short loc_140BCDA34
 * 0000000140BCDA3F: mov     rax, [rsi+1A8h]
 * 0000000140BCDA46: lea     rcx, [rbp+8D0h+var_290]
 * 0000000140BCDA4D: btr     ebx, 1Fh
 * 0000000140BCDA51: call    KeGuardDispatchICall
 * 0000000140BCDA56: mov     r9, [rsp+9D0h+var_980]
 * 0000000140BCDA5B: mov     r11d, 40h ; '@'
 * 0000000140BCDA61: cmp     ebx, [r9+14h]
 * 0000000140BCDA65: jnz     short loc_140BCDA85
 * 0000000140BCDA67: movzx   eax, word ptr [r9+2Ch]
 * 0000000140BCDA6C: cmp     [rbp+8D0h+var_7C8], ax
 * 0000000140BCDA73: jnz     short loc_140BCDA85
 * 0000000140BCDA75: test    r12w, r12w
 * 0000000140BCDA79: jnz     short loc_140BCDA85
 * 0000000140BCDA7B: cmp     r13w, r11w
 * 0000000140BCDA7F: jz      loc_140BCDC44
 * 0000000140BCDA85: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BCDA8F: jz      short loc_140BCDADF
 * 0000000140BCDA91: mov     rcx, [rsi+0AC8h]
 * 0000000140BCDA98: mov     edx, 30h ; '0'
 * 0000000140BCDA9D: lea     r8d, [rdx-2Ah]
 * 0000000140BCDAA1: lea     r10d, [rdx-2Fh]
 * 0000000140BCDAA5: mov     rax, [r9]
 * 0000000140BCDAA8: add     edx, 0FFFFFFF8h
 * 0000000140BCDAAB: mov     [rcx], rax
 * 0000000140BCDAAE: add     r9, 8
 * 0000000140BCDAB2: add     rcx, 8
 * 0000000140BCDAB6: sub     r8, r10
 * 0000000140BCDAB9: jnz     short loc_140BCDAA5
 * 0000000140BCDABB: test    edx, edx
 * 0000000140BCDABD: jz      short loc_140BCDAD8
 * 0000000140BCDABF: mov     esi, 0FFFFFFFFh
 * 0000000140BCDAC4: mov     al, [r9]
 * 0000000140BCDAC7: add     r9, r10
 * 0000000140BCDACA: mov     [rcx], al
 * 0000000140BCDACC: add     rcx, r10
 * 0000000140BCDACF: add     edx, esi
 * 0000000140BCDAD1: jnz     short loc_140BCDAC4
 * 0000000140BCDAD3: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BCDAD8: mov     r9, [rsi+0AC8h]
 * 0000000140BCDADF: mov     rax, [rbp+8D0h+var_7C6]
 * 0000000140BCDAE6: mov     edx, ebx
 * 0000000140BCDAE8: mov     [r9+18h], rax
 * 0000000140BCDAEC: mov     [r9+20h], rdx
 * 0000000140BCDAF0: test    r12w, r12w
 * 0000000140BCDAF4: jz      short loc_140BCDAFC
 * 0000000140BCDAF6: mov     [r9+18h], r12
 * 0000000140BCDAFA: jmp     short loc_140BCDB06
 * 0000000140BCDAFC: cmp     r13w, r11w
 * 0000000140BCDB00: jz      short loc_140BCDB06
 * 0000000140BCDB02: mov     [r9+18h], r13
 * 0000000140BCDB06: mov     ecx, [r9+14h]
 * 0000000140BCDB0A: cmp     [rsi+918h], r15d
 * 0000000140BCDB11: jnz     short loc_140BCDB21
 * 0000000140BCDB13: mov     rax, [rsi+588h]
 * 0000000140BCDB1A: xor     rcx, rdx
 * 0000000140BCDB1D: mov     [rax+18h], rcx
 * 0000000140BCDB21: mov     ebx, 1
 * 0000000140BCDB26: mov     rcx, [r9+8]
 * 0000000140BCDB2A: cmp     [rsi+918h], r15d
 * 0000000140BCDB31: jnz     loc_140BCDC49
 * 0000000140BCDB37: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BCDB41: add     rax, rsi
 * 0000000140BCDB44: mov     [rsi+920h], rax
 * 0000000140BCDB4B: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BCDB55: add     rax, r9
 * 0000000140BCDB58: mov     [rsi+928h], rax
 * 0000000140BCDB5F: movsxd  rax, dword ptr [r9]
 * 0000000140BCDB62: mov     [rsi+930h], rax
 * 0000000140BCDB69: mov     [rsi+938h], rcx
 * 0000000140BCDB70: mov     [rsi+918h], ebx
 * 0000000140BCDB76: mov     ecx, [rsi+9D8h]
 * 0000000140BCDB7C: bt      ecx, 1Dh
 * 0000000140BCDB80: jb      loc_140BCDC49
 * 0000000140BCDB86: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCDB90: jz      loc_140BCDC49
 * 0000000140BCDB96: test    bl, cl
 * 0000000140BCDB98: jz      loc_140BCDC49
 * 0000000140BCDB9E: mov     ecx, [rsi+0A74h]
 * 0000000140BCDBA4: mov     eax, [rsi+804h]
 * 0000000140BCDBAA: mov     r10, [rsi+838h]
 * 0000000140BCDBB1: sub     eax, ecx
 * 0000000140BCDBB3: mov     r8, [rsi+0A78h]
 * 0000000140BCDBBA: lea     rdx, [rcx+rsi]
 * 0000000140BCDBBE: mov     ecx, eax
 * 0000000140BCDBC0: shr     rcx, 3
 * 0000000140BCDBC4: lea     r9, [rdx+rcx*8]
 * 0000000140BCDBC8: jmp     short loc_140BCDBEB
 * 0000000140BCDBCA: xor     [rdx], r8
 * 0000000140BCDBCD: mov     rax, [rdx]
 * 0000000140BCDBD0: movzx   ecx, r8b
 * 0000000140BCDBD4: xor     rax, r10
 * 0000000140BCDBD7: and     ecx, 3Fh
 * 0000000140BCDBDA: ror     r8, cl
 * 0000000140BCDBDD: add     r8, rax
 * 0000000140BCDBE0: xor     r8, 0EFAh
 * 0000000140BCDBE7: add     rdx, 8
 * 0000000140BCDBEB: cmp     rdx, r9
 * 0000000140BCDBEE: jnz     short loc_140BCDBCA
 * 0000000140BCDBF0: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCDBF8: cmp     r8, [rsi+0A80h]
 * 0000000140BCDBFF: jz      short loc_140BCDC49
 * 0000000140BCDC01: mov     ecx, [rsi+804h]
 * 0000000140BCDC07: mov     rax, [rsi+588h]
 * 0000000140BCDC0E: mov     [rax], rsi
 * 0000000140BCDC11: mov     [rax+10h], ecx
 * 0000000140BCDC14: mov     rcx, [rsi+0A80h]
 * 0000000140BCDC1B: cmp     [rsi+918h], r15d
 * 0000000140BCDC22: jnz     short loc_140BCDC32
 * 0000000140BCDC24: mov     rax, [rsi+588h]
 * 0000000140BCDC2B: xor     rcx, r8
 * 0000000140BCDC2E: mov     [rax+18h], rcx
 * 0000000140BCDC32: xor     edx, edx
 * 0000000140BCDC34: mov     r9d, 100h
 * 0000000140BCDC3A: mov     rcx, rsi
 * 0000000140BCDC3D: call    sub_140BD8384
 * 0000000140BCDC42: jmp     short loc_140BCDC49
 * 0000000140BCDC44: mov     ebx, 1
 * 0000000140BCDC49: mov     ecx, 8000h
 * 0000000140BCDC4E: add     [rsi+848h], ecx
 * 0000000140BCDC54: jmp     loc_140BC3B5D
 * 0000000140BCDC59: mov     edx, [r13+28h]
 * 0000000140BCDC5D: lea     rcx, [rbp+8D0h+var_280]
 * 0000000140BCDC64: mov     rax, [rsi+1B0h]
 * 0000000140BCDC6B: mov     [rbp+8D0h+var_928], r15d
 * 0000000140BCDC6F: call    KeGuardDispatchICall
 * 0000000140BCDC74: mov     rax, [rsi+1E0h]
 * 0000000140BCDC7B: lea     rdx, [rbp+8D0h+var_270]
 * 0000000140BCDC82: lea     rcx, [rbp+8D0h+var_280]
 * 0000000140BCDC89: call    KeGuardDispatchICall
 * 0000000140BCDC8E: lea     rdx, [rbp+8D0h+var_750]
 * 0000000140BCDC95: lea     rcx, [rbp+8D0h+var_1E0]
 * 0000000140BCDC9C: call    KiGetGdtIdt
 * 0000000140BCDCA1: mov     rcx, [rbp+8D0h+var_74E]
 * 0000000140BCDCA8: mov     edi, r15d
 * 0000000140BCDCAB: mov     [rbp+8D0h+var_950], rcx
 * 0000000140BCDCAF: add     rcx, 4
 * 0000000140BCDCB3: mov     [rsp+9D0h+var_978], rcx
 * 0000000140BCDCB8: jmp     short loc_140BCDCBD
 * 0000000140BCDCBA: xor     r15d, r15d
 * 0000000140BCDCBD: mov     rax, [rsi+8E8h]
 * 0000000140BCDCC4: mov     r9, r15
 * 0000000140BCDCC7: mov     [rbp+8D0h+var_878], rax
 * 0000000140BCDCCB: mov     r14, r15
 * 0000000140BCDCCE: mov     r8, [rsi+8F0h]
 * 0000000140BCDCD5: mov     r12d, [rsi+8CCh]
 * 0000000140BCDCDC: mov     r13d, [rsi+8D0h]
 * 0000000140BCDCE3: mov     [rsp+9D0h+var_968], r8
 * 0000000140BCDCE8: mov     [rsp+9D0h+var_960], r15
 * 0000000140BCDCED: mov     [rbp+8D0h+var_940], r15
 * 0000000140BCDCF1: mov     r15, cr8
 * 0000000140BCDCF5: mov     eax, 0Fh
 * 0000000140BCDCFA: mov     cr8, rax
 * 0000000140BCDCFE: movzx   eax, word ptr [rcx-4]
 * 0000000140BCDD02: movzx   r10d, word ptr [rcx]
 * 0000000140BCDD06: mov     word ptr [rbp+8D0h+var_8A8], ax
 * 0000000140BCDD0A: movzx   eax, word ptr [rcx+2]
 * 0000000140BCDD0E: mov     word ptr [rbp+8D0h+var_8A8+2], ax
 * 0000000140BCDD12: mov     eax, [rcx+4]
 * 0000000140BCDD15: mov     rcx, [rsi+628h]
 * 0000000140BCDD1C: mov     dword ptr [rbp+8D0h+var_8A8+4], eax
 * 0000000140BCDD1F: mov     rbx, [rbp+8D0h+var_8A8]
 * 0000000140BCDD23: mov     eax, edi
 * 0000000140BCDD25: mov     word ptr [rbp+8D0h+arg_8], r10w
 * 0000000140BCDD2D: lea     rdx, [rcx+rax*8]
 * 0000000140BCDD31: cmp     rbx, rdx
 * 0000000140BCDD34: jnz     short loc_140BCDD9A
 * 0000000140BCDD36: mov     eax, 6000h
 * 0000000140BCDD3B: test    ax, r10w
 * 0000000140BCDD3F: jz      short loc_140BCDD4E
 * 0000000140BCDD41: movzx   eax, r15b
 * 0000000140BCDD45: mov     cr8, rax
 * 0000000140BCDD49: jmp     loc_140BCE10F
 * 0000000140BCDD4E: mov     rax, [rsi+470h]
 * 0000000140BCDD55: mov     ecx, edi
 * 0000000140BCDD57: call    KeGuardDispatchICall
 * 0000000140BCDD5C: mov     r14, [rax]
 * 0000000140BCDD5F: test    r14, r14
 * 0000000140BCDD62: jz      short loc_140BCDD8B
 * 0000000140BCDD64: mov     r12, [r12+r14]
 * 0000000140BCDD68: mov     [rsp+9D0h+var_960], r12
 * 0000000140BCDD6D: cmp     edi, 30h ; '0'
 * 0000000140BCDD70: jnb     short loc_140BCDD7F
 * 0000000140BCDD72: movzx   eax, r15b
 * 0000000140BCDD76: mov     cr8, rax
 * 0000000140BCDD7A: jmp     loc_140BCE10A
 * 0000000140BCDD7F: mov     r13, [r13+r14+0]
 * 0000000140BCDD84: mov     r8, [rsp+9D0h+var_968]
 * 0000000140BCDD89: jmp     short loc_140BCDDA2
 * 0000000140BCDD8B: mov     r8, [rsp+9D0h+var_968]
 * 0000000140BCDD90: or      r14, 0FFFFFFFFFFFFFFFFh
 * 0000000140BCDD94: mov     r13, [rbp+8D0h+var_940]
 * 0000000140BCDD98: jmp     short loc_140BCDD9D
 * 0000000140BCDD9A: mov     r13, r9
 * 0000000140BCDD9D: mov     r12, [rsp+9D0h+var_960]
 * 0000000140BCDDA2: movzx   eax, r15b
 * 0000000140BCDDA6: mov     cr8, rax
 * 0000000140BCDDAA: test    r14, r14
 * 0000000140BCDDAD: jnz     short loc_140BCDDF5
 * 0000000140BCDDAF: mov     rdx, [rbp+8D0h+var_878]
 * 0000000140BCDDB3: cmp     rbx, rdx
 * 0000000140BCDDB6: jb      loc_140BCE10A
 * 0000000140BCDDBC: cmp     rbx, r8
 * 0000000140BCDDBF: ja      loc_140BCE10A
 * 0000000140BCDDC5: mov     r8d, dword ptr [rbp+8D0h+var_8A8]
 * 0000000140BCDDC9: mov     rcx, [rsi+8F8h]
 * 0000000140BCDDD0: sub     r8d, edx
 * 0000000140BCDDD3: mov     rax, [rsi+220h]
 * 0000000140BCDDDA: call    KeGuardDispatchICall
 * 0000000140BCDDDF: test    rax, rax
 * 0000000140BCDDE2: jz      loc_140BCE10A
 * 0000000140BCDDE8: test    dword ptr [rax+24h], 2000000h
 * 0000000140BCDDEF: jnz     loc_140BCE10A
 * 0000000140BCDDF5: mov     rcx, [rsp+9D0h+var_978]
 * 0000000140BCDDFA: mov     eax, 10h
 * 0000000140BCDDFF: cmp     [rcx-2], ax
 * 0000000140BCDE03: jnz     loc_140BCE10A
 * 0000000140BCDE09: movzx   ecx, word ptr [rcx]
 * 0000000140BCDE0C: mov     edx, 1F00h
 * 0000000140BCDE11: movzx   eax, cx
 * 0000000140BCDE14: and     ax, dx
 * 0000000140BCDE17: mov     edx, 0E00h
 * 0000000140BCDE1C: cmp     ax, dx
 * 0000000140BCDE1F: jnz     loc_140BCE10A
 * 0000000140BCDE25: bt      cx, 0Fh
 * 0000000140BCDE2A: jnb     loc_140BCE10A
 * 0000000140BCDE30: mov     rax, [rsi+270h]
 * 0000000140BCDE37: lea     rdx, [rbp+8D0h+var_878]
 * 0000000140BCDE3B: xor     r8d, r8d
 * 0000000140BCDE3E: mov     rcx, rbx
 * 0000000140BCDE41: call    KeGuardDispatchICall
 * 0000000140BCDE46: test    rax, rax
 * 0000000140BCDE49: jz      loc_140BCE077
 * 0000000140BCDE4F: mov     eax, [rax]
 * 0000000140BCDE51: mov     rcx, [rbp+8D0h+var_878]
 * 0000000140BCDE55: add     rax, rcx
 * 0000000140BCDE58: cmp     rax, rbx
 * 0000000140BCDE5B: jnz     loc_140BCE077
 * 0000000140BCDE61: cmp     rcx, [rsi+8E8h]
 * 0000000140BCDE68: jnz     loc_140BCE077
 * 0000000140BCDE6E: test    r14, r14
 * 0000000140BCDE71: jnz     loc_140BCE080
 * 0000000140BCDE77: xor     r13d, r13d
 * 0000000140BCDE7A: mov     rcx, [rsp+9D0h+var_978]
 * 0000000140BCDE7F: inc     edi
 * 0000000140BCDE81: add     rcx, 10h
 * 0000000140BCDE85: mov     [rsp+9D0h+var_978], rcx
 * 0000000140BCDE8A: cmp     edi, 0FFh
 * 0000000140BCDE90: jbe     loc_140BCDCBA
 * 0000000140BCDE96: mov     ecx, 1
 * 0000000140BCDE9B: test    [rsi+89Bh], cl
 * 0000000140BCDEA1: jz      loc_140BCDF71
 * 0000000140BCDEA7: cli
 * 0000000140BCDEA8: mov     r14d, 0C0000082h
 * 0000000140BCDEAE: mov     ecx, r14d
 * 0000000140BCDEB1: rdmsr
 * 0000000140BCDEB3: shl     rdx, 20h
 * 0000000140BCDEB7: or      rax, rdx
 * 0000000140BCDEBA: lea     rdx, [rsi+89Ah]
 * 0000000140BCDEC1: mov     rbx, rax
 * 0000000140BCDEC4: mov     rax, rdx
 * 0000000140BCDEC7: shr     rdx, 20h
 * 0000000140BCDECB: wrmsr
 * 0000000140BCDECD: bt      dword ptr [rsi+9DCh], 11h
 * 0000000140BCDED5: jb      short loc_140BCDF19
 * 0000000140BCDED7: mov     rdx, gs:20h
 * 0000000140BCDEE0: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140BCDEEA: mov     rax, [rsi+4B8h]
 * 0000000140BCDEF1: add     rcx, rsi
 * 0000000140BCDEF4: mov     [rax], rcx
 * 0000000140BCDEF7: mov     rax, [rsi+4C0h]
 * 0000000140BCDEFE: mov     [rax], rdx
 * 0000000140BCDF01: mov     rax, [rsi+4C8h]
 * 0000000140BCDF08: mov     [rax], r14
 * 0000000140BCDF0B: mov     rax, [rsi+4D0h]
 * 0000000140BCDF12: mov     qword ptr [rax], 112h
 * 0000000140BCDF19: lea     rax, [rsi+89Ch]
 * 0000000140BCDF20: call    KeGuardDispatchICall
 * 0000000140BCDF25: bt      dword ptr [rsi+9DCh], 11h
 * 0000000140BCDF2D: jb      short loc_140BCDF61
 * 0000000140BCDF2F: mov     rax, [rsi+4B8h]
 * 0000000140BCDF36: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140BCDF40: mov     [rax], rcx
 * 0000000140BCDF43: mov     rax, [rsi+4C0h]
 * 0000000140BCDF4A: mov     [rax], r13
 * 0000000140BCDF4D: mov     rax, [rsi+4C8h]
 * 0000000140BCDF54: mov     [rax], r13
 * 0000000140BCDF57: mov     rax, [rsi+4D0h]
 * 0000000140BCDF5E: mov     [rax], r13
 * 0000000140BCDF61: mov     rdx, rbx
 * 0000000140BCDF64: mov     rax, rbx
 * 0000000140BCDF67: shr     rdx, 20h
 * 0000000140BCDF6B: mov     ecx, r14d
 * 0000000140BCDF6E: wrmsr
 * 0000000140BCDF70: sti
 * 0000000140BCDF71: mov     r14, [rbp+8D0h+var_950]
 * 0000000140BCDF75: add     dword ptr [rsi+848h], 350h
 * 0000000140BCDF7F: mov     r8, r14
 * 0000000140BCDF82: mov     r9d, [rsi+834h]
 * 0000000140BCDF89: mov     rax, r14
 * 0000000140BCDF8C: mov     r11, [rsi+838h]
 * 0000000140BCDF93: lea     rcx, [r14+350h]
 * 0000000140BCDF9A: cmp     r14, rcx
 * 0000000140BCDF9D: jnb     short loc_140BCDFAF
 * 0000000140BCDF9F: mov     edx, 40h ; '@'
 * 0000000140BCDFA4: prefetchnta byte ptr [rax]
 * 0000000140BCDFA7: add     rax, rdx
 * 0000000140BCDFAA: cmp     rax, rcx
 * 0000000140BCDFAD: jb      short loc_140BCDFA4
 * 0000000140BCDFAF: mov     r12d, 6
 * 0000000140BCDFB5: mov     rbx, r11
 * 0000000140BCDFB8: mov     r10d, r12d
 * 0000000140BCDFBB: mov     esi, 0FFFFFFFFh
 * 0000000140BCDFC0: mov     rdi, 7010008004002001h
 * 0000000140BCDFCA: lea     r15d, [r12-5]
 * 0000000140BCDFCF: mov     eax, 8
 * 0000000140BCDFD4: xor     rbx, [r8]
 * 0000000140BCDFD7: mov     ecx, r9d
 * 0000000140BCDFDA: rol     rbx, cl
 * 0000000140BCDFDD: xor     rbx, [r8+8]
 * 0000000140BCDFE1: add     r8, 10h
 * 0000000140BCDFE5: rol     rbx, cl
 * 0000000140BCDFE8: sub     rax, r15
 * 0000000140BCDFEB: jnz     short loc_140BCDFD4
 * 0000000140BCDFED: mov     rcx, r8
 * 0000000140BCDFF0: sub     rcx, r14
 * 0000000140BCDFF3: xor     rcx, r11
 * 0000000140BCDFF6: mov     rax, rcx
 * 0000000140BCDFF9: rol     rax, 11h
 * 0000000140BCDFFD: xor     rcx, rax
 * 0000000140BCE000: mov     rax, rdi
 * 0000000140BCE003: mul     rcx
 * 0000000140BCE006: xor     r9d, edx
 * 0000000140BCE009: mov     [rbp+8D0h+var_4F8], rdx
 * 0000000140BCE010: xor     r9d, eax
 * 0000000140BCE013: and     r9d, 3Fh
 * 0000000140BCE017: cmovz   r9d, r15d
 * 0000000140BCE01B: add     r10d, esi
 * 0000000140BCE01E: jnz     short loc_140BCDFCF
 * 0000000140BCE020: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BCE025: lea     edx, [r10+50h]
 * 0000000140BCE029: mov     r15d, [rbp+8D0h+var_928]
 * 0000000140BCE02D: lea     eax, [rdx-46h]
 * 0000000140BCE030: lea     r10d, [rdx-4Fh]
 * 0000000140BCE034: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BCE03B: xor     rbx, [r8]
 * 0000000140BCE03E: mov     ecx, r9d
 * 0000000140BCE041: rol     rbx, cl
 * 0000000140BCE044: add     r8, 8
 * 0000000140BCE048: add     edx, 0FFFFFFF8h
 * 0000000140BCE04B: sub     rax, r10
 * 0000000140BCE04E: jnz     short loc_140BCE03B
 * 0000000140BCE050: mov     r11d, 0FFFFFFFFh
 * 0000000140BCE056: test    edx, edx
 * 0000000140BCE058: jz      short loc_140BCE06F
 * 0000000140BCE05A: movzx   eax, byte ptr [r8]
 * 0000000140BCE05E: mov     ecx, r9d
 * 0000000140BCE061: xor     rbx, rax
 * 0000000140BCE064: add     r8, r10
 * 0000000140BCE067: rol     rbx, cl
 * 0000000140BCE06A: add     edx, r11d
 * 0000000140BCE06D: jnz     short loc_140BCE05A
 * 0000000140BCE06F: mov     rax, rbx
 * 0000000140BCE072: jmp     loc_140BCE148
 * 0000000140BCE077: test    r14, r14
 * 0000000140BCE07A: jz      loc_140BCE10A
 * 0000000140BCE080: mov     eax, 6000h
 * 0000000140BCE085: test    word ptr [rbp+8D0h+arg_8], ax
 * 0000000140BCE08C: jnz     short loc_140BCE10A
 * 0000000140BCE08E: cmp     r14, 0FFFFFFFFFFFFFFFFh
 * 0000000140BCE092: jz      loc_140BCDE77
 * 0000000140BCE098: mov     rax, [rsi+270h]
 * 0000000140BCE09F: lea     rdx, [rbp+8D0h+var_878]
 * 0000000140BCE0A3: xor     r8d, r8d
 * 0000000140BCE0A6: mov     rcx, r12
 * 0000000140BCE0A9: call    KeGuardDispatchICall
 * 0000000140BCE0AE: test    rax, rax
 * 0000000140BCE0B1: jz      short loc_140BCE10A
 * 0000000140BCE0B3: mov     eax, [rax]
 * 0000000140BCE0B5: mov     rdx, [rbp+8D0h+var_878]
 * 0000000140BCE0B9: add     rax, rdx
 * 0000000140BCE0BC: cmp     rax, r12
 * 0000000140BCE0BF: jnz     short loc_140BCE10A
 * 0000000140BCE0C1: cmp     rdx, [rsi+8E8h]
 * 0000000140BCE0C8: jnz     short loc_140BCE10A
 * 0000000140BCE0CA: mov     rcx, [rsi+8F8h]
 * 0000000140BCE0D1: mov     r8d, r12d
 * 0000000140BCE0D4: mov     rax, [rsi+220h]
 * 0000000140BCE0DB: sub     r8d, edx
 * 0000000140BCE0DE: call    KeGuardDispatchICall
 * 0000000140BCE0E3: test    rax, rax
 * 0000000140BCE0E6: jz      short loc_140BCE10A
 * 0000000140BCE0E8: test    dword ptr [rax+24h], 2000000h
 * 0000000140BCE0EF: jnz     short loc_140BCE10A
 * 0000000140BCE0F1: cmp     edi, 0FEh
 * 0000000140BCE0F7: jnz     loc_140BCDE77
 * 0000000140BCE0FD: cmp     r13, [rsi+8D8h]
 * 0000000140BCE104: jz      loc_140BCDE77
 * 0000000140BCE10A: mov     r9, [rsp+9D0h+var_960]
 * 0000000140BCE10F: mov     rax, [rsi+588h]
 * 0000000140BCE116: xor     r13d, r13d
 * 0000000140BCE119: mov     [rax], rbx
 * 0000000140BCE11C: mov     dword ptr [rax+10h], 80h
 * 0000000140BCE123: test    r9, r9
 * 0000000140BCE126: jz      short loc_140BCE13A
 * 0000000140BCE128: mov     rax, [rsi+588h]
 * 0000000140BCE12F: mov     [rax+8], r9
 * 0000000140BCE133: mov     dword ptr [rax+14h], 80h
 * 0000000140BCE13A: mov     [rbp+8D0h+var_928], 1
 * 0000000140BCE141: jmp     loc_140BCDE7A
 * 0000000140BCE146: xor     ebx, eax
 * 0000000140BCE148: shr     rax, 1Fh
 * 0000000140BCE14C: test    rax, rax
 * 0000000140BCE14F: jnz     short loc_140BCE146
 * 0000000140BCE151: lea     rdx, [r14+0E10h]
 * 0000000140BCE158: btr     ebx, 1Fh
 * 0000000140BCE15C: lea     ecx, [rax+10h]
 * 0000000140BCE15F: mov     rax, rdx
 * 0000000140BCE162: add     [rsi+848h], ecx
 * 0000000140BCE168: lea     rcx, [rdx+10h]
 * 0000000140BCE16C: mov     r9d, [rsi+834h]
 * 0000000140BCE173: mov     r14, [rsi+838h]
 * 0000000140BCE17A: cmp     rdx, rcx
 * 0000000140BCE17D: jnb     short loc_140BCE190
 * 0000000140BCE17F: mov     r8d, 40h ; '@'
 * 0000000140BCE185: prefetchnta byte ptr [rax]
 * 0000000140BCE188: add     rax, r8
 * 0000000140BCE18B: cmp     rax, rcx
 * 0000000140BCE18E: jb      short loc_140BCE185
 * 0000000140BCE190: mov     eax, 2
 * 0000000140BCE195: lea     r8d, [rax+0Eh]
 * 0000000140BCE199: xor     r14, [rdx]
 * 0000000140BCE19C: mov     ecx, r9d
 * 0000000140BCE19F: rol     r14, cl
 * 0000000140BCE1A2: add     rdx, 8
 * 0000000140BCE1A6: add     r8d, 0FFFFFFF8h
 * 0000000140BCE1AA: sub     rax, r10
 * 0000000140BCE1AD: jnz     short loc_140BCE199
 * 0000000140BCE1AF: test    r8d, r8d
 * 0000000140BCE1B2: jz      short loc_140BCE1C8
 * 0000000140BCE1B4: movzx   eax, byte ptr [rdx]
 * 0000000140BCE1B7: mov     ecx, r9d
 * 0000000140BCE1BA: xor     r14, rax
 * 0000000140BCE1BD: add     rdx, r10
 * 0000000140BCE1C0: rol     r14, cl
 * 0000000140BCE1C3: add     r8d, r11d
 * 0000000140BCE1C6: jnz     short loc_140BCE1B4
 * 0000000140BCE1C8: mov     rax, r14
 * 0000000140BCE1CB: jmp     short loc_140BCE1D0
 * 0000000140BCE1CD: xor     r14d, eax
 * 0000000140BCE1D0: shr     rax, 1Fh
 * 0000000140BCE1D4: test    rax, rax
 * 0000000140BCE1D7: jnz     short loc_140BCE1CD
 * 0000000140BCE1D9: mov     rax, [rsi+1A8h]
 * 0000000140BCE1E0: lea     rcx, [rbp+8D0h+var_270]
 * 0000000140BCE1E7: btr     r14d, 1Fh
 * 0000000140BCE1EC: call    KeGuardDispatchICall
 * 0000000140BCE1F1: mov     r8, [rsp+9D0h+var_980]
 * 0000000140BCE1F6: mov     edx, [r8+14h]
 * 0000000140BCE1FA: cmp     ebx, edx
 * 0000000140BCE1FC: jnz     short loc_140BCE21E
 * 0000000140BCE1FE: mov     eax, r14d
 * 0000000140BCE201: cmp     rax, [r8+18h]
 * 0000000140BCE205: jnz     short loc_140BCE21E
 * 0000000140BCE207: movzx   eax, word ptr [r8+2Ch]
 * 0000000140BCE20C: cmp     [rbp+8D0h+var_750], ax
 * 0000000140BCE213: jnz     short loc_140BCE21E
 * 0000000140BCE215: test    r15d, r15d
 * 0000000140BCE218: jz      loc_140BCE387
 * 0000000140BCE21E: test    r15d, r15d
 * 0000000140BCE221: jnz     short loc_140BCE261
 * 0000000140BCE223: mov     eax, r14d
 * 0000000140BCE226: xor     r15d, r15d
 * 0000000140BCE229: cmp     rax, [r8+18h]
 * 0000000140BCE22D: jnz     short loc_140BCE24A
 * 0000000140BCE22F: cmp     [rsi+918h], r15d
 * 0000000140BCE236: jnz     short loc_140BCE264
 * 0000000140BCE238: mov     ecx, ebx
 * 0000000140BCE23A: xor     rcx, rdx
 * 0000000140BCE23D: mov     rax, [rsi+588h]
 * 0000000140BCE244: mov     [rax+18h], rcx
 * 0000000140BCE248: jmp     short loc_140BCE264
 * 0000000140BCE24A: mov     eax, [r8+18h]
 * 0000000140BCE24E: cmp     [rsi+918h], r15d
 * 0000000140BCE255: jnz     short loc_140BCE264
 * 0000000140BCE257: mov     ecx, eax
 * 0000000140BCE259: mov     eax, r14d
 * 0000000140BCE25C: xor     rcx, rax
 * 0000000140BCE25F: jmp     short loc_140BCE23D
 * 0000000140BCE261: xor     r15d, r15d
 * 0000000140BCE264: mov     ebx, 1
 * 0000000140BCE269: mov     rcx, [r8+8]
 * 0000000140BCE26D: cmp     [rsi+918h], r15d
 * 0000000140BCE274: jnz     loc_140BCE38E
 * 0000000140BCE27A: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BCE284: add     rax, rsi
 * 0000000140BCE287: mov     [rsi+920h], rax
 * 0000000140BCE28E: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BCE298: add     rax, r8
 * 0000000140BCE29B: mov     [rsi+928h], rax
 * 0000000140BCE2A2: movsxd  rax, dword ptr [r8]
 * 0000000140BCE2A5: mov     [rsi+930h], rax
 * 0000000140BCE2AC: mov     [rsi+938h], rcx
 * 0000000140BCE2B3: mov     [rsi+918h], ebx
 * 0000000140BCE2B9: mov     ecx, [rsi+9D8h]
 * 0000000140BCE2BF: bt      ecx, 1Dh
 * 0000000140BCE2C3: jb      loc_140BCE38E
 * 0000000140BCE2C9: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCE2D3: jz      loc_140BCE38E
 * 0000000140BCE2D9: test    bl, cl
 * 0000000140BCE2DB: jz      loc_140BCE38E
 * 0000000140BCE2E1: mov     ecx, [rsi+0A74h]
 * 0000000140BCE2E7: mov     eax, [rsi+804h]
 * 0000000140BCE2ED: mov     r11, [rsi+838h]
 * 0000000140BCE2F4: sub     eax, ecx
 * 0000000140BCE2F6: mov     r8, [rsi+0A78h]
 * 0000000140BCE2FD: lea     r9, [rcx+rsi]
 * 0000000140BCE301: mov     ecx, eax
 * 0000000140BCE303: shr     rcx, 3
 * 0000000140BCE307: lea     r10, [r9+rcx*8]
 * 0000000140BCE30B: jmp     short loc_140BCE32E
 * 0000000140BCE30D: xor     [r9], r8
 * 0000000140BCE310: mov     rax, r11
 * 0000000140BCE313: xor     rax, [r9]
 * 0000000140BCE316: movzx   ecx, r8b
 * 0000000140BCE31A: and     ecx, 3Fh
 * 0000000140BCE31D: ror     r8, cl
 * 0000000140BCE320: add     r8, rax
 * 0000000140BCE323: xor     r8, 0EFAh
 * 0000000140BCE32A: add     r9, 8
 * 0000000140BCE32E: cmp     r9, r10
 * 0000000140BCE331: jnz     short loc_140BCE30D
 * 0000000140BCE333: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCE33B: cmp     r8, [rsi+0A80h]
 * 0000000140BCE342: jz      short loc_140BCE38E
 * 0000000140BCE344: mov     ecx, [rsi+804h]
 * 0000000140BCE34A: mov     rax, [rsi+588h]
 * 0000000140BCE351: mov     [rax], rsi
 * 0000000140BCE354: mov     [rax+10h], ecx
 * 0000000140BCE357: mov     rcx, [rsi+0A80h]
 * 0000000140BCE35E: cmp     [rsi+918h], r15d
 * 0000000140BCE365: jnz     short loc_140BCE375
 * 0000000140BCE367: mov     rax, [rsi+588h]
 * 0000000140BCE36E: xor     rcx, r8
 * 0000000140BCE371: mov     [rax+18h], rcx
 * 0000000140BCE375: xor     edx, edx
 * 0000000140BCE377: mov     r9d, 100h
 * 0000000140BCE37D: mov     rcx, rsi
 * 0000000140BCE380: call    sub_140BD8384
 * 0000000140BCE385: jmp     short loc_140BCE38E
 * 0000000140BCE387: xor     r15d, r15d
 * 0000000140BCE38A: lea     ebx, [r15+1]
 * 0000000140BCE38E: add     dword ptr [rsi+848h], 10000h
 * 0000000140BCE398: mov     r11d, 1000h
 * 0000000140BCE39E: jmp     loc_140BC2FAF
 * 0000000140BCE3A3: cmp     [r13+10h], r15d
 * 0000000140BCE3A7: jz      loc_140BC2FAF
 * 0000000140BCE3AD: test    dword ptr [rsi+9DCh], 4000h
 * 0000000140BCE3B7: jz      short loc_140BCE3D8
 * 0000000140BCE3B9: mov     rcx, [rsi+4D8h]
 * 0000000140BCE3C0: cli
 * 0000000140BCE3C1: mov     eax, [rsi+9D8h]
 * 0000000140BCE3C7: shr     eax, 9
 * 0000000140BCE3CA: and     eax, 1Fh
 * 0000000140BCE3CD: lock bts [rcx], eax
 * 0000000140BCE3D1: jnb     short loc_140BCE3D8
 * 0000000140BCE3D3: sti
 * 0000000140BCE3D4: pause
 * 0000000140BCE3D6: jmp     short loc_140BCE3C0
 * 0000000140BCE3D8: mov     r14, [r13+8]
 * 0000000140BCE3DC: mov     r8d, [r13+10h]
 * 0000000140BCE3E0: mov     r9, r14
 * 0000000140BCE3E3: add     [rsi+848h], r8d
 * 0000000140BCE3EA: mov     rax, r14
 * 0000000140BCE3ED: mov     r11d, [rsi+834h]
 * 0000000140BCE3F4: mov     r15, [rsi+838h]
 * 0000000140BCE3FB: lea     rcx, [r14+r8]
 * 0000000140BCE3FF: cmp     r14, rcx
 * 0000000140BCE402: jnb     short loc_140BCE414
 * 0000000140BCE404: mov     edx, 40h ; '@'
 * 0000000140BCE409: prefetchnta byte ptr [rax]
 * 0000000140BCE40C: add     rax, rdx
 * 0000000140BCE40F: cmp     rax, rcx
 * 0000000140BCE412: jb      short loc_140BCE409
 * 0000000140BCE414: mov     r10d, r8d
 * 0000000140BCE417: mov     rbx, r15
 * 0000000140BCE41A: shr     r10d, 7
 * 0000000140BCE41E: mov     edx, 1
 * 0000000140BCE423: mov     r12d, 0FFFFFFFFh
 * 0000000140BCE429: test    r10d, r10d
 * 0000000140BCE42C: jz      short loc_140BCE492
 * 0000000140BCE42E: mov     rsi, 7010008004002001h
 * 0000000140BCE438: mov     eax, 8
 * 0000000140BCE43D: xor     rbx, [r9]
 * 0000000140BCE440: mov     ecx, r11d
 * 0000000140BCE443: rol     rbx, cl
 * 0000000140BCE446: xor     rbx, [r9+8]
 * 0000000140BCE44A: add     r9, 10h
 * 0000000140BCE44E: rol     rbx, cl
 * 0000000140BCE451: sub     rax, rdx
 * 0000000140BCE454: jnz     short loc_140BCE43D
 * 0000000140BCE456: mov     rcx, r9
 * 0000000140BCE459: sub     rcx, r14
 * 0000000140BCE45C: xor     rcx, r15
 * 0000000140BCE45F: mov     rax, rcx
 * 0000000140BCE462: rol     rax, 11h
 * 0000000140BCE466: xor     rcx, rax
 * 0000000140BCE469: mov     rax, rsi
 * 0000000140BCE46C: mul     rcx
 * 0000000140BCE46F: mov     [rbp+8D0h+var_4F0], rdx
 * 0000000140BCE476: xor     edx, eax
 * 0000000140BCE478: xor     r11d, edx
 * 0000000140BCE47B: mov     edx, 1
 * 0000000140BCE480: and     r11d, 3Fh
 * 0000000140BCE484: cmovz   r11d, edx
 * 0000000140BCE488: add     r10d, r12d
 * 0000000140BCE48B: jnz     short loc_140BCE438
 * 0000000140BCE48D: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BCE492: and     r8d, 7Fh
 * 0000000140BCE496: cmp     r8d, 8
 * 0000000140BCE49A: jb      short loc_140BCE4B9
 * 0000000140BCE49C: mov     eax, r8d
 * 0000000140BCE49F: shr     rax, 3
 * 0000000140BCE4A3: xor     rbx, [r9]
 * 0000000140BCE4A6: mov     ecx, r11d
 * 0000000140BCE4A9: rol     rbx, cl
 * 0000000140BCE4AC: add     r9, 8
 * 0000000140BCE4B0: add     r8d, 0FFFFFFF8h
 * 0000000140BCE4B4: sub     rax, rdx
 * 0000000140BCE4B7: jnz     short loc_140BCE4A3
 * 0000000140BCE4B9: xor     r15d, r15d
 * 0000000140BCE4BC: test    r8d, r8d
 * 0000000140BCE4BF: jz      short loc_140BCE4D6
 * 0000000140BCE4C1: movzx   eax, byte ptr [r9]
 * 0000000140BCE4C5: mov     ecx, r11d
 * 0000000140BCE4C8: xor     rbx, rax
 * 0000000140BCE4CB: add     r9, rdx
 * 0000000140BCE4CE: rol     rbx, cl
 * 0000000140BCE4D1: add     r8d, r12d
 * 0000000140BCE4D4: jnz     short loc_140BCE4C1
 * 0000000140BCE4D6: mov     rax, rbx
 * 0000000140BCE4D9: jmp     short loc_140BCE4DD
 * 0000000140BCE4DB: xor     ebx, eax
 * 0000000140BCE4DD: shr     rax, 1Fh
 * 0000000140BCE4E1: test    rax, rax
 * 0000000140BCE4E4: jnz     short loc_140BCE4DB
 * 0000000140BCE4E6: btr     ebx, 1Fh
 * 0000000140BCE4EA: mov     r12d, r15d
 * 0000000140BCE4ED: cmp     ebx, [r13+14h]
 * 0000000140BCE4F1: jz      loc_140BCE70E
 * 0000000140BCE4F7: cmp     [r13+0], r15d
 * 0000000140BCE4FB: jnz     short loc_140BCE505
 * 0000000140BCE4FD: cmp     [r13+18h], r15d
 * 0000000140BCE501: cmovnz  r12d, edx
 * 0000000140BCE505: mov     ecx, [r13+10h]
 * 0000000140BCE509: mov     rdx, [r13+8]
 * 0000000140BCE50D: test    rcx, rcx
 * 0000000140BCE510: jz      loc_140BCE5CD
 * 0000000140BCE516: mov     eax, [rsi+9DCh]
 * 0000000140BCE51C: mov     r8d, 40h ; '@'
 * 0000000140BCE522: test    r8b, al
 * 0000000140BCE525: jz      loc_140BCE5CD
 * 0000000140BCE52B: mov     r15, cr8
 * 0000000140BCE52F: lea     eax, [r8-3Eh]
 * 0000000140BCE533: mov     cr8, rax
 * 0000000140BCE537: mov     r14, rdx
 * 0000000140BCE53A: lea     rax, [rcx-1]
 * 0000000140BCE53E: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140BCE545: add     rax, rdx
 * 0000000140BCE548: or      rax, 0FFFh
 * 0000000140BCE54E: mov     [rbp+8D0h+var_950], rax
 * 0000000140BCE552: lea     r13, [r14-1]
 * 0000000140BCE556: mov     rax, [rsi+468h]
 * 0000000140BCE55D: xor     edx, edx
 * 0000000140BCE55F: mov     rcx, r14
 * 0000000140BCE562: call    KeGuardDispatchICall
 * 0000000140BCE567: cmp     eax, 0C000022Dh
 * 0000000140BCE56C: jnz     short loc_140BCE593
 * 0000000140BCE56E: test    r12d, r12d
 * 0000000140BCE571: jnz     short loc_140BCE5BD
 * 0000000140BCE573: lea     eax, [r12+1]
 * 0000000140BCE578: cmp     r15b, al
 * 0000000140BCE57B: ja      short loc_140BCE597
 * 0000000140BCE57D: movzx   eax, r15b
 * 0000000140BCE581: mov     cr8, rax
 * 0000000140BCE585: mov     al, [r14]
 * 0000000140BCE588: lea     eax, [r12+2]
 * 0000000140BCE58D: mov     cr8, rax
 * 0000000140BCE591: jmp     short loc_140BCE556
 * 0000000140BCE593: test    eax, eax
 * 0000000140BCE595: js      short loc_140BCE5BD
 * 0000000140BCE597: mov     r11d, 1000h
 * 0000000140BCE59D: add     r14, r11
 * 0000000140BCE5A0: add     r13, r11
 * 0000000140BCE5A3: cmp     r13, [rbp+8D0h+var_950]
 * 0000000140BCE5A7: jnz     short loc_140BCE556
 * 0000000140BCE5A9: movzx   eax, r15b
 * 0000000140BCE5AD: mov     cr8, rax
 * 0000000140BCE5B1: xor     r15d, r15d
 * 0000000140BCE5B4: lea     ebx, [r15+1]
 * 0000000140BCE5B8: jmp     loc_140BCE719
 * 0000000140BCE5BD: movzx   eax, r15b
 * 0000000140BCE5C1: mov     cr8, rax
 * 0000000140BCE5C5: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BCE5CA: xor     r15d, r15d
 * 0000000140BCE5CD: mov     eax, [r13+14h]
 * 0000000140BCE5D1: cmp     [rsi+918h], r15d
 * 0000000140BCE5D8: jnz     short loc_140BCE5EA
 * 0000000140BCE5DA: mov     ecx, ebx
 * 0000000140BCE5DC: xor     rcx, rax
 * 0000000140BCE5DF: mov     rax, [rsi+588h]
 * 0000000140BCE5E6: mov     [rax+18h], rcx
 * 0000000140BCE5EA: mov     ebx, 1
 * 0000000140BCE5EF: mov     rcx, [r13+8]
 * 0000000140BCE5F3: cmp     [rsi+918h], r15d
 * 0000000140BCE5FA: jnz     loc_140BCE713
 * 0000000140BCE600: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BCE60A: add     rax, rsi
 * 0000000140BCE60D: mov     [rsi+920h], rax
 * 0000000140BCE614: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BCE61E: add     rax, r13
 * 0000000140BCE621: mov     [rsi+928h], rax
 * 0000000140BCE628: movsxd  rax, dword ptr [r13+0]
 * 0000000140BCE62C: mov     [rsi+930h], rax
 * 0000000140BCE633: mov     [rsi+938h], rcx
 * 0000000140BCE63A: mov     [rsi+918h], ebx
 * 0000000140BCE640: mov     ecx, [rsi+9D8h]
 * 0000000140BCE646: bt      ecx, 1Dh
 * 0000000140BCE64A: jb      loc_140BCE713
 * 0000000140BCE650: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCE65A: jz      loc_140BCE713
 * 0000000140BCE660: test    bl, cl
 * 0000000140BCE662: jz      loc_140BCE713
 * 0000000140BCE668: mov     ecx, [rsi+0A74h]
 * 0000000140BCE66E: mov     eax, [rsi+804h]
 * 0000000140BCE674: mov     r10, [rsi+838h]
 * 0000000140BCE67B: sub     eax, ecx
 * 0000000140BCE67D: mov     r8, [rsi+0A78h]
 * 0000000140BCE684: lea     rdx, [rcx+rsi]
 * 0000000140BCE688: mov     ecx, eax
 * 0000000140BCE68A: shr     rcx, 3
 * 0000000140BCE68E: lea     r9, [rdx+rcx*8]
 * 0000000140BCE692: jmp     short loc_140BCE6B5
 * 0000000140BCE694: xor     [rdx], r8
 * 0000000140BCE697: mov     rax, [rdx]
 * 0000000140BCE69A: movzx   ecx, r8b
 * 0000000140BCE69E: xor     rax, r10
 * 0000000140BCE6A1: and     ecx, 3Fh
 * 0000000140BCE6A4: ror     r8, cl
 * 0000000140BCE6A7: add     r8, rax
 * 0000000140BCE6AA: xor     r8, 0EFAh
 * 0000000140BCE6B1: add     rdx, 8
 * 0000000140BCE6B5: cmp     rdx, r9
 * 0000000140BCE6B8: jnz     short loc_140BCE694
 * 0000000140BCE6BA: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCE6C2: cmp     r8, [rsi+0A80h]
 * 0000000140BCE6C9: jz      short loc_140BCE713
 * 0000000140BCE6CB: mov     ecx, [rsi+804h]
 * 0000000140BCE6D1: mov     rax, [rsi+588h]
 * 0000000140BCE6D8: mov     [rax], rsi
 * 0000000140BCE6DB: mov     [rax+10h], ecx
 * 0000000140BCE6DE: mov     rcx, [rsi+0A80h]
 * 0000000140BCE6E5: cmp     [rsi+918h], r15d
 * 0000000140BCE6EC: jnz     short loc_140BCE6FC
 * 0000000140BCE6EE: mov     rax, [rsi+588h]
 * 0000000140BCE6F5: xor     rcx, r8
 * 0000000140BCE6F8: mov     [rax+18h], rcx
 * 0000000140BCE6FC: xor     edx, edx
 * 0000000140BCE6FE: mov     r9d, 100h
 * 0000000140BCE704: mov     rcx, rsi
 * 0000000140BCE707: call    sub_140BD8384
 * 0000000140BCE70C: jmp     short loc_140BCE713
 * 0000000140BCE70E: mov     ebx, 1
 * 0000000140BCE713: mov     r11d, 1000h
 * 0000000140BCE719: test    dword ptr [rsi+9DCh], 4000h
 * 0000000140BCE723: jz      loc_140BC2FA9
 * 0000000140BCE729: mov     ecx, [rsi+9D8h]
 * 0000000140BCE72F: mov     eax, ebx
 * 0000000140BCE731: mov     rdx, [rsi+4D8h]
 * 0000000140BCE738: shr     ecx, 9
 * 0000000140BCE73B: and     ecx, 1Fh
 * 0000000140BCE73E: shl     eax, cl
 * 0000000140BCE740: not     eax
 * 0000000140BCE742: lock and [rdx], eax
 * 0000000140BCE745: sti
 * 0000000140BCE746: jmp     loc_140BC2FA9
 * 0000000140BCE74B: mov     rcx, gs:20h
 * 0000000140BCE754: mov     rax, [rsi+658h]
 * 0000000140BCE75B: mov     rcx, [rax+rcx]
 * 0000000140BCE75F: mov     rax, [rsi+698h]
 * 0000000140BCE766: add     rcx, [rsi+6B8h]
 * 0000000140BCE76D: mov     rcx, [rcx+rax]
 * 0000000140BCE771: mov     [rbp+8D0h+var_8E8], rcx
 * 0000000140BCE775: mov     rax, [rsi+490h]
 * 0000000140BCE77C: call    KeGuardDispatchICall
 * 0000000140BCE781: mov     r9d, 0FFFFFFFFh
 * 0000000140BCE787: mov     r14, rax
 * 0000000140BCE78A: cmp     rax, r9
 * 0000000140BCE78D: jnz     loc_140BCE8C6
 * 0000000140BCE793: mov     [rbp+8D0h+var_8E8], r15
 * 0000000140BCE797: mov     rcx, [rsi+9D0h]
 * 0000000140BCE79E: test    rcx, rcx
 * 0000000140BCE7A1: jz      short loc_140BCE7C9
 * 0000000140BCE7A3: mov     rax, [rsi+480h]
 * 0000000140BCE7AA: lea     rdx, [rbp+8D0h+var_8E8]
 * 0000000140BCE7AE: call    KeGuardDispatchICall
 * 0000000140BCE7B3: test    eax, eax
 * 0000000140BCE7B5: jns     short loc_140BCE7C0
 * 0000000140BCE7B7: mov     rax, r15
 * 0000000140BCE7BA: mov     [rbp+8D0h+var_8E8], rax
 * 0000000140BCE7BE: jmp     short loc_140BCE7C4
 * 0000000140BCE7C0: mov     rax, [rbp+8D0h+var_8E8]
 * 0000000140BCE7C4: test    rax, rax
 * 0000000140BCE7C7: jnz     short loc_140BCE7DB
 * 0000000140BCE7C9: mov     rax, [rsi+3C0h]
 * 0000000140BCE7D0: xor     ecx, ecx
 * 0000000140BCE7D2: call    KeGuardDispatchICall
 * 0000000140BCE7D7: mov     [rbp+8D0h+var_8E8], rax
 * 0000000140BCE7DB: mov     [rsi+9D0h], r15
 * 0000000140BCE7E2: mov     ebx, r15d
 * 0000000140BCE7E5: mov     rcx, [rbp+8D0h+var_8E8]
 * 0000000140BCE7E9: test    rcx, rcx
 * 0000000140BCE7EC: jz      loc_140BCE8B3
 * 0000000140BCE7F2: mov     rax, [rsi+3A0h]
 * 0000000140BCE7F9: inc     ebx
 * 0000000140BCE7FB: call    KeGuardDispatchICall
 * 0000000140BCE800: test    eax, eax
 * 0000000140BCE802: js      short loc_140BCE85F
 * 0000000140BCE804: mov     rax, [rsi+438h]
 * 0000000140BCE80B: lea     rdx, [rbp+8D0h+var_A8]
 * 0000000140BCE812: mov     rcx, [rbp+8D0h+var_8E8]
 * 0000000140BCE816: call    KeGuardDispatchICall
 * 0000000140BCE81B: mov     rax, [rsi+490h]
 * 0000000140BCE822: call    KeGuardDispatchICall
 * 0000000140BCE827: mov     r14, rax
 * 0000000140BCE82A: lea     rcx, [rbp+8D0h+var_A8]
 * 0000000140BCE831: mov     rax, [rsi+440h]
 * 0000000140BCE838: call    KeGuardDispatchICall
 * 0000000140BCE83D: mov     rax, [rsi+3A8h]
 * 0000000140BCE844: mov     rcx, [rbp+8D0h+var_8E8]
 * 0000000140BCE848: call    KeGuardDispatchICall
 * 0000000140BCE84D: mov     eax, 0FFFFFFFFh
 * 0000000140BCE852: cmp     r14, rax
 * 0000000140BCE855: jnz     short loc_140BCE881
 * 0000000140BCE857: cmp     ebx, 100h
 * 0000000140BCE85D: ja      short loc_140BCE881
 * 0000000140BCE85F: mov     rax, [rsi+3C0h]
 * 0000000140BCE866: mov     rcx, [rbp+8D0h+var_8E8]
 * 0000000140BCE86A: call    KeGuardDispatchICall
 * 0000000140BCE86F: mov     [rbp+8D0h+var_8E8], rax
 * 0000000140BCE873: mov     rcx, rax
 * 0000000140BCE876: test    rax, rax
 * 0000000140BCE879: jnz     loc_140BCE7F2
 * 0000000140BCE87F: jmp     short loc_140BCE8B3
 * 0000000140BCE881: mov     rax, [rsi+488h]
 * 0000000140BCE888: mov     rcx, [rbp+8D0h+var_8E8]
 * 0000000140BCE88C: call    KeGuardDispatchICall
 * 0000000140BCE891: mov     [rsi+9D0h], rax
 * 0000000140BCE898: mov     rax, [rsi+1F0h]
 * 0000000140BCE89F: mov     rcx, [rbp+8D0h+var_8E8]
 * 0000000140BCE8A3: call    KeGuardDispatchICall
 * 0000000140BCE8A8: mov     r9d, 0FFFFFFFFh
 * 0000000140BCE8AE: cmp     r14, r9
 * 0000000140BCE8B1: jnz     short loc_140BCE8C1
 * 0000000140BCE8B3: shl     ebx, 0Ch
 * 0000000140BCE8B6: add     [rsi+848h], ebx
 * 0000000140BCE8BC: jmp     loc_140BC3D97
 * 0000000140BCE8C1: mov     ebx, 1
 * 0000000140BCE8C6: bt      dword ptr [rsi+9D8h], 1Dh
 * 0000000140BCE8CE: jnb     short loc_140BCE912
 * 0000000140BCE8D0: mov     rcx, [rsi+0AC8h]
 * 0000000140BCE8D7: mov     edx, 30h ; '0'
 * 0000000140BCE8DC: mov     r8, r12
 * 0000000140BCE8DF: mov     rax, [r13+0]
 * 0000000140BCE8E3: add     edx, 0FFFFFFF8h
 * 0000000140BCE8E6: mov     [rcx], rax
 * 0000000140BCE8E9: add     r13, 8
 * 0000000140BCE8ED: add     rcx, 8
 * 0000000140BCE8F1: sub     r8, rbx
 * 0000000140BCE8F4: jnz     short loc_140BCE8DF
 * 0000000140BCE8F6: test    edx, edx
 * 0000000140BCE8F8: jz      short loc_140BCE90B
 * 0000000140BCE8FA: mov     al, [r13+0]
 * 0000000140BCE8FE: add     r13, rbx
 * 0000000140BCE901: mov     [rcx], al
 * 0000000140BCE903: add     rcx, rbx
 * 0000000140BCE906: add     edx, r9d
 * 0000000140BCE909: jnz     short loc_140BCE8FA
 * 0000000140BCE90B: mov     r13, [rsi+0AC8h]
 * 0000000140BCE912: mov     [r13+18h], r14
 * 0000000140BCE916: mov     rcx, [rbp+8D0h+var_8E8]
 * 0000000140BCE91A: cmp     [rsi+918h], r15d
 * 0000000140BCE921: jnz     loc_140BCE398
 * 0000000140BCE927: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BCE931: add     rax, rsi
 * 0000000140BCE934: mov     [rsi+920h], rax
 * 0000000140BCE93B: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BCE945: add     rax, r13
 * 0000000140BCE948: mov     [rsi+928h], rax
 * 0000000140BCE94F: movsxd  rax, dword ptr [r13+0]
 * 0000000140BCE953: mov     [rsi+930h], rax
 * 0000000140BCE95A: mov     [rsi+938h], rcx
 * 0000000140BCE961: mov     [rsi+918h], ebx
 * 0000000140BCE967: mov     ecx, [rsi+9D8h]
 * 0000000140BCE96D: bt      ecx, 1Dh
 * 0000000140BCE971: jb      loc_140BCE398
 * 0000000140BCE977: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCE981: jz      loc_140BCE398
 * 0000000140BCE987: test    bl, cl
 * 0000000140BCE989: jz      loc_140BCE398
 * 0000000140BCE98F: mov     ecx, [rsi+0A74h]
 * 0000000140BCE995: mov     eax, [rsi+804h]
 * 0000000140BCE99B: mov     r10, [rsi+838h]
 * 0000000140BCE9A2: sub     eax, ecx
 * 0000000140BCE9A4: mov     r8, [rsi+0A78h]
 * 0000000140BCE9AB: lea     rdx, [rcx+rsi]
 * 0000000140BCE9AF: mov     ecx, eax
 * 0000000140BCE9B1: shr     rcx, 3
 * 0000000140BCE9B5: lea     r9, [rdx+rcx*8]
 * 0000000140BCE9B9: jmp     short loc_140BCE9DC
 * 0000000140BCE9BB: xor     [rdx], r8
 * 0000000140BCE9BE: mov     rax, [rdx]
 * 0000000140BCE9C1: movzx   ecx, r8b
 * 0000000140BCE9C5: xor     rax, r10
 * 0000000140BCE9C8: and     ecx, 3Fh
 * 0000000140BCE9CB: ror     r8, cl
 * 0000000140BCE9CE: add     r8, rax
 * 0000000140BCE9D1: xor     r8, 0EFAh
 * 0000000140BCE9D8: add     rdx, 8
 * 0000000140BCE9DC: cmp     rdx, r9
 * 0000000140BCE9DF: jnz     short loc_140BCE9BB
 * 0000000140BCE9E1: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCE9E9: cmp     r8, [rsi+0A80h]
 * 0000000140BCE9F0: jz      loc_140BCE398
 * 0000000140BCE9F6: mov     rax, [rsi+588h]
 * 0000000140BCE9FD: mov     ecx, [rsi+804h]
 * 0000000140BCEA03: mov     [rax], rsi
 * 0000000140BCEA06: mov     [rax+10h], ecx
 * 0000000140BCEA09: mov     rax, [rsi+0A80h]
 * 0000000140BCEA10: cmp     [rsi+918h], r15d
 * 0000000140BCEA17: jnz     loc_140BC9DB1
 * 0000000140BCEA1D: mov     rcx, r8
 * 0000000140BCEA20: xor     rcx, rax
 * 0000000140BCEA23: jmp     loc_140BC9DA6
 * 0000000140BCEA28: mov     eax, [rsi+850h]
 * 0000000140BCEA2E: test    bl, al
 * 0000000140BCEA30: jnz     loc_140BC2FAF
 * 0000000140BCEA36: mov     rax, [rsi+188h]
 * 0000000140BCEA3D: mov     r14d, r15d
 * 0000000140BCEA40: mov     r15, [rsi+540h]
 * 0000000140BCEA47: call    KeGuardDispatchICall
 * 0000000140BCEA4C: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BCEA56: jnz     short loc_140BCEA67
 * 0000000140BCEA58: mov     ecx, [rsi+978h]
 * 0000000140BCEA5E: cmp     ecx, 7
 * 0000000140BCEA61: jnb     short loc_140BCEA67
 * 0000000140BCEA63: shl     bl, cl
 * 0000000140BCEA65: jmp     short loc_140BCEA7E
 * 0000000140BCEA67: mov     rax, [rsi+138h]
 * 0000000140BCEA6E: xor     edx, edx
 * 0000000140BCEA70: mov     rcx, [rsi+0A48h]
 * 0000000140BCEA77: call    KeGuardDispatchICall
 * 0000000140BCEA7C: mov     bl, 80h
 * 0000000140BCEA7E: mov     rax, [rsi+148h]
 * 0000000140BCEA85: xor     edx, edx
 * 0000000140BCEA87: mov     rcx, r15
 * 0000000140BCEA8A: call    KeGuardDispatchICall
 * 0000000140BCEA8F: cmp     bl, 80h
 * 0000000140BCEA92: jz      short loc_140BCEAD3
 * 0000000140BCEA94: mov     r8, [rsi+518h]
 * 0000000140BCEA9B: mov     rdx, [r8]
 * 0000000140BCEA9E: cmp     rdx, r8
 * 0000000140BCEAA1: jz      short loc_140BCEAE8
 * 0000000140BCEAA3: not     bl
 * 0000000140BCEAA5: mov     edi, 1
 * 0000000140BCEAAA: mov     rax, [rsi+6C8h]
 * 0000000140BCEAB1: mov     rcx, rdx
 * 0000000140BCEAB4: sub     rcx, [rsi+6E0h]
 * 0000000140BCEABB: lock and [rcx+rax], bl
 * 0000000140BCEABF: mov     rdx, [rdx]
 * 0000000140BCEAC2: add     r14d, edi
 * 0000000140BCEAC5: cmp     rdx, r8
 * 0000000140BCEAC8: jnz     short loc_140BCEAAA
 * 0000000140BCEACA: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BCEAD1: jmp     short loc_140BCEAE8
 * 0000000140BCEAD3: mov     rax, [rsi+140h]
 * 0000000140BCEADA: xor     edx, edx
 * 0000000140BCEADC: mov     rcx, [rsi+0A48h]
 * 0000000140BCEAE3: call    KeGuardDispatchICall
 * 0000000140BCEAE8: mov     rcx, [rsi+540h]
 * 0000000140BCEAEF: xor     edx, edx
 * 0000000140BCEAF1: mov     rax, [rsi+150h]
 * 0000000140BCEAF8: call    KeGuardDispatchICall
 * 0000000140BCEAFD: mov     rax, [rsi+190h]
 * 0000000140BCEB04: call    KeGuardDispatchICall
 * 0000000140BCEB09: shl     r14d, 7
 * 0000000140BCEB0D: mov     r11d, 1000h
 * 0000000140BCEB13: add     [rsi+848h], r14d
 * 0000000140BCEB1A: xor     r15d, r15d
 * 0000000140BCEB1D: lea     ebx, [r15+1]
 * 0000000140BCEB21: jmp     loc_140BC2FAF
 * 0000000140BCEB26: mov     r14, [r13+8]
 * 0000000140BCEB2A: mov     r12, rsi
 * 0000000140BCEB2D: mov     r8d, [r13+10h]
 * 0000000140BCEB31: mov     r9, r14
 * 0000000140BCEB34: add     [rsi+848h], r8d
 * 0000000140BCEB3B: mov     rax, r14
 * 0000000140BCEB3E: mov     r10d, [rsi+834h]
 * 0000000140BCEB45: mov     r15, [rsi+838h]
 * 0000000140BCEB4C: lea     rcx, [r14+r8]
 * 0000000140BCEB50: cmp     r14, rcx
 * 0000000140BCEB53: jnb     short loc_140BCEB65
 * 0000000140BCEB55: mov     edx, 40h ; '@'
 * 0000000140BCEB5A: prefetchnta byte ptr [rax]
 * 0000000140BCEB5D: add     rax, rdx
 * 0000000140BCEB60: cmp     rax, rcx
 * 0000000140BCEB63: jb      short loc_140BCEB5A
 * 0000000140BCEB65: mov     r11d, r8d
 * 0000000140BCEB68: mov     rbx, r15
 * 0000000140BCEB6B: shr     r11d, 7
 * 0000000140BCEB6F: mov     edx, 1
 * 0000000140BCEB74: mov     r13d, 0FFFFFFFFh
 * 0000000140BCEB7A: test    r11d, r11d
 * 0000000140BCEB7D: jz      short loc_140BCEBE4
 * 0000000140BCEB7F: mov     rsi, 7010008004002001h
 * 0000000140BCEB89: mov     eax, 8
 * 0000000140BCEB8E: xor     rbx, [r9]
 * 0000000140BCEB91: mov     ecx, r10d
 * 0000000140BCEB94: rol     rbx, cl
 * 0000000140BCEB97: xor     rbx, [r9+8]
 * 0000000140BCEB9B: add     r9, 10h
 * 0000000140BCEB9F: rol     rbx, cl
 * 0000000140BCEBA2: sub     rax, rdx
 * 0000000140BCEBA5: jnz     short loc_140BCEB8E
 * 0000000140BCEBA7: mov     rcx, r9
 * 0000000140BCEBAA: sub     rcx, r14
 * 0000000140BCEBAD: xor     rcx, r15
 * 0000000140BCEBB0: mov     rax, rcx
 * 0000000140BCEBB3: rol     rax, 11h
 * 0000000140BCEBB7: xor     rcx, rax
 * 0000000140BCEBBA: mov     rax, rsi
 * 0000000140BCEBBD: mul     rcx
 * 0000000140BCEBC0: xor     r10d, edx
 * 0000000140BCEBC3: mov     [rbp+8D0h+var_4E8], rdx
 * 0000000140BCEBCA: xor     r10d, eax
 * 0000000140BCEBCD: mov     edx, 1
 * 0000000140BCEBD2: and     r10d, 3Fh
 * 0000000140BCEBD6: cmovz   r10d, edx
 * 0000000140BCEBDA: add     r11d, r13d
 * 0000000140BCEBDD: jnz     short loc_140BCEB89
 * 0000000140BCEBDF: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BCEBE4: and     r8d, 7Fh
 * 0000000140BCEBE8: cmp     r8d, 8
 * 0000000140BCEBEC: jb      short loc_140BCEC0B
 * 0000000140BCEBEE: mov     eax, r8d
 * 0000000140BCEBF1: shr     rax, 3
 * 0000000140BCEBF5: xor     rbx, [r9]
 * 0000000140BCEBF8: mov     ecx, r10d
 * 0000000140BCEBFB: rol     rbx, cl
 * 0000000140BCEBFE: add     r9, 8
 * 0000000140BCEC02: add     r8d, 0FFFFFFF8h
 * 0000000140BCEC06: sub     rax, rdx
 * 0000000140BCEC09: jnz     short loc_140BCEBF5
 * 0000000140BCEC0B: xor     r15d, r15d
 * 0000000140BCEC0E: test    r8d, r8d
 * 0000000140BCEC11: jz      short loc_140BCEC28
 * 0000000140BCEC13: movzx   eax, byte ptr [r9]
 * 0000000140BCEC17: mov     ecx, r10d
 * 0000000140BCEC1A: xor     rbx, rax
 * 0000000140BCEC1D: add     r9, rdx
 * 0000000140BCEC20: rol     rbx, cl
 * 0000000140BCEC23: add     r8d, r13d
 * 0000000140BCEC26: jnz     short loc_140BCEC13
 * 0000000140BCEC28: mov     rax, rbx
 * 0000000140BCEC2B: jmp     short loc_140BCEC2F
 * 0000000140BCEC2D: xor     ebx, eax
 * 0000000140BCEC2F: shr     rax, 1Fh
 * 0000000140BCEC33: test    rax, rax
 * 0000000140BCEC36: jnz     short loc_140BCEC2D
 * 0000000140BCEC38: mov     r14, [rsp+9D0h+var_980]
 * 0000000140BCEC3D: btr     ebx, 1Fh
 * 0000000140BCEC41: mov     r13d, r15d
 * 0000000140BCEC44: cmp     ebx, [r14+14h]
 * 0000000140BCEC48: jz      loc_140BCEE75
 * 0000000140BCEC4E: cmp     [r14], r15d
 * 0000000140BCEC51: jnz     short loc_140BCEC5B
 * 0000000140BCEC53: cmp     [r14+18h], r15d
 * 0000000140BCEC57: cmovnz  r13d, edx
 * 0000000140BCEC5B: mov     ecx, [r14+10h]
 * 0000000140BCEC5F: mov     rdx, [r14+8]
 * 0000000140BCEC63: test    rcx, rcx
 * 0000000140BCEC66: jz      loc_140BCED35
 * 0000000140BCEC6C: mov     eax, [rsi+9DCh]
 * 0000000140BCEC72: mov     r8d, 40h ; '@'
 * 0000000140BCEC78: test    r8b, al
 * 0000000140BCEC7B: jz      loc_140BCED35
 * 0000000140BCEC81: mov     r15, cr8
 * 0000000140BCEC85: lea     eax, [r8-3Eh]
 * 0000000140BCEC89: mov     cr8, rax
 * 0000000140BCEC8D: mov     r14, rdx
 * 0000000140BCEC90: lea     rax, [rcx-1]
 * 0000000140BCEC94: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140BCEC9B: add     rax, rdx
 * 0000000140BCEC9E: or      rax, 0FFFh
 * 0000000140BCECA4: mov     [rbp+8D0h+var_950], rax
 * 0000000140BCECA8: lea     rax, [r14-1]
 * 0000000140BCECAC: mov     [rsp+9D0h+var_978], rax
 * 0000000140BCECB1: mov     rax, [rsi+468h]
 * 0000000140BCECB8: xor     edx, edx
 * 0000000140BCECBA: mov     rcx, r14
 * 0000000140BCECBD: call    KeGuardDispatchICall
 * 0000000140BCECC2: cmp     eax, 0C000022Dh
 * 0000000140BCECC7: jnz     short loc_140BCECEC
 * 0000000140BCECC9: test    r13d, r13d
 * 0000000140BCECCC: jnz     short loc_140BCED25
 * 0000000140BCECCE: lea     eax, [r13+1]
 * 0000000140BCECD2: cmp     r15b, al
 * 0000000140BCECD5: ja      short loc_140BCECF0
 * 0000000140BCECD7: movzx   eax, r15b
 * 0000000140BCECDB: mov     cr8, rax
 * 0000000140BCECDF: mov     al, [r14]
 * 0000000140BCECE2: lea     eax, [r13+2]
 * 0000000140BCECE6: mov     cr8, rax
 * 0000000140BCECEA: jmp     short loc_140BCECB1
 * 0000000140BCECEC: test    eax, eax
 * 0000000140BCECEE: js      short loc_140BCED25
 * 0000000140BCECF0: mov     rax, [rsp+9D0h+var_978]
 * 0000000140BCECF5: mov     r11d, 1000h
 * 0000000140BCECFB: add     rax, r11
 * 0000000140BCECFE: add     r14, r11
 * 0000000140BCED01: mov     [rsp+9D0h+var_978], rax
 * 0000000140BCED06: cmp     rax, [rbp+8D0h+var_950]
 * 0000000140BCED0A: jnz     short loc_140BCECB1
 * 0000000140BCED0C: movzx   eax, r15b
 * 0000000140BCED10: mov     cr8, rax
 * 0000000140BCED14: mov     r14, [rsp+9D0h+var_980]
 * 0000000140BCED19: xor     r15d, r15d
 * 0000000140BCED1C: lea     ebx, [r15+1]
 * 0000000140BCED20: jmp     loc_140BCEE80
 * 0000000140BCED25: movzx   eax, r15b
 * 0000000140BCED29: mov     cr8, rax
 * 0000000140BCED2D: mov     r14, [rsp+9D0h+var_980]
 * 0000000140BCED32: xor     r15d, r15d
 * 0000000140BCED35: mov     eax, [r14+14h]
 * 0000000140BCED39: cmp     [rsi+918h], r15d
 * 0000000140BCED40: jnz     short loc_140BCED52
 * 0000000140BCED42: mov     ecx, ebx
 * 0000000140BCED44: xor     rcx, rax
 * 0000000140BCED47: mov     rax, [rsi+588h]
 * 0000000140BCED4E: mov     [rax+18h], rcx
 * 0000000140BCED52: mov     ebx, 1
 * 0000000140BCED57: mov     rcx, [r14+8]
 * 0000000140BCED5B: cmp     [rsi+918h], r15d
 * 0000000140BCED62: jnz     loc_140BCEE7A
 * 0000000140BCED68: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BCED72: add     rax, rsi
 * 0000000140BCED75: mov     [rsi+920h], rax
 * 0000000140BCED7C: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BCED86: add     rax, r14
 * 0000000140BCED89: mov     [rsi+928h], rax
 * 0000000140BCED90: movsxd  rax, dword ptr [r14]
 * 0000000140BCED93: mov     [rsi+930h], rax
 * 0000000140BCED9A: mov     [rsi+938h], rcx
 * 0000000140BCEDA1: mov     [rsi+918h], ebx
 * 0000000140BCEDA7: mov     ecx, [rsi+9D8h]
 * 0000000140BCEDAD: bt      ecx, 1Dh
 * 0000000140BCEDB1: jb      loc_140BCEE7A
 * 0000000140BCEDB7: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCEDC1: jz      loc_140BCEE7A
 * 0000000140BCEDC7: test    bl, cl
 * 0000000140BCEDC9: jz      loc_140BCEE7A
 * 0000000140BCEDCF: mov     ecx, [rsi+0A74h]
 * 0000000140BCEDD5: mov     eax, [rsi+804h]
 * 0000000140BCEDDB: mov     r10, [rsi+838h]
 * 0000000140BCEDE2: sub     eax, ecx
 * 0000000140BCEDE4: mov     r8, [rsi+0A78h]
 * 0000000140BCEDEB: lea     rdx, [rcx+rsi]
 * 0000000140BCEDEF: mov     ecx, eax
 * 0000000140BCEDF1: shr     rcx, 3
 * 0000000140BCEDF5: lea     r9, [rdx+rcx*8]
 * 0000000140BCEDF9: jmp     short loc_140BCEE1C
 * 0000000140BCEDFB: xor     [rdx], r8
 * 0000000140BCEDFE: mov     rax, [rdx]
 * 0000000140BCEE01: movzx   ecx, r8b
 * 0000000140BCEE05: xor     rax, r10
 * 0000000140BCEE08: and     ecx, 3Fh
 * 0000000140BCEE0B: ror     r8, cl
 * 0000000140BCEE0E: add     r8, rax
 * 0000000140BCEE11: xor     r8, 0EFAh
 * 0000000140BCEE18: add     rdx, 8
 * 0000000140BCEE1C: cmp     rdx, r9
 * 0000000140BCEE1F: jnz     short loc_140BCEDFB
 * 0000000140BCEE21: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCEE29: cmp     r8, [rsi+0A80h]
 * 0000000140BCEE30: jz      short loc_140BCEE7A
 * 0000000140BCEE32: mov     ecx, [rsi+804h]
 * 0000000140BCEE38: mov     rax, [rsi+588h]
 * 0000000140BCEE3F: mov     [rax], rsi
 * 0000000140BCEE42: mov     [rax+10h], ecx
 * 0000000140BCEE45: mov     rcx, [rsi+0A80h]
 * 0000000140BCEE4C: cmp     [rsi+918h], r15d
 * 0000000140BCEE53: jnz     short loc_140BCEE63
 * 0000000140BCEE55: mov     rax, [rsi+588h]
 * 0000000140BCEE5C: xor     rcx, r8
 * 0000000140BCEE5F: mov     [rax+18h], rcx
 * 0000000140BCEE63: xor     edx, edx
 * 0000000140BCEE65: mov     r9d, 100h
 * 0000000140BCEE6B: mov     rcx, rsi
 * 0000000140BCEE6E: call    sub_140BD8384
 * 0000000140BCEE73: jmp     short loc_140BCEE7A
 * 0000000140BCEE75: mov     ebx, 1
 * 0000000140BCEE7A: mov     r11d, 1000h
 * 0000000140BCEE80: mov     eax, [r14+20h]
 * 0000000140BCEE84: test    bl, al
 * 0000000140BCEE86: jz      loc_140BC2FA9
 * 0000000140BCEE8C: mov     rbx, [r14+18h]
 * 0000000140BCEE90: mov     rax, [rsi+208h]
 * 0000000140BCEE97: mov     rcx, rbx
 * 0000000140BCEE9A: mov     [rbp+8D0h+var_950], rbx
 * 0000000140BCEE9E: call    KeGuardDispatchICall
 * 0000000140BCEEA3: mov     r11d, 1000h
 * 0000000140BCEEA9: movzx   r15d, word ptr [rax+14h]
 * 0000000140BCEEAE: add     r15, 18h
 * 0000000140BCEEB2: add     r15, rax
 * 0000000140BCEEB5: movzx   eax, word ptr [rax+6]
 * 0000000140BCEEB9: lea     rcx, [rax+rax*4]
 * 0000000140BCEEBD: lea     rax, [r15+rcx*8]
 * 0000000140BCEEC1: cmp     r15, rax
 * 0000000140BCEEC4: jz      loc_140BC2FA1
 * 0000000140BCEECA: mov     r13d, [rsi+844h]
 * 0000000140BCEED1: xor     edx, edx
 * 0000000140BCEED3: test    r13d, r13d
 * 0000000140BCEED6: jnz     short loc_140BCEEE2
 * 0000000140BCEED8: mov     [rsi+844h], r11d
 * 0000000140BCEEDF: mov     r13d, r11d
 * 0000000140BCEEE2: cmp     rbx, [rsi+5E0h]
 * 0000000140BCEEE9: jz      short loc_140BCEF02
 * 0000000140BCEEEB: cmp     rbx, [rsi+5E8h]
 * 0000000140BCEEF2: jz      short loc_140BCEF02
 * 0000000140BCEEF4: mov     dword ptr [rbp+8D0h+arg_8], edx
 * 0000000140BCEEFA: mov     r14d, 1
 * 0000000140BCEF00: jmp     short loc_140BCEF0F
 * 0000000140BCEF02: mov     r14d, 1
 * 0000000140BCEF08: mov     dword ptr [rbp+8D0h+arg_8], r14d
 * 0000000140BCEF0F: mov     esi, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BCEF15: mov     rdi, rax
 * 0000000140BCEF18: mov     ecx, [r15+10h]
 * 0000000140BCEF1C: mov     eax, [r15+8]
 * 0000000140BCEF20: cmp     ecx, eax
 * 0000000140BCEF22: mov     r10d, [r15+0Ch]
 * 0000000140BCEF26: cmovbe  ecx, eax
 * 0000000140BCEF29: lea     ebx, [r10+0FFFh]
 * 0000000140BCEF30: add     ebx, ecx
 * 0000000140BCEF32: and     ebx, 0FFFFF000h
 * 0000000140BCEF38: mov     dword ptr [rsp+9D0h+var_960], ebx
 * 0000000140BCEF3C: cmp     r13d, ebx
 * 0000000140BCEF3F: jnb     loc_140BCF039
 * 0000000140BCEF45: test    dword ptr [r15+24h], 2000000h
 * 0000000140BCEF4D: jnz     loc_140BCF036
 * 0000000140BCEF53: mov     eax, [r15]
 * 0000000140BCEF56: cmp     eax, 54494E49h
 * 0000000140BCEF5B: jnz     short loc_140BCEFC5
 * 0000000140BCEF5D: cmp     dword ptr [r15+4], 4742444Bh
 * 0000000140BCEF65: jz      loc_140BCF036
 * 0000000140BCEF6B: cmp     eax, 41525245h
 * 0000000140BCEF70: jnz     short loc_140BCEF82
 * 0000000140BCEF72: mov     eax, 4154h
 * 0000000140BCEF77: cmp     [r15+4], ax
 * 0000000140BCEF7C: jz      loc_140BCF036
 * 0000000140BCEF82: test    r12, r12
 * 0000000140BCEF85: jz      short loc_140BCEFF1
 * 0000000140BCEF87: mov     rax, [r12+958h]
 * 0000000140BCEF8F: mov     rdx, [r12+950h]
 * 0000000140BCEF97: mov     qword ptr [rbp+8D0h+var_730+8], rax
 * 0000000140BCEF9E: mov     rax, [r12+960h]
 * 0000000140BCEFA6: mov     qword ptr [rbp+8D0h+var_720], rax
 * 0000000140BCEFAD: mov     rax, [r12+968h]
 * 0000000140BCEFB5: mov     qword ptr [rbp+8D0h+var_720+8], rax
 * 0000000140BCEFBC: mov     qword ptr [rbp+8D0h+var_730], rdx
 * 0000000140BCEFC3: jmp     short loc_140BCF012
 * 0000000140BCEFC5: cmp     eax, 45474150h
 * 0000000140BCEFCA: jnz     short loc_140BCEF6B
 * 0000000140BCEFCC: movzx   eax, word ptr [r15+4]
 * 0000000140BCEFD1: mov     ecx, 7877h
 * 0000000140BCEFD6: cmp     ax, cx
 * 0000000140BCEFD9: jz      short loc_140BCF036
 * 0000000140BCEFDB: mov     ecx, 7277h
 * 0000000140BCEFE0: cmp     ax, cx
 * 0000000140BCEFE3: jz      short loc_140BCF036
 * 0000000140BCEFE5: mov     ecx, 7777h
 * 0000000140BCEFEA: cmp     ax, cx
 * 0000000140BCEFED: jnz     short loc_140BCEF82
 * 0000000140BCEFEF: jmp     short loc_140BCF036
 * 0000000140BCEFF1: movups  xmm1, xmmword ptr cs:VfExcludeSections
 * 0000000140BCEFF8: movups  xmm0, xmmword ptr cs:off_140E0A068; "INIT"
 * 0000000140BCEFFF: movups  [rbp+8D0h+var_730], xmm1
 * 0000000140BCF006: movups  [rbp+8D0h+var_720], xmm0
 * 0000000140BCF00D: movq    rdx, xmm1
 * 0000000140BCF012: mov     r9d, 7
 * 0000000140BCF018: mov     r8, r15
 * 0000000140BCF01B: mov     cl, [r8]
 * 0000000140BCF01E: add     r8, r14
 * 0000000140BCF021: mov     al, [rdx]
 * 0000000140BCF023: add     rdx, r14
 * 0000000140BCF026: cmp     cl, al
 * 0000000140BCF028: jnz     short loc_140BCF07A
 * 0000000140BCF02A: mov     eax, 0FFFFFFFFh
 * 0000000140BCF02F: add     r9d, eax
 * 0000000140BCF032: jnz     short loc_140BCF01B
 * 0000000140BCF034: xor     edx, edx
 * 0000000140BCF036: mov     r13d, ebx
 * 0000000140BCF039: add     r15, 28h ; '('
 * 0000000140BCF03D: mov     r14d, 1
 * 0000000140BCF043: cmp     r15, rdi
 * 0000000140BCF046: jnz     loc_140BCEF18
 * 0000000140BCF04C: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BCF051: cmp     r15, rdi
 * 0000000140BCF054: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BCF05B: jnz     loc_140BCF4BC
 * 0000000140BCF061: cmp     r13d, ebx
 * 0000000140BCF064: jb      loc_140BCF4BC
 * 0000000140BCF06A: xor     r15d, r15d
 * 0000000140BCF06D: mov     [r12+844h], r15d
 * 0000000140BCF075: jmp     loc_140BC2FA4
 * 0000000140BCF07A: mov     r8, qword ptr [rbp+8D0h+var_730+8]
 * 0000000140BCF081: mov     edx, 8
 * 0000000140BCF086: mov     r9, r15
 * 0000000140BCF089: mov     rcx, [r9]
 * 0000000140BCF08C: add     r9, 8
 * 0000000140BCF090: mov     rax, [r8]
 * 0000000140BCF093: add     r8, 8
 * 0000000140BCF097: cmp     rcx, rax
 * 0000000140BCF09A: jnz     short loc_140BCF0C6
 * 0000000140BCF09C: add     edx, 0FFFFFFF8h
 * 0000000140BCF09F: cmp     edx, 8
 * 0000000140BCF0A2: jnb     short loc_140BCF089
 * 0000000140BCF0A4: test    edx, edx
 * 0000000140BCF0A6: jz      short loc_140BCF034
 * 0000000140BCF0A8: mov     cl, [r9]
 * 0000000140BCF0AB: add     r9, r14
 * 0000000140BCF0AE: mov     al, [r8]
 * 0000000140BCF0B1: add     r8, r14
 * 0000000140BCF0B4: cmp     cl, al
 * 0000000140BCF0B6: jnz     short loc_140BCF0C6
 * 0000000140BCF0B8: mov     eax, 0FFFFFFFFh
 * 0000000140BCF0BD: add     edx, eax
 * 0000000140BCF0BF: jnz     short loc_140BCF0A8
 * 0000000140BCF0C1: jmp     loc_140BCF034
 * 0000000140BCF0C6: mov     rdx, qword ptr [rbp+8D0h+var_720]
 * 0000000140BCF0CD: mov     r9d, 4
 * 0000000140BCF0D3: mov     r8, r15
 * 0000000140BCF0D6: mov     cl, [r8]
 * 0000000140BCF0D9: add     r8, r14
 * 0000000140BCF0DC: mov     al, [rdx]
 * 0000000140BCF0DE: add     rdx, r14
 * 0000000140BCF0E1: cmp     cl, al
 * 0000000140BCF0E3: jnz     short loc_140BCF0F4
 * 0000000140BCF0E5: mov     eax, 0FFFFFFFFh
 * 0000000140BCF0EA: add     r9d, eax
 * 0000000140BCF0ED: jnz     short loc_140BCF0D6
 * 0000000140BCF0EF: jmp     loc_140BCF034
 * 0000000140BCF0F4: mov     rdx, qword ptr [rbp+8D0h+var_720+8]
 * 0000000140BCF0FB: mov     r9d, 6
 * 0000000140BCF101: mov     r8, r15
 * 0000000140BCF104: mov     cl, [r8]
 * 0000000140BCF107: add     r8, r14
 * 0000000140BCF10A: mov     al, [rdx]
 * 0000000140BCF10C: add     rdx, r14
 * 0000000140BCF10F: cmp     cl, al
 * 0000000140BCF111: jnz     short loc_140BCF122
 * 0000000140BCF113: mov     eax, 0FFFFFFFFh
 * 0000000140BCF118: add     r9d, eax
 * 0000000140BCF11B: jnz     short loc_140BCF104
 * 0000000140BCF11D: jmp     loc_140BCF034
 * 0000000140BCF122: mov     eax, [r15+24h]
 * 0000000140BCF126: xor     edx, edx
 * 0000000140BCF128: test    eax, eax
 * 0000000140BCF12A: js      loc_140BCF036
 * 0000000140BCF130: bt      eax, 1Dh
 * 0000000140BCF134: jnb     loc_140BCF036
 * 0000000140BCF13A: test    esi, esi
 * 0000000140BCF13C: jz      short loc_140BCF151
 * 0000000140BCF13E: mov     eax, [r15]
 * 0000000140BCF141: cmp     eax, 2E656461h
 * 0000000140BCF146: jz      short loc_140BCF151
 * 0000000140BCF148: cmp     eax, 45474150h
 * 0000000140BCF14D: cmovnz  r14d, edx
 * 0000000140BCF151: cmp     r13d, r10d
 * 0000000140BCF154: cmovb   r13d, r10d
 * 0000000140BCF158: mov     ebx, r13d
 * 0000000140BCF15B: add     rbx, [rbp+8D0h+var_950]
 * 0000000140BCF15F: test    byte ptr [r12+89Bh], 4
 * 0000000140BCF168: jz      short loc_140BCF1D7
 * 0000000140BCF16A: mov     ecx, 0FFFFFFFFh
 * 0000000140BCF16F: mov     eax, ecx
 * 0000000140BCF171: xbegin  $+6
 * 0000000140BCF177: cmp     eax, ecx
 * 0000000140BCF179: jnz     short loc_140BCF182
 * 0000000140BCF17B: mov     al, [rbx]
 * 0000000140BCF17D: xend
 * 0000000140BCF180: jmp     short loc_140BCF1B6
 * 0000000140BCF182: rdtsc
 * 0000000140BCF184: shl     rdx, 20h
 * 0000000140BCF188: or      rax, rdx
 * 0000000140BCF18B: mov     rcx, rax
 * 0000000140BCF18E: ror     rax, 3
 * 0000000140BCF192: xor     rcx, rax
 * 0000000140BCF195: mov     rax, 7010008004002001h
 * 0000000140BCF19F: mul     rcx
 * 0000000140BCF1A2: mov     [rbp+8D0h+var_4E0], rdx
 * 0000000140BCF1A9: xor     dl, al
 * 0000000140BCF1AB: mov     eax, 0Fh
 * 0000000140BCF1B0: test    al, dl
 * 0000000140BCF1B2: jz      short loc_140BCF1D5
 * 0000000140BCF1B4: xor     edx, edx
 * 0000000140BCF1B6: mov     r8d, 1
 * 0000000140BCF1BC: add     [r12+85Ch], r8d
 * 0000000140BCF1C4: add     dword ptr [r12+848h], 100h
 * 0000000140BCF1D0: jmp     loc_140BCF365
 * 0000000140BCF1D5: xor     edx, edx
 * 0000000140BCF1D7: test    r14d, r14d
 * 0000000140BCF1DA: jz      loc_140BCF390
 * 0000000140BCF1E0: mov     rax, [r12+450h]
 * 0000000140BCF1E8: lea     rcx, [rbp+8D0h+var_630]
 * 0000000140BCF1EF: mov     rdx, rbx
 * 0000000140BCF1F2: call    KeGuardDispatchICall
 * 0000000140BCF1F7: xor     edx, edx
 * 0000000140BCF1F9: test    eax, eax
 * 0000000140BCF1FB: jns     loc_140BCF400
 * 0000000140BCF201: cmp     eax, 0C0000005h
 * 0000000140BCF206: jnz     loc_140BCF35F
 * 0000000140BCF20C: mov     rcx, [rsp+9D0h+var_980]
 * 0000000140BCF211: mov     eax, [rcx+20h]
 * 0000000140BCF214: test    al, 4
 * 0000000140BCF216: jz      short loc_140BCF222
 * 0000000140BCF218: cmp     [r15+24h], edx
 * 0000000140BCF21C: jge     loc_140BCF35F
 * 0000000140BCF222: cmp     [r12+918h], edx
 * 0000000140BCF22A: jnz     loc_140BCF35F
 * 0000000140BCF230: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BCF23A: mov     r8d, 1
 * 0000000140BCF240: add     rax, r12
 * 0000000140BCF243: mov     [r12+920h], rax
 * 0000000140BCF24B: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BCF255: add     rax, rcx
 * 0000000140BCF258: mov     [r12+928h], rax
 * 0000000140BCF260: movsxd  rax, dword ptr [rcx]
 * 0000000140BCF263: mov     [r12+930h], rax
 * 0000000140BCF26B: mov     [r12+938h], rbx
 * 0000000140BCF273: mov     [r12+918h], r8d
 * 0000000140BCF27B: mov     ecx, [r12+9D8h]
 * 0000000140BCF283: bt      ecx, 1Dh
 * 0000000140BCF287: jb      loc_140BCF35F
 * 0000000140BCF28D: test    dword ptr [r12+9DCh], 200000h
 * 0000000140BCF299: jz      loc_140BCF35F
 * 0000000140BCF29F: test    r8b, cl
 * 0000000140BCF2A2: jz      loc_140BCF35F
 * 0000000140BCF2A8: mov     ecx, [r12+0A74h]
 * 0000000140BCF2B0: mov     eax, [r12+804h]
 * 0000000140BCF2B8: mov     r10, [r12+838h]
 * 0000000140BCF2C0: sub     eax, ecx
 * 0000000140BCF2C2: mov     r8, [r12+0A78h]
 * 0000000140BCF2CA: lea     rdx, [rcx+r12]
 * 0000000140BCF2CE: mov     ecx, eax
 * 0000000140BCF2D0: shr     rcx, 3
 * 0000000140BCF2D4: lea     r9, [rdx+rcx*8]
 * 0000000140BCF2D8: jmp     short loc_140BCF2FB
 * 0000000140BCF2DA: xor     [rdx], r8
 * 0000000140BCF2DD: mov     rax, [rdx]
 * 0000000140BCF2E0: movzx   ecx, r8b
 * 0000000140BCF2E4: xor     rax, r10
 * 0000000140BCF2E7: and     ecx, 3Fh
 * 0000000140BCF2EA: ror     r8, cl
 * 0000000140BCF2ED: add     r8, rax
 * 0000000140BCF2F0: xor     r8, 0EFAh
 * 0000000140BCF2F7: add     rdx, 8
 * 0000000140BCF2FB: cmp     rdx, r9
 * 0000000140BCF2FE: jnz     short loc_140BCF2DA
 * 0000000140BCF300: btr     dword ptr [r12+9DCh], 15h
 * 0000000140BCF30A: cmp     r8, [r12+0A80h]
 * 0000000140BCF312: jz      short loc_140BCF35D
 * 0000000140BCF314: mov     rax, [r12+588h]
 * 0000000140BCF31C: mov     ecx, [r12+804h]
 * 0000000140BCF324: mov     [rax], r12
 * 0000000140BCF327: mov     [rax+10h], ecx
 * 0000000140BCF32A: xor     eax, eax
 * 0000000140BCF32C: mov     rcx, [r12+0A80h]
 * 0000000140BCF334: cmp     [r12+918h], eax
 * 0000000140BCF33C: jnz     short loc_140BCF34D
 * 0000000140BCF33E: mov     rax, [r12+588h]
 * 0000000140BCF346: xor     rcx, r8
 * 0000000140BCF349: mov     [rax+18h], rcx
 * 0000000140BCF34D: xor     edx, edx
 * 0000000140BCF34F: mov     r9d, 100h
 * 0000000140BCF355: mov     rcx, r12
 * 0000000140BCF358: call    sub_140BD8384
 * 0000000140BCF35D: xor     edx, edx
 * 0000000140BCF35F: mov     r11d, 1000h
 * 0000000140BCF365: mov     ebx, dword ptr [rsp+9D0h+var_960]
 * 0000000140BCF369: add     r13d, r11d
 * 0000000140BCF36C: mov     eax, [r12+84Ch]
 * 0000000140BCF374: cmp     r13d, ebx
 * 0000000140BCF377: jnb     loc_140BCF4A9
 * 0000000140BCF37D: cmp     [r12+848h], eax
 * 0000000140BCF385: jl      loc_140BCF158
 * 0000000140BCF38B: jmp     loc_140BCF04C
 * 0000000140BCF390: mov     r8d, 0FFFh
 * 0000000140BCF396: mov     [rbp+8D0h+var_630], rdx
 * 0000000140BCF39D: mov     [rbp+8D0h+var_626], dx
 * 0000000140BCF3A4: mov     rax, rbx
 * 0000000140BCF3A7: and     rax, r8
 * 0000000140BCF3AA: mov     [rbp+8D0h+var_608], r11d
 * 0000000140BCF3B1: add     rax, 1FFFh
 * 0000000140BCF3B7: mov     rcx, rbx
 * 0000000140BCF3BA: shr     rax, 0Ch
 * 0000000140BCF3BE: add     ax, 6
 * 0000000140BCF3C2: shl     ax, 3
 * 0000000140BCF3C6: mov     [rbp+8D0h+var_628], ax
 * 0000000140BCF3CD: mov     rax, rbx
 * 0000000140BCF3D0: and     rax, 0FFFFFFFFFFFFF000h
 * 0000000140BCF3D6: mov     [rbp+8D0h+var_610], rax
 * 0000000140BCF3DD: mov     eax, ebx
 * 0000000140BCF3DF: and     eax, r8d
 * 0000000140BCF3E2: mov     [rbp+8D0h+var_604], eax
 * 0000000140BCF3E8: mov     rax, [r12+458h]
 * 0000000140BCF3F0: call    KeGuardDispatchICall
 * 0000000140BCF3F5: shr     rax, 0Ch
 * 0000000140BCF3F9: mov     [rbp+8D0h+var_600], rax
 * 0000000140BCF400: mov     eax, 1
 * 0000000140BCF405: add     [r12+860h], eax
 * 0000000140BCF40D: mov     eax, [rbp+8D0h+var_604]
 * 0000000140BCF413: add     rax, [rbp+8D0h+var_610]
 * 0000000140BCF41A: mov     [r12+0AB0h], rax
 * 0000000140BCF422: mov     rax, [rsp+9D0h+var_980]
 * 0000000140BCF427: mov     [r12+0AA8h], rax
 * 0000000140BCF42F: mov     rbx, cr8
 * 0000000140BCF433: mov     eax, 2
 * 0000000140BCF438: mov     cr8, rax
 * 0000000140BCF43C: mov     rdx, [r12+5F0h]
 * 0000000140BCF444: lea     rcx, [r12+0A88h]
 * 0000000140BCF44C: xor     r8d, r8d
 * 0000000140BCF44F: mov     edx, [rdx]
 * 0000000140BCF451: call    RtlInitMinimalBarrier
 * 0000000140BCF456: mov     ecx, [r12+814h]
 * 0000000140BCF45E: mov     rdx, r12
 * 0000000140BCF461: mov     rax, [r12+448h]
 * 0000000140BCF469: add     rcx, r12
 * 0000000140BCF46C: call    KeGuardDispatchICall
 * 0000000140BCF471: mov     r12, rax
 * 0000000140BCF474: movzx   eax, bl
 * 0000000140BCF477: mov     cr8, rax
 * 0000000140BCF47B: xor     edx, edx
 * 0000000140BCF47D: test    r14d, r14d
 * 0000000140BCF480: jz      short loc_140BCF498
 * 0000000140BCF482: mov     rax, [r12+460h]
 * 0000000140BCF48A: lea     rcx, [rbp+8D0h+var_630]
 * 0000000140BCF491: call    KeGuardDispatchICall
 * 0000000140BCF496: xor     edx, edx
 * 0000000140BCF498: add     dword ptr [r12+848h], 14000h
 * 0000000140BCF4A4: jmp     loc_140BCF35F
 * 0000000140BCF4A9: cmp     [r12+848h], eax
 * 0000000140BCF4B1: jge     loc_140BCF04C
 * 0000000140BCF4B7: jmp     loc_140BCF039
 * 0000000140BCF4BC: mov     [r12+844h], r13d
 * 0000000140BCF4C4: jmp     loc_140BC2FA1
 * 0000000140BCF4C9: cmp     [rsi+844h], r15d
 * 0000000140BCF4D0: jnz     loc_140BCF810
 * 0000000140BCF4D6: mov     r14, [r13+8]
 * 0000000140BCF4DA: mov     r8d, [r13+10h]
 * 0000000140BCF4DE: mov     r9, r14
 * 0000000140BCF4E1: add     [rsi+848h], r8d
 * 0000000140BCF4E8: mov     rax, r14
 * 0000000140BCF4EB: mov     r10d, [rsi+834h]
 * 0000000140BCF4F2: mov     r15, [rsi+838h]
 * 0000000140BCF4F9: lea     rcx, [r14+r8]
 * 0000000140BCF4FD: cmp     r14, rcx
 * 0000000140BCF500: jnb     short loc_140BCF512
 * 0000000140BCF502: mov     edx, 40h ; '@'
 * 0000000140BCF507: prefetchnta byte ptr [rax]
 * 0000000140BCF50A: add     rax, rdx
 * 0000000140BCF50D: cmp     rax, rcx
 * 0000000140BCF510: jb      short loc_140BCF507
 * 0000000140BCF512: mov     r11d, r8d
 * 0000000140BCF515: mov     rbx, r15
 * 0000000140BCF518: shr     r11d, 7
 * 0000000140BCF51C: mov     edx, 1
 * 0000000140BCF521: mov     r12d, 0FFFFFFFFh
 * 0000000140BCF527: test    r11d, r11d
 * 0000000140BCF52A: jz      short loc_140BCF591
 * 0000000140BCF52C: mov     rsi, 7010008004002001h
 * 0000000140BCF536: mov     eax, 8
 * 0000000140BCF53B: xor     rbx, [r9]
 * 0000000140BCF53E: mov     ecx, r10d
 * 0000000140BCF541: rol     rbx, cl
 * 0000000140BCF544: xor     rbx, [r9+8]
 * 0000000140BCF548: add     r9, 10h
 * 0000000140BCF54C: rol     rbx, cl
 * 0000000140BCF54F: sub     rax, rdx
 * 0000000140BCF552: jnz     short loc_140BCF53B
 * 0000000140BCF554: mov     rcx, r9
 * 0000000140BCF557: sub     rcx, r14
 * 0000000140BCF55A: xor     rcx, r15
 * 0000000140BCF55D: mov     rax, rcx
 * 0000000140BCF560: rol     rax, 11h
 * 0000000140BCF564: xor     rcx, rax
 * 0000000140BCF567: mov     rax, rsi
 * 0000000140BCF56A: mul     rcx
 * 0000000140BCF56D: xor     r10d, eax
 * 0000000140BCF570: mov     [rbp+8D0h+var_4D8], rdx
 * 0000000140BCF577: xor     r10d, edx
 * 0000000140BCF57A: mov     edx, 1
 * 0000000140BCF57F: and     r10d, 3Fh
 * 0000000140BCF583: cmovz   r10d, edx
 * 0000000140BCF587: add     r11d, r12d
 * 0000000140BCF58A: jnz     short loc_140BCF536
 * 0000000140BCF58C: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BCF591: and     r8d, 7Fh
 * 0000000140BCF595: cmp     r8d, 8
 * 0000000140BCF599: jb      short loc_140BCF5B8
 * 0000000140BCF59B: mov     eax, r8d
 * 0000000140BCF59E: shr     rax, 3
 * 0000000140BCF5A2: xor     rbx, [r9]
 * 0000000140BCF5A5: mov     ecx, r10d
 * 0000000140BCF5A8: rol     rbx, cl
 * 0000000140BCF5AB: add     r9, 8
 * 0000000140BCF5AF: add     r8d, 0FFFFFFF8h
 * 0000000140BCF5B3: sub     rax, rdx
 * 0000000140BCF5B6: jnz     short loc_140BCF5A2
 * 0000000140BCF5B8: xor     r15d, r15d
 * 0000000140BCF5BB: test    r8d, r8d
 * 0000000140BCF5BE: jz      short loc_140BCF5D5
 * 0000000140BCF5C0: movzx   eax, byte ptr [r9]
 * 0000000140BCF5C4: mov     ecx, r10d
 * 0000000140BCF5C7: xor     rbx, rax
 * 0000000140BCF5CA: add     r9, rdx
 * 0000000140BCF5CD: rol     rbx, cl
 * 0000000140BCF5D0: add     r8d, r12d
 * 0000000140BCF5D3: jnz     short loc_140BCF5C0
 * 0000000140BCF5D5: mov     rax, rbx
 * 0000000140BCF5D8: jmp     short loc_140BCF5DC
 * 0000000140BCF5DA: xor     ebx, eax
 * 0000000140BCF5DC: shr     rax, 1Fh
 * 0000000140BCF5E0: test    rax, rax
 * 0000000140BCF5E3: jnz     short loc_140BCF5DA
 * 0000000140BCF5E5: btr     ebx, 1Fh
 * 0000000140BCF5E9: mov     r12d, r15d
 * 0000000140BCF5EC: cmp     ebx, [r13+14h]
 * 0000000140BCF5F0: jz      loc_140BCF80C
 * 0000000140BCF5F6: cmp     [r13+0], r15d
 * 0000000140BCF5FA: jnz     short loc_140BCF604
 * 0000000140BCF5FC: cmp     [r13+18h], r15d
 * 0000000140BCF600: cmovnz  r12d, edx
 * 0000000140BCF604: mov     ecx, [r13+10h]
 * 0000000140BCF608: mov     rdx, [r13+8]
 * 0000000140BCF60C: test    rcx, rcx
 * 0000000140BCF60F: jz      loc_140BCF6CD
 * 0000000140BCF615: mov     eax, [rsi+9DCh]
 * 0000000140BCF61B: mov     r8d, 40h ; '@'
 * 0000000140BCF621: test    r8b, al
 * 0000000140BCF624: jz      loc_140BCF6CD
 * 0000000140BCF62A: mov     r15, cr8
 * 0000000140BCF62E: lea     eax, [r8-3Eh]
 * 0000000140BCF632: mov     cr8, rax
 * 0000000140BCF636: mov     r14, rdx
 * 0000000140BCF639: lea     rax, [rcx-1]
 * 0000000140BCF63D: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140BCF644: add     rax, rdx
 * 0000000140BCF647: or      rax, 0FFFh
 * 0000000140BCF64D: mov     [rbp+8D0h+var_950], rax
 * 0000000140BCF651: lea     r13, [r14-1]
 * 0000000140BCF655: mov     rax, [rsi+468h]
 * 0000000140BCF65C: xor     edx, edx
 * 0000000140BCF65E: mov     rcx, r14
 * 0000000140BCF661: call    KeGuardDispatchICall
 * 0000000140BCF666: cmp     eax, 0C000022Dh
 * 0000000140BCF66B: jnz     short loc_140BCF692
 * 0000000140BCF66D: test    r12d, r12d
 * 0000000140BCF670: jnz     short loc_140BCF6BD
 * 0000000140BCF672: lea     eax, [r12+1]
 * 0000000140BCF677: cmp     r15b, al
 * 0000000140BCF67A: ja      short loc_140BCF696
 * 0000000140BCF67C: movzx   eax, r15b
 * 0000000140BCF680: mov     cr8, rax
 * 0000000140BCF684: mov     al, [r14]
 * 0000000140BCF687: lea     eax, [r12+2]
 * 0000000140BCF68C: mov     cr8, rax
 * 0000000140BCF690: jmp     short loc_140BCF655
 * 0000000140BCF692: test    eax, eax
 * 0000000140BCF694: js      short loc_140BCF6BD
 * 0000000140BCF696: mov     r11d, 1000h
 * 0000000140BCF69C: add     r14, r11
 * 0000000140BCF69F: add     r13, r11
 * 0000000140BCF6A2: cmp     r13, [rbp+8D0h+var_950]
 * 0000000140BCF6A6: jnz     short loc_140BCF655
 * 0000000140BCF6A8: movzx   eax, r15b
 * 0000000140BCF6AC: mov     cr8, rax
 * 0000000140BCF6B0: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BCF6B5: xor     r15d, r15d
 * 0000000140BCF6B8: jmp     loc_140BCF80C
 * 0000000140BCF6BD: movzx   eax, r15b
 * 0000000140BCF6C1: mov     cr8, rax
 * 0000000140BCF6C5: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BCF6CA: xor     r15d, r15d
 * 0000000140BCF6CD: mov     eax, [r13+14h]
 * 0000000140BCF6D1: cmp     [rsi+918h], r15d
 * 0000000140BCF6D8: jnz     short loc_140BCF6EA
 * 0000000140BCF6DA: mov     ecx, ebx
 * 0000000140BCF6DC: xor     rcx, rax
 * 0000000140BCF6DF: mov     rax, [rsi+588h]
 * 0000000140BCF6E6: mov     [rax+18h], rcx
 * 0000000140BCF6EA: mov     rcx, [r13+8]
 * 0000000140BCF6EE: cmp     [rsi+918h], r15d
 * 0000000140BCF6F5: jnz     loc_140BCF80C
 * 0000000140BCF6FB: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BCF705: mov     ebx, 1
 * 0000000140BCF70A: add     rax, rsi
 * 0000000140BCF70D: mov     [rsi+920h], rax
 * 0000000140BCF714: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BCF71E: add     rax, r13
 * 0000000140BCF721: mov     [rsi+928h], rax
 * 0000000140BCF728: movsxd  rax, dword ptr [r13+0]
 * 0000000140BCF72C: mov     [rsi+930h], rax
 * 0000000140BCF733: mov     [rsi+938h], rcx
 * 0000000140BCF73A: mov     [rsi+918h], ebx
 * 0000000140BCF740: mov     ecx, [rsi+9D8h]
 * 0000000140BCF746: bt      ecx, 1Dh
 * 0000000140BCF74A: jb      loc_140BCF80C
 * 0000000140BCF750: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCF75A: jz      loc_140BCF80C
 * 0000000140BCF760: test    bl, cl
 * 0000000140BCF762: jz      loc_140BCF80C
 * 0000000140BCF768: mov     ecx, [rsi+0A74h]
 * 0000000140BCF76E: mov     eax, [rsi+804h]
 * 0000000140BCF774: mov     r10, [rsi+838h]
 * 0000000140BCF77B: sub     eax, ecx
 * 0000000140BCF77D: mov     r8, [rsi+0A78h]
 * 0000000140BCF784: lea     rdx, [rcx+rsi]
 * 0000000140BCF788: mov     ecx, eax
 * 0000000140BCF78A: shr     rcx, 3
 * 0000000140BCF78E: lea     r9, [rdx+rcx*8]
 * 0000000140BCF792: jmp     short loc_140BCF7B5
 * 0000000140BCF794: xor     [rdx], r8
 * 0000000140BCF797: mov     rax, [rdx]
 * 0000000140BCF79A: movzx   ecx, r8b
 * 0000000140BCF79E: xor     rax, r10
 * 0000000140BCF7A1: and     ecx, 3Fh
 * 0000000140BCF7A4: ror     r8, cl
 * 0000000140BCF7A7: add     r8, rax
 * 0000000140BCF7AA: xor     r8, 0EFAh
 * 0000000140BCF7B1: add     rdx, 8
 * 0000000140BCF7B5: cmp     rdx, r9
 * 0000000140BCF7B8: jnz     short loc_140BCF794
 * 0000000140BCF7BA: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCF7C2: cmp     r8, [rsi+0A80h]
 * 0000000140BCF7C9: jz      short loc_140BCF80C
 * 0000000140BCF7CB: mov     ecx, [rsi+804h]
 * 0000000140BCF7D1: mov     rax, [rsi+588h]
 * 0000000140BCF7D8: mov     [rax], rsi
 * 0000000140BCF7DB: mov     [rax+10h], ecx
 * 0000000140BCF7DE: mov     rcx, [rsi+0A80h]
 * 0000000140BCF7E5: cmp     [rsi+918h], r15d
 * 0000000140BCF7EC: jnz     short loc_140BCF7FC
 * 0000000140BCF7EE: mov     rax, [rsi+588h]
 * 0000000140BCF7F5: xor     rcx, r8
 * 0000000140BCF7F8: mov     [rax+18h], rcx
 * 0000000140BCF7FC: xor     edx, edx
 * 0000000140BCF7FE: mov     r9d, 100h
 * 0000000140BCF804: mov     rcx, rsi
 * 0000000140BCF807: call    sub_140BD8384
 * 0000000140BCF80C: mov     r10d, [rbp+8D0h+var_948]
 * 0000000140BCF810: mov     r9, [r13+8]
 * 0000000140BCF814: mov     r8d, [rsi+844h]
 * 0000000140BCF81B: mov     ecx, [r13+10h]
 * 0000000140BCF81F: mov     [rbp+8D0h+var_900], r9
 * 0000000140BCF823: lea     rax, [r8+r8*2]
 * 0000000140BCF827: lea     r14, [r9+rax*4]
 * 0000000140BCF82B: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140BCF835: mul     rcx
 * 0000000140BCF838: mov     [rbp+8D0h+var_940], r14
 * 0000000140BCF83C: shr     rdx, 3
 * 0000000140BCF840: lea     rax, [rdx+rdx*2]
 * 0000000140BCF844: lea     r12, [r9+rax*4]
 * 0000000140BCF848: mov     [rsp+9D0h+var_978], r12
 * 0000000140BCF84D: lea     r12, ds:30h[r8*4]
 * 0000000140BCF855: add     r12, r13
 * 0000000140BCF858: mov     [rsp+9D0h+var_968], r12
 * 0000000140BCF85D: cmp     r14, [rsp+9D0h+var_978]
 * 0000000140BCF862: jz      loc_140BCFFA7
 * 0000000140BCF868: mov     rdi, [rsp+9D0h+var_978]
 * 0000000140BCF86D: cmp     [r12], r15d
 * 0000000140BCF871: jl      loc_140BCFDDC
 * 0000000140BCF877: mov     eax, [r14]
 * 0000000140BCF87A: mov     ebx, [r14+4]
 * 0000000140BCF87E: mov     r15d, eax
 * 0000000140BCF881: add     r15, [r13+20h]
 * 0000000140BCF885: sub     ebx, eax
 * 0000000140BCF887: mov     [rbp+8D0h+var_950], r15
 * 0000000140BCF88B: cmp     r10d, 2Bh ; '+'
 * 0000000140BCF88F: jz      loc_140BCF9B8
 * 0000000140BCF895: add     [rsi+848h], ebx
 * 0000000140BCF89B: mov     r8, r15
 * 0000000140BCF89E: mov     r9d, [rsi+834h]
 * 0000000140BCF8A5: mov     rax, r15
 * 0000000140BCF8A8: mov     r11, [rsi+838h]
 * 0000000140BCF8AF: mov     ecx, ebx
 * 0000000140BCF8B1: add     rcx, r15
 * 0000000140BCF8B4: cmp     r15, rcx
 * 0000000140BCF8B7: jnb     short loc_140BCF8C9
 * 0000000140BCF8B9: mov     edx, 40h ; '@'
 * 0000000140BCF8BE: prefetchnta byte ptr [rax]
 * 0000000140BCF8C1: add     rax, rdx
 * 0000000140BCF8C4: cmp     rax, rcx
 * 0000000140BCF8C7: jb      short loc_140BCF8BE
 * 0000000140BCF8C9: mov     r10d, ebx
 * 0000000140BCF8CC: mov     r13, r11
 * 0000000140BCF8CF: shr     r10d, 7
 * 0000000140BCF8D3: test    r10d, r10d
 * 0000000140BCF8D6: jz      short loc_140BCF94D
 * 0000000140BCF8D8: mov     edi, 1
 * 0000000140BCF8DD: mov     rsi, 7010008004002001h
 * 0000000140BCF8E7: mov     r12d, 0FFFFFFFFh
 * 0000000140BCF8ED: mov     eax, 8
 * 0000000140BCF8F2: xor     r13, [r8]
 * 0000000140BCF8F5: mov     ecx, r9d
 * 0000000140BCF8F8: rol     r13, cl
 * 0000000140BCF8FB: xor     r13, [r8+8]
 * 0000000140BCF8FF: add     r8, 10h
 * 0000000140BCF903: rol     r13, cl
 * 0000000140BCF906: sub     rax, rdi
 * 0000000140BCF909: jnz     short loc_140BCF8F2
 * 0000000140BCF90B: mov     rcx, r8
 * 0000000140BCF90E: sub     rcx, r15
 * 0000000140BCF911: xor     rcx, r11
 * 0000000140BCF914: mov     rax, rcx
 * 0000000140BCF917: rol     rax, 11h
 * 0000000140BCF91B: xor     rcx, rax
 * 0000000140BCF91E: mov     rax, rsi
 * 0000000140BCF921: mul     rcx
 * 0000000140BCF924: xor     r9d, edx
 * 0000000140BCF927: mov     [rbp+8D0h+var_4D0], rdx
 * 0000000140BCF92E: xor     r9d, eax
 * 0000000140BCF931: and     r9d, 3Fh
 * 0000000140BCF935: cmovz   r9d, edi
 * 0000000140BCF939: add     r10d, r12d
 * 0000000140BCF93C: jnz     short loc_140BCF8ED
 * 0000000140BCF93E: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BCF943: mov     r12, [rsp+9D0h+var_968]
 * 0000000140BCF948: mov     rdi, [rsp+9D0h+var_978]
 * 0000000140BCF94D: mov     edx, ebx
 * 0000000140BCF94F: mov     r10d, 1
 * 0000000140BCF955: and     edx, 7Fh
 * 0000000140BCF958: cmp     edx, 8
 * 0000000140BCF95B: jb      short loc_140BCF978
 * 0000000140BCF95D: mov     eax, edx
 * 0000000140BCF95F: shr     rax, 3
 * 0000000140BCF963: xor     r13, [r8]
 * 0000000140BCF966: mov     ecx, r9d
 * 0000000140BCF969: rol     r13, cl
 * 0000000140BCF96C: add     r8, 8
 * 0000000140BCF970: add     edx, 0FFFFFFF8h
 * 0000000140BCF973: sub     rax, r10
 * 0000000140BCF976: jnz     short loc_140BCF963
 * 0000000140BCF978: xor     r11d, r11d
 * 0000000140BCF97B: test    edx, edx
 * 0000000140BCF97D: jz      short loc_140BCF99D
 * 0000000140BCF97F: mov     edi, 0FFFFFFFFh
 * 0000000140BCF984: movzx   eax, byte ptr [r8]
 * 0000000140BCF988: mov     ecx, r9d
 * 0000000140BCF98B: xor     r13, rax
 * 0000000140BCF98E: add     r8, r10
 * 0000000140BCF991: rol     r13, cl
 * 0000000140BCF994: add     edx, edi
 * 0000000140BCF996: jnz     short loc_140BCF984
 * 0000000140BCF998: mov     rdi, [rsp+9D0h+var_978]
 * 0000000140BCF99D: mov     rax, r13
 * 0000000140BCF9A0: jmp     short loc_140BCF9A5
 * 0000000140BCF9A2: xor     r13d, eax
 * 0000000140BCF9A5: shr     rax, 1Fh
 * 0000000140BCF9A9: test    rax, rax
 * 0000000140BCF9AC: jnz     short loc_140BCF9A2
 * 0000000140BCF9AE: btr     r13d, 1Fh
 * 0000000140BCF9B3: jmp     loc_140BCFD23
 * 0000000140BCF9B8: mov     r8d, ebx
 * 0000000140BCF9BB: mov     rdx, r15
 * 0000000140BCF9BE: mov     rcx, rsi
 * 0000000140BCF9C1: call    sub_140BD8680
 * 0000000140BCF9C6: mov     r13d, eax
 * 0000000140BCF9C9: xor     r11d, r11d
 * 0000000140BCF9CC: mov     eax, [rsi+848h]
 * 0000000140BCF9D2: lea     ecx, [rax+rbx*8]
 * 0000000140BCF9D5: mov     [rsi+848h], ecx
 * 0000000140BCF9DB: test    dword ptr [rsi+9DCh], 800h
 * 0000000140BCF9E5: jz      loc_140BCFD23
 * 0000000140BCF9EB: mov     al, [r15-1]
 * 0000000140BCF9EF: cmp     byte ptr [r15-6], 4Ch ; 'L'
 * 0000000140BCF9F4: jnz     loc_140BCFBF7
 * 0000000140BCF9FA: cmp     byte ptr [r15-5], 87h
 * 0000000140BCF9FF: jnz     loc_140BCFBF7
 * 0000000140BCFA05: cmp     [r15-4], r11b
 * 0000000140BCFA09: jnz     loc_140BCFBF7
 * 0000000140BCFA0F: cmp     byte ptr [r15-3], 98h
 * 0000000140BCFA14: jnz     loc_140BCFBF7
 * 0000000140BCFA1A: cmp     byte ptr [r15-2], 0C3h
 * 0000000140BCFA1F: jnz     loc_140BCFBF7
 * 0000000140BCFA25: cmp     al, 90h
 * 0000000140BCFA27: jz      short loc_140BCFA31
 * 0000000140BCFA29: cmp     al, 0F1h
 * 0000000140BCFA2B: jnz     loc_140BCFBF7
 * 0000000140BCFA31: mov     rcx, [rsi+4D8h]
 * 0000000140BCFA38: cli
 * 0000000140BCFA39: mov     eax, [rsi+9D8h]
 * 0000000140BCFA3F: shr     eax, 9
 * 0000000140BCFA42: and     eax, 1Fh
 * 0000000140BCFA45: lock bts [rcx], eax
 * 0000000140BCFA49: jnb     short loc_140BCFA50
 * 0000000140BCFA4B: sti
 * 0000000140BCFA4C: pause
 * 0000000140BCFA4E: jmp     short loc_140BCFA38
 * 0000000140BCFA50: mov     rdx, [rsi+900h]
 * 0000000140BCFA57: mov     r8d, 26h ; '&'
 * 0000000140BCFA5D: mov     ecx, 130h
 * 0000000140BCFA62: mov     rax, rdx
 * 0000000140BCFA65: lea     r9d, [r8-25h]
 * 0000000140BCFA69: mov     [rax], r11
 * 0000000140BCFA6C: add     ecx, 0FFFFFFF8h
 * 0000000140BCFA6F: add     rax, 8
 * 0000000140BCFA73: sub     r8, r9
 * 0000000140BCFA76: jnz     short loc_140BCFA69
 * 0000000140BCFA78: test    ecx, ecx
 * 0000000140BCFA7A: jz      short loc_140BCFA8D
 * 0000000140BCFA7C: mov     r8d, 0FFFFFFFFh
 * 0000000140BCFA82: mov     [rax], r11b
 * 0000000140BCFA85: add     rax, r9
 * 0000000140BCFA88: add     ecx, r8d
 * 0000000140BCFA8B: jnz     short loc_140BCFA82
 * 0000000140BCFA8D: movups  xmm0, xmmword ptr [rsi+868h]
 * 0000000140BCFA94: mov     eax, 12Fh
 * 0000000140BCFA99: movdqu  xmmword ptr [rdx+10h], xmm0
 * 0000000140BCFA9E: movups  xmm1, xmmword ptr [rsi+878h]
 * 0000000140BCFAA5: movdqu  xmmword ptr [rdx+20h], xmm1
 * 0000000140BCFAAA: movups  xmm0, xmmword ptr [rsi+888h]
 * 0000000140BCFAB1: movdqu  xmmword ptr [rdx+120h], xmm0
 * 0000000140BCFAB9: mov     word ptr [rbp+8D0h+var_740], ax
 * 0000000140BCFAC0: lea     rax, [rsi+8ACh]
 * 0000000140BCFAC7: mov     [rbp+192h], rdx
 * 0000000140BCFACE: mov     rcx, rax
 * 0000000140BCFAD1: mov     [rdx+10h], ax
 * 0000000140BCFAD5: shr     rcx, 10h
 * 0000000140BCFAD9: mov     [rbp+8D0h+var_4C8], rax
 * 0000000140BCFAE0: shr     rax, 20h
 * 0000000140BCFAE4: mov     [rdx+16h], cx
 * 0000000140BCFAE8: mov     [rdx+18h], eax
 * 0000000140BCFAEB: sidt    fword ptr [rbp+8D0h+var_688]
 * 0000000140BCFAF2: lidt    fword ptr [rbp+8D0h+var_740]
 * 0000000140BCFAF9: mov     byte ptr [r15-1], 0F1h
 * 0000000140BCFAFE: mov     al, [r15-1]
 * 0000000140BCFB02: cmp     al, 0F1h
 * 0000000140BCFB04: jnz     loc_140BCFBB0
 * 0000000140BCFB0A: test    dword ptr [rsi+9DCh], 20000h
 * 0000000140BCFB14: jnz     short loc_140BCFB58
 * 0000000140BCFB16: mov     rdx, gs:20h
 * 0000000140BCFB1F: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140BCFB29: mov     rax, [rsi+4B8h]
 * 0000000140BCFB30: add     rcx, rsi
 * 0000000140BCFB33: mov     [rax], rcx
 * 0000000140BCFB36: mov     rax, [rsi+4C0h]
 * 0000000140BCFB3D: mov     [rax], rdx
 * 0000000140BCFB40: mov     rax, [rsi+4C8h]
 * 0000000140BCFB47: mov     [rax], r15
 * 0000000140BCFB4A: mov     rax, [rsi+4D0h]
 * 0000000140BCFB51: mov     qword ptr [rax], 113h
 * 0000000140BCFB58: lea     rax, [r15-1]
 * 0000000140BCFB5C: call    KeGuardDispatchICall
 * 0000000140BCFB61: xor     r11d, r11d
 * 0000000140BCFB64: test    dword ptr [rsi+9DCh], 20000h
 * 0000000140BCFB6E: jnz     short loc_140BCFBA2
 * 0000000140BCFB70: mov     rax, [rsi+4B8h]
 * 0000000140BCFB77: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140BCFB81: mov     [rax], rcx
 * 0000000140BCFB84: mov     rax, [rsi+4C0h]
 * 0000000140BCFB8B: mov     [rax], r11
 * 0000000140BCFB8E: mov     rax, [rsi+4C8h]
 * 0000000140BCFB95: mov     [rax], r11
 * 0000000140BCFB98: mov     rax, [rsi+4D0h]
 * 0000000140BCFB9F: mov     [rax], r11
 * 0000000140BCFBA2: mov     al, [r15-1]
 * 0000000140BCFBA6: mov     r9d, 1
 * 0000000140BCFBAC: cmp     al, 0F1h
 * 0000000140BCFBAE: jz      short loc_140BCFBB5
 * 0000000140BCFBB0: mov     r8d, r11d
 * 0000000140BCFBB3: jmp     short loc_140BCFBC7
 * 0000000140BCFBB5: mov     byte ptr [r15-1], 90h
 * 0000000140BCFBBA: mov     r8d, r9d
 * 0000000140BCFBBD: mov     al, [r15-1]
 * 0000000140BCFBC1: cmp     al, 90h
 * 0000000140BCFBC3: cmovnz  r8d, r11d
 * 0000000140BCFBC7: lidt    fword ptr [rbp+8D0h+var_688]
 * 0000000140BCFBCE: mov     ecx, [rsi+9D8h]
 * 0000000140BCFBD4: mov     eax, r9d
 * 0000000140BCFBD7: mov     rdx, [rsi+4D8h]
 * 0000000140BCFBDE: shr     ecx, 9
 * 0000000140BCFBE1: and     ecx, 1Fh
 * 0000000140BCFBE4: shl     eax, cl
 * 0000000140BCFBE6: not     eax
 * 0000000140BCFBE8: lock and [rdx], eax
 * 0000000140BCFBEB: sti
 * 0000000140BCFBEC: test    r8d, r8d
 * 0000000140BCFBEF: jnz     loc_140BCFD23
 * 0000000140BCFBF5: jmp     short loc_140BCFBFD
 * 0000000140BCFBF7: mov     r9d, 1
 * 0000000140BCFBFD: cmp     [rsi+918h], r11d
 * 0000000140BCFC04: jnz     loc_140BCFD23
 * 0000000140BCFC0A: mov     rcx, [rsp+9D0h+var_980]
 * 0000000140BCFC0F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BCFC19: add     rax, rsi
 * 0000000140BCFC1C: mov     [rsi+920h], rax
 * 0000000140BCFC23: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BCFC2D: add     rax, rcx
 * 0000000140BCFC30: mov     [rsi+928h], rax
 * 0000000140BCFC37: movsxd  rax, dword ptr [rcx]
 * 0000000140BCFC3A: mov     [rsi+930h], rax
 * 0000000140BCFC41: lea     rax, [r15-6]
 * 0000000140BCFC45: mov     [rsi+938h], rax
 * 0000000140BCFC4C: mov     [rsi+918h], r9d
 * 0000000140BCFC53: mov     ecx, [rsi+9D8h]
 * 0000000140BCFC59: bt      ecx, 1Dh
 * 0000000140BCFC5D: jb      loc_140BCFD23
 * 0000000140BCFC63: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCFC6D: jz      loc_140BCFD23
 * 0000000140BCFC73: test    r9b, cl
 * 0000000140BCFC76: jz      loc_140BCFD23
 * 0000000140BCFC7C: mov     ecx, [rsi+0A74h]
 * 0000000140BCFC82: mov     eax, [rsi+804h]
 * 0000000140BCFC88: mov     r10, [rsi+838h]
 * 0000000140BCFC8F: sub     eax, ecx
 * 0000000140BCFC91: mov     r8, [rsi+0A78h]
 * 0000000140BCFC98: lea     rdx, [rcx+rsi]
 * 0000000140BCFC9C: mov     ecx, eax
 * 0000000140BCFC9E: shr     rcx, 3
 * 0000000140BCFCA2: lea     r9, [rdx+rcx*8]
 * 0000000140BCFCA6: jmp     short loc_140BCFCC9
 * 0000000140BCFCA8: xor     [rdx], r8
 * 0000000140BCFCAB: mov     rax, [rdx]
 * 0000000140BCFCAE: movzx   ecx, r8b
 * 0000000140BCFCB2: xor     rax, r10
 * 0000000140BCFCB5: and     ecx, 3Fh
 * 0000000140BCFCB8: ror     r8, cl
 * 0000000140BCFCBB: add     r8, rax
 * 0000000140BCFCBE: xor     r8, 0EFAh
 * 0000000140BCFCC5: add     rdx, 8
 * 0000000140BCFCC9: cmp     rdx, r9
 * 0000000140BCFCCC: jnz     short loc_140BCFCA8
 * 0000000140BCFCCE: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCFCD6: cmp     r8, [rsi+0A80h]
 * 0000000140BCFCDD: jz      short loc_140BCFD23
 * 0000000140BCFCDF: mov     ecx, [rsi+804h]
 * 0000000140BCFCE5: mov     rax, [rsi+588h]
 * 0000000140BCFCEC: mov     [rax], rsi
 * 0000000140BCFCEF: mov     [rax+10h], ecx
 * 0000000140BCFCF2: mov     rcx, [rsi+0A80h]
 * 0000000140BCFCF9: cmp     [rsi+918h], r11d
 * 0000000140BCFD00: jnz     short loc_140BCFD10
 * 0000000140BCFD02: mov     rax, [rsi+588h]
 * 0000000140BCFD09: xor     rcx, r8
 * 0000000140BCFD0C: mov     [rax+18h], rcx
 * 0000000140BCFD10: xor     edx, edx
 * 0000000140BCFD12: mov     r9d, 100h
 * 0000000140BCFD18: mov     rcx, rsi
 * 0000000140BCFD1B: call    sub_140BD8384
 * 0000000140BCFD20: xor     r11d, r11d
 * 0000000140BCFD23: mov     eax, [r12]
 * 0000000140BCFD27: btr     eax, 1Fh
 * 0000000140BCFD2B: cmp     r13d, eax
 * 0000000140BCFD2E: jz      loc_140BCFDD4
 * 0000000140BCFD34: mov     ecx, ebx
 * 0000000140BCFD36: test    ebx, ebx
 * 0000000140BCFD38: jz      loc_140BCFE52
 * 0000000140BCFD3E: mov     eax, [rsi+9DCh]
 * 0000000140BCFD44: mov     edx, 40h ; '@'
 * 0000000140BCFD49: test    dl, al
 * 0000000140BCFD4B: jz      loc_140BCFE52
 * 0000000140BCFD51: mov     r14, cr8
 * 0000000140BCFD55: mov     rbx, r15
 * 0000000140BCFD58: lea     r12, [r15-1]
 * 0000000140BCFD5C: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140BCFD63: add     r12, rcx
 * 0000000140BCFD66: or      r12, 0FFFh
 * 0000000140BCFD6D: lea     r15, [rbx-1]
 * 0000000140BCFD71: mov     eax, 2
 * 0000000140BCFD76: mov     cr8, rax
 * 0000000140BCFD7A: mov     rax, [rsi+468h]
 * 0000000140BCFD81: xor     edx, edx
 * 0000000140BCFD83: mov     rcx, rbx
 * 0000000140BCFD86: call    KeGuardDispatchICall
 * 0000000140BCFD8B: cmp     eax, 0C000022Dh
 * 0000000140BCFD90: jnz     short loc_140BCFDA8
 * 0000000140BCFD92: mov     eax, 1
 * 0000000140BCFD97: cmp     r14b, al
 * 0000000140BCFD9A: ja      short loc_140BCFDB3
 * 0000000140BCFD9C: movzx   eax, r14b
 * 0000000140BCFDA0: mov     cr8, rax
 * 0000000140BCFDA4: mov     al, [rbx]
 * 0000000140BCFDA6: jmp     short loc_140BCFD71
 * 0000000140BCFDA8: xor     r11d, r11d
 * 0000000140BCFDAB: test    eax, eax
 * 0000000140BCFDAD: js      loc_140BCFE3D
 * 0000000140BCFDB3: mov     eax, 1000h
 * 0000000140BCFDB8: add     rbx, rax
 * 0000000140BCFDBB: add     r15, rax
 * 0000000140BCFDBE: cmp     r15, r12
 * 0000000140BCFDC1: jnz     short loc_140BCFD7A
 * 0000000140BCFDC3: movzx   eax, r14b
 * 0000000140BCFDC7: mov     cr8, rax
 * 0000000140BCFDCB: mov     r14, [rbp+8D0h+var_940]
 * 0000000140BCFDCF: mov     r12, [rsp+9D0h+var_968]
 * 0000000140BCFDD4: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BCFDD9: xor     r15d, r15d
 * 0000000140BCFDDC: add     r12, 4
 * 0000000140BCFDE0: add     r14, 0Ch
 * 0000000140BCFDE4: mov     [rsp+9D0h+var_968], r12
 * 0000000140BCFDE9: mov     [rbp+8D0h+var_940], r14
 * 0000000140BCFDED: cmp     r14, rdi
 * 0000000140BCFDF0: jnb     short loc_140BCFE08
 * 0000000140BCFDF2: mov     eax, [rsi+84Ch]
 * 0000000140BCFDF8: mov     r10d, [rbp+8D0h+var_948]
 * 0000000140BCFDFC: cmp     [rsi+848h], eax
 * 0000000140BCFE02: jl      loc_140BCF86D
 * 0000000140BCFE08: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BCFE0F: cmp     r14, [rsp+9D0h+var_978]
 * 0000000140BCFE14: jz      loc_140BCFFA7
 * 0000000140BCFE1A: sub     r14, [rbp+8D0h+var_900]
 * 0000000140BCFE1E: mov     rax, 2AAAAAAAAAAAAAABh
 * 0000000140BCFE28: imul    r14
 * 0000000140BCFE2B: sar     rdx, 1
 * 0000000140BCFE2E: mov     rax, rdx
 * 0000000140BCFE31: shr     rax, 3Fh
 * 0000000140BCFE35: add     rdx, rax
 * 0000000140BCFE38: jmp     loc_140BD01C2
 * 0000000140BCFE3D: movzx   eax, r14b
 * 0000000140BCFE41: mov     cr8, rax
 * 0000000140BCFE45: mov     r15, [rbp+8D0h+var_950]
 * 0000000140BCFE49: mov     r14, [rbp+8D0h+var_940]
 * 0000000140BCFE4D: mov     r12, [rsp+9D0h+var_968]
 * 0000000140BCFE52: mov     eax, [r12]
 * 0000000140BCFE56: btr     eax, 1Fh
 * 0000000140BCFE5A: cmp     [rsi+918h], r11d
 * 0000000140BCFE61: jnz     loc_140BCFDD4
 * 0000000140BCFE67: mov     ecx, r13d
 * 0000000140BCFE6A: xor     rcx, rax
 * 0000000140BCFE6D: mov     rax, [rsi+588h]
 * 0000000140BCFE74: mov     [rax+18h], rcx
 * 0000000140BCFE78: cmp     [rsi+918h], r11d
 * 0000000140BCFE7F: jnz     loc_140BCFDD4
 * 0000000140BCFE85: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BCFE8A: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BCFE94: add     rax, rsi
 * 0000000140BCFE97: mov     ebx, 1
 * 0000000140BCFE9C: mov     [rsi+920h], rax
 * 0000000140BCFEA3: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BCFEAD: add     rax, r13
 * 0000000140BCFEB0: mov     [rsi+928h], rax
 * 0000000140BCFEB7: movsxd  rax, dword ptr [r13+0]
 * 0000000140BCFEBB: mov     [rsi+930h], rax
 * 0000000140BCFEC2: mov     [rsi+938h], r15
 * 0000000140BCFEC9: mov     [rsi+918h], ebx
 * 0000000140BCFECF: mov     ecx, [rsi+9D8h]
 * 0000000140BCFED5: bt      ecx, 1Dh
 * 0000000140BCFED9: jb      loc_140BCFDD9
 * 0000000140BCFEDF: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCFEE9: jz      loc_140BCFDD9
 * 0000000140BCFEEF: test    bl, cl
 * 0000000140BCFEF1: jz      loc_140BCFDD9
 * 0000000140BCFEF7: mov     ecx, [rsi+0A74h]
 * 0000000140BCFEFD: mov     eax, [rsi+804h]
 * 0000000140BCFF03: mov     r10, [rsi+838h]
 * 0000000140BCFF0A: sub     eax, ecx
 * 0000000140BCFF0C: mov     r8, [rsi+0A78h]
 * 0000000140BCFF13: lea     rdx, [rcx+rsi]
 * 0000000140BCFF17: mov     ecx, eax
 * 0000000140BCFF19: shr     rcx, 3
 * 0000000140BCFF1D: lea     r9, [rdx+rcx*8]
 * 0000000140BCFF21: jmp     short loc_140BCFF44
 * 0000000140BCFF23: xor     [rdx], r8
 * 0000000140BCFF26: mov     rax, [rdx]
 * 0000000140BCFF29: movzx   ecx, r8b
 * 0000000140BCFF2D: xor     rax, r10
 * 0000000140BCFF30: and     ecx, 3Fh
 * 0000000140BCFF33: ror     r8, cl
 * 0000000140BCFF36: add     r8, rax
 * 0000000140BCFF39: xor     r8, 0EFAh
 * 0000000140BCFF40: add     rdx, 8
 * 0000000140BCFF44: cmp     rdx, r9
 * 0000000140BCFF47: jnz     short loc_140BCFF23
 * 0000000140BCFF49: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCFF51: cmp     r8, [rsi+0A80h]
 * 0000000140BCFF58: jz      loc_140BCFDD9
 * 0000000140BCFF5E: mov     ecx, [rsi+804h]
 * 0000000140BCFF64: xor     r15d, r15d
 * 0000000140BCFF67: mov     rax, [rsi+588h]
 * 0000000140BCFF6E: mov     [rax], rsi
 * 0000000140BCFF71: mov     [rax+10h], ecx
 * 0000000140BCFF74: mov     rcx, [rsi+0A80h]
 * 0000000140BCFF7B: cmp     [rsi+918h], r15d
 * 0000000140BCFF82: jnz     short loc_140BCFF92
 * 0000000140BCFF84: mov     rax, [rsi+588h]
 * 0000000140BCFF8B: xor     rcx, r8
 * 0000000140BCFF8E: mov     [rax+18h], rcx
 * 0000000140BCFF92: xor     edx, edx
 * 0000000140BCFF94: mov     r9d, 100h
 * 0000000140BCFF9A: mov     rcx, rsi
 * 0000000140BCFF9D: call    sub_140BD8384
 * 0000000140BCFFA2: jmp     loc_140BCFDDC
 * 0000000140BCFFA7: mov     rcx, [rsi+538h]
 * 0000000140BCFFAE: mov     rbx, cr8
 * 0000000140BCFFB2: mov     eax, 0Fh
 * 0000000140BCFFB7: mov     cr8, rax
 * 0000000140BCFFBB: mov     rax, [rsi+160h]
 * 0000000140BCFFC2: call    KeGuardDispatchICall
 * 0000000140BCFFC7: mov     rax, [rsi+620h]
 * 0000000140BCFFCE: mov     rcx, [rax]
 * 0000000140BCFFD1: mov     eax, [rcx]
 * 0000000140BCFFD3: lea     r15, [rcx+10h]
 * 0000000140BCFFD7: mov     r14b, [rcx+0Ch]
 * 0000000140BCFFDB: lea     rcx, [rax+rax*2]
 * 0000000140BCFFDF: lea     r12, [r15+rcx*8]
 * 0000000140BCFFE3: mov     edx, 18h
 * 0000000140BCFFE8: lea     r8, [r13+18h]
 * 0000000140BCFFEC: mov     r9, r15
 * 0000000140BCFFEF: mov     rcx, [r9]
 * 0000000140BCFFF2: add     r9, 8
 * 0000000140BCFFF6: mov     rax, [r8]
 * 0000000140BCFFF9: add     r8, 8
 * 0000000140BCFFFD: cmp     rcx, rax
 * 0000000140BD0000: jnz     short loc_140BD002F
 * 0000000140BD0002: add     edx, 0FFFFFFF8h
 * 0000000140BD0005: cmp     edx, 8
 * 0000000140BD0008: jnb     short loc_140BCFFEF
 * 0000000140BD000A: test    edx, edx
 * 0000000140BD000C: jz      short loc_140BD0038
 * 0000000140BD000E: mov     r11d, 1
 * 0000000140BD0014: mov     cl, [r9]
 * 0000000140BD0017: add     r9, r11
 * 0000000140BD001A: mov     al, [r8]
 * 0000000140BD001D: add     r8, r11
 * 0000000140BD0020: cmp     cl, al
 * 0000000140BD0022: jnz     short loc_140BD002F
 * 0000000140BD0024: mov     eax, 0FFFFFFFFh
 * 0000000140BD0029: add     edx, eax
 * 0000000140BD002B: jnz     short loc_140BD0014
 * 0000000140BD002D: jmp     short loc_140BD0038
 * 0000000140BD002F: add     r15, 18h
 * 0000000140BD0033: cmp     r15, r12
 * 0000000140BD0036: jb      short loc_140BCFFE3
 * 0000000140BD0038: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BD003D: mov     rcx, [rsi+538h]
 * 0000000140BD0044: mov     rax, [rsi+1A0h]
 * 0000000140BD004B: call    KeGuardDispatchICall
 * 0000000140BD0050: movzx   eax, bl
 * 0000000140BD0053: mov     cr8, rax
 * 0000000140BD0057: xor     r11d, r11d
 * 0000000140BD005A: test    r14b, r14b
 * 0000000140BD005D: jz      loc_140BD01D2
 * 0000000140BD0063: mov     eax, [rsi+9DCh]
 * 0000000140BD0069: lea     ecx, [r11+10h]
 * 0000000140BD006D: test    cl, al
 * 0000000140BD006F: jz      loc_140BD01B1
 * 0000000140BD0075: cmp     [rsi+918h], r11d
 * 0000000140BD007C: jnz     loc_140BD01B1
 * 0000000140BD0082: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BD008C: add     rax, rsi
 * 0000000140BD008F: mov     [rsi+920h], rax
 * 0000000140BD0096: test    r13, r13
 * 0000000140BD0099: jz      short loc_140BD00AA
 * 0000000140BD009B: mov     rcx, 0B3B74BDEE4453415h
 * 0000000140BD00A5: add     rcx, r13
 * 0000000140BD00A8: jmp     short loc_140BD00AD
 * 0000000140BD00AA: mov     rcx, r11
 * 0000000140BD00AD: mov     [rsi+928h], rcx
 * 0000000140BD00B4: mov     rcx, rsi
 * 0000000140BD00B7: mov     edx, 930h
 * 0000000140BD00BC: test    r13, r13
 * 0000000140BD00BF: jz      short loc_140BD00C7
 * 0000000140BD00C1: movsxd  rax, dword ptr [r13+0]
 * 0000000140BD00C5: jmp     short loc_140BD00CA
 * 0000000140BD00C7: mov     rax, r11
 * 0000000140BD00CA: mov     [rdx+rcx], rax
 * 0000000140BD00CE: mov     ebx, 1
 * 0000000140BD00D3: mov     [rsi+938h], rbx
 * 0000000140BD00DA: mov     [rsi+918h], ebx
 * 0000000140BD00E0: mov     ecx, [rsi+9D8h]
 * 0000000140BD00E6: bt      ecx, 1Dh
 * 0000000140BD00EA: jb      loc_140BD01B6
 * 0000000140BD00F0: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BD00FA: jz      loc_140BD01B6
 * 0000000140BD0100: test    bl, cl
 * 0000000140BD0102: jz      loc_140BD01B6
 * 0000000140BD0108: mov     ecx, [rsi+0A74h]
 * 0000000140BD010E: mov     eax, [rsi+804h]
 * 0000000140BD0114: mov     r10, [rsi+838h]
 * 0000000140BD011B: sub     eax, ecx
 * 0000000140BD011D: mov     r8, [rsi+0A78h]
 * 0000000140BD0124: lea     rdx, [rcx+rsi]
 * 0000000140BD0128: mov     ecx, eax
 * 0000000140BD012A: shr     rcx, 3
 * 0000000140BD012E: lea     r9, [rdx+rcx*8]
 * 0000000140BD0132: jmp     short loc_140BD0155
 * 0000000140BD0134: xor     [rdx], r8
 * 0000000140BD0137: mov     rax, [rdx]
 * 0000000140BD013A: movzx   ecx, r8b
 * 0000000140BD013E: xor     rax, r10
 * 0000000140BD0141: and     ecx, 3Fh
 * 0000000140BD0144: ror     r8, cl
 * 0000000140BD0147: add     r8, rax
 * 0000000140BD014A: xor     r8, 0EFAh
 * 0000000140BD0151: add     rdx, 8
 * 0000000140BD0155: cmp     rdx, r9
 * 0000000140BD0158: jnz     short loc_140BD0134
 * 0000000140BD015A: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BD0162: cmp     r8, [rsi+0A80h]
 * 0000000140BD0169: jz      short loc_140BD01B6
 * 0000000140BD016B: mov     ecx, [rsi+804h]
 * 0000000140BD0171: mov     rax, [rsi+588h]
 * 0000000140BD0178: mov     [rax], rsi
 * 0000000140BD017B: mov     [rax+10h], ecx
 * 0000000140BD017E: mov     rcx, [rsi+0A80h]
 * 0000000140BD0185: cmp     [rsi+918h], r11d
 * 0000000140BD018C: jnz     short loc_140BD019C
 * 0000000140BD018E: mov     rax, [rsi+588h]
 * 0000000140BD0195: xor     rcx, r8
 * 0000000140BD0198: mov     [rax+18h], rcx
 * 0000000140BD019C: xor     edx, edx
 * 0000000140BD019E: mov     r9d, 100h
 * 0000000140BD01A4: mov     rcx, rsi
 * 0000000140BD01A7: call    sub_140BD8384
 * 0000000140BD01AC: xor     r11d, r11d
 * 0000000140BD01AF: jmp     short loc_140BD01B6
 * 0000000140BD01B1: mov     ebx, 1
 * 0000000140BD01B6: cmp     [r13+18h], rbx
 * 0000000140BD01BA: jnz     short loc_140BD01D7
 * 0000000140BD01BC: xor     r15d, r15d
 * 0000000140BD01BF: mov     edx, r15d
 * 0000000140BD01C2: mov     ecx, 844h
 * 0000000140BD01C7: mov     rax, rsi
 * 0000000140BD01CA: mov     [rcx+rax], edx
 * 0000000140BD01CD: jmp     loc_140BC3B58
 * 0000000140BD01D2: mov     ebx, 1
 * 0000000140BD01D7: cmp     r15, r12
 * 0000000140BD01DA: jnz     short loc_140BD01BC
 * 0000000140BD01DC: cmp     [rsi+918h], r11d
 * 0000000140BD01E3: jnz     short loc_140BD01BC
 * 0000000140BD01E5: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BD01EF: add     rax, rsi
 * 0000000140BD01F2: mov     [rsi+920h], rax
 * 0000000140BD01F9: test    r13, r13
 * 0000000140BD01FC: jz      short loc_140BD020D
 * 0000000140BD01FE: mov     rcx, 0B3B74BDEE4453415h
 * 0000000140BD0208: add     rcx, r13
 * 0000000140BD020B: jmp     short loc_140BD0210
 * 0000000140BD020D: mov     rcx, r11
 * 0000000140BD0210: mov     [rsi+928h], rcx
 * 0000000140BD0217: mov     rcx, rsi
 * 0000000140BD021A: mov     edx, 930h
 * 0000000140BD021F: test    r13, r13
 * 0000000140BD0222: jz      short loc_140BD022A
 * 0000000140BD0224: movsxd  rax, dword ptr [r13+0]
 * 0000000140BD0228: jmp     short loc_140BD022D
 * 0000000140BD022A: mov     rax, r11
 * 0000000140BD022D: mov     [rcx+rdx], rax
 * 0000000140BD0231: mov     [rsi+938h], r15
 * 0000000140BD0238: mov     [rsi+918h], ebx
 * 0000000140BD023E: mov     ecx, [rsi+9D8h]
 * 0000000140BD0244: bt      ecx, 1Dh
 * 0000000140BD0248: jb      loc_140BD01BC
 * 0000000140BD024E: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BD0258: jz      loc_140BD01BC
 * 0000000140BD025E: test    bl, cl
 * 0000000140BD0260: jz      loc_140BD01BC
 * 0000000140BD0266: mov     ecx, [rsi+0A74h]
 * 0000000140BD026C: mov     eax, [rsi+804h]
 * 0000000140BD0272: mov     r10, [rsi+838h]
 * 0000000140BD0279: sub     eax, ecx
 * 0000000140BD027B: mov     r8, [rsi+0A78h]
 * 0000000140BD0282: lea     rdx, [rcx+rsi]
 * 0000000140BD0286: mov     ecx, eax
 * 0000000140BD0288: shr     rcx, 3
 * 0000000140BD028C: lea     r9, [rdx+rcx*8]
 * 0000000140BD0290: jmp     short loc_140BD02B3
 * 0000000140BD0292: xor     [rdx], r8
 * 0000000140BD0295: mov     rax, [rdx]
 * 0000000140BD0298: movzx   ecx, r8b
 * 0000000140BD029C: xor     rax, r10
 * 0000000140BD029F: and     ecx, 3Fh
 * 0000000140BD02A2: ror     r8, cl
 * 0000000140BD02A5: add     r8, rax
 * 0000000140BD02A8: xor     r8, 0EFAh
 * 0000000140BD02AF: add     rdx, 8
 * 0000000140BD02B3: cmp     rdx, r9
 * 0000000140BD02B6: jnz     short loc_140BD0292
 * 0000000140BD02B8: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BD02C0: xor     r15d, r15d
 * 0000000140BD02C3: cmp     r8, [rsi+0A80h]
 * 0000000140BD02CA: jz      loc_140BD01BF
 * 0000000140BD02D0: mov     ecx, [rsi+804h]
 * 0000000140BD02D6: mov     rax, [rsi+588h]
 * 0000000140BD02DD: mov     [rax], rsi
 * 0000000140BD02E0: mov     [rax+10h], ecx
 * 0000000140BD02E3: mov     rcx, [rsi+0A80h]
 * 0000000140BD02EA: cmp     [rsi+918h], r15d
 * 0000000140BD02F1: jnz     short loc_140BD0301
 * 0000000140BD02F3: mov     rax, [rsi+588h]
 * 0000000140BD02FA: xor     rcx, r8
 * 0000000140BD02FD: mov     [rax+18h], rcx
 * 0000000140BD0301: xor     edx, edx
 * 0000000140BD0303: mov     r9d, 100h
 * 0000000140BD0309: mov     rcx, rsi
 * 0000000140BD030C: call    sub_140BD8384
 * 0000000140BD0311: jmp     loc_140BD01BF
 * 0000000140BD0316: mov     edx, 0FFFFFFFFh
 * 0000000140BD031B: and     r9d, 7Fh
 * 0000000140BD031F: mov     ebx, 1
 * 0000000140BD0324: cmp     r9d, 8
 * 0000000140BD0328: jb      short loc_140BD0347
 * 0000000140BD032A: mov     eax, r9d
 * 0000000140BD032D: shr     rax, 3
 * 0000000140BD0331: xor     r8, [r10]
 * 0000000140BD0334: mov     ecx, r14d
 * 0000000140BD0337: rol     r8, cl
 * 0000000140BD033A: add     r10, 8
 * 0000000140BD033E: add     r9d, 0FFFFFFF8h
 * 0000000140BD0342: sub     rax, rbx
 * 0000000140BD0345: jnz     short loc_140BD0331
 * 0000000140BD0347: xor     r15d, r15d
 * 0000000140BD034A: test    r9d, r9d
 * 0000000140BD034D: jz      short loc_140BD0364
 * 0000000140BD034F: movzx   eax, byte ptr [r10]
 * 0000000140BD0353: mov     ecx, r14d
 * 0000000140BD0356: xor     r8, rax
 * 0000000140BD0359: add     r10, rbx
 * 0000000140BD035C: rol     r8, cl
 * 0000000140BD035F: add     r9d, edx
 * 0000000140BD0362: jnz     short loc_140BD034F
 * 0000000140BD0364: mov     rcx, [r13+18h]
 * 0000000140BD0368: cmp     r8, rcx
 * 0000000140BD036B: jz      loc_140BCE398
 * 0000000140BD0371: cmp     [rsi+918h], r15d
 * 0000000140BD0378: jnz     short loc_140BD0388
 * 0000000140BD037A: mov     rax, [rsi+588h]
 * 0000000140BD0381: xor     rcx, r8
 * 0000000140BD0384: mov     [rax+18h], rcx
 * 0000000140BD0388: mov     ecx, [r13+20h]
 * 0000000140BD038C: add     rcx, rsi
 * 0000000140BD038F: cmp     [rsi+918h], r15d
 * 0000000140BD0396: jnz     loc_140BCE398
 * 0000000140BD039C: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BD03A6: add     rax, rsi
 * 0000000140BD03A9: mov     [rsi+920h], rax
 * 0000000140BD03B0: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BD03BA: add     rax, r13
 * 0000000140BD03BD: mov     [rsi+928h], rax
 * 0000000140BD03C4: movsxd  rax, dword ptr [r13+0]
 * 0000000140BD03C8: mov     [rsi+930h], rax
 * 0000000140BD03CF: mov     [rsi+938h], rcx
 * 0000000140BD03D6: mov     [rsi+918h], ebx
 * 0000000140BD03DC: mov     ecx, [rsi+9D8h]
 * 0000000140BD03E2: bt      ecx, 1Dh
 * 0000000140BD03E6: jb      loc_140BCE398
 * 0000000140BD03EC: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BD03F6: jz      loc_140BCE398
 * 0000000140BD03FC: test    bl, cl
 * 0000000140BD03FE: jz      loc_140BCE398
 * 0000000140BD0404: mov     ecx, [rsi+0A74h]
 * 0000000140BD040A: mov     eax, [rsi+804h]
 * 0000000140BD0410: mov     r10, [rsi+838h]
 * 0000000140BD0417: sub     eax, ecx
 * 0000000140BD0419: mov     r8, [rsi+0A78h]
 * 0000000140BD0420: lea     rdx, [rcx+rsi]
 * 0000000140BD0424: mov     ecx, eax
 * 0000000140BD0426: shr     rcx, 3
 * 0000000140BD042A: lea     r9, [rdx+rcx*8]
 * 0000000140BD042E: jmp     short loc_140BD0451
 * 0000000140BD0430: xor     [rdx], r8
 * 0000000140BD0433: mov     rax, [rdx]
 * 0000000140BD0436: movzx   ecx, r8b
 * 0000000140BD043A: xor     rax, r10
 * 0000000140BD043D: and     ecx, 3Fh
 * 0000000140BD0440: ror     r8, cl
 * 0000000140BD0443: add     r8, rax
 * 0000000140BD0446: xor     r8, 0EFAh
 * 0000000140BD044D: add     rdx, 8
 * 0000000140BD0451: cmp     rdx, r9
 * 0000000140BD0454: jnz     short loc_140BD0430
 * 0000000140BD0456: jmp     loc_140BC9D6B
 * 0000000140BD045B: mov     r11d, 1000h
 * 0000000140BD0461: jmp     loc_140BC2FA4
 * 0000000140BD0466: mov     [rsi+840h], ecx
 * 0000000140BD046C: cmp     [rbp+8D0h+var_8E0], r15d
 * 0000000140BD0470: jz      short loc_140BD04E1
 * 0000000140BD0472: mov     rcx, gs:20h
 * 0000000140BD047B: mov     rax, [rsi+658h]
 * 0000000140BD0482: mov     rdx, [rax+rcx]
 * 0000000140BD0486: lea     rcx, [rbp+8D0h+var_260]
 * 0000000140BD048D: mov     rax, [rsi+698h]
 * 0000000140BD0494: add     rdx, [rsi+6B8h]
 * 0000000140BD049B: mov     rbx, [rdx+rax]
 * 0000000140BD049F: mov     rax, [rsi+1A8h]
 * 0000000140BD04A6: call    KeGuardDispatchICall
 * 0000000140BD04AB: mov     rax, [rsi+440h]
 * 0000000140BD04B2: lea     rcx, [rbp+8D0h+var_78]
 * 0000000140BD04B9: call    KeGuardDispatchICall
 * 0000000140BD04BE: mov     rax, [rsi+3A8h]
 * 0000000140BD04C5: mov     rcx, rbx
 * 0000000140BD04C8: call    KeGuardDispatchICall
 * 0000000140BD04CD: mov     rax, [rsi+3B8h]
 * 0000000140BD04D4: mov     rcx, rbx
 * 0000000140BD04D7: call    KeGuardDispatchICall
 * 0000000140BD04DC: mov     ebx, 1
 * 0000000140BD04E1: mov     eax, [rsi+9D8h]
 * 0000000140BD04E7: mov     ecx, 400004h
 * 0000000140BD04EC: and     eax, ecx
 * 0000000140BD04EE: cmp     eax, ecx
 * 0000000140BD04F0: jnz     loc_140BD098F
 * 0000000140BD04F6: mov     r10, [rsi+0AB8h]
 * 0000000140BD04FD: mov     ecx, 2
 * 0000000140BD0502: mov     eax, [rsi+9DCh]
 * 0000000140BD0508: mov     r14d, [rsi+804h]
 * 0000000140BD050F: mov     r11, [rsi+0A40h]
 * 0000000140BD0516: mov     r12d, [rsi+828h]
 * 0000000140BD051D: mov     [rbp+8D0h+arg_8], r10
 * 0000000140BD0524: test    cl, al
 * 0000000140BD0526: jz      short loc_140BD052F
 * 0000000140BD0528: mov     r11, [rsi+5D0h]
 * 0000000140BD052F: mov     rax, [rsi+2C8h]
 * 0000000140BD0536: mov     r9, [rsi+170h]
 * 0000000140BD053D: mov     [rbp+8D0h+var_8D8], rax
 * 0000000140BD0541: mov     rax, [rsi+340h]
 * 0000000140BD0548: mov     [rbp+8D0h+var_8F0], rax
 * 0000000140BD054C: mov     [rbp+8D0h+var_950], r9
 * 0000000140BD0550: rdtsc
 * 0000000140BD0552: shl     rdx, 20h
 * 0000000140BD0556: mov     r13, 7010008004002001h
 * 0000000140BD0560: or      rax, rdx
 * 0000000140BD0563: mov     r8, rdi
 * 0000000140BD0566: mov     rcx, rax
 * 0000000140BD0569: ror     rax, 3
 * 0000000140BD056D: xor     rcx, rax
 * 0000000140BD0570: mov     rax, r13
 * 0000000140BD0573: mul     rcx
 * 0000000140BD0576: mov     rcx, rdx
 * 0000000140BD0579: mov     [rbp+8D0h+var_4B8], rdx
 * 0000000140BD0580: xor     rcx, rax
 * 0000000140BD0583: mov     rax, 0ABCC77118461CEFDh
 * 0000000140BD058D: mul     rcx
 * 0000000140BD0590: shr     rdx, 1Ah
 * 0000000140BD0594: imul    rax, rdx, 5F5E100h
 * 0000000140BD059B: sub     rcx, rax
 * 0000000140BD059E: sub     r8, rcx
 * 0000000140BD05A1: mov     [rbp+8D0h+var_850], r8
 * 0000000140BD05A8: test    dword ptr [rsi+9D8h], 2000000h
 * 0000000140BD05B2: jz      loc_140BD0652
 * 0000000140BD05B8: rdtsc
 * 0000000140BD05BA: shl     rdx, 20h
 * 0000000140BD05BE: or      rax, rdx
 * 0000000140BD05C1: mov     rcx, rax
 * 0000000140BD05C4: ror     rax, 3
 * 0000000140BD05C8: xor     rcx, rax
 * 0000000140BD05CB: mov     rax, r13
 * 0000000140BD05CE: mul     rcx
 * 0000000140BD05D1: mov     rcx, rdx
 * 0000000140BD05D4: mov     [rbp+8D0h+var_4B0], rdx
 * 0000000140BD05DB: xor     rcx, rax
 * 0000000140BD05DE: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 0000000140BD05E8: mul     rcx
 * 0000000140BD05EB: shr     rdx, 3
 * 0000000140BD05EF: lea     rax, [rdx+rdx*4]
 * 0000000140BD05F3: add     rax, rax
 * 0000000140BD05F6: sub     rcx, rax
 * 0000000140BD05F9: mov     eax, 2
 * 0000000140BD05FE: cmp     rcx, rax
 * 0000000140BD0601: jnb     short loc_140BD0652
 * 0000000140BD0603: rdtsc
 * 0000000140BD0605: shl     rdx, 20h
 * 0000000140BD0609: or      rax, rdx
 * 0000000140BD060C: mov     rcx, rax
 * 0000000140BD060F: ror     rax, 3
 * 0000000140BD0613: xor     rcx, rax
 * 0000000140BD0616: mov     rax, r13
 * 0000000140BD0619: mul     rcx
 * 0000000140BD061C: mov     rcx, rdx
 * 0000000140BD061F: mov     [rbp+8D0h+var_4A8], rdx
 * 0000000140BD0626: xor     rcx, rax
 * 0000000140BD0629: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 0000000140BD0633: mul     rcx
 * 0000000140BD0636: shr     rdx, 3
 * 0000000140BD063A: lea     rax, [rdx+rdx*4]
 * 0000000140BD063E: add     rax, rax
 * 0000000140BD0641: sub     rcx, rax
 * 0000000140BD0644: add     rcx, rbx
 * 0000000140BD0647: imul    rcx, r8
 * 0000000140BD064B: mov     [rbp+8D0h+var_850], rcx
 * 0000000140BD0652: mov     eax, [rsi+9D8h]
 * 0000000140BD0658: mov     r8d, 1
 * 0000000140BD065E: test    r8b, al
 * 0000000140BD0661: mov     rbx, r15
 * 0000000140BD0664: cmovz   r14d, r12d
 * 0000000140BD0668: lea     ecx, [r8+3Fh]
 * 0000000140BD066C: test    cl, al
 * 0000000140BD066E: jnz     short loc_140BD067B
 * 0000000140BD0670: xor     r8d, r8d
 * 0000000140BD0673: mov     r13d, r8d
 * 0000000140BD0676: jmp     loc_140BD074E
 * 0000000140BD067B: mov     r13d, r8d
 * 0000000140BD067E: rdtsc
 * 0000000140BD0680: shl     rdx, 20h
 * 0000000140BD0684: mov     r15, rsi
 * 0000000140BD0687: or      rax, rdx
 * 0000000140BD068A: mov     rcx, rax
 * 0000000140BD068D: ror     rax, 3
 * 0000000140BD0691: xor     rcx, rax
 * 0000000140BD0694: mov     rax, 7010008004002001h
 * 0000000140BD069E: mul     rcx
 * 0000000140BD06A1: mov     ecx, 15Dh
 * 0000000140BD06A6: mov     rbx, rdx
 * 0000000140BD06A9: mov     [rbp+8D0h+var_4A0], rdx
 * 0000000140BD06B0: xor     rbx, rax
 * 0000000140BD06B3: lea     rax, [rsi+0AE0h]
 * 0000000140BD06BA: mov     r9, rbx
 * 0000000140BD06BD: xor     r15, rbx
 * 0000000140BD06C0: xor     [rax], r9
 * 0000000140BD06C3: lea     rax, [rax-8]
 * 0000000140BD06C7: ror     r9, cl
 * 0000000140BD06CA: sub     ecx, r8d
 * 0000000140BD06CD: jnz     short loc_140BD06C0
 * 0000000140BD06CF: lea     r8, [r12-0AE8h]
 * 0000000140BD06D7: shr     r8, 3
 * 0000000140BD06DB: test    r8d, r8d
 * 0000000140BD06DE: jz      short loc_140BD0720
 * 0000000140BD06E0: movsxd  r10, r8d
 * 0000000140BD06E3: add     rsi, 0AE0h
 * 0000000140BD06EA: mov     rdi, r13
 * 0000000140BD06ED: lea     r10, [rsi+r10*8]
 * 0000000140BD06F1: mov     rdx, [r10]
 * 0000000140BD06F4: lea     rax, [r15+r15]
 * 0000000140BD06F8: mov     ecx, r8d
 * 0000000140BD06FB: lea     r10, [r10-8]
 * 0000000140BD06FF: ror     rdx, cl
 * 0000000140BD0702: mov     r15, rdx
 * 0000000140BD0705: xor     r15, rax
 * 0000000140BD0708: sub     r8d, edi
 * 0000000140BD070B: jnz     short loc_140BD06F1
 * 0000000140BD070D: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BD0712: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BD0719: mov     r10, [rbp+8D0h+arg_8]
 * 0000000140BD0720: mov     ecx, r14d
 * 0000000140BD0723: lea     rdx, [rsi+r12]
 * 0000000140BD0727: sub     ecx, r12d
 * 0000000140BD072A: shr     ecx, 3
 * 0000000140BD072D: test    ecx, ecx
 * 0000000140BD072F: jz      short loc_140BD074A
 * 0000000140BD0731: lea     rdx, [rdx+rcx*8]
 * 0000000140BD0735: mov     rax, r13
 * 0000000140BD0738: add     rdx, 0FFFFFFFFFFFFFFF8h
 * 0000000140BD073C: xor     [rdx], r9
 * 0000000140BD073F: lea     rdx, [rdx-8]
 * 0000000140BD0743: ror     r9, cl
 * 0000000140BD0746: sub     ecx, eax
 * 0000000140BD0748: jnz     short loc_140BD073C
 * 0000000140BD074A: mov     r9, [rbp+8D0h+var_950]
 * 0000000140BD074E: test    r10, r10
 * 0000000140BD0751: jz      short loc_140BD0770
 * 0000000140BD0753: mov     rax, [rbp+8D0h+var_8F0]
 * 0000000140BD0757: lea     r8, [rbp+8D0h+var_850]
 * 0000000140BD075E: mov     edx, r14d
 * 0000000140BD0761: mov     [rsp+9D0h+BugCheckParameter4], r10
 * 0000000140BD0766: mov     rcx, rsi
 * 0000000140BD0769: call    KeGuardDispatchICall
 * 0000000140BD076E: jmp     short loc_140BD07A8
 * 0000000140BD0770: xor     edx, edx
 * 0000000140BD0772: test    r11, r11
 * 0000000140BD0775: jnz     short loc_140BD078A
 * 0000000140BD0777: lea     r8, [rbp+8D0h+var_850]
 * 0000000140BD077E: xor     ecx, ecx
 * 0000000140BD0780: mov     rax, r9
 * 0000000140BD0783: call    KeGuardDispatchICall
 * 0000000140BD0788: jmp     short loc_140BD07A8
 * 0000000140BD078A: lea     rax, [rbp+8D0h+var_850]
 * 0000000140BD0791: xor     r9d, r9d
 * 0000000140BD0794: mov     [rsp+9D0h+BugCheckParameter4], rax
 * 0000000140BD0799: xor     r8d, r8d
 * 0000000140BD079C: mov     rax, [rbp+8D0h+var_8D8]
 * 0000000140BD07A0: mov     rcx, r11
 * 0000000140BD07A3: call    KeGuardDispatchICall
 * 0000000140BD07A8: xor     r11d, r11d
 * 0000000140BD07AB: test    r13d, r13d
 * 0000000140BD07AE: lea     r13d, [r11+1]
 * 0000000140BD07B2: jz      loc_140BD098A
 * 0000000140BD07B8: mov     r9, rsi
 * 0000000140BD07BB: lea     rax, [rsi+0AE0h]
 * 0000000140BD07C2: xor     r9, rbx
 * 0000000140BD07C5: mov     ecx, 15Dh
 * 0000000140BD07CA: xor     [rax], rbx
 * 0000000140BD07CD: lea     rax, [rax-8]
 * 0000000140BD07D1: ror     rbx, cl
 * 0000000140BD07D4: sub     ecx, r13d
 * 0000000140BD07D7: jnz     short loc_140BD07CA
 * 0000000140BD07D9: lea     r8, [r12-0AE8h]
 * 0000000140BD07E1: shr     r8, 3
 * 0000000140BD07E5: test    r8d, r8d
 * 0000000140BD07E8: jz      short loc_140BD0814
 * 0000000140BD07EA: movsxd  r10, r8d
 * 0000000140BD07ED: add     r10, 15Ch
 * 0000000140BD07F4: lea     r10, [rsi+r10*8]
 * 0000000140BD07F8: mov     rdx, [r10]
 * 0000000140BD07FB: lea     rax, [r9+r9]
 * 0000000140BD07FF: mov     ecx, r8d
 * 0000000140BD0802: lea     r10, [r10-8]
 * 0000000140BD0806: ror     rdx, cl
 * 0000000140BD0809: mov     r9, rdx
 * 0000000140BD080C: xor     r9, rax
 * 0000000140BD080F: sub     r8d, r13d
 * 0000000140BD0812: jnz     short loc_140BD07F8
 * 0000000140BD0814: sub     r14d, r12d
 * 0000000140BD0817: lea     rcx, [rsi+r12]
 * 0000000140BD081B: shr     r14d, 3
 * 0000000140BD081F: test    r14d, r14d
 * 0000000140BD0822: jz      short loc_140BD0840
 * 0000000140BD0824: mov     edx, r14d
 * 0000000140BD0827: dec     rdx
 * 0000000140BD082A: lea     rdx, [rcx+rdx*8]
 * 0000000140BD082E: xor     [rdx], rbx
 * 0000000140BD0831: mov     ecx, r14d
 * 0000000140BD0834: ror     rbx, cl
 * 0000000140BD0837: lea     rdx, [rdx-8]
 * 0000000140BD083B: sub     r14d, r13d
 * 0000000140BD083E: jnz     short loc_140BD082E
 * 0000000140BD0840: cmp     r9, r15
 * 0000000140BD0843: jz      loc_140BD098A
 * 0000000140BD0849: mov     rax, [rsi+588h]
 * 0000000140BD0850: mov     ecx, [rsi+804h]
 * 0000000140BD0856: mov     [rax], rsi
 * 0000000140BD0859: mov     [rax+10h], ecx
 * 0000000140BD085C: cmp     [rsi+918h], r11d
 * 0000000140BD0863: jnz     short loc_140BD0876
 * 0000000140BD0865: mov     rax, [rsi+588h]
 * 0000000140BD086C: mov     rcx, r9
 * 0000000140BD086F: xor     rcx, r15
 * 0000000140BD0872: mov     [rax+18h], rcx
 * 0000000140BD0876: xor     r15d, r15d
 * 0000000140BD0879: mov     r14, 0A3A03F5891C8B4E8h
 * 0000000140BD0883: cmp     [rsi+918h], r15d
 * 0000000140BD088A: jnz     loc_140BD099F
 * 0000000140BD0890: lea     rax, [rsi+r14]
 * 0000000140BD0894: mov     [rsi+920h], rax
 * 0000000140BD089B: mov     [rsi+928h], r15
 * 0000000140BD08A2: mov     qword ptr [rsi+930h], 10Eh
 * 0000000140BD08AD: mov     [rsi+938h], r9
 * 0000000140BD08B4: mov     [rsi+918h], r13d
 * 0000000140BD08BB: mov     ecx, [rsi+9D8h]
 * 0000000140BD08C1: bt      ecx, 1Dh
 * 0000000140BD08C5: jb      loc_140BD099F
 * 0000000140BD08CB: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BD08D5: jz      loc_140BD099F
 * 0000000140BD08DB: test    r13b, cl
 * 0000000140BD08DE: jz      loc_140BD099F
 * 0000000140BD08E4: mov     ecx, [rsi+0A74h]
 * 0000000140BD08EA: mov     eax, [rsi+804h]
 * 0000000140BD08F0: mov     r10, [rsi+838h]
 * 0000000140BD08F7: sub     eax, ecx
 * 0000000140BD08F9: mov     r8, [rsi+0A78h]
 * 0000000140BD0900: lea     rdx, [rcx+rsi]
 * 0000000140BD0904: mov     ecx, eax
 * 0000000140BD0906: shr     rcx, 3
 * 0000000140BD090A: lea     r9, [rdx+rcx*8]
 * 0000000140BD090E: jmp     short loc_140BD0931
 * 0000000140BD0910: xor     [rdx], r8
 * 0000000140BD0913: mov     rax, [rdx]
 * 0000000140BD0916: movzx   ecx, r8b
 * 0000000140BD091A: xor     rax, r10
 * 0000000140BD091D: and     ecx, 3Fh
 * 0000000140BD0920: ror     r8, cl
 * 0000000140BD0923: add     r8, rax
 * 0000000140BD0926: xor     r8, 0EFAh
 * 0000000140BD092D: add     rdx, 8
 * 0000000140BD0931: cmp     rdx, r9
 * 0000000140BD0934: jnz     short loc_140BD0910
 * 0000000140BD0936: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BD093E: cmp     r8, [rsi+0A80h]
 * 0000000140BD0945: jz      short loc_140BD099F
 * 0000000140BD0947: mov     ecx, [rsi+804h]
 * 0000000140BD094D: mov     rax, [rsi+588h]
 * 0000000140BD0954: mov     [rax], rsi
 * 0000000140BD0957: mov     [rax+10h], ecx
 * 0000000140BD095A: mov     rcx, [rsi+0A80h]
 * 0000000140BD0961: cmp     [rsi+918h], r15d
 * 0000000140BD0968: jnz     short loc_140BD0978
 * 0000000140BD096A: mov     rax, [rsi+588h]
 * 0000000140BD0971: xor     rcx, r8
 * 0000000140BD0974: mov     [rax+18h], rcx
 * 0000000140BD0978: xor     edx, edx
 * 0000000140BD097A: mov     r9d, 100h
 * 0000000140BD0980: mov     rcx, rsi
 * 0000000140BD0983: call    sub_140BD8384
 * 0000000140BD0988: jmp     short loc_140BD099F
 * 0000000140BD098A: xor     r15d, r15d
 * 0000000140BD098D: jmp     short loc_140BD0995
 * 0000000140BD098F: mov     r13d, 1
 * 0000000140BD0995: mov     r14, 0A3A03F5891C8B4E8h
 * 0000000140BD099F: test    dword ptr [rsi+9D8h], 1000000h
 * 0000000140BD09A9: jz      loc_140BD0AEE
 * 0000000140BD09AF: mov     rbx, [rsi+9E0h]
 * 0000000140BD09B6: mov     rax, [rsi+390h]
 * 0000000140BD09BD: mov     rcx, rbx
 * 0000000140BD09C0: call    KeGuardDispatchICall
 * 0000000140BD09C5: test    eax, eax
 * 0000000140BD09C7: jz      loc_140BD0AD2
 * 0000000140BD09CD: cmp     [rsi+918h], r15d
 * 0000000140BD09D4: jnz     loc_140BD0AD2
 * 0000000140BD09DA: lea     rax, [rsi+r14]
 * 0000000140BD09DE: mov     [rsi+920h], rax
 * 0000000140BD09E5: mov     [rsi+928h], r15
 * 0000000140BD09EC: mov     qword ptr [rsi+930h], 110h
 * 0000000140BD09F7: mov     [rsi+938h], r15
 * 0000000140BD09FE: mov     [rsi+918h], r13d
 * 0000000140BD0A05: mov     ecx, [rsi+9D8h]
 * 0000000140BD0A0B: bt      ecx, 1Dh
 * 0000000140BD0A0F: jb      loc_140BD0AD2
 * 0000000140BD0A15: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BD0A1F: jz      loc_140BD0AD2
 * 0000000140BD0A25: test    r13b, cl
 * 0000000140BD0A28: jz      loc_140BD0AD2
 * 0000000140BD0A2E: mov     ecx, [rsi+0A74h]
 * 0000000140BD0A34: mov     eax, [rsi+804h]
 * 0000000140BD0A3A: mov     r10, [rsi+838h]
 * 0000000140BD0A41: sub     eax, ecx
 * 0000000140BD0A43: mov     r8, [rsi+0A78h]
 * 0000000140BD0A4A: lea     rdx, [rcx+rsi]
 * 0000000140BD0A4E: mov     ecx, eax
 * 0000000140BD0A50: shr     rcx, 3
 * 0000000140BD0A54: lea     r9, [rdx+rcx*8]
 * 0000000140BD0A58: jmp     short loc_140BD0A7B
 * 0000000140BD0A5A: xor     [rdx], r8
 * 0000000140BD0A5D: mov     rax, [rdx]
 * 0000000140BD0A60: movzx   ecx, r8b
 * 0000000140BD0A64: xor     rax, r10
 * 0000000140BD0A67: and     ecx, 3Fh
 * 0000000140BD0A6A: ror     r8, cl
 * 0000000140BD0A6D: add     r8, rax
 * 0000000140BD0A70: xor     r8, 0EFAh
 * 0000000140BD0A77: add     rdx, 8
 * 0000000140BD0A7B: cmp     rdx, r9
 * 0000000140BD0A7E: jnz     short loc_140BD0A5A
 * 0000000140BD0A80: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BD0A88: cmp     r8, [rsi+0A80h]
 * 0000000140BD0A8F: jz      short loc_140BD0AD2
 * 0000000140BD0A91: mov     ecx, [rsi+804h]
 * 0000000140BD0A97: mov     rax, [rsi+588h]
 * 0000000140BD0A9E: mov     [rax], rsi
 * 0000000140BD0AA1: mov     [rax+10h], ecx
 * 0000000140BD0AA4: mov     rcx, [rsi+0A80h]
 * 0000000140BD0AAB: cmp     [rsi+918h], r15d
 * 0000000140BD0AB2: jnz     short loc_140BD0AC2
 * 0000000140BD0AB4: mov     rax, [rsi+588h]
 * 0000000140BD0ABB: xor     rcx, r8
 * 0000000140BD0ABE: mov     [rax+18h], rcx
 * 0000000140BD0AC2: xor     edx, edx
 * 0000000140BD0AC4: mov     r9d, 100h
 * 0000000140BD0ACA: mov     rcx, rsi
 * 0000000140BD0ACD: call    sub_140BD8384
 * 0000000140BD0AD2: mov     rax, [rsi+388h]
 * 0000000140BD0AD9: lea     rdx, sub_140BDA550
 * 0000000140BD0AE0: xor     r9d, r9d
 * 0000000140BD0AE3: mov     r8, rsi
 * 0000000140BD0AE6: mov     rcx, rbx
 * 0000000140BD0AE9: call    KeGuardDispatchICall
 * 0000000140BD0AEE: mov     ecx, [rsi+9D8h]
 * 0000000140BD0AF4: bt      ecx, 1Dh
 * 0000000140BD0AF8: jb      loc_140BD0BAC
 * 0000000140BD0AFE: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BD0B08: jnz     loc_140BD0BAC
 * 0000000140BD0B0E: mov     rbx, 7010008004002001h
 * 0000000140BD0B18: test    r13b, cl
 * 0000000140BD0B1B: jz      loc_140BD0BB6
 * 0000000140BD0B21: mov     ecx, [rsi+0A74h]
 * 0000000140BD0B27: mov     eax, [rsi+804h]
 * 0000000140BD0B2D: mov     r11, [rsi+838h]
 * 0000000140BD0B34: sub     eax, ecx
 * 0000000140BD0B36: lea     r9, [rcx+rsi]
 * 0000000140BD0B3A: mov     ecx, eax
 * 0000000140BD0B3C: shr     rcx, 3
 * 0000000140BD0B40: lea     r10, [r9+rcx*8]
 * 0000000140BD0B44: rdtsc
 * 0000000140BD0B46: shl     rdx, 20h
 * 0000000140BD0B4A: or      rax, rdx
 * 0000000140BD0B4D: mov     rcx, rax
 * 0000000140BD0B50: ror     rax, 3
 * 0000000140BD0B54: xor     rcx, rax
 * 0000000140BD0B57: mov     rax, rbx
 * 0000000140BD0B5A: mul     rcx
 * 0000000140BD0B5D: mov     [rbp+8D0h+var_498], rdx
 * 0000000140BD0B64: xor     rdx, rax
 * 0000000140BD0B67: mov     [rsi+0A78h], rdx
 * 0000000140BD0B6E: jmp     short loc_140BD0B96
 * 0000000140BD0B70: mov     r8, [r9]
 * 0000000140BD0B73: mov     rax, rdx
 * 0000000140BD0B76: movzx   ecx, dl
 * 0000000140BD0B79: xor     rax, r8
 * 0000000140BD0B7C: and     ecx, 3Fh
 * 0000000140BD0B7F: mov     [r9], rax
 * 0000000140BD0B82: ror     rdx, cl
 * 0000000140BD0B85: xor     r8, r11
 * 0000000140BD0B88: add     rdx, r8
 * 0000000140BD0B8B: xor     rdx, 0EFAh
 * 0000000140BD0B92: add     r9, 8
 * 0000000140BD0B96: cmp     r9, r10
 * 0000000140BD0B99: jnz     short loc_140BD0B70
 * 0000000140BD0B9B: bts     dword ptr [rsi+9DCh], 15h
 * 0000000140BD0BA3: mov     [rsi+0A80h], rdx
 * 0000000140BD0BAA: jmp     short loc_140BD0BB6
 * 0000000140BD0BAC: mov     rbx, 7010008004002001h
 * 0000000140BD0BB6: test    dword ptr [rsi+9DCh], 100h
 * 0000000140BD0BC0: jz      short loc_140BD0BCD
 * 0000000140BD0BC2: mov     rax, [rbp+8D0h+var_8D0]
 * 0000000140BD0BC6: mov     [rbp+8D8h], rax
 * 0000000140BD0BCD: mov     r8d, [rsi+9D8h]
 * 0000000140BD0BD4: bt      r8d, 11h
 * 0000000140BD0BD9: jnb     loc_140BD0D31
 * 0000000140BD0BDF: rdtsc
 * 0000000140BD0BE1: shl     rdx, 20h
 * 0000000140BD0BE5: or      rax, rdx
 * 0000000140BD0BE8: mov     rcx, rax
 * 0000000140BD0BEB: mov     rdx, rax
 * 0000000140BD0BEE: ror     rcx, 3
 * 0000000140BD0BF2: mov     rax, rbx
 * 0000000140BD0BF5: xor     rdx, rcx
 * 0000000140BD0BF8: mul     rdx
 * 0000000140BD0BFB: mov     rcx, rdx
 * 0000000140BD0BFE: mov     [rbp+8D0h+var_490], rdx
 * 0000000140BD0C05: xor     rcx, rax
 * 0000000140BD0C08: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 0000000140BD0C12: mul     rcx
 * 0000000140BD0C15: shr     rdx, 3
 * 0000000140BD0C19: lea     rax, [rdx+rdx*4]
 * 0000000140BD0C1D: add     rax, rax
 * 0000000140BD0C20: sub     rcx, rax
 * 0000000140BD0C23: mov     eax, 2
 * 0000000140BD0C28: cmp     rcx, rax
 * 0000000140BD0C2B: jnb     loc_140BD0D31
 * 0000000140BD0C31: cmp     [rsi+918h], r15d
 * 0000000140BD0C38: jnz     loc_140BD0D31
 * 0000000140BD0C3E: lea     rax, [rsi+r14]
 * 0000000140BD0C42: mov     [rsi+920h], rax
 * 0000000140BD0C49: mov     [rsi+928h], r15
 * 0000000140BD0C50: mov     qword ptr [rsi+930h], 108h
 * 0000000140BD0C5B: mov     [rsi+938h], r15
 * 0000000140BD0C62: mov     [rsi+918h], r13d
 * 0000000140BD0C69: bt      r8d, 1Dh
 * 0000000140BD0C6E: jb      loc_140BD0D31
 * 0000000140BD0C74: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BD0C7E: jz      loc_140BD0D31
 * 0000000140BD0C84: test    r13b, r8b
 * 0000000140BD0C87: jz      loc_140BD0D31
 * 0000000140BD0C8D: mov     ecx, [rsi+0A74h]
 * 0000000140BD0C93: mov     eax, [rsi+804h]
 * 0000000140BD0C99: mov     r10, [rsi+838h]
 * 0000000140BD0CA0: sub     eax, ecx
 * 0000000140BD0CA2: mov     r8, [rsi+0A78h]
 * 0000000140BD0CA9: lea     rdx, [rcx+rsi]
 * 0000000140BD0CAD: mov     ecx, eax
 * 0000000140BD0CAF: shr     rcx, 3
 * 0000000140BD0CB3: lea     r9, [rdx+rcx*8]
 * 0000000140BD0CB7: jmp     short loc_140BD0CDA
 * 0000000140BD0CB9: xor     [rdx], r8
 * 0000000140BD0CBC: mov     rax, [rdx]
 * 0000000140BD0CBF: movzx   ecx, r8b
 * 0000000140BD0CC3: xor     rax, r10
 * 0000000140BD0CC6: and     ecx, 3Fh
 * 0000000140BD0CC9: ror     r8, cl
 * 0000000140BD0CCC: add     r8, rax
 * 0000000140BD0CCF: xor     r8, 0EFAh
 * 0000000140BD0CD6: add     rdx, 8
 * 0000000140BD0CDA: cmp     rdx, r9
 * 0000000140BD0CDD: jnz     short loc_140BD0CB9
 * 0000000140BD0CDF: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BD0CE7: cmp     r8, [rsi+0A80h]
 * 0000000140BD0CEE: jz      short loc_140BD0D31
 * 0000000140BD0CF0: mov     ecx, [rsi+804h]
 * 0000000140BD0CF6: mov     rax, [rsi+588h]
 * 0000000140BD0CFD: mov     [rax], rsi
 * 0000000140BD0D00: mov     [rax+10h], ecx
 * 0000000140BD0D03: mov     rcx, [rsi+0A80h]
 * 0000000140BD0D0A: cmp     [rsi+918h], r15d
 * 0000000140BD0D11: jnz     short loc_140BD0D21
 * 0000000140BD0D13: mov     rax, [rsi+588h]
 * 0000000140BD0D1A: xor     rcx, r8
 * 0000000140BD0D1D: mov     [rax+18h], rcx
 * 0000000140BD0D21: xor     edx, edx
 * 0000000140BD0D23: mov     r9d, 100h
 * 0000000140BD0D29: mov     rcx, rsi
 * 0000000140BD0D2C: call    sub_140BD8384
 * 0000000140BD0D31: mov     eax, [rsi+9D8h]
 * 0000000140BD0D37: bt      eax, 1Dh
 * 0000000140BD0D3B: jb      short loc_140BD0DB1
 * 0000000140BD0D3D: bt      eax, 0Eh
 * 0000000140BD0D41: jb      short loc_140BD0DB1
 * 0000000140BD0D43: lea     rcx, [rsi+918h]
 * 0000000140BD0D4A: cmp     [rcx], r15d
 * 0000000140BD0D4D: jz      short loc_140BD0DB1
 * 0000000140BD0D4F: mov     rdx, [rbp+8D0h+arg_0]
 * 0000000140BD0D56: test    dword ptr [rdx+9D8h], 4000h
 * 0000000140BD0D60: jnz     short loc_140BD0D6B
 * 0000000140BD0D62: cmp     [rdx+918h], r15d
 * 0000000140BD0D69: jnz     short loc_140BD0DB1
 * 0000000140BD0D6B: mov     r8d, 28h ; '('
 * 0000000140BD0D71: add     rdx, 918h
 * 0000000140BD0D78: lea     r9d, [r8-23h]
 * 0000000140BD0D7C: mov     rax, [rcx]
 * 0000000140BD0D7F: add     r8d, 0FFFFFFF8h
 * 0000000140BD0D83: mov     [rdx], rax
 * 0000000140BD0D86: add     rcx, 8
 * 0000000140BD0D8A: add     rdx, 8
 * 0000000140BD0D8E: sub     r9, r13
 * 0000000140BD0D91: jnz     short loc_140BD0D7C
 * 0000000140BD0D93: test    r8d, r8d
 * 0000000140BD0D96: jz      short loc_140BD0DB1
 * 0000000140BD0D98: mov     esi, 0FFFFFFFFh
 * 0000000140BD0D9D: mov     al, [rcx]
 * 0000000140BD0D9F: add     rcx, r13
 * 0000000140BD0DA2: mov     [rdx], al
 * 0000000140BD0DA4: add     rdx, r13
 * 0000000140BD0DA7: add     r8d, esi
 * 0000000140BD0DAA: jnz     short loc_140BD0D9D
 * 0000000140BD0DAC: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BD0DB1: test    dword ptr [rsi+9D8h], 4000h
 * 0000000140BD0DBB: jnz     short loc_140BD0DCA
 * 0000000140BD0DBD: cmp     [rsi+918h], r15d
 * 0000000140BD0DC4: jnz     loc_140BD194B
 * 0000000140BD0DCA: mov     eax, [rsi+0A70h]
 * 0000000140BD0DD0: test    eax, eax
 * 0000000140BD0DD2: jz      loc_140BD194B
 * 0000000140BD0DD8: lea     r14, [rsi+rax]
 * 0000000140BD0DDC: mov     r11, [r14+8]
 * 0000000140BD0DE0: mov     [rsp+9D0h+var_968], r14
 * 0000000140BD0DE5: test    r11, r11
 * 0000000140BD0DE8: jz      loc_140BD116B
 * 0000000140BD0DEE: mov     r9d, [r14+10h]
 * 0000000140BD0DF2: mov     r8, r11
 * 0000000140BD0DF5: add     [rsi+848h], r9d
 * 0000000140BD0DFC: mov     rax, r11
 * 0000000140BD0DFF: mov     r10d, [rsi+834h]
 * 0000000140BD0E06: mov     r12, [rsi+838h]
 * 0000000140BD0E0D: lea     rcx, [r11+r9]
 * 0000000140BD0E11: cmp     r11, rcx
 * 0000000140BD0E14: jnb     short loc_140BD0E26
 * 0000000140BD0E16: mov     edx, 40h ; '@'
 * 0000000140BD0E1B: prefetchnta byte ptr [rax]
 * 0000000140BD0E1E: add     rax, rdx
 * 0000000140BD0E21: cmp     rax, rcx
 * 0000000140BD0E24: jb      short loc_140BD0E1B
 * 0000000140BD0E26: mov     r15d, r9d
 * 0000000140BD0E29: mov     rbx, r12
 * 0000000140BD0E2C: shr     r15d, 7
 * 0000000140BD0E30: test    r15d, r15d
 * 0000000140BD0E33: jz      short loc_140BD0E9C
 * 0000000140BD0E35: mov     rsi, 7010008004002001h
 * 0000000140BD0E3F: mov     eax, 8
 * 0000000140BD0E44: xor     rbx, [r8]
 * 0000000140BD0E47: mov     ecx, r10d
 * 0000000140BD0E4A: rol     rbx, cl
 * 0000000140BD0E4D: xor     rbx, [r8+8]
 * 0000000140BD0E51: add     r8, 10h
 * 0000000140BD0E55: rol     rbx, cl
 * 0000000140BD0E58: sub     rax, r13
 * 0000000140BD0E5B: jnz     short loc_140BD0E44
 * 0000000140BD0E5D: mov     rcx, r8
 * 0000000140BD0E60: sub     rcx, r11
 * 0000000140BD0E63: xor     rcx, r12
 * 0000000140BD0E66: mov     rax, rcx
 * 0000000140BD0E69: rol     rax, 11h
 * 0000000140BD0E6D: xor     rcx, rax
 * 0000000140BD0E70: mov     rax, rsi
 * 0000000140BD0E73: mul     rcx
 * 0000000140BD0E76: xor     r10d, eax
 * 0000000140BD0E79: mov     [rbp+8D0h+var_488], rdx
 * 0000000140BD0E80: xor     r10d, edx
 * 0000000140BD0E83: mov     edx, 0FFFFFFFFh
 * 0000000140BD0E88: and     r10d, 3Fh
 * 0000000140BD0E8C: cmovz   r10d, r13d
 * 0000000140BD0E90: add     r15d, edx
 * 0000000140BD0E93: jnz     short loc_140BD0E3F
 * 0000000140BD0E95: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BD0E9A: jmp     short loc_140BD0EA1
 * 0000000140BD0E9C: mov     edx, 0FFFFFFFFh
 * 0000000140BD0EA1: and     r9d, 7Fh
 * 0000000140BD0EA5: cmp     r9d, 8
 * 0000000140BD0EA9: jb      short loc_140BD0EC8
 * 0000000140BD0EAB: mov     eax, r9d
 * 0000000140BD0EAE: shr     rax, 3
 * 0000000140BD0EB2: xor     rbx, [r8]
 * 0000000140BD0EB5: mov     ecx, r10d
 * 0000000140BD0EB8: rol     rbx, cl
 * 0000000140BD0EBB: add     r8, 8
 * 0000000140BD0EBF: add     r9d, 0FFFFFFF8h
 * 0000000140BD0EC3: sub     rax, r13
 * 0000000140BD0EC6: jnz     short loc_140BD0EB2
 * 0000000140BD0EC8: xor     r15d, r15d
 * 0000000140BD0ECB: test    r9d, r9d
 * 0000000140BD0ECE: jz      short loc_140BD0EE5
 * 0000000140BD0ED0: movzx   eax, byte ptr [r8]
 * 0000000140BD0ED4: mov     ecx, r10d
 * 0000000140BD0ED7: xor     rbx, rax
 * 0000000140BD0EDA: add     r8, r13
 * 0000000140BD0EDD: rol     rbx, cl
 * 0000000140BD0EE0: add     r9d, edx
 * 0000000140BD0EE3: jnz     short loc_140BD0ED0
 * 0000000140BD0EE5: mov     rax, rbx
 * 0000000140BD0EE8: jmp     short loc_140BD0EEC
 * 0000000140BD0EEA: xor     ebx, eax
 * 0000000140BD0EEC: shr     rax, 1Fh
 * 0000000140BD0EF0: test    rax, rax
 * 0000000140BD0EF3: jnz     short loc_140BD0EEA
 * 0000000140BD0EF5: btr     ebx, 1Fh
 * 0000000140BD0EF9: mov     r12d, r15d
 * 0000000140BD0EFC: cmp     ebx, [r14+14h]
 * 0000000140BD0F00: jz      loc_140BD1128
 * 0000000140BD0F06: cmp     [r14], r15d
 * 0000000140BD0F09: jnz     short loc_140BD0F13
 * 0000000140BD0F0B: cmp     [r14+18h], r15d
 * 0000000140BD0F0F: cmovnz  r12d, r13d
 * 0000000140BD0F13: mov     ecx, [r14+10h]
 * 0000000140BD0F17: mov     rdx, [r14+8]
 * 0000000140BD0F1B: test    rcx, rcx
 * 0000000140BD0F1E: jz      loc_140BD0FEA
 * 0000000140BD0F24: mov     eax, [rsi+9DCh]
 * 0000000140BD0F2A: mov     r8d, 40h ; '@'
 * 0000000140BD0F30: test    r8b, al
 * 0000000140BD0F33: jz      loc_140BD0FEA
 * 0000000140BD0F39: mov     r13, cr8
 * 0000000140BD0F3D: lea     eax, [r8-3Eh]
 * 0000000140BD0F41: mov     cr8, rax
 * 0000000140BD0F45: mov     r15, rdx
 * 0000000140BD0F48: lea     rax, [rcx-1]
 * 0000000140BD0F4C: and     r15, 0FFFFFFFFFFFFF000h
 * 0000000140BD0F53: add     rax, rdx
 * 0000000140BD0F56: or      rax, 0FFFh
 * 0000000140BD0F5C: mov     [rbp+8D0h+var_950], rax
 * 0000000140BD0F60: lea     rax, [r15-1]
 * 0000000140BD0F64: mov     [rbp+8D0h+arg_8], rax
 * 0000000140BD0F6B: mov     rax, [rsi+468h]
 * 0000000140BD0F72: xor     edx, edx
 * 0000000140BD0F74: mov     rcx, r15
 * 0000000140BD0F77: call    KeGuardDispatchICall
 * 0000000140BD0F7C: cmp     eax, 0C000022Dh
 * 0000000140BD0F81: jnz     short loc_140BD0FAC
 * 0000000140BD0F83: test    r12d, r12d
 * 0000000140BD0F86: jnz     short loc_140BD0FDF
 * 0000000140BD0F88: lea     eax, [r12+1]
 * 0000000140BD0F8D: cmp     r13b, al
 * 0000000140BD0F90: ja      short loc_140BD0FB0
 * 0000000140BD0F92: movzx   eax, r13b
 * 0000000140BD0F96: mov     cr8, rax
 * 0000000140BD0F9A: mov     al, [r15]
 * 0000000140BD0F9D: mov     rax, cr8
 * 0000000140BD0FA1: lea     eax, [r12+2]
 * 0000000140BD0FA6: mov     cr8, rax
 * 0000000140BD0FAA: jmp     short loc_140BD0F6B
 * 0000000140BD0FAC: test    eax, eax
 * 0000000140BD0FAE: js      short loc_140BD0FDF
 * 0000000140BD0FB0: mov     rax, [rbp+8D0h+arg_8]
 * 0000000140BD0FB7: mov     ecx, 1000h
 * 0000000140BD0FBC: add     rax, rcx
 * 0000000140BD0FBF: add     r15, rcx
 * 0000000140BD0FC2: mov     [rbp+8D0h+arg_8], rax
 * 0000000140BD0FC9: cmp     rax, [rbp+8D0h+var_950]
 * 0000000140BD0FCD: jnz     short loc_140BD0F6B
 * 0000000140BD0FCF: movzx   eax, r13b
 * 0000000140BD0FD3: mov     cr8, rax
 * 0000000140BD0FD7: xor     r15d, r15d
 * 0000000140BD0FDA: jmp     loc_140BD1128
 * 0000000140BD0FDF: movzx   eax, r13b
 * 0000000140BD0FE3: mov     cr8, rax
 * 0000000140BD0FE7: xor     r15d, r15d
 * 0000000140BD0FEA: mov     eax, [r14+14h]
 * 0000000140BD0FEE: cmp     [rsi+918h], r15d
 * 0000000140BD0FF5: jnz     short loc_140BD1007
 * 0000000140BD0FF7: mov     ecx, ebx
 * 0000000140BD0FF9: xor     rcx, rax
 * 0000000140BD0FFC: mov     rax, [rsi+588h]
 * 0000000140BD1003: mov     [rax+18h], rcx
 * 0000000140BD1007: mov     rcx, [r14+8]
 * 0000000140BD100B: cmp     [rsi+918h], r15d
 * 0000000140BD1012: jnz     loc_140BD1128
 * 0000000140BD1018: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BD1022: mov     edx, 1
 * 0000000140BD1027: add     rax, rsi
 * 0000000140BD102A: mov     [rsi+920h], rax
 * 0000000140BD1031: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BD103B: add     rax, r14
 * 0000000140BD103E: mov     [rsi+928h], rax
 * 0000000140BD1045: movsxd  rax, dword ptr [r14]
 * 0000000140BD1048: mov     [rsi+930h], rax
 * 0000000140BD104F: mov     [rsi+938h], rcx
 * 0000000140BD1056: mov     [rsi+918h], edx
 * 0000000140BD105C: mov     ecx, [rsi+9D8h]
 * 0000000140BD1062: bt      ecx, 1Dh
 * 0000000140BD1066: jb      loc_140BD1128
 * 0000000140BD106C: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BD1076: jz      loc_140BD1128
 * 0000000140BD107C: test    dl, cl
 * 0000000140BD107E: jz      loc_140BD1128
 * 0000000140BD1084: mov     ecx, [rsi+0A74h]
 * 0000000140BD108A: mov     eax, [rsi+804h]
 * 0000000140BD1090: mov     r10, [rsi+838h]
 * 0000000140BD1097: sub     eax, ecx
 * 0000000140BD1099: mov     r8, [rsi+0A78h]
 * 0000000140BD10A0: lea     rdx, [rcx+rsi]
 * 0000000140BD10A4: mov     ecx, eax
 * 0000000140BD10A6: shr     rcx, 3
 * 0000000140BD10AA: lea     r9, [rdx+rcx*8]
 * 0000000140BD10AE: jmp     short loc_140BD10D1
 * 0000000140BD10B0: xor     [rdx], r8
 * 0000000140BD10B3: mov     rax, [rdx]
 * 0000000140BD10B6: movzx   ecx, r8b
 * 0000000140BD10BA: xor     rax, r10
 * 0000000140BD10BD: and     ecx, 3Fh
 * 0000000140BD10C0: ror     r8, cl
 * 0000000140BD10C3: add     r8, rax
 * 0000000140BD10C6: xor     r8, 0EFAh
 * 0000000140BD10CD: add     rdx, 8
 * 0000000140BD10D1: cmp     rdx, r9
 * 0000000140BD10D4: jnz     short loc_140BD10B0
 * 0000000140BD10D6: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BD10DE: cmp     r8, [rsi+0A80h]
 * 0000000140BD10E5: jz      short loc_140BD1128
 * 0000000140BD10E7: mov     ecx, [rsi+804h]
 * 0000000140BD10ED: mov     rax, [rsi+588h]
 * 0000000140BD10F4: mov     [rax], rsi
 * 0000000140BD10F7: mov     [rax+10h], ecx
 * 0000000140BD10FA: mov     rcx, [rsi+0A80h]
 * 0000000140BD1101: cmp     [rsi+918h], r15d
 * 0000000140BD1108: jnz     short loc_140BD1118
 * 0000000140BD110A: mov     rax, [rsi+588h]
 * 0000000140BD1111: xor     rcx, r8
 * 0000000140BD1114: mov     [rax+18h], rcx
 * 0000000140BD1118: xor     edx, edx
 * 0000000140BD111A: mov     r9d, 100h
 * 0000000140BD1120: mov     rcx, rsi
 * 0000000140BD1123: call    sub_140BD8384
 * 0000000140BD1128: mov     rcx, [r14+18h]
 * 0000000140BD112C: mov     rax, [rsi+108h]
 * 0000000140BD1133: call    KeGuardDispatchICall
 * 0000000140BD1138: mov     [r14+8], r15
 * 0000000140BD113C: mov     [r14+10h], r15d
 * 0000000140BD1140: mov     eax, [rsi+848h]
 * 0000000140BD1146: mov     [rsi+848h], eax
 * 0000000140BD114C: mov     rcx, [rsi+838h]
 * 0000000140BD1153: mov     rax, rcx
 * 0000000140BD1156: jmp     short loc_140BD115A
 * 0000000140BD1158: xor     ecx, eax
 * 0000000140BD115A: shr     rax, 1Fh
 * 0000000140BD115E: test    rax, rax
 * 0000000140BD1161: jnz     short loc_140BD1158
 * 0000000140BD1163: btr     ecx, 1Fh
 * 0000000140BD1167: mov     [r14+14h], ecx
 * 0000000140BD116B: rdtsc
 * 0000000140BD116D: shl     rdx, 20h
 * 0000000140BD1171: mov     r8, 7010008004002001h
 * 0000000140BD117B: or      rax, rdx
 * 0000000140BD117E: mov     rcx, rax
 * 0000000140BD1181: ror     rax, 3
 * 0000000140BD1185: xor     rcx, rax
 * 0000000140BD1188: mov     rax, r8
 * 0000000140BD118B: mul     rcx
 * 0000000140BD118E: mov     rcx, rdx
 * 0000000140BD1191: mov     [rbp+8D0h+var_480], rdx
 * 0000000140BD1198: xor     rcx, rax
 * 0000000140BD119B: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140BD11A5: mul     rcx
 * 0000000140BD11A8: shr     rdx, 1
 * 0000000140BD11AB: lea     rax, [rdx+rdx*2]
 * 0000000140BD11AF: cmp     rcx, rax
 * 0000000140BD11B2: jnz     loc_140BD1CE8
 * 0000000140BD11B8: lea     r12, [r14+18h]
 * 0000000140BD11BC: rdtsc
 * 0000000140BD11BE: shl     rdx, 20h
 * 0000000140BD11C2: or      rax, rdx
 * 0000000140BD11C5: mov     rcx, rax
 * 0000000140BD11C8: ror     rax, 3
 * 0000000140BD11CC: xor     rcx, rax
 * 0000000140BD11CF: mov     rax, r8
 * 0000000140BD11D2: mul     rcx
 * 0000000140BD11D5: mov     rbx, rdx
 * 0000000140BD11D8: mov     [rbp+8D0h+var_478], rdx
 * 0000000140BD11DF: xor     ebx, eax
 * 0000000140BD11E1: and     ebx, 7FFh
 * 0000000140BD11E7: rdtsc
 * 0000000140BD11E9: shl     rdx, 20h
 * 0000000140BD11ED: or      rax, rdx
 * 0000000140BD11F0: mov     rcx, rax
 * 0000000140BD11F3: ror     rax, 3
 * 0000000140BD11F7: xor     rcx, rax
 * 0000000140BD11FA: mov     rax, r8
 * 0000000140BD11FD: mul     rcx
 * 0000000140BD1200: lea     r8d, [rbx+1]
 * 0000000140BD1204: xor     rax, rdx
 * 0000000140BD1207: mov     [rbp+8D0h+var_470], rdx
 * 0000000140BD120E: xor     edx, edx
 * 0000000140BD1210: div     r8
 * 0000000140BD1213: mov     eax, [rsi+9D8h]
 * 0000000140BD1219: mov     r8d, [rsi+830h]
 * 0000000140BD1220: and     eax, 8000000h
 * 0000000140BD1225: neg     eax
 * 0000000140BD1227: mov     r15, rdx
 * 0000000140BD122A: mov     rax, [rsi+100h]
 * 0000000140BD1231: lea     edx, [rbx+0AE8h]
 * 0000000140BD1237: sbb     rcx, rcx
 * 0000000140BD123A: and     rcx, 0FFFFFFFFFFFFFFC0h
 * 0000000140BD123E: add     rcx, 82h
 * 0000000140BD1245: call    KeGuardDispatchICall
 * 0000000140BD124A: mov     r11, rax
 * 0000000140BD124D: test    rax, rax
 * 0000000140BD1250: jnz     short loc_140BD1260
 * 0000000140BD1252: lea     ebx, [rax+1]
 * 0000000140BD1255: add     [rsi+0A60h], ebx
 * 0000000140BD125B: jmp     loc_140BD1953
 * 0000000140BD1260: mov     r9d, r15d
 * 0000000140BD1263: mov     r8, r11
 * 0000000140BD1266: cmp     r15d, 8
 * 0000000140BD126A: jb      short loc_140BD12BE
 * 0000000140BD126C: mov     r10d, r15d
 * 0000000140BD126F: mov     esi, 1
 * 0000000140BD1274: shr     r10, 3
 * 0000000140BD1278: mov     r12, 7010008004002001h
 * 0000000140BD1282: rdtsc
 * 0000000140BD1284: shl     rdx, 20h
 * 0000000140BD1288: add     r9d, 0FFFFFFF8h
 * 0000000140BD128C: or      rax, rdx
 * 0000000140BD128F: mov     rcx, rax
 * 0000000140BD1292: ror     rax, 3
 * 0000000140BD1296: xor     rcx, rax
 * 0000000140BD1299: mov     rax, r12
 * 0000000140BD129C: mul     rcx
 * 0000000140BD129F: mov     [rbp+8D0h+var_468], rdx
 * 0000000140BD12A6: xor     rdx, rax
 * 0000000140BD12A9: mov     [r8], rdx
 * 0000000140BD12AC: add     r8, 8
 * 0000000140BD12B0: sub     r10, rsi
 * 0000000140BD12B3: jnz     short loc_140BD1282
 * 0000000140BD12B5: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BD12BA: lea     r12, [r14+18h]
 * 0000000140BD12BE: mov     r10d, 1
 * 0000000140BD12C4: test    r9d, r9d
 * 0000000140BD12C7: jz      short loc_140BD1307
 * 0000000140BD12C9: rdtsc
 * 0000000140BD12CB: shl     rdx, 20h
 * 0000000140BD12CF: or      rax, rdx
 * 0000000140BD12D2: mov     rcx, rax
 * 0000000140BD12D5: ror     rax, 3
 * 0000000140BD12D9: xor     rcx, rax
 * 0000000140BD12DC: mov     rax, 7010008004002001h
 * 0000000140BD12E6: mul     rcx
 * 0000000140BD12E9: mov     [rbp+8D0h+var_460], rdx
 * 0000000140BD12F0: xor     rdx, rax
 * 0000000140BD12F3: mov     eax, 0FFFFFFFFh
 * 0000000140BD12F8: mov     [r8], dl
 * 0000000140BD12FB: add     r8, r10
 * 0000000140BD12FE: shr     rdx, 8
 * 0000000140BD1302: add     r9d, eax
 * 0000000140BD1305: jnz     short loc_140BD12F8
 * 0000000140BD1307: mov     r8d, r15d
 * 0000000140BD130A: sub     ebx, r15d
 * 0000000140BD130D: add     r8, 0AE8h
 * 0000000140BD1314: add     r8, r11
 * 0000000140BD1317: cmp     ebx, 8
 * 0000000140BD131A: jb      short loc_140BD1364
 * 0000000140BD131C: mov     r9d, ebx
 * 0000000140BD131F: mov     r14, 7010008004002001h
 * 0000000140BD1329: shr     r9, 3
 * 0000000140BD132D: rdtsc
 * 0000000140BD132F: shl     rdx, 20h
 * 0000000140BD1333: add     ebx, 0FFFFFFF8h
 * 0000000140BD1336: or      rax, rdx
 * 0000000140BD1339: mov     rcx, rax
 * 0000000140BD133C: ror     rax, 3
 * 0000000140BD1340: xor     rcx, rax
 * 0000000140BD1343: mov     rax, r14
 * 0000000140BD1346: mul     rcx
 * 0000000140BD1349: mov     [rbp+8D0h+var_458], rdx
 * 0000000140BD1350: xor     rdx, rax
 * 0000000140BD1353: mov     [r8], rdx
 * 0000000140BD1356: add     r8, 8
 * 0000000140BD135A: sub     r9, r10
 * 0000000140BD135D: jnz     short loc_140BD132D
 * 0000000140BD135F: mov     r14, [rsp+9D0h+var_968]
 * 0000000140BD1364: test    ebx, ebx
 * 0000000140BD1366: jz      short loc_140BD13A5
 * 0000000140BD1368: rdtsc
 * 0000000140BD136A: shl     rdx, 20h
 * 0000000140BD136E: or      rax, rdx
 * 0000000140BD1371: mov     rcx, rax
 * 0000000140BD1374: ror     rax, 3
 * 0000000140BD1378: xor     rcx, rax
 * 0000000140BD137B: mov     rax, 7010008004002001h
 * 0000000140BD1385: mul     rcx
 * 0000000140BD1388: mov     [rbp+8D0h+var_450], rdx
 * 0000000140BD138F: xor     rdx, rax
 * 0000000140BD1392: mov     eax, 0FFFFFFFFh
 * 0000000140BD1397: mov     [r8], dl
 * 0000000140BD139A: add     r8, r10
 * 0000000140BD139D: shr     rdx, 8
 * 0000000140BD13A1: add     ebx, eax
 * 0000000140BD13A3: jnz     short loc_140BD1397
 * 0000000140BD13A5: test    r12, r12
 * 0000000140BD13A8: jz      short loc_140BD13AE
 * 0000000140BD13AA: mov     [r12], r11
 * 0000000140BD13AE: mov     ecx, r15d
 * 0000000140BD13B1: add     rcx, r11
 * 0000000140BD13B4: xor     r11d, r11d
 * 0000000140BD13B7: test    rcx, rcx
 * 0000000140BD13BA: jz      loc_140BD194E
 * 0000000140BD13C0: mov     r10d, 0AE8h
 * 0000000140BD13C6: mov     [r14+8], rcx
 * 0000000140BD13CA: mov     rdx, rsi
 * 0000000140BD13CD: mov     [r14+10h], r10d
 * 0000000140BD13D1: mov     r8d, r10d
 * 0000000140BD13D4: lea     r12d, [r11+1]
 * 0000000140BD13D8: mov     r9, rcx
 * 0000000140BD13DB: mov     esi, 15Dh
 * 0000000140BD13E0: mov     rax, [rdx]
 * 0000000140BD13E3: add     r8d, 0FFFFFFF8h
 * 0000000140BD13E7: mov     [rcx], rax
 * 0000000140BD13EA: add     rdx, 8
 * 0000000140BD13EE: add     rcx, 8
 * 0000000140BD13F2: sub     rsi, r12
 * 0000000140BD13F5: jnz     short loc_140BD13E0
 * 0000000140BD13F7: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BD13FC: test    r8d, r8d
 * 0000000140BD13FF: jz      short loc_140BD1416
 * 0000000140BD1401: mov     r14d, 0FFFFFFFFh
 * 0000000140BD1407: mov     al, [rdx]
 * 0000000140BD1409: add     rdx, r12
 * 0000000140BD140C: mov     [rcx], al
 * 0000000140BD140E: add     rcx, r12
 * 0000000140BD1411: add     r8d, r14d
 * 0000000140BD1414: jnz     short loc_140BD1407
 * 0000000140BD1416: mov     r13d, [r9+9D8h]
 * 0000000140BD141D: mov     r14, 7010008004002001h
 * 0000000140BD1427: bts     r13d, 12h
 * 0000000140BD142C: mov     [r9+9D8h], r13d
 * 0000000140BD1433: and     r13d, 0FFFFFFFEh
 * 0000000140BD1437: mov     [r9+804h], r10d
 * 0000000140BD143E: mov     [r9+828h], r10d
 * 0000000140BD1445: mov     [r9+9D8h], r13d
 * 0000000140BD144C: mov     [r9+0A74h], r10d
 * 0000000140BD1453: mov     eax, [r9+97Ch]
 * 0000000140BD145A: mov     dword ptr [rsp+9D0h+var_960], eax
 * 0000000140BD145E: mov     rax, [r9+4E0h]
 * 0000000140BD1465: mov     [rbp+8D0h+var_8D8], rax
 * 0000000140BD1469: mov     rax, [r9+5B8h]
 * 0000000140BD1470: mov     [rbp+8D0h+var_8F0], rax
 * 0000000140BD1474: mov     dword ptr [r9+0C4h], 144h
 * 0000000140BD147F: rdtsc
 * 0000000140BD1481: shl     rdx, 20h
 * 0000000140BD1485: or      rax, rdx
 * 0000000140BD1488: mov     rcx, rax
 * 0000000140BD148B: ror     rax, 3
 * 0000000140BD148F: xor     rcx, rax
 * 0000000140BD1492: mov     rax, r14
 * 0000000140BD1495: mul     rcx
 * 0000000140BD1498: mov     r15, rdx
 * 0000000140BD149B: mov     [rbp+8D0h+var_448], rdx
 * 0000000140BD14A2: xor     r15, rax
 * 0000000140BD14A5: jz      short loc_140BD147F
 * 0000000140BD14A7: mov     rax, [r9+7D8h]
 * 0000000140BD14AE: lea     rcx, [r9+7B8h]
 * 0000000140BD14B5: mov     r14, [rsp+9D0h+var_968]
 * 0000000140BD14BA: lea     rdx, [rbp+8D0h+var_128]
 * 0000000140BD14C1: mov     r11d, 20h ; ' '
 * 0000000140BD14C7: mov     [rbp+8D0h+var_8D0], rax
 * 0000000140BD14CB: mov     eax, [r9+848h]
 * 0000000140BD14D2: mov     r8d, r11d
 * 0000000140BD14D5: mov     dword ptr [rbp+8D0h+arg_8], eax
 * 0000000140BD14DB: lea     ebx, [r11-1Ch]
 * 0000000140BD14DF: mov     r10d, ebx
 * 0000000140BD14E2: mov     rax, [rcx]
 * 0000000140BD14E5: add     r8d, 0FFFFFFF8h
 * 0000000140BD14E9: mov     [rdx], rax
 * 0000000140BD14EC: add     rcx, 8
 * 0000000140BD14F0: add     rdx, 8
 * 0000000140BD14F4: sub     r10, r12
 * 0000000140BD14F7: jnz     short loc_140BD14E2
 * 0000000140BD14F9: test    r8d, r8d
 * 0000000140BD14FC: jz      short loc_140BD1517
 * 0000000140BD14FE: mov     esi, 0FFFFFFFFh
 * 0000000140BD1503: mov     al, [rcx]
 * 0000000140BD1505: add     rcx, r12
 * 0000000140BD1508: mov     [rdx], al
 * 0000000140BD150A: add     rdx, r12
 * 0000000140BD150D: add     r8d, esi
 * 0000000140BD1510: jnz     short loc_140BD1503
 * 0000000140BD1512: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BD1517: mov     [r9+7D8h], r10
 * 0000000140BD151E: lea     rax, [r9+7B8h]
 * 0000000140BD1525: mov     [r9+848h], r10d
 * 0000000140BD152C: mov     ecx, r11d
 * 0000000140BD152F: mov     rdx, rbx
 * 0000000140BD1532: mov     [rax], r10
 * 0000000140BD1535: add     ecx, 0FFFFFFF8h
 * 0000000140BD1538: add     rax, 8
 * 0000000140BD153C: sub     rdx, r12
 * 0000000140BD153F: jnz     short loc_140BD1532
 * 0000000140BD1541: test    ecx, ecx
 * 0000000140BD1543: jz      short loc_140BD1554
 * 0000000140BD1545: mov     edx, 0FFFFFFFFh
 * 0000000140BD154A: mov     [rax], r10b
 * 0000000140BD154D: add     rax, r12
 * 0000000140BD1550: add     ecx, edx
 * 0000000140BD1552: jnz     short loc_140BD154A
 * 0000000140BD1554: mov     r11d, [r9+804h]
 * 0000000140BD155B: mov     r10, r9
 * 0000000140BD155E: add     [r9+848h], r11d
 * 0000000140BD1565: mov     rax, r9
 * 0000000140BD1568: mov     ebx, [r9+834h]
 * 0000000140BD156F: mov     r8, [r9+838h]
 * 0000000140BD1576: lea     rcx, [r9+r11]
 * 0000000140BD157A: cmp     r9, rcx
 * 0000000140BD157D: jnb     short loc_140BD158F
 * 0000000140BD157F: mov     edx, 40h ; '@'
 * 0000000140BD1584: prefetchnta byte ptr [rax]
 * 0000000140BD1587: add     rax, rdx
 * 0000000140BD158A: cmp     rax, rcx
 * 0000000140BD158D: jb      short loc_140BD1584
 * 0000000140BD158F: mov     r12d, r11d
 * 0000000140BD1592: mov     edx, 1
 * 0000000140BD1597: shr     r12d, 7
 * 0000000140BD159B: test    r12d, r12d
 * 0000000140BD159E: jz      short loc_140BD1615
 * 0000000140BD15A0: mov     rdi, r8
 * 0000000140BD15A3: mov     rsi, 7010008004002001h
 * 0000000140BD15AD: mov     r14d, 0FFFFFFFFh
 * 0000000140BD15B3: mov     eax, 8
 * 0000000140BD15B8: xor     r8, [r10]
 * 0000000140BD15BB: mov     ecx, ebx
 * 0000000140BD15BD: rol     r8, cl
 * 0000000140BD15C0: xor     r8, [r10+8]
 * 0000000140BD15C4: add     r10, 10h
 * 0000000140BD15C8: rol     r8, cl
 * 0000000140BD15CB: sub     rax, rdx
 * 0000000140BD15CE: jnz     short loc_140BD15B8
 * 0000000140BD15D0: mov     rcx, r10
 * 0000000140BD15D3: sub     rcx, r9
 * 0000000140BD15D6: xor     rcx, rdi
 * 0000000140BD15D9: mov     rax, rcx
 * 0000000140BD15DC: rol     rax, 11h
 * 0000000140BD15E0: xor     rcx, rax
 * 0000000140BD15E3: mov     rax, rsi
 * 0000000140BD15E6: mul     rcx
 * 0000000140BD15E9: xor     ebx, edx
 * 0000000140BD15EB: mov     [rbp+8D0h+var_440], rdx
 * 0000000140BD15F2: xor     ebx, eax
 * 0000000140BD15F4: mov     edx, 1
 * 0000000140BD15F9: and     ebx, 3Fh
 * 0000000140BD15FC: cmovz   ebx, edx
 * 0000000140BD15FF: add     r12d, r14d
 * 0000000140BD1602: jnz     short loc_140BD15B3
 * 0000000140BD1604: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BD1609: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BD1610: mov     r14, [rsp+9D0h+var_968]
 * 0000000140BD1615: and     r11d, 7Fh
 * 0000000140BD1619: cmp     r11d, 8
 * 0000000140BD161D: jb      short loc_140BD163B
 * 0000000140BD161F: mov     eax, r11d
 * 0000000140BD1622: shr     rax, 3
 * 0000000140BD1626: xor     r8, [r10]
 * 0000000140BD1629: mov     ecx, ebx
 * 0000000140BD162B: rol     r8, cl
 * 0000000140BD162E: add     r10, 8
 * 0000000140BD1632: add     r11d, 0FFFFFFF8h
 * 0000000140BD1636: sub     rax, rdx
 * 0000000140BD1639: jnz     short loc_140BD1626
 * 0000000140BD163B: xor     r12d, r12d
 * 0000000140BD163E: test    r11d, r11d
 * 0000000140BD1641: jz      short loc_140BD1661
 * 0000000140BD1643: mov     esi, 0FFFFFFFFh
 * 0000000140BD1648: movzx   eax, byte ptr [r10]
 * 0000000140BD164C: mov     ecx, ebx
 * 0000000140BD164E: xor     r8, rax
 * 0000000140BD1651: add     r10, rdx
 * 0000000140BD1654: rol     r8, cl
 * 0000000140BD1657: add     r11d, esi
 * 0000000140BD165A: jnz     short loc_140BD1648
 * 0000000140BD165C: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BD1661: mov     ecx, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BD1667: lea     rdx, [r9+7B8h]
 * 0000000140BD166E: mov     rax, [rbp+8D0h+var_8D0]
 * 0000000140BD1672: mov     r10d, 20h ; ' '
 * 0000000140BD1678: mov     [r9+7D8h], rax
 * 0000000140BD167F: add     [r9+848h], ecx
 * 0000000140BD1686: lea     rcx, [rbp+8D0h+var_128]
 * 0000000140BD168D: lea     ebx, [r10-1Fh]
 * 0000000140BD1691: lea     r11d, [r10-1Ch]
 * 0000000140BD1695: mov     rax, [rcx]
 * 0000000140BD1698: add     r10d, 0FFFFFFF8h
 * 0000000140BD169C: mov     [rdx], rax
 * 0000000140BD169F: add     rcx, 8
 * 0000000140BD16A3: add     rdx, 8
 * 0000000140BD16A7: sub     r11, rbx
 * 0000000140BD16AA: jnz     short loc_140BD1695
 * 0000000140BD16AC: test    r10d, r10d
 * 0000000140BD16AF: jz      short loc_140BD16CB
 * 0000000140BD16B1: mov     r14d, 0FFFFFFFFh
 * 0000000140BD16B7: mov     al, [rcx]
 * 0000000140BD16B9: add     rcx, rbx
 * 0000000140BD16BC: mov     [rdx], al
 * 0000000140BD16BE: add     rdx, rbx
 * 0000000140BD16C1: add     r10d, r14d
 * 0000000140BD16C4: jnz     short loc_140BD16B7
 * 0000000140BD16C6: mov     r14, [rsp+9D0h+var_968]
 * 0000000140BD16CB: mov     [r9+7D8h], r8
 * 0000000140BD16D2: test    dword ptr [r9+9D8h], 20000000h
 * 0000000140BD16DD: jnz     loc_140BD181E
 * 0000000140BD16E3: mov     rax, r9
 * 0000000140BD16E6: mov     ecx, r12d
 * 0000000140BD16E9: xor     [rax], r15
 * 0000000140BD16EC: add     ecx, ebx
 * 0000000140BD16EE: add     rax, 8
 * 0000000140BD16F2: cmp     ecx, 19h
 * 0000000140BD16F5: jb      short loc_140BD16E9
 * 0000000140BD16F7: add     rax, 0A18h
 * 0000000140BD16FD: mov     ecx, 144h
 * 0000000140BD1702: xor     [rax], r15
 * 0000000140BD1705: lea     rdx, [rbp+8D0h+var_798]
 * 0000000140BD170C: ror     r15, cl
 * 0000000140BD170F: lea     rax, [rax-8]
 * 0000000140BD1713: mov     [rbp+8D0h+var_798], r15
 * 0000000140BD171A: and     r15d, 3Fh
 * 0000000140BD171E: btc     [rdx], r15
 * 0000000140BD1722: sub     ecx, ebx
 * 0000000140BD1724: jz      short loc_140BD172F
 * 0000000140BD1726: mov     r15, [rbp+8D0h+var_798]
 * 0000000140BD172D: jmp     short loc_140BD1702
 * 0000000140BD172F: rdtsc
 * 0000000140BD1731: shl     rdx, 20h
 * 0000000140BD1735: or      rax, rdx
 * 0000000140BD1738: mov     rcx, rax
 * 0000000140BD173B: ror     rax, 3
 * 0000000140BD173F: xor     rcx, rax
 * 0000000140BD1742: mov     rax, 7010008004002001h
 * 0000000140BD174C: mul     rcx
 * 0000000140BD174F: mov     rcx, rdx
 * 0000000140BD1752: mov     [rbp+8D0h+var_438], rdx
 * 0000000140BD1759: xor     rcx, rax
 * 0000000140BD175C: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140BD1766: mul     rcx
 * 0000000140BD1769: shr     rdx, 1
 * 0000000140BD176C: lea     rax, [rdx+rdx*2]
 * 0000000140BD1770: cmp     rcx, rax
 * 0000000140BD1773: jnz     loc_140BD181E
 * 0000000140BD1779: mov     r15d, dword ptr [rsp+9D0h+var_960]
 * 0000000140BD177E: mov     ecx, r9d
 * 0000000140BD1781: mov     rdi, [rbp+8D0h+var_8D8]
 * 0000000140BD1785: mov     r10, r9
 * 0000000140BD1788: mov     r11d, r12d
 * 0000000140BD178B: ror     r10, cl
 * 0000000140BD178E: mov     r12, [rbp+8D0h+var_8F0]
 * 0000000140BD1792: mov     rbx, r9
 * 0000000140BD1795: mov     r14d, 1
 * 0000000140BD179B: mov     eax, r11d
 * 0000000140BD179E: add     rax, rbx
 * 0000000140BD17A1: sub     [r9], rax
 * 0000000140BD17A4: mov     rcx, [r9]
 * 0000000140BD17A7: bt      r13d, 8
 * 0000000140BD17AC: jb      short loc_140BD17C5
 * 0000000140BD17AE: mov     rax, rdi
 * 0000000140BD17B1: xor     rax, rcx
 * 0000000140BD17B4: mov     ecx, r12d
 * 0000000140BD17B7: bswap   rax
 * 0000000140BD17BA: xor     rax, r10
 * 0000000140BD17BD: ror     rax, cl
 * 0000000140BD17C0: xor     rax, r12
 * 0000000140BD17C3: jmp     short loc_140BD17CB
 * 0000000140BD17C5: mov     rax, r10
 * 0000000140BD17C8: xor     rax, rcx
 * 0000000140BD17CB: mov     rcx, r9
 * 0000000140BD17CE: mov     edx, 0C8h
 * 0000000140BD17D3: sub     edx, r11d
 * 0000000140BD17D6: mov     [rcx], rax
 * 0000000140BD17D9: mov     ecx, [r9]
 * 0000000140BD17DC: mov     r8d, ecx
 * 0000000140BD17DF: mov     eax, r11d
 * 0000000140BD17E2: not     ecx
 * 0000000140BD17E4: xor     rdx, rax
 * 0000000140BD17E7: xor     r8d, 0EFAh
 * 0000000140BD17EE: ror     rdx, cl
 * 0000000140BD17F1: add     r9, 8
 * 0000000140BD17F5: xor     r10, rdx
 * 0000000140BD17F8: mov     cl, r8b
 * 0000000140BD17FB: rol     r10, cl
 * 0000000140BD17FE: add     r11d, r14d
 * 0000000140BD1801: add     r10, rbx
 * 0000000140BD1804: xor     r10, r15
 * 0000000140BD1807: cmp     r11d, 19h
 * 0000000140BD180B: jb      short loc_140BD179B
 * 0000000140BD180D: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BD1812: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BD1819: mov     r14, [rsp+9D0h+var_968]
 * 0000000140BD181E: mov     r15, [r14+8]
 * 0000000140BD1822: mov     r10d, [r14+10h]
 * 0000000140BD1826: mov     r9, r15
 * 0000000140BD1829: add     [rsi+848h], r10d
 * 0000000140BD1830: mov     rax, r15
 * 0000000140BD1833: mov     r11d, [rsi+834h]
 * 0000000140BD183A: mov     r12, [rsi+838h]
 * 0000000140BD1841: lea     rcx, [r15+r10]
 * 0000000140BD1845: cmp     r15, rcx
 * 0000000140BD1848: jnb     short loc_140BD185A
 * 0000000140BD184A: mov     edx, 40h ; '@'
 * 0000000140BD184F: prefetchnta byte ptr [rax]
 * 0000000140BD1852: add     rax, rdx
 * 0000000140BD1855: cmp     rax, rcx
 * 0000000140BD1858: jb      short loc_140BD184F
 * 0000000140BD185A: mov     ebx, r10d
 * 0000000140BD185D: mov     r8, r12
 * 0000000140BD1860: shr     ebx, 7
 * 0000000140BD1863: test    ebx, ebx
 * 0000000140BD1865: jz      short loc_140BD18D8
 * 0000000140BD1867: mov     rsi, 7010008004002001h
 * 0000000140BD1871: mov     r13d, 1
 * 0000000140BD1877: mov     r14d, 0FFFFFFFFh
 * 0000000140BD187D: mov     eax, 8
 * 0000000140BD1882: xor     r8, [r9]
 * 0000000140BD1885: mov     ecx, r11d
 * 0000000140BD1888: rol     r8, cl
 * 0000000140BD188B: xor     r8, [r9+8]
 * 0000000140BD188F: add     r9, 10h
 * 0000000140BD1893: rol     r8, cl
 * 0000000140BD1896: sub     rax, r13
 * 0000000140BD1899: jnz     short loc_140BD1882
 * 0000000140BD189B: mov     rcx, r9
 * 0000000140BD189E: sub     rcx, r15
 * 0000000140BD18A1: xor     rcx, r12
 * 0000000140BD18A4: mov     rax, rcx
 * 0000000140BD18A7: rol     rax, 11h
 * 0000000140BD18AB: xor     rcx, rax
 * 0000000140BD18AE: mov     rax, rsi
 * 0000000140BD18B1: mul     rcx
 * 0000000140BD18B4: xor     r11d, edx
 * 0000000140BD18B7: mov     [rbp+8D0h+var_430], rdx
 * 0000000140BD18BE: xor     r11d, eax
 * 0000000140BD18C1: and     r11d, 3Fh
 * 0000000140BD18C5: cmovz   r11d, r13d
 * 0000000140BD18C9: add     ebx, r14d
 * 0000000140BD18CC: jnz     short loc_140BD187D
 * 0000000140BD18CE: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BD18D3: mov     r14, [rsp+9D0h+var_968]
 * 0000000140BD18D8: and     r10d, 7Fh
 * 0000000140BD18DC: mov     ebx, 1
 * 0000000140BD18E1: cmp     r10d, 8
 * 0000000140BD18E5: jb      short loc_140BD1904
 * 0000000140BD18E7: mov     eax, r10d
 * 0000000140BD18EA: shr     rax, 3
 * 0000000140BD18EE: xor     r8, [r9]
 * 0000000140BD18F1: mov     ecx, r11d
 * 0000000140BD18F4: rol     r8, cl
 * 0000000140BD18F7: add     r9, 8
 * 0000000140BD18FB: add     r10d, 0FFFFFFF8h
 * 0000000140BD18FF: sub     rax, rbx
 * 0000000140BD1902: jnz     short loc_140BD18EE
 * 0000000140BD1904: test    r10d, r10d
 * 0000000140BD1907: jz      short loc_140BD1928
 * 0000000140BD1909: mov     esi, 0FFFFFFFFh
 * 0000000140BD190E: movzx   eax, byte ptr [r9]
 * 0000000140BD1912: mov     ecx, r11d
 * 0000000140BD1915: xor     r8, rax
 * 0000000140BD1918: add     r9, rbx
 * 0000000140BD191B: rol     r8, cl
 * 0000000140BD191E: add     r10d, esi
 * 0000000140BD1921: jnz     short loc_140BD190E
 * 0000000140BD1923: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BD1928: mov     rax, r8
 * 0000000140BD192B: shr     rax, 1Fh
 * 0000000140BD192F: xor     r11d, r11d
 * 0000000140BD1932: jmp     short loc_140BD193B
 * 0000000140BD1934: xor     r8d, eax
 * 0000000140BD1937: shr     rax, 1Fh
 * 0000000140BD193B: test    rax, rax
 * 0000000140BD193E: jnz     short loc_140BD1934
 * 0000000140BD1940: btr     r8d, 1Fh
 * 0000000140BD1945: mov     [r14+14h], r8d
 * 0000000140BD1949: jmp     short loc_140BD1953
 * 0000000140BD194B: xor     r11d, r11d
 * 0000000140BD194E: mov     ebx, 1
 * 0000000140BD1953: mov     r8, 7010008004002001h
 * 0000000140BD195D: mov     r12d, [rsi+9D8h]
 * 0000000140BD1964: mov     dword ptr [rbp+8D0h+arg_8], r11d
 * 0000000140BD196B: mov     [rsp+9D0h+var_978], r11
 * 0000000140BD1970: mov     dword ptr [rsp+9D0h+var_960], r12d
 * 0000000140BD1975: bt      r12d, 1Dh
 * 0000000140BD197A: jb      loc_140BD2026
 * 0000000140BD1980: mov     r13, [rbp+8D0h+arg_0]
 * 0000000140BD1987: cmp     rsi, r13
 * 0000000140BD198A: jnz     loc_140BD209B
 * 0000000140BD1990: bt      r12d, 0Eh
 * 0000000140BD1995: jb      short loc_140BD19A4
 * 0000000140BD1997: cmp     [rsi+918h], r11d
 * 0000000140BD199E: jnz     loc_140BD1E15
 * 0000000140BD19A4: mov     r8d, [r13+944h]
 * 0000000140BD19AB: mov     rcx, r13
 * 0000000140BD19AE: mov     edx, [r13+804h]
 * 0000000140BD19B5: call    sub_140BD7AF8
 * 0000000140BD19BA: xor     r14d, r14d
 * 0000000140BD19BD: mov     rsi, rax
 * 0000000140BD19C0: test    rax, rax
 * 0000000140BD19C3: jz      loc_140BD1E18
 * 0000000140BD19C9: mov     ecx, [rsi+97Ch]
 * 0000000140BD19CF: mov     r13d, [rsi+9D8h]
 * 0000000140BD19D6: mov     r15d, [rsi+0A74h]
 * 0000000140BD19DD: mov     rax, [rax+7E8h]
 * 0000000140BD19E4: add     r15d, 0FFFFFF38h
 * 0000000140BD19EB: mov     [rbp+8D0h+var_8F8], ecx
 * 0000000140BD19EE: mov     rcx, [rsi+4E0h]
 * 0000000140BD19F5: mov     [rbp+8D0h+var_8F0], rcx
 * 0000000140BD19F9: mov     rcx, [rsi+5B8h]
 * 0000000140BD1A00: shr     r15d, 3
 * 0000000140BD1A04: mov     dword ptr [rbp+8D0h+arg_8], r13d
 * 0000000140BD1A0B: mov     r13, 7010008004002001h
 * 0000000140BD1A15: mov     [rbp+8D0h+var_8D0], rcx
 * 0000000140BD1A19: mov     [rsp+9D0h+var_978], rax
 * 0000000140BD1A1E: mov     [rsi+0C4h], r15d
 * 0000000140BD1A25: rdtsc
 * 0000000140BD1A27: shl     rdx, 20h
 * 0000000140BD1A2B: or      rax, rdx
 * 0000000140BD1A2E: mov     rcx, rax
 * 0000000140BD1A31: ror     rax, 3
 * 0000000140BD1A35: xor     rcx, rax
 * 0000000140BD1A38: mov     rax, r13
 * 0000000140BD1A3B: mul     rcx
 * 0000000140BD1A3E: mov     rbx, rdx
 * 0000000140BD1A41: mov     [rbp+8D0h+var_428], rdx
 * 0000000140BD1A48: xor     rbx, rax
 * 0000000140BD1A4B: jz      short loc_140BD1A25
 * 0000000140BD1A4D: mov     rax, [rsi+7D8h]
 * 0000000140BD1A54: lea     rcx, [rsi+7B8h]
 * 0000000140BD1A5B: mov     r13d, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BD1A62: lea     rdx, [rbp+8D0h+var_108]
 * 0000000140BD1A69: mov     r10d, 20h ; ' '
 * 0000000140BD1A6F: mov     [rbp+8D0h+var_950], rax
 * 0000000140BD1A73: mov     eax, [rsi+848h]
 * 0000000140BD1A79: mov     r8d, r10d
 * 0000000140BD1A7C: mov     dword ptr [rsp+9D0h+var_960], eax
 * 0000000140BD1A80: lea     r11d, [r10-1Ch]
 * 0000000140BD1A84: mov     r9d, r11d
 * 0000000140BD1A87: lea     r12d, [r10-1Fh]
 * 0000000140BD1A8B: mov     rax, [rcx]
 * 0000000140BD1A8E: add     r8d, 0FFFFFFF8h
 * 0000000140BD1A92: mov     [rdx], rax
 * 0000000140BD1A95: add     rcx, 8
 * 0000000140BD1A99: add     rdx, 8
 * 0000000140BD1A9D: sub     r9, r12
 * 0000000140BD1AA0: jnz     short loc_140BD1A8B
 * 0000000140BD1AA2: test    r8d, r8d
 * 0000000140BD1AA5: jz      short loc_140BD1AC3
 * 0000000140BD1AA7: mov     r13d, 0FFFFFFFFh
 * 0000000140BD1AAD: mov     al, [rcx]
 * 0000000140BD1AAF: add     rcx, r12
 * 0000000140BD1AB2: mov     [rdx], al
 * 0000000140BD1AB4: add     rdx, r12
 * 0000000140BD1AB7: add     r8d, r13d
 * 0000000140BD1ABA: jnz     short loc_140BD1AAD
 * 0000000140BD1ABC: mov     r13d, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BD1AC3: mov     [rsi+7D8h], r14
 * 0000000140BD1ACA: lea     rax, [rsi+7B8h]
 * 0000000140BD1AD1: mov     [rsi+848h], r14d
 * 0000000140BD1AD8: mov     ecx, r10d
 * 0000000140BD1ADB: mov     rdx, r11
 * 0000000140BD1ADE: mov     [rax], r14
 * 0000000140BD1AE1: add     ecx, 0FFFFFFF8h
 * 0000000140BD1AE4: add     rax, 8
 * 0000000140BD1AE8: sub     rdx, r12
 * 0000000140BD1AEB: jnz     short loc_140BD1ADE
 * 0000000140BD1AED: mov     edx, 0FFFFFFFFh
 * 0000000140BD1AF2: test    ecx, ecx
 * 0000000140BD1AF4: jz      short loc_140BD1B00
 * 0000000140BD1AF6: mov     [rax], r14b
 * 0000000140BD1AF9: add     rax, r12
 * 0000000140BD1AFC: add     ecx, edx
 * 0000000140BD1AFE: jnz     short loc_140BD1AF6
 * 0000000140BD1B00: mov     r10d, [rsi+804h]
 * 0000000140BD1B07: mov     r9, rsi
 * 0000000140BD1B0A: add     [rsi+848h], r10d
 * 0000000140BD1B11: mov     rax, rsi
 * 0000000140BD1B14: mov     r11d, [rsi+834h]
 * 0000000140BD1B1B: mov     r12, [rsi+838h]
 * 0000000140BD1B22: lea     rcx, [rsi+r10]
 * 0000000140BD1B26: cmp     rsi, rcx
 * 0000000140BD1B29: jnb     short loc_140BD1B3C
 * 0000000140BD1B2B: mov     r8d, 40h ; '@'
 * 0000000140BD1B31: prefetchnta byte ptr [rax]
 * 0000000140BD1B34: add     rax, r8
 * 0000000140BD1B37: cmp     rax, rcx
 * 0000000140BD1B3A: jb      short loc_140BD1B31
 * 0000000140BD1B3C: mov     r14d, r10d
 * 0000000140BD1B3F: mov     r8, r12
 * 0000000140BD1B42: shr     r14d, 7
 * 0000000140BD1B46: test    r14d, r14d
 * 0000000140BD1B49: jz      short loc_140BD1BBE
 * 0000000140BD1B4B: mov     edi, 1
 * 0000000140BD1B50: mov     r13, 7010008004002001h
 * 0000000140BD1B5A: mov     eax, 8
 * 0000000140BD1B5F: xor     r8, [r9]
 * 0000000140BD1B62: mov     ecx, r11d
 * 0000000140BD1B65: rol     r8, cl
 * 0000000140BD1B68: xor     r8, [r9+8]
 * 0000000140BD1B6C: add     r9, 10h
 * 0000000140BD1B70: rol     r8, cl
 * 0000000140BD1B73: sub     rax, rdi
 * 0000000140BD1B76: jnz     short loc_140BD1B5F
 * 0000000140BD1B78: mov     rcx, r9
 * 0000000140BD1B7B: sub     rcx, rsi
 * 0000000140BD1B7E: xor     rcx, r12
 * 0000000140BD1B81: mov     rax, rcx
 * 0000000140BD1B84: rol     rax, 11h
 * 0000000140BD1B88: xor     rcx, rax
 * 0000000140BD1B8B: mov     rax, r13
 * 0000000140BD1B8E: mul     rcx
 * 0000000140BD1B91: xor     r11d, edx
 * 0000000140BD1B94: mov     [rbp+8D0h+var_420], rdx
 * 0000000140BD1B9B: xor     r11d, eax
 * 0000000140BD1B9E: mov     edx, 0FFFFFFFFh
 * 0000000140BD1BA3: and     r11d, 3Fh
 * 0000000140BD1BA7: cmovz   r11d, edi
 * 0000000140BD1BAB: add     r14d, edx
 * 0000000140BD1BAE: jnz     short loc_140BD1B5A
 * 0000000140BD1BB0: mov     r13d, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BD1BB7: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BD1BBE: and     r10d, 7Fh
 * 0000000140BD1BC2: mov     r12d, 1
 * 0000000140BD1BC8: cmp     r10d, 8
 * 0000000140BD1BCC: jb      short loc_140BD1BEB
 * 0000000140BD1BCE: mov     eax, r10d
 * 0000000140BD1BD1: shr     rax, 3
 * 0000000140BD1BD5: xor     r8, [r9]
 * 0000000140BD1BD8: mov     ecx, r11d
 * 0000000140BD1BDB: rol     r8, cl
 * 0000000140BD1BDE: add     r9, 8
 * 0000000140BD1BE2: add     r10d, 0FFFFFFF8h
 * 0000000140BD1BE6: sub     rax, r12
 * 0000000140BD1BE9: jnz     short loc_140BD1BD5
 * 0000000140BD1BEB: xor     r14d, r14d
 * 0000000140BD1BEE: test    r10d, r10d
 * 0000000140BD1BF1: jz      short loc_140BD1C08
 * 0000000140BD1BF3: movzx   eax, byte ptr [r9]
 * 0000000140BD1BF7: mov     ecx, r11d
 * 0000000140BD1BFA: xor     r8, rax
 * 0000000140BD1BFD: add     r9, r12
 * 0000000140BD1C00: rol     r8, cl
 * 0000000140BD1C03: add     r10d, edx
 * 0000000140BD1C06: jnz     short loc_140BD1BF3
 * 0000000140BD1C08: mov     ecx, dword ptr [rsp+9D0h+var_960]
 * 0000000140BD1C0C: lea     rdx, [rsi+7B8h]
 * 0000000140BD1C13: mov     rax, [rbp+8D0h+var_950]
 * 0000000140BD1C17: mov     r9d, 4
 * 0000000140BD1C1D: mov     [rsi+7D8h], rax
 * 0000000140BD1C24: add     [rsi+848h], ecx
 * 0000000140BD1C2A: lea     rcx, [rbp+8D0h+var_108]
 * 0000000140BD1C31: lea     r10d, [r9+1Ch]
 * 0000000140BD1C35: mov     rax, [rcx]
 * 0000000140BD1C38: add     r10d, 0FFFFFFF8h
 * 0000000140BD1C3C: mov     [rdx], rax
 * 0000000140BD1C3F: add     rcx, 8
 * 0000000140BD1C43: add     rdx, 8
 * 0000000140BD1C47: sub     r9, r12
 * 0000000140BD1C4A: jnz     short loc_140BD1C35
 * 0000000140BD1C4C: test    r10d, r10d
 * 0000000140BD1C4F: jz      short loc_140BD1C6D
 * 0000000140BD1C51: mov     r13d, 0FFFFFFFFh
 * 0000000140BD1C57: mov     al, [rcx]
 * 0000000140BD1C59: add     rcx, r12
 * 0000000140BD1C5C: mov     [rdx], al
 * 0000000140BD1C5E: add     rdx, r12
 * 0000000140BD1C61: add     r10d, r13d
 * 0000000140BD1C64: jnz     short loc_140BD1C57
 * 0000000140BD1C66: mov     r13d, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BD1C6D: mov     [rsi+7D8h], r8
 * 0000000140BD1C74: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BD1C7E: jnz     loc_140BD1E09
 * 0000000140BD1C84: mov     rcx, rsi
 * 0000000140BD1C87: mov     eax, r14d
 * 0000000140BD1C8A: mov     r11d, 19h
 * 0000000140BD1C90: xor     [rcx], rbx
 * 0000000140BD1C93: add     eax, r12d
 * 0000000140BD1C96: lea     rcx, [rcx+8]
 * 0000000140BD1C9A: cmp     eax, r11d
 * 0000000140BD1C9D: jb      short loc_140BD1C90
 * 0000000140BD1C9F: mov     [rbp+8D0h+var_800], rbx
 * 0000000140BD1CA6: mov     r8d, r15d
 * 0000000140BD1CA9: test    r15d, r15d
 * 0000000140BD1CAC: jz      short loc_140BD1CF4
 * 0000000140BD1CAE: mov     edx, r15d
 * 0000000140BD1CB1: dec     rdx
 * 0000000140BD1CB4: lea     rdx, [rcx+rdx*8]
 * 0000000140BD1CB8: xor     [rdx], rbx
 * 0000000140BD1CBB: lea     rax, [rbp+8D0h+var_800]
 * 0000000140BD1CC2: mov     ecx, r8d
 * 0000000140BD1CC5: lea     rdx, [rdx-8]
 * 0000000140BD1CC9: ror     rbx, cl
 * 0000000140BD1CCC: mov     [rbp+8D0h+var_800], rbx
 * 0000000140BD1CD3: and     ebx, 3Fh
 * 0000000140BD1CD6: btc     [rax], rbx
 * 0000000140BD1CDA: sub     r8d, r12d
 * 0000000140BD1CDD: jz      short loc_140BD1CF4
 * 0000000140BD1CDF: mov     rbx, [rbp+8D0h+var_800]
 * 0000000140BD1CE6: jmp     short loc_140BD1CB8
 * 0000000140BD1CE8: xor     r11d, r11d
 * 0000000140BD1CEB: lea     ebx, [r11+1]
 * 0000000140BD1CEF: jmp     loc_140BD195D
 * 0000000140BD1CF4: bt      r13d, 12h
 * 0000000140BD1CF9: jnb     short loc_140BD1D49
 * 0000000140BD1CFB: rdtsc
 * 0000000140BD1CFD: shl     rdx, 20h
 * 0000000140BD1D01: or      rax, rdx
 * 0000000140BD1D04: mov     rcx, rax
 * 0000000140BD1D07: mov     rdx, rax
 * 0000000140BD1D0A: ror     rcx, 3
 * 0000000140BD1D0E: mov     rax, 7010008004002001h
 * 0000000140BD1D18: xor     rdx, rcx
 * 0000000140BD1D1B: mul     rdx
 * 0000000140BD1D1E: mov     rcx, rdx
 * 0000000140BD1D21: mov     [rbp+8D0h+var_418], rdx
 * 0000000140BD1D28: xor     rcx, rax
 * 0000000140BD1D2B: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140BD1D35: mul     rcx
 * 0000000140BD1D38: shr     rdx, 1
 * 0000000140BD1D3B: lea     rax, [rdx+rdx*2]
 * 0000000140BD1D3F: cmp     rcx, rax
 * 0000000140BD1D42: jz      short loc_140BD1D52
 * 0000000140BD1D44: jmp     loc_140BD1E09
 * 0000000140BD1D49: test    r13b, r13b
 * 0000000140BD1D4C: js      loc_140BD1E09
 * 0000000140BD1D52: mov     r12, [rbp+8D0h+var_8D0]
 * 0000000140BD1D56: mov     ecx, esi
 * 0000000140BD1D58: mov     rdi, [rbp+8D0h+var_8F0]
 * 0000000140BD1D5C: mov     r9, rsi
 * 0000000140BD1D5F: mov     ebx, r11d
 * 0000000140BD1D62: ror     r9, cl
 * 0000000140BD1D65: mov     r11d, r14d
 * 0000000140BD1D68: mov     r10, rsi
 * 0000000140BD1D6B: mov     r14d, [rbp+8D0h+var_8F8]
 * 0000000140BD1D6F: mov     eax, r11d
 * 0000000140BD1D72: add     rax, rsi
 * 0000000140BD1D75: sub     [r10], rax
 * 0000000140BD1D78: mov     rcx, [r10]
 * 0000000140BD1D7B: bt      r13d, 8
 * 0000000140BD1D80: jb      short loc_140BD1D99
 * 0000000140BD1D82: mov     rax, rdi
 * 0000000140BD1D85: xor     rax, rcx
 * 0000000140BD1D88: mov     ecx, r12d
 * 0000000140BD1D8B: bswap   rax
 * 0000000140BD1D8E: xor     rax, r9
 * 0000000140BD1D91: ror     rax, cl
 * 0000000140BD1D94: xor     rax, r12
 * 0000000140BD1D97: jmp     short loc_140BD1D9F
 * 0000000140BD1D99: mov     rax, r9
 * 0000000140BD1D9C: xor     rax, rcx
 * 0000000140BD1D9F: mov     rcx, r10
 * 0000000140BD1DA2: mov     edx, 0C8h
 * 0000000140BD1DA7: sub     edx, r11d
 * 0000000140BD1DAA: mov     [rcx], rax
 * 0000000140BD1DAD: mov     ecx, [r10]
 * 0000000140BD1DB0: mov     r8d, ecx
 * 0000000140BD1DB3: mov     eax, r11d
 * 0000000140BD1DB6: not     ecx
 * 0000000140BD1DB8: xor     rdx, rax
 * 0000000140BD1DBB: xor     r8d, 0EFAh
 * 0000000140BD1DC2: ror     rdx, cl
 * 0000000140BD1DC5: lea     eax, [r11+1]
 * 0000000140BD1DC9: xor     r9, rdx
 * 0000000140BD1DCC: mov     cl, r8b
 * 0000000140BD1DCF: rol     r9, cl
 * 0000000140BD1DD2: add     r10, 8
 * 0000000140BD1DD6: add     r9, rsi
 * 0000000140BD1DD9: mov     r11d, eax
 * 0000000140BD1DDC: xor     r9, r14
 * 0000000140BD1DDF: cmp     eax, 19h
 * 0000000140BD1DE2: jnz     short loc_140BD1DF3
 * 0000000140BD1DE4: bt      r13d, 12h
 * 0000000140BD1DE9: lea     eax, [r11-19h]
 * 0000000140BD1DED: cmovnb  eax, r15d
 * 0000000140BD1DF1: add     ebx, eax
 * 0000000140BD1DF3: cmp     r11d, ebx
 * 0000000140BD1DF6: jb      loc_140BD1D6F
 * 0000000140BD1DFC: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BD1E03: mov     r12d, 1
 * 0000000140BD1E09: mov     dword ptr [rbp+8D0h+arg_8], r12d
 * 0000000140BD1E10: jmp     loc_140BD24BB
 * 0000000140BD1E15: xor     r14d, r14d
 * 0000000140BD1E18: mov     r10d, 20h ; ' '
 * 0000000140BD1E1E: mov     [r13+0C4h], ebx
 * 0000000140BD1E25: mov     r15, [r13+7D8h]
 * 0000000140BD1E2C: lea     rcx, [r13+7B8h]
 * 0000000140BD1E33: mov     r12d, [r13+848h]
 * 0000000140BD1E3A: lea     rdx, [rbp+8D0h+var_E8]
 * 0000000140BD1E41: mov     rsi, r13
 * 0000000140BD1E44: mov     [rbp+8D0h+var_950], r15
 * 0000000140BD1E48: lea     r11d, [r10-1Ch]
 * 0000000140BD1E4C: mov     dword ptr [rsp+9D0h+var_960], r12d
 * 0000000140BD1E51: mov     r9d, r11d
 * 0000000140BD1E54: mov     r8d, r10d
 * 0000000140BD1E57: mov     rax, [rcx]
 * 0000000140BD1E5A: add     r8d, 0FFFFFFF8h
 * 0000000140BD1E5E: mov     [rdx], rax
 * 0000000140BD1E61: add     rcx, 8
 * 0000000140BD1E65: add     rdx, 8
 * 0000000140BD1E69: sub     r9, rbx
 * 0000000140BD1E6C: jnz     short loc_140BD1E57
 * 0000000140BD1E6E: mov     r9d, 0FFFFFFFFh
 * 0000000140BD1E74: test    r8d, r8d
 * 0000000140BD1E77: jz      short loc_140BD1E88
 * 0000000140BD1E79: mov     al, [rcx]
 * 0000000140BD1E7B: add     rcx, rbx
 * 0000000140BD1E7E: mov     [rdx], al
 * 0000000140BD1E80: add     rdx, rbx
 * 0000000140BD1E83: add     r8d, r9d
 * 0000000140BD1E86: jnz     short loc_140BD1E79
 * 0000000140BD1E88: mov     [r13+7D8h], r14
 * 0000000140BD1E8F: lea     rax, [r13+7B8h]
 * 0000000140BD1E96: mov     [r13+848h], r14d
 * 0000000140BD1E9D: mov     ecx, r10d
 * 0000000140BD1EA0: mov     rdx, r11
 * 0000000140BD1EA3: mov     [rax], r14
 * 0000000140BD1EA6: add     ecx, 0FFFFFFF8h
 * 0000000140BD1EA9: add     rax, 8
 * 0000000140BD1EAD: sub     rdx, rbx
 * 0000000140BD1EB0: jnz     short loc_140BD1EA3
 * 0000000140BD1EB2: test    ecx, ecx
 * 0000000140BD1EB4: jz      short loc_140BD1EC1
 * 0000000140BD1EB6: mov     [rax], r14b
 * 0000000140BD1EB9: add     rax, rbx
 * 0000000140BD1EBC: add     ecx, r9d
 * 0000000140BD1EBF: jnz     short loc_140BD1EB6
 * 0000000140BD1EC1: mov     r11d, [r13+804h]
 * 0000000140BD1EC8: mov     r9, r13
 * 0000000140BD1ECB: add     [r13+848h], r11d
 * 0000000140BD1ED2: mov     rax, r13
 * 0000000140BD1ED5: mov     r10d, [r13+834h]
 * 0000000140BD1EDC: mov     r14, [r13+838h]
 * 0000000140BD1EE3: lea     rcx, [r11+r13]
 * 0000000140BD1EE7: cmp     r13, rcx
 * 0000000140BD1EEA: jnb     short loc_140BD1EFC
 * 0000000140BD1EEC: mov     edx, 40h ; '@'
 * 0000000140BD1EF1: prefetchnta byte ptr [rax]
 * 0000000140BD1EF4: add     rax, rdx
 * 0000000140BD1EF7: cmp     rax, rcx
 * 0000000140BD1EFA: jb      short loc_140BD1EF1
 * 0000000140BD1EFC: mov     ebx, r11d
 * 0000000140BD1EFF: mov     r8, r14
 * 0000000140BD1F02: shr     ebx, 7
 * 0000000140BD1F05: test    ebx, ebx
 * 0000000140BD1F07: jz      short loc_140BD1F7F
 * 0000000140BD1F09: mov     edi, 1
 * 0000000140BD1F0E: mov     r12d, 0FFFFFFFFh
 * 0000000140BD1F14: mov     r15, 7010008004002001h
 * 0000000140BD1F1E: mov     eax, 8
 * 0000000140BD1F23: xor     r8, [r9]
 * 0000000140BD1F26: mov     ecx, r10d
 * 0000000140BD1F29: rol     r8, cl
 * 0000000140BD1F2C: xor     r8, [r9+8]
 * 0000000140BD1F30: add     r9, 10h
 * 0000000140BD1F34: rol     r8, cl
 * 0000000140BD1F37: sub     rax, rdi
 * 0000000140BD1F3A: jnz     short loc_140BD1F23
 * 0000000140BD1F3C: mov     rcx, r9
 * 0000000140BD1F3F: sub     rcx, r13
 * 0000000140BD1F42: xor     rcx, r14
 * 0000000140BD1F45: mov     rax, rcx
 * 0000000140BD1F48: rol     rax, 11h
 * 0000000140BD1F4C: xor     rcx, rax
 * 0000000140BD1F4F: mov     rax, r15
 * 0000000140BD1F52: mul     rcx
 * 0000000140BD1F55: xor     r10d, edx
 * 0000000140BD1F58: mov     [rbp+8D0h+var_410], rdx
 * 0000000140BD1F5F: xor     r10d, eax
 * 0000000140BD1F62: and     r10d, 3Fh
 * 0000000140BD1F66: cmovz   r10d, edi
 * 0000000140BD1F6A: add     ebx, r12d
 * 0000000140BD1F6D: jnz     short loc_140BD1F1E
 * 0000000140BD1F6F: mov     r15, [rbp+8D0h+var_950]
 * 0000000140BD1F73: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BD1F7A: mov     r12d, dword ptr [rsp+9D0h+var_960]
 * 0000000140BD1F7F: and     r11d, 7Fh
 * 0000000140BD1F83: mov     ebx, 1
 * 0000000140BD1F88: cmp     r11d, 8
 * 0000000140BD1F8C: jb      short loc_140BD1FAB
 * 0000000140BD1F8E: mov     eax, r11d
 * 0000000140BD1F91: shr     rax, 3
 * 0000000140BD1F95: xor     r8, [r9]
 * 0000000140BD1F98: mov     ecx, r10d
 * 0000000140BD1F9B: rol     r8, cl
 * 0000000140BD1F9E: add     r9, 8
 * 0000000140BD1FA2: add     r11d, 0FFFFFFF8h
 * 0000000140BD1FA6: sub     rax, rbx
 * 0000000140BD1FA9: jnz     short loc_140BD1F95
 * 0000000140BD1FAB: mov     r14d, 0FFFFFFFFh
 * 0000000140BD1FB1: test    r11d, r11d
 * 0000000140BD1FB4: jz      short loc_140BD1FCB
 * 0000000140BD1FB6: movzx   eax, byte ptr [r9]
 * 0000000140BD1FBA: mov     ecx, r10d
 * 0000000140BD1FBD: xor     r8, rax
 * 0000000140BD1FC0: add     r9, rbx
 * 0000000140BD1FC3: rol     r8, cl
 * 0000000140BD1FC6: add     r11d, r14d
 * 0000000140BD1FC9: jnz     short loc_140BD1FB6
 * 0000000140BD1FCB: mov     r9d, 4
 * 0000000140BD1FD1: mov     [r13+7D8h], r15
 * 0000000140BD1FD8: add     [r13+848h], r12d
 * 0000000140BD1FDF: lea     rcx, [rbp+8D0h+var_E8]
 * 0000000140BD1FE6: lea     rdx, [r13+7B8h]
 * 0000000140BD1FED: lea     r10d, [r9+1Ch]
 * 0000000140BD1FF1: mov     rax, [rcx]
 * 0000000140BD1FF4: add     r10d, 0FFFFFFF8h
 * 0000000140BD1FF8: mov     [rdx], rax
 * 0000000140BD1FFB: add     rcx, 8
 * 0000000140BD1FFF: add     rdx, 8
 * 0000000140BD2003: sub     r9, rbx
 * 0000000140BD2006: jnz     short loc_140BD1FF1
 * 0000000140BD2008: xor     r11d, r11d
 * 0000000140BD200B: test    r10d, r10d
 * 0000000140BD200E: jz      short loc_140BD201F
 * 0000000140BD2010: mov     al, [rcx]
 * 0000000140BD2012: add     rcx, rbx
 * 0000000140BD2015: mov     [rdx], al
 * 0000000140BD2017: add     rdx, rbx
 * 0000000140BD201A: add     r10d, r14d
 * 0000000140BD201D: jnz     short loc_140BD2010
 * 0000000140BD201F: mov     [r13+7D8h], r8
 * 0000000140BD2026: mov     r14d, [rsi+9D8h]
 * 0000000140BD202D: mov     r15, r11
 * 0000000140BD2030: bt      r14d, 1Dh
 * 0000000140BD2035: jb      loc_140BD2558
 * 0000000140BD203B: test    r14b, r14b
 * 0000000140BD203E: js      loc_140BD2542
 * 0000000140BD2044: mov     eax, [rsi+97Ch]
 * 0000000140BD204A: mov     ecx, esi
 * 0000000140BD204C: mov     r12, [rsi+5B8h]
 * 0000000140BD2053: mov     r9, rsi
 * 0000000140BD2056: mov     r13, [rsi+4E0h]
 * 0000000140BD205D: mov     r10, rsi
 * 0000000140BD2060: ror     r9, cl
 * 0000000140BD2063: mov     ebx, r11d
 * 0000000140BD2066: mov     [rbp+8D0h+var_950], rax
 * 0000000140BD206A: mov     rcx, [r10]
 * 0000000140BD206D: sub     rcx, r11
 * 0000000140BD2070: sub     rcx, rsi
 * 0000000140BD2073: mov     [r10], rcx
 * 0000000140BD2076: bt      r14d, 8
 * 0000000140BD207B: jb      loc_140BD24F3
 * 0000000140BD2081: mov     rax, r13
 * 0000000140BD2084: xor     rax, rcx
 * 0000000140BD2087: mov     ecx, r12d
 * 0000000140BD208A: bswap   rax
 * 0000000140BD208D: xor     rax, r9
 * 0000000140BD2090: ror     rax, cl
 * 0000000140BD2093: xor     rax, r12
 * 0000000140BD2096: jmp     loc_140BD24F9
 * 0000000140BD209B: mov     ecx, [rsi+97Ch]
 * 0000000140BD20A1: mov     r15d, [rsi+0A74h]
 * 0000000140BD20A8: mov     rax, [rsi+7E8h]
 * 0000000140BD20AF: add     r15d, 0FFFFFF38h
 * 0000000140BD20B6: mov     [rbp+8D0h+var_8F8], ecx
 * 0000000140BD20B9: mov     rcx, [rsi+4E0h]
 * 0000000140BD20C0: mov     [rbp+8D0h+var_8F0], rcx
 * 0000000140BD20C4: mov     rcx, [rsi+5B8h]
 * 0000000140BD20CB: shr     r15d, 3
 * 0000000140BD20CF: mov     [rbp+8D0h+var_8D0], rcx
 * 0000000140BD20D3: mov     [rsp+9D0h+var_978], rax
 * 0000000140BD20D8: mov     [rsi+0C4h], r15d
 * 0000000140BD20DF: rdtsc
 * 0000000140BD20E1: shl     rdx, 20h
 * 0000000140BD20E5: or      rax, rdx
 * 0000000140BD20E8: mov     rcx, rax
 * 0000000140BD20EB: mov     rdx, rax
 * 0000000140BD20EE: ror     rcx, 3
 * 0000000140BD20F2: mov     rax, r8
 * 0000000140BD20F5: xor     rdx, rcx
 * 0000000140BD20F8: mul     rdx
 * 0000000140BD20FB: mov     rbx, rdx
 * 0000000140BD20FE: mov     [rbp+8D0h+var_408], rdx
 * 0000000140BD2105: xor     rbx, rax
 * 0000000140BD2108: jz      short loc_140BD20DF
 * 0000000140BD210A: mov     rax, [rsi+7D8h]
 * 0000000140BD2111: lea     rcx, [rsi+7B8h]
 * 0000000140BD2118: mov     r10d, 20h ; ' '
 * 0000000140BD211E: mov     [rbp+8D0h+var_950], rax
 * 0000000140BD2122: mov     eax, [rsi+848h]
 * 0000000140BD2128: lea     rdx, [rbp+8D0h+var_C8]
 * 0000000140BD212F: mov     dword ptr [rbp+8D0h+arg_8], eax
 * 0000000140BD2135: mov     r8d, r10d
 * 0000000140BD2138: mov     r13d, 0FFFFFFF8h
 * 0000000140BD213E: lea     r11d, [r10-1Ch]
 * 0000000140BD2142: mov     r9d, r11d
 * 0000000140BD2145: lea     r14d, [r10-1Fh]
 * 0000000140BD2149: mov     rax, [rcx]
 * 0000000140BD214C: add     r8d, r13d
 * 0000000140BD214F: mov     [rdx], rax
 * 0000000140BD2152: add     rcx, 8
 * 0000000140BD2156: add     rdx, 8
 * 0000000140BD215A: sub     r9, r14
 * 0000000140BD215D: jnz     short loc_140BD2149
 * 0000000140BD215F: test    r8d, r8d
 * 0000000140BD2162: jz      short loc_140BD217D
 * 0000000140BD2164: mov     esi, 0FFFFFFFFh
 * 0000000140BD2169: mov     al, [rcx]
 * 0000000140BD216B: add     rcx, r14
 * 0000000140BD216E: mov     [rdx], al
 * 0000000140BD2170: add     rdx, r14
 * 0000000140BD2173: add     r8d, esi
 * 0000000140BD2176: jnz     short loc_140BD2169
 * 0000000140BD2178: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BD217D: mov     [rsi+7D8h], r9
 * 0000000140BD2184: lea     rax, [rsi+7B8h]
 * 0000000140BD218B: mov     [rsi+848h], r9d
 * 0000000140BD2192: mov     ecx, r10d
 * 0000000140BD2195: mov     rdx, r11
 * 0000000140BD2198: mov     [rax], r9
 * 0000000140BD219B: add     ecx, r13d
 * 0000000140BD219E: add     rax, 8
 * 0000000140BD21A2: sub     rdx, r14
 * 0000000140BD21A5: jnz     short loc_140BD2198
 * 0000000140BD21A7: mov     edx, 0FFFFFFFFh
 * 0000000140BD21AC: test    ecx, ecx
 * 0000000140BD21AE: jz      short loc_140BD21BA
 * 0000000140BD21B0: mov     [rax], r9b
 * 0000000140BD21B3: add     rax, r14
 * 0000000140BD21B6: add     ecx, edx
 * 0000000140BD21B8: jnz     short loc_140BD21B0
 * 0000000140BD21BA: mov     r11d, [rsi+804h]
 * 0000000140BD21C1: mov     r9, rsi
 * 0000000140BD21C4: add     [rsi+848h], r11d
 * 0000000140BD21CB: mov     rax, rsi
 * 0000000140BD21CE: mov     r10d, [rsi+834h]
 * 0000000140BD21D5: mov     r13, [rsi+838h]
 * 0000000140BD21DC: lea     rcx, [rsi+r11]
 * 0000000140BD21E0: cmp     rsi, rcx
 * 0000000140BD21E3: jnb     short loc_140BD21F6
 * 0000000140BD21E5: mov     r8d, 40h ; '@'
 * 0000000140BD21EB: prefetchnta byte ptr [rax]
 * 0000000140BD21EE: add     rax, r8
 * 0000000140BD21F1: cmp     rax, rcx
 * 0000000140BD21F4: jb      short loc_140BD21EB
 * 0000000140BD21F6: mov     r14d, r11d
 * 0000000140BD21F9: mov     r8, r13
 * 0000000140BD21FC: shr     r14d, 7
 * 0000000140BD2200: test    r14d, r14d
 * 0000000140BD2203: jz      short loc_140BD2276
 * 0000000140BD2205: mov     edi, 1
 * 0000000140BD220A: mov     r12, 7010008004002001h
 * 0000000140BD2214: mov     eax, 8
 * 0000000140BD2219: xor     r8, [r9]
 * 0000000140BD221C: mov     ecx, r10d
 * 0000000140BD221F: rol     r8, cl
 * 0000000140BD2222: xor     r8, [r9+8]
 * 0000000140BD2226: add     r9, 10h
 * 0000000140BD222A: rol     r8, cl
 * 0000000140BD222D: sub     rax, rdi
 * 0000000140BD2230: jnz     short loc_140BD2219
 * 0000000140BD2232: mov     rcx, r9
 * 0000000140BD2235: sub     rcx, rsi
 * 0000000140BD2238: xor     rcx, r13
 * 0000000140BD223B: mov     rax, rcx
 * 0000000140BD223E: rol     rax, 11h
 * 0000000140BD2242: xor     rcx, rax
 * 0000000140BD2245: mov     rax, r12
 * 0000000140BD2248: mul     rcx
 * 0000000140BD224B: xor     r10d, edx
 * 0000000140BD224E: mov     [rbp+8D0h+var_400], rdx
 * 0000000140BD2255: xor     r10d, eax
 * 0000000140BD2258: mov     edx, 0FFFFFFFFh
 * 0000000140BD225D: and     r10d, 3Fh
 * 0000000140BD2261: cmovz   r10d, edi
 * 0000000140BD2265: add     r14d, edx
 * 0000000140BD2268: jnz     short loc_140BD2214
 * 0000000140BD226A: mov     r12d, dword ptr [rsp+9D0h+var_960]
 * 0000000140BD226F: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BD2276: and     r11d, 7Fh
 * 0000000140BD227A: mov     r13d, 1
 * 0000000140BD2280: cmp     r11d, 8
 * 0000000140BD2284: jb      short loc_140BD22A3
 * 0000000140BD2286: mov     eax, r11d
 * 0000000140BD2289: shr     rax, 3
 * 0000000140BD228D: xor     r8, [r9]
 * 0000000140BD2290: mov     ecx, r10d
 * 0000000140BD2293: rol     r8, cl
 * 0000000140BD2296: add     r9, 8
 * 0000000140BD229A: add     r11d, 0FFFFFFF8h
 * 0000000140BD229E: sub     rax, r13
 * 0000000140BD22A1: jnz     short loc_140BD228D
 * 0000000140BD22A3: xor     r14d, r14d
 * 0000000140BD22A6: test    r11d, r11d
 * 0000000140BD22A9: jz      short loc_140BD22C0
 * 0000000140BD22AB: movzx   eax, byte ptr [r9]
 * 0000000140BD22AF: mov     ecx, r10d
 * 0000000140BD22B2: xor     r8, rax
 * 0000000140BD22B5: add     r9, r13
 * 0000000140BD22B8: rol     r8, cl
 * 0000000140BD22BB: add     r11d, edx
 * 0000000140BD22BE: jnz     short loc_140BD22AB
 * 0000000140BD22C0: mov     ecx, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BD22C6: lea     rdx, [rsi+7B8h]
 * 0000000140BD22CD: mov     rax, [rbp+8D0h+var_950]
 * 0000000140BD22D1: mov     r9d, 4
 * 0000000140BD22D7: mov     [rsi+7D8h], rax
 * 0000000140BD22DE: add     [rsi+848h], ecx
 * 0000000140BD22E4: lea     rcx, [rbp+8D0h+var_C8]
 * 0000000140BD22EB: lea     r10d, [r9+1Ch]
 * 0000000140BD22EF: mov     rax, [rcx]
 * 0000000140BD22F2: add     r10d, 0FFFFFFF8h
 * 0000000140BD22F6: mov     [rdx], rax
 * 0000000140BD22F9: add     rcx, 8
 * 0000000140BD22FD: add     rdx, 8
 * 0000000140BD2301: sub     r9, r13
 * 0000000140BD2304: jnz     short loc_140BD22EF
 * 0000000140BD2306: test    r10d, r10d
 * 0000000140BD2309: jz      short loc_140BD2324
 * 0000000140BD230B: mov     esi, 0FFFFFFFFh
 * 0000000140BD2310: mov     al, [rcx]
 * 0000000140BD2312: add     rcx, r13
 * 0000000140BD2315: mov     [rdx], al
 * 0000000140BD2317: add     rdx, r13
 * 0000000140BD231A: add     r10d, esi
 * 0000000140BD231D: jnz     short loc_140BD2310
 * 0000000140BD231F: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BD2324: mov     [rsi+7D8h], r8
 * 0000000140BD232B: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BD2335: jnz     loc_140BD24B4
 * 0000000140BD233B: mov     rcx, rsi
 * 0000000140BD233E: mov     eax, r14d
 * 0000000140BD2341: mov     r11d, 19h
 * 0000000140BD2347: xor     [rcx], rbx
 * 0000000140BD234A: add     eax, r13d
 * 0000000140BD234D: lea     rcx, [rcx+8]
 * 0000000140BD2351: cmp     eax, r11d
 * 0000000140BD2354: jb      short loc_140BD2347
 * 0000000140BD2356: mov     [rbp+8D0h+var_7F8], rbx
 * 0000000140BD235D: mov     r8d, r15d
 * 0000000140BD2360: test    r15d, r15d
 * 0000000140BD2363: jz      short loc_140BD239F
 * 0000000140BD2365: mov     edx, r15d
 * 0000000140BD2368: dec     rdx
 * 0000000140BD236B: lea     rdx, [rcx+rdx*8]
 * 0000000140BD236F: xor     [rdx], rbx
 * 0000000140BD2372: lea     rax, [rbp+8D0h+var_7F8]
 * 0000000140BD2379: mov     ecx, r8d
 * 0000000140BD237C: lea     rdx, [rdx-8]
 * 0000000140BD2380: ror     rbx, cl
 * 0000000140BD2383: mov     [rbp+8D0h+var_7F8], rbx
 * 0000000140BD238A: and     ebx, 3Fh
 * 0000000140BD238D: btc     [rax], rbx
 * 0000000140BD2391: sub     r8d, r13d
 * 0000000140BD2394: jz      short loc_140BD239F
 * 0000000140BD2396: mov     rbx, [rbp+8D0h+var_7F8]
 * 0000000140BD239D: jmp     short loc_140BD236F
 * 0000000140BD239F: bt      r12d, 12h
 * 0000000140BD23A4: jnb     short loc_140BD23F4
 * 0000000140BD23A6: rdtsc
 * 0000000140BD23A8: shl     rdx, 20h
 * 0000000140BD23AC: or      rax, rdx
 * 0000000140BD23AF: mov     rcx, rax
 * 0000000140BD23B2: mov     rdx, rax
 * 0000000140BD23B5: ror     rcx, 3
 * 0000000140BD23B9: mov     rax, 7010008004002001h
 * 0000000140BD23C3: xor     rdx, rcx
 * 0000000140BD23C6: mul     rdx
 * 0000000140BD23C9: mov     rcx, rdx
 * 0000000140BD23CC: mov     [rbp+8D0h+var_3F8], rdx
 * 0000000140BD23D3: xor     rcx, rax
 * 0000000140BD23D6: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140BD23E0: mul     rcx
 * 0000000140BD23E3: shr     rdx, 1
 * 0000000140BD23E6: lea     rax, [rdx+rdx*2]
 * 0000000140BD23EA: cmp     rcx, rax
 * 0000000140BD23ED: jz      short loc_140BD23FD
 * 0000000140BD23EF: jmp     loc_140BD24B4
 * 0000000140BD23F4: test    r12b, r12b
 * 0000000140BD23F7: js      loc_140BD24B4
 * 0000000140BD23FD: mov     r13, [rbp+8D0h+var_8D0]
 * 0000000140BD2401: mov     ecx, esi
 * 0000000140BD2403: mov     rdi, [rbp+8D0h+var_8F0]
 * 0000000140BD2407: mov     r9, rsi
 * 0000000140BD240A: mov     ebx, r11d
 * 0000000140BD240D: ror     r9, cl
 * 0000000140BD2410: mov     r11d, r14d
 * 0000000140BD2413: mov     r10, rsi
 * 0000000140BD2416: mov     r14d, [rbp+8D0h+var_8F8]
 * 0000000140BD241A: mov     eax, r11d
 * 0000000140BD241D: add     rax, rsi
 * 0000000140BD2420: sub     [r10], rax
 * 0000000140BD2423: mov     rcx, [r10]
 * 0000000140BD2426: bt      r12d, 8
 * 0000000140BD242B: jb      short loc_140BD2444
 * 0000000140BD242D: mov     rax, rdi
 * 0000000140BD2430: xor     rax, rcx
 * 0000000140BD2433: mov     ecx, r13d
 * 0000000140BD2436: bswap   rax
 * 0000000140BD2439: xor     rax, r9
 * 0000000140BD243C: ror     rax, cl
 * 0000000140BD243F: xor     rax, r13
 * 0000000140BD2442: jmp     short loc_140BD244A
 * 0000000140BD2444: mov     rax, r9
 * 0000000140BD2447: xor     rax, rcx
 * 0000000140BD244A: mov     rcx, r10
 * 0000000140BD244D: mov     edx, 0C8h
 * 0000000140BD2452: sub     edx, r11d
 * 0000000140BD2455: mov     [rcx], rax
 * 0000000140BD2458: mov     ecx, [r10]
 * 0000000140BD245B: mov     r8d, ecx
 * 0000000140BD245E: mov     eax, r11d
 * 0000000140BD2461: not     ecx
 * 0000000140BD2463: xor     rdx, rax
 * 0000000140BD2466: xor     r8d, 0EFAh
 * 0000000140BD246D: ror     rdx, cl
 * 0000000140BD2470: lea     eax, [r11+1]
 * 0000000140BD2474: xor     r9, rdx
 * 0000000140BD2477: mov     cl, r8b
 * 0000000140BD247A: rol     r9, cl
 * 0000000140BD247D: add     r10, 8
 * 0000000140BD2481: add     r9, rsi
 * 0000000140BD2484: mov     r11d, eax
 * 0000000140BD2487: xor     r9, r14
 * 0000000140BD248A: cmp     eax, 19h
 * 0000000140BD248D: jnz     short loc_140BD249E
 * 0000000140BD248F: bt      r12d, 12h
 * 0000000140BD2494: lea     eax, [r11-19h]
 * 0000000140BD2498: cmovnb  eax, r15d
 * 0000000140BD249C: add     ebx, eax
 * 0000000140BD249E: cmp     r11d, ebx
 * 0000000140BD24A1: jb      loc_140BD241A
 * 0000000140BD24A7: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BD24AE: mov     r13d, 1
 * 0000000140BD24B4: mov     dword ptr [rbp+8D0h+arg_8], r13d
 * 0000000140BD24BB: rdtsc
 * 0000000140BD24BD: shl     rdx, 20h
 * 0000000140BD24C1: mov     rbx, 7010008004002001h
 * 0000000140BD24CB: or      rax, rdx
 * 0000000140BD24CE: mov     rcx, rax
 * 0000000140BD24D1: mov     rdx, rax
 * 0000000140BD24D4: ror     rcx, 3
 * 0000000140BD24D8: mov     rax, rbx
 * 0000000140BD24DB: xor     rdx, rcx
 * 0000000140BD24DE: mul     rdx
 * 0000000140BD24E1: mov     r15, rax
 * 0000000140BD24E4: mov     [rbp+8D0h+var_3F0], rdx
 * 0000000140BD24EB: xor     r15, rdx
 * 0000000140BD24EE: xor     r11d, r11d
 * 0000000140BD24F1: jmp     short loc_140BD2562
 * 0000000140BD24F3: mov     rax, r9
 * 0000000140BD24F6: xor     rax, rcx
 * 0000000140BD24F9: mov     rcx, r10
 * 0000000140BD24FC: mov     edx, 0C8h
 * 0000000140BD2501: sub     edx, ebx
 * 0000000140BD2503: xor     rdx, r11
 * 0000000140BD2506: mov     [rcx], rax
 * 0000000140BD2509: mov     eax, 1
 * 0000000140BD250E: mov     ecx, [r10]
 * 0000000140BD2511: add     ebx, eax
 * 0000000140BD2513: mov     r8d, ecx
 * 0000000140BD2516: add     r10, 8
 * 0000000140BD251A: not     ecx
 * 0000000140BD251C: xor     r8d, 0EFAh
 * 0000000140BD2523: ror     rdx, cl
 * 0000000140BD2526: add     r11, rax
 * 0000000140BD2529: xor     r9, rdx
 * 0000000140BD252C: mov     cl, r8b
 * 0000000140BD252F: rol     r9, cl
 * 0000000140BD2532: add     r9, rsi
 * 0000000140BD2535: xor     r9, [rbp+8D0h+var_950]
 * 0000000140BD2539: cmp     ebx, 19h
 * 0000000140BD253C: jb      loc_140BD206A
 * 0000000140BD2542: mov     rax, [rsi+278h]
 * 0000000140BD2549: lea     rcx, [rsi+820h]
 * 0000000140BD2550: call    KeGuardDispatchICall
 * 0000000140BD2555: xor     r11d, r11d
 * 0000000140BD2558: mov     rbx, 7010008004002001h
 * 0000000140BD2562: mov     r12, [rbp+8D0h+arg_0]
 * 0000000140BD2569: test    dword ptr [r12+9D8h], 8000000h
 * 0000000140BD2575: mov     r14, [r12+7F8h]
 * 0000000140BD257D: jz      short loc_140BD25B8
 * 0000000140BD257F: rdtsc
 * 0000000140BD2581: shl     rdx, 20h
 * 0000000140BD2585: or      rax, rdx
 * 0000000140BD2588: mov     rcx, rax
 * 0000000140BD258B: mov     rdx, rax
 * 0000000140BD258E: ror     rcx, 3
 * 0000000140BD2592: mov     rax, rbx
 * 0000000140BD2595: xor     rdx, rcx
 * 0000000140BD2598: mul     rdx
 * 0000000140BD259B: mov     r14, rdx
 * 0000000140BD259E: mov     [rbp+8D0h+var_3E8], rdx
 * 0000000140BD25A5: xor     r14, rax
 * 0000000140BD25A8: and     r14, 0Fh
 * 0000000140BD25AC: shl     r14, 4
 * 0000000140BD25B0: add     r14, [r12+5C8h]
 * 0000000140BD25B8: mov     r13d, 28h ; '('
 * 0000000140BD25BE: lea     rcx, [r12+918h]
 * 0000000140BD25C6: mov     r8d, r13d
 * 0000000140BD25C9: lea     rdx, [rbp+8D0h+var_668]
 * 0000000140BD25D0: lea     r9d, [r13-23h]
 * 0000000140BD25D4: lea     r10d, [r13-27h]
 * 0000000140BD25D8: mov     rax, [rcx]
 * 0000000140BD25DB: add     r8d, 0FFFFFFF8h
 * 0000000140BD25DF: mov     [rdx], rax
 * 0000000140BD25E2: add     rcx, 8
 * 0000000140BD25E6: add     rdx, 8
 * 0000000140BD25EA: sub     r9, r10
 * 0000000140BD25ED: jnz     short loc_140BD25D8
 * 0000000140BD25EF: test    r8d, r8d
 * 0000000140BD25F2: jz      short loc_140BD2610
 * 0000000140BD25F4: mov     r12d, 0FFFFFFFFh
 * 0000000140BD25FA: mov     al, [rcx]
 * 0000000140BD25FC: add     rcx, r10
 * 0000000140BD25FF: mov     [rdx], al
 * 0000000140BD2601: add     rdx, r10
 * 0000000140BD2604: add     r8d, r12d
 * 0000000140BD2607: jnz     short loc_140BD25FA
 * 0000000140BD2609: mov     r12, [rbp+8D0h+arg_0]
 * 0000000140BD2610: mov     eax, [r12+9D8h]
 * 0000000140BD2618: bt      eax, 0Eh
 * 0000000140BD261C: jb      short loc_140BD262C
 * 0000000140BD261E: cmp     [r12+918h], r11d
 * 0000000140BD2626: jnz     loc_140BD2EA8
 * 0000000140BD262C: bt      eax, 1Dh
 * 0000000140BD2630: jb      loc_140BD342F
 * 0000000140BD2636: mov     al, [r12+940h]
 * 0000000140BD263E: mov     r9, r15
 * 0000000140BD2641: sub     al, r10b
 * 0000000140BD2644: xor     r9, rsi
 * 0000000140BD2647: movzx   r11d, al
 * 0000000140BD264B: mov     r8d, 3Fh ; '?'
 * 0000000140BD2651: sub     r8d, r11d
 * 0000000140BD2654: rdtsc
 * 0000000140BD2656: shl     rdx, 20h
 * 0000000140BD265A: mov     r12, 7010008004002001h
 * 0000000140BD2664: or      rax, rdx
 * 0000000140BD2667: mov     rcx, rax
 * 0000000140BD266A: mov     rdx, rax
 * 0000000140BD266D: ror     rcx, 3
 * 0000000140BD2671: mov     rax, rbx
 * 0000000140BD2674: xor     rdx, rcx
 * 0000000140BD2677: mov     ebx, r8d
 * 0000000140BD267A: mul     rdx
 * 0000000140BD267D: mov     [rbp+8D0h+var_3E0], rdx
 * 0000000140BD2684: xor     rax, rdx
 * 0000000140BD2687: xor     edx, edx
 * 0000000140BD2689: div     rbx
 * 0000000140BD268C: lea     r10d, [r11+rdx]
 * 0000000140BD2690: rdtsc
 * 0000000140BD2692: shl     rdx, 20h
 * 0000000140BD2696: or      rax, rdx
 * 0000000140BD2699: mov     rcx, rax
 * 0000000140BD269C: mov     r8, rax
 * 0000000140BD269F: ror     rcx, 3
 * 0000000140BD26A3: mov     rax, r12
 * 0000000140BD26A6: xor     r8, rcx
 * 0000000140BD26A9: mul     r8
 * 0000000140BD26AC: xor     rax, rdx
 * 0000000140BD26AF: mov     [rbp+8D0h+var_3D8], rdx
 * 0000000140BD26B6: xor     edx, edx
 * 0000000140BD26B8: div     rbx
 * 0000000140BD26BB: add     edx, r11d
 * 0000000140BD26BE: cmp     edx, r10d
 * 0000000140BD26C1: jz      short loc_140BD2690
 * 0000000140BD26C3: mov     r12, [rbp+8D0h+arg_0]
 * 0000000140BD26CA: xor     r11d, r11d
 * 0000000140BD26CD: mov     eax, r10d
 * 0000000140BD26D0: bts     r9, rax
 * 0000000140BD26D4: mov     eax, edx
 * 0000000140BD26D6: btr     r9, rax
 * 0000000140BD26DA: cmp     dword ptr [r12+944h], 3
 * 0000000140BD26E3: mov     rbx, [r12+7B0h]
 * 0000000140BD26EB: mov     rsi, [r12+7A8h]
 * 0000000140BD26F3: jnz     loc_140BD288B
 * 0000000140BD26F9: mov     r12, [rsp+9D0h+var_978]
 * 0000000140BD26FE: test    r12, r12
 * 0000000140BD2701: jz      loc_140BD2884
 * 0000000140BD2707: mov     rcx, [rbp+8D0h+arg_0]
 * 0000000140BD270E: mov     rax, [rcx+370h]
 * 0000000140BD2715: mov     byte ptr [rbx], 13h
 * 0000000140BD2718: mov     byte ptr [rbx+1], 1
 * 0000000140BD271C: mov     [rbx+2], r11w
 * 0000000140BD2721: mov     [rbx+18h], rax
 * 0000000140BD2725: mov     [rbx+20h], r12
 * 0000000140BD2729: mov     [rbx+38h], r11
 * 0000000140BD272D: mov     [rbx+10h], r11
 * 0000000140BD2731: mov     [rbx+28h], r9
 * 0000000140BD2735: mov     rax, [rcx+360h]
 * 0000000140BD273C: mov     rcx, [r12+8]
 * 0000000140BD2741: mov     r8, [r12]
 * 0000000140BD2745: mov     edx, [r12+10h]
 * 0000000140BD274A: call    KeGuardDispatchICall
 * 0000000140BD274F: mov     r9, [r12]
 * 0000000140BD2753: mov     rcx, r12
 * 0000000140BD2756: rol     rcx, 11h
 * 0000000140BD275A: mov     r10, 7010008004002001h
 * 0000000140BD2764: xor     rcx, r12
 * 0000000140BD2767: mov     rax, r10
 * 0000000140BD276A: mul     rcx
 * 0000000140BD276D: mov     ecx, 4
 * 0000000140BD2772: mov     [rbp+8D0h+var_3D0], rdx
 * 0000000140BD2779: xor     rdx, rax
 * 0000000140BD277C: lea     rax, [r12+18h]
 * 0000000140BD2781: mov     r8, rdx
 * 0000000140BD2784: xor     r11d, r11d
 * 0000000140BD2787: lea     r12d, [rcx-3]
 * 0000000140BD278B: xor     [rax], r8
 * 0000000140BD278E: lea     rax, [rax-8]
 * 0000000140BD2792: rol     r8, cl
 * 0000000140BD2795: sub     ecx, r12d
 * 0000000140BD2798: jnz     short loc_140BD278B
 * 0000000140BD279A: and     dl, 0Fh
 * 0000000140BD279D: cmp     dl, 7
 * 0000000140BD27A0: jnb     short loc_140BD2808
 * 0000000140BD27A2: mov     rax, r10
 * 0000000140BD27A5: mov     rcx, r9
 * 0000000140BD27A8: rol     rcx, 11h
 * 0000000140BD27AC: mov     r10d, 6
 * 0000000140BD27B2: xor     rcx, r9
 * 0000000140BD27B5: mul     rcx
 * 0000000140BD27B8: mov     [rbp+8D0h+var_3C8], rdx
 * 0000000140BD27BF: xor     rdx, rax
 * 0000000140BD27C2: add     r8, rdx
 * 0000000140BD27C5: lea     rax, [r9+28h]
 * 0000000140BD27C9: movsx   edx, word ptr [r9+8]
 * 0000000140BD27CE: xor     [rax], r8
 * 0000000140BD27D1: mov     ecx, r10d
 * 0000000140BD27D4: rol     r8, cl
 * 0000000140BD27D7: lea     rax, [rax-8]
 * 0000000140BD27DB: sub     r10d, r12d
 * 0000000140BD27DE: jnz     short loc_140BD27CE
 * 0000000140BD27E0: sub     rdx, 30h ; '0'
 * 0000000140BD27E4: shr     rdx, 3
 * 0000000140BD27E8: test    edx, edx
 * 0000000140BD27EA: jz      short loc_140BD2808
 * 0000000140BD27EC: movsxd  r10, edx
 * 0000000140BD27EF: add     r10, 5
 * 0000000140BD27F3: lea     r10, [r9+r10*8]
 * 0000000140BD27F7: xor     [r10], r8
 * 0000000140BD27FA: mov     ecx, edx
 * 0000000140BD27FC: rol     r8, cl
 * 0000000140BD27FF: lea     r10, [r10-8]
 * 0000000140BD2803: sub     edx, r12d
 * 0000000140BD2806: jnz     short loc_140BD27F7
 * 0000000140BD2808: mov     r12, [rbp+8D0h+arg_0]
 * 0000000140BD280F: mov     r8d, 1
 * 0000000140BD2815: mov     [rbx+40h], r15
 * 0000000140BD2819: mov     eax, [r12+9D8h]
 * 0000000140BD2821: test    al, al
 * 0000000140BD2823: jns     loc_140BD28B2
 * 0000000140BD2829: lea     r10, [r14-48h]
 * 0000000140BD282D: mov     [r10+40h], rbx
 * 0000000140BD2831: rdtsc
 * 0000000140BD2833: shl     rdx, 20h
 * 0000000140BD2837: mov     r14, 7010008004002001h
 * 0000000140BD2841: or      rax, rdx
 * 0000000140BD2844: mov     rcx, rax
 * 0000000140BD2847: mov     rdx, rax
 * 0000000140BD284A: ror     rcx, 3
 * 0000000140BD284E: mov     rax, r14
 * 0000000140BD2851: xor     rdx, rcx
 * 0000000140BD2854: mov     ecx, 19h
 * 0000000140BD2859: mul     rdx
 * 0000000140BD285C: mov     [rbp+8D0h+var_3C0], rdx
 * 0000000140BD2863: xor     rdx, rax
 * 0000000140BD2866: lea     rax, [r10+48h]
 * 0000000140BD286A: xor     [rax], rdx
 * 0000000140BD286D: lea     rax, [rax+8]
 * 0000000140BD2871: sub     rcx, r8
 * 0000000140BD2874: jnz     short loc_140BD286A
 * 0000000140BD2876: mov     dword ptr [r10+48h], 48513148h
 * 0000000140BD287E: mov     [r10+20h], rdx
 * 0000000140BD2882: jmp     short loc_140BD28BF
 * 0000000140BD2884: mov     r12, [rbp+8D0h+arg_0]
 * 0000000140BD288B: mov     byte ptr [rbx], 13h
 * 0000000140BD288E: mov     r8d, 1
 * 0000000140BD2894: mov     [rbx+1], r8b
 * 0000000140BD2898: mov     [rbx+2], r11w
 * 0000000140BD289D: mov     [rbx+18h], r14
 * 0000000140BD28A1: mov     [rbx+20h], r9
 * 0000000140BD28A5: mov     [rbx+38h], r11
 * 0000000140BD28A9: mov     [rbx+10h], r11
 * 0000000140BD28AD: jmp     loc_140BD2815
 * 0000000140BD28B2: mov     r10, rbx
 * 0000000140BD28B5: mov     r14, 7010008004002001h
 * 0000000140BD28BF: mov     rdx, [r12+0AE0h]
 * 0000000140BD28C7: test    rdx, rdx
 * 0000000140BD28CA: jz      loc_140BD2951
 * 0000000140BD28D0: mov     rdx, [rdx+20h]
 * 0000000140BD28D4: mov     eax, 0E04C2400h
 * 0000000140BD28D9: mov     rcx, rdx
 * 0000000140BD28DC: mov     r14d, 0Fh
 * 0000000140BD28E2: xor     rcx, rax
 * 0000000140BD28E5: shr     rcx, 4
 * 0000000140BD28E9: xor     rcx, rdx
 * 0000000140BD28EC: shr     rcx, 4
 * 0000000140BD28F0: xor     rcx, [r12+588h]
 * 0000000140BD28F8: mov     r9b, cl
 * 0000000140BD28FB: mov     r11, rcx
 * 0000000140BD28FE: and     r9b, r14b
 * 0000000140BD2901: jnz     short loc_140BD2906
 * 0000000140BD2903: mov     r9b, r8b
 * 0000000140BD2906: mov     r8, rcx
 * 0000000140BD2909: and     r8, r14
 * 0000000140BD290C: add     r8, rdx
 * 0000000140BD290F: mov     rdx, [r8]
 * 0000000140BD2912: mov     rax, rdx
 * 0000000140BD2915: xor     rax, 1DF400h
 * 0000000140BD291B: shr     rax, 4
 * 0000000140BD291F: xor     rax, rdx
 * 0000000140BD2922: shr     rax, 4
 * 0000000140BD2926: xor     rcx, rax
 * 0000000140BD2929: add     r9b, 0FFh
 * 0000000140BD292D: jnz     short loc_140BD2906
 * 0000000140BD292F: mov     r14, 7010008004002001h
 * 0000000140BD2939: bt      r11, 0Ch
 * 0000000140BD293E: jnb     short loc_140BD2943
 * 0000000140BD2940: xor     r10, r11
 * 0000000140BD2943: mov     [r8], r10
 * 0000000140BD2946: xor     r11d, r11d
 * 0000000140BD2949: mov     r10, [r12+0AE0h]
 * 0000000140BD2951: lock or [rsp+9D0h+var_9D0], r11d
 * 0000000140BD2956: mov     ecx, [r12+858h]
 * 0000000140BD295E: test    ecx, ecx
 * 0000000140BD2960: jz      loc_140BD2DF9
 * 0000000140BD2966: sub     ecx, 1
 * 0000000140BD2969: jz      loc_140BD2DE0
 * 0000000140BD296F: sub     ecx, 1
 * 0000000140BD2972: jz      loc_140BD2DCC
 * 0000000140BD2978: sub     ecx, 1
 * 0000000140BD297B: jz      loc_140BD2C0F
 * 0000000140BD2981: cmp     ecx, 1
 * 0000000140BD2984: jz      loc_140BD2A0C
 * 0000000140BD298A: mov     r8, [r12+9E0h]
 * 0000000140BD2992: mov     [r8+48h], r10
 * 0000000140BD2996: lock or [rsp+9D0h+var_9D0], r11d
 * 0000000140BD299B: rdtsc
 * 0000000140BD299D: shl     rdx, 20h
 * 0000000140BD29A1: or      rax, rdx
 * 0000000140BD29A4: mov     rcx, rax
 * 0000000140BD29A7: mov     rdx, rax
 * 0000000140BD29AA: ror     rcx, 3
 * 0000000140BD29AE: mov     rax, r14
 * 0000000140BD29B1: xor     rdx, rcx
 * 0000000140BD29B4: mul     rdx
 * 0000000140BD29B7: mov     rcx, rdx
 * 0000000140BD29BA: mov     [rbp+8D0h+var_2C8], rdx
 * 0000000140BD29C1: xor     rcx, rax
 * 0000000140BD29C4: mov     rax, 0ABCC77118461CEFDh
 * 0000000140BD29CE: mul     rcx
 * 0000000140BD29D1: shr     rdx, 1Ah
 * 0000000140BD29D5: imul    rax, rdx, 5F5E100h
 * 0000000140BD29DC: sub     rcx, rax
 * 0000000140BD29DF: mov     rax, 0D6BF94D5E57A42BDh
 * 0000000140BD29E9: add     rcx, 47868C00h
 * 0000000140BD29F0: imul    rcx
 * 0000000140BD29F3: add     rdx, rcx
 * 0000000140BD29F6: sar     rdx, 17h
 * 0000000140BD29FA: mov     rax, rdx
 * 0000000140BD29FD: shr     rax, 3Fh
 * 0000000140BD2A01: add     rdx, rax
 * 0000000140BD2A04: mov     [r8], edx
 * 0000000140BD2A07: jmp     loc_140BD2EA2
 * 0000000140BD2A0C: mov     r8, [r12+0A28h]
 * 0000000140BD2A14: xor     r9d, r9d
 * 0000000140BD2A17: mov     rcx, [r12+0A38h]
 * 0000000140BD2A1F: mov     rdx, rbx
 * 0000000140BD2A22: mov     rax, [r12+0A30h]
 * 0000000140BD2A2A: mov     rdi, [r12+9E0h]
 * 0000000140BD2A32: mov     byte ptr [r8], 12h
 * 0000000140BD2A36: mov     byte ptr [r8+2], 58h ; 'X'
 * 0000000140BD2A3B: mov     [r8+50h], r11b
 * 0000000140BD2A3F: mov     [r8+8], rdi
 * 0000000140BD2A43: mov     [r8+20h], rax
 * 0000000140BD2A47: mov     [r8+28h], r11
 * 0000000140BD2A4B: mov     [r8+30h], rcx
 * 0000000140BD2A4F: mov     [r8+51h], r11b
 * 0000000140BD2A53: mov     [r8+38h], r11
 * 0000000140BD2A57: mov     [r8+52h], r11b
 * 0000000140BD2A5B: xor     r8d, r8d
 * 0000000140BD2A5E: mov     rax, [r12+2C0h]
 * 0000000140BD2A66: mov     rcx, [r12+0A28h]
 * 0000000140BD2A6E: call    KeGuardDispatchICall
 * 0000000140BD2A73: xor     r11d, r11d
 * 0000000140BD2A76: test    al, al
 * 0000000140BD2A78: jnz     loc_140BD2EA2
 * 0000000140BD2A7E: lea     r10d, [r11+1]
 * 0000000140BD2A82: cmp     [r12+918h], r11d
 * 0000000140BD2A8A: jnz     loc_140BD2BB2
 * 0000000140BD2A90: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BD2A9A: add     rax, r12
 * 0000000140BD2A9D: mov     [r12+920h], rax
 * 0000000140BD2AA5: mov     [r12+928h], r11
 * 0000000140BD2AAD: mov     qword ptr [r12+930h], 104h
 * 0000000140BD2AB9: mov     [r12+938h], rdi
 * 0000000140BD2AC1: mov     [r12+918h], r10d
 * 0000000140BD2AC9: mov     ecx, [r12+9D8h]
 * 0000000140BD2AD1: bt      ecx, 1Dh
 * 0000000140BD2AD5: jb      loc_140BD2BB2
 * 0000000140BD2ADB: test    dword ptr [r12+9DCh], 200000h
 * 0000000140BD2AE7: jz      loc_140BD2BB2
 * 0000000140BD2AED: test    r10b, cl
 * 0000000140BD2AF0: jz      loc_140BD2BB2
 * 0000000140BD2AF6: mov     ecx, [r12+0A74h]
 * 0000000140BD2AFE: mov     eax, [r12+804h]
 * 0000000140BD2B06: mov     r10, [r12+838h]
 * 0000000140BD2B0E: sub     eax, ecx
 * 0000000140BD2B10: mov     r8, [r12+0A78h]
 * 0000000140BD2B18: lea     rdx, [rcx+r12]
 * 0000000140BD2B1C: mov     ecx, eax
 * 0000000140BD2B1E: shr     rcx, 3
 * 0000000140BD2B22: lea     r9, [rdx+rcx*8]
 * 0000000140BD2B26: jmp     short loc_140BD2B49
 * 0000000140BD2B28: xor     [rdx], r8
 * 0000000140BD2B2B: mov     rax, [rdx]
 * 0000000140BD2B2E: movzx   ecx, r8b
 * 0000000140BD2B32: xor     rax, r10
 * 0000000140BD2B35: and     ecx, 3Fh
 * 0000000140BD2B38: ror     r8, cl
 * 0000000140BD2B3B: add     r8, rax
 * 0000000140BD2B3E: xor     r8, 0EFAh
 * 0000000140BD2B45: add     rdx, 8
 * 0000000140BD2B49: cmp     rdx, r9
 * 0000000140BD2B4C: jnz     short loc_140BD2B28
 * 0000000140BD2B4E: btr     dword ptr [r12+9DCh], 15h
 * 0000000140BD2B58: cmp     r8, [r12+0A80h]
 * 0000000140BD2B60: jz      short loc_140BD2BAC
 * 0000000140BD2B62: mov     ecx, [r12+804h]
 * 0000000140BD2B6A: mov     rax, [r12+588h]
 * 0000000140BD2B72: mov     [rax], r12
 * 0000000140BD2B75: mov     [rax+10h], ecx
 * 0000000140BD2B78: mov     rcx, [r12+0A80h]
 * 0000000140BD2B80: cmp     [r12+918h], r11d
 * 0000000140BD2B88: jnz     short loc_140BD2B99
 * 0000000140BD2B8A: mov     rax, [r12+588h]
 * 0000000140BD2B92: xor     rcx, r8
 * 0000000140BD2B95: mov     [rax+18h], rcx
 * 0000000140BD2B99: xor     edx, edx
 * 0000000140BD2B9B: mov     r9d, 100h
 * 0000000140BD2BA1: mov     rcx, r12
 * 0000000140BD2BA4: call    sub_140BD8384
 * 0000000140BD2BA9: xor     r11d, r11d
 * 0000000140BD2BAC: mov     r10d, 1
 * 0000000140BD2BB2: lea     rcx, [r12+918h]
 * 0000000140BD2BBA: mov     r12d, 5
 * 0000000140BD2BC0: lea     rdx, [rbp+8D0h+var_668]
 * 0000000140BD2BC7: mov     rax, [rcx]
 * 0000000140BD2BCA: add     r13d, 0FFFFFFF8h
 * 0000000140BD2BCE: mov     [rdx], rax
 * 0000000140BD2BD1: add     rcx, 8
 * 0000000140BD2BD5: add     rdx, 8
 * 0000000140BD2BD9: sub     r12, r10
 * 0000000140BD2BDC: jnz     short loc_140BD2BC7
 * 0000000140BD2BDE: mov     r12, [rbp+8D0h+arg_0]
 * 0000000140BD2BE5: test    r13d, r13d
 * 0000000140BD2BE8: jz      loc_140BD2EA8
 * 0000000140BD2BEE: mov     r12d, 0FFFFFFFFh
 * 0000000140BD2BF4: mov     al, [rcx]
 * 0000000140BD2BF6: add     rcx, r10
 * 0000000140BD2BF9: mov     [rdx], al
 * 0000000140BD2BFB: add     rdx, r10
 * 0000000140BD2BFE: add     r13d, r12d
 * 0000000140BD2C01: jnz     short loc_140BD2BF4
 * 0000000140BD2C03: mov     r12, [rbp+8D0h+arg_0]
 * 0000000140BD2C0A: jmp     loc_140BD2EA8
 * 0000000140BD2C0F: mov     rdi, [r12+9E0h]
 * 0000000140BD2C17: mov     r10d, 1
 * 0000000140BD2C1D: mov     rax, [r12+6A8h]
 * 0000000140BD2C25: mov     rcx, [rdi+rax]
 * 0000000140BD2C29: test    rcx, rcx
 * 0000000140BD2C2C: jz      loc_140BD2DB6
 * 0000000140BD2C32: cmp     [r12+918h], r11d
 * 0000000140BD2C3A: jnz     loc_140BD2D62
 * 0000000140BD2C40: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BD2C4A: add     rax, r12
 * 0000000140BD2C4D: mov     [r12+920h], rax
 * 0000000140BD2C55: mov     [r12+928h], r11
 * 0000000140BD2C5D: mov     qword ptr [r12+930h], 104h
 * 0000000140BD2C69: mov     [r12+938h], rcx
 * 0000000140BD2C71: mov     [r12+918h], r10d
 * 0000000140BD2C79: mov     ecx, [r12+9D8h]
 * 0000000140BD2C81: bt      ecx, 1Dh
 * 0000000140BD2C85: jb      loc_140BD2D62
 * 0000000140BD2C8B: test    dword ptr [r12+9DCh], 200000h
 * 0000000140BD2C97: jz      loc_140BD2D62
 * 0000000140BD2C9D: test    r10b, cl
 * 0000000140BD2CA0: jz      loc_140BD2D62
 * 0000000140BD2CA6: mov     ecx, [r12+0A74h]
 * 0000000140BD2CAE: mov     eax, [r12+804h]
 * 0000000140BD2CB6: mov     r10, [r12+838h]
 * 0000000140BD2CBE: sub     eax, ecx
 * 0000000140BD2CC0: mov     r8, [r12+0A78h]
 * 0000000140BD2CC8: lea     rdx, [rcx+r12]
 * 0000000140BD2CCC: mov     ecx, eax
 * 0000000140BD2CCE: shr     rcx, 3
 * 0000000140BD2CD2: lea     r9, [rdx+rcx*8]
 * 0000000140BD2CD6: jmp     short loc_140BD2CF9
 * 0000000140BD2CD8: xor     [rdx], r8
 * 0000000140BD2CDB: mov     rax, [rdx]
 * 0000000140BD2CDE: movzx   ecx, r8b
 * 0000000140BD2CE2: xor     rax, r10
 * 0000000140BD2CE5: and     ecx, 3Fh
 * 0000000140BD2CE8: ror     r8, cl
 * 0000000140BD2CEB: add     r8, rax
 * 0000000140BD2CEE: xor     r8, 0EFAh
 * 0000000140BD2CF5: add     rdx, 8
 * 0000000140BD2CF9: cmp     rdx, r9
 * 0000000140BD2CFC: jnz     short loc_140BD2CD8
 * 0000000140BD2CFE: btr     dword ptr [r12+9DCh], 15h
 * 0000000140BD2D08: cmp     r8, [r12+0A80h]
 * 0000000140BD2D10: jz      short loc_140BD2D5C
 * 0000000140BD2D12: mov     ecx, [r12+804h]
 * 0000000140BD2D1A: mov     rax, [r12+588h]
 * 0000000140BD2D22: mov     [rax], r12
 * 0000000140BD2D25: mov     [rax+10h], ecx
 * 0000000140BD2D28: mov     rcx, [r12+0A80h]
 * 0000000140BD2D30: cmp     [r12+918h], r11d
 * 0000000140BD2D38: jnz     short loc_140BD2D49
 * 0000000140BD2D3A: mov     rax, [r12+588h]
 * 0000000140BD2D42: xor     rcx, r8
 * 0000000140BD2D45: mov     [rax+18h], rcx
 * 0000000140BD2D49: xor     edx, edx
 * 0000000140BD2D4B: mov     r9d, 100h
 * 0000000140BD2D51: mov     rcx, r12
 * 0000000140BD2D54: call    sub_140BD8384
 * 0000000140BD2D59: xor     r11d, r11d
 * 0000000140BD2D5C: mov     r10d, 1
 * 0000000140BD2D62: lea     rcx, [r12+918h]
 * 0000000140BD2D6A: mov     r12d, 5
 * 0000000140BD2D70: lea     rdx, [rbp+8D0h+var_668]
 * 0000000140BD2D77: mov     rax, [rcx]
 * 0000000140BD2D7A: add     r13d, 0FFFFFFF8h
 * 0000000140BD2D7E: mov     [rdx], rax
 * 0000000140BD2D81: add     rcx, 8
 * 0000000140BD2D85: add     rdx, 8
 * 0000000140BD2D89: sub     r12, r10
 * 0000000140BD2D8C: jnz     short loc_140BD2D77
 * 0000000140BD2D8E: mov     r12, [rbp+8D0h+arg_0]
 * 0000000140BD2D95: test    r13d, r13d
 * 0000000140BD2D98: jz      short loc_140BD2DB6
 * 0000000140BD2D9A: mov     r12d, 0FFFFFFFFh
 * 0000000140BD2DA0: mov     al, [rcx]
 * 0000000140BD2DA2: add     rcx, r10
 * 0000000140BD2DA5: mov     [rdx], al
 * 0000000140BD2DA7: add     rdx, r10
 * 0000000140BD2DAA: add     r13d, r12d
 * 0000000140BD2DAD: jnz     short loc_140BD2DA0
 * 0000000140BD2DAF: mov     r12, [rbp+8D0h+arg_0]
 * 0000000140BD2DB6: lock or [rsp+9D0h+var_9D0], r11d
 * 0000000140BD2DBB: mov     rax, [r12+6A8h]
 * 0000000140BD2DC3: mov     [rdi+rax], rbx
 * 0000000140BD2DC7: jmp     loc_140BD2EA8
 * 0000000140BD2DCC: mov     rax, [r12+7E0h]
 * 0000000140BD2DD4: mov     [rax+80h], r10
 * 0000000140BD2DDB: jmp     loc_140BD2EA2
 * 0000000140BD2DE0: mov     rcx, [r12+7E0h]
 * 0000000140BD2DE8: mov     rax, [r12+638h]
 * 0000000140BD2DF0: mov     [rcx+rax], r10
 * 0000000140BD2DF4: jmp     loc_140BD2EA2
 * 0000000140BD2DF9: rdtsc
 * 0000000140BD2DFB: shl     rdx, 20h
 * 0000000140BD2DFF: or      rax, rdx
 * 0000000140BD2E02: mov     rcx, rax
 * 0000000140BD2E05: mov     rdx, rax
 * 0000000140BD2E08: ror     rcx, 3
 * 0000000140BD2E0C: mov     rax, r14
 * 0000000140BD2E0F: xor     rdx, rcx
 * 0000000140BD2E12: mul     rdx
 * 0000000140BD2E15: mov     rcx, rdx
 * 0000000140BD2E18: mov     [rbp+8D0h+var_3B0], rdx
 * 0000000140BD2E1F: xor     rcx, rax
 * 0000000140BD2E22: mov     rax, 0ABCC77118461CEFDh
 * 0000000140BD2E2C: mul     rcx
 * 0000000140BD2E2F: shr     rdx, 1Ah
 * 0000000140BD2E33: imul    rax, rdx, 5F5E100h
 * 0000000140BD2E3A: sub     rcx, rax
 * 0000000140BD2E3D: sub     rdi, rcx
 * 0000000140BD2E40: rdtsc
 * 0000000140BD2E42: shl     rdx, 20h
 * 0000000140BD2E46: xor     r8d, r8d
 * 0000000140BD2E49: or      rax, rdx
 * 0000000140BD2E4C: mov     [rsp+9D0h+BugCheckParameter4], r10
 * 0000000140BD2E51: mov     rcx, rax
 * 0000000140BD2E54: mov     rdx, rax
 * 0000000140BD2E57: ror     rcx, 3
 * 0000000140BD2E5B: mov     rax, r14
 * 0000000140BD2E5E: xor     rdx, rcx
 * 0000000140BD2E61: mov     rcx, rsi
 * 0000000140BD2E64: mul     rdx
 * 0000000140BD2E67: mov     r9, rdx
 * 0000000140BD2E6A: mov     [rbp+8D0h+var_3A8], rdx
 * 0000000140BD2E71: xor     r9, rax
 * 0000000140BD2E74: mov     rax, 346DC5D63886594Bh
 * 0000000140BD2E7E: mul     r9
 * 0000000140BD2E81: shr     rdx, 0Bh
 * 0000000140BD2E85: imul    rax, rdx, 2710h
 * 0000000140BD2E8C: mov     rdx, rdi
 * 0000000140BD2E8F: sub     r9, rax
 * 0000000140BD2E92: mov     rax, [r12+1E8h]
 * 0000000140BD2E9A: call    KeGuardDispatchICall
 * 0000000140BD2E9F: xor     r11d, r11d
 * 0000000140BD2EA2: mov     r10d, 1
 * 0000000140BD2EA8: cmp     [rbp+8D0h+var_668], r11d
 * 0000000140BD2EAF: jz      loc_140BD342F
 * 0000000140BD2EB5: mov     r9d, [r12+9D8h]
 * 0000000140BD2EBD: bt      r9d, 0Eh
 * 0000000140BD2EC2: jb      loc_140BD342F
 * 0000000140BD2EC8: mov     rdi, [rbp+8D0h+var_650]
 * 0000000140BD2ECF: mov     rsi, [rbp+8D0h+var_648]
 * 0000000140BD2ED6: mov     r14, [rbp+8D0h+var_658]
 * 0000000140BD2EDD: mov     r15, [rbp+8D0h+var_660]
 * 0000000140BD2EE4: mov     [rbp+8D0h+var_900], rdi
 * 0000000140BD2EE8: mov     [rbp+8D0h+var_920], rsi
 * 0000000140BD2EEC: mov     [rbp+8D0h+var_910], r14
 * 0000000140BD2EF0: mov     [rbp+8D0h+var_930], r15
 * 0000000140BD2EF4: mov     rax, cr8
 * 0000000140BD2EF8: mov     ecx, 2
 * 0000000140BD2EFD: cmp     al, cl
 * 0000000140BD2EFF: jnb     short loc_140BD2F11
 * 0000000140BD2F01: mov     rax, cr8
 * 0000000140BD2F05: mov     cr8, rcx
 * 0000000140BD2F09: mov     r9d, [r12+9D8h]
 * 0000000140BD2F11: mov     r8, gs:20h
 * 0000000140BD2F1A: mov     rax, [r12+640h]
 * 0000000140BD2F22: mov     rcx, gs:20h
 * 0000000140BD2F2B: mov     r13, [r8+rax]
 * 0000000140BD2F2F: mov     rax, [r12+648h]
 * 0000000140BD2F37: mov     [rsp+9D0h+var_968], r13
 * 0000000140BD2F3C: mov     rdx, [rax+r8]
 * 0000000140BD2F40: mov     rax, [r12+658h]
 * 0000000140BD2F48: add     rdx, [r12+788h]
 * 0000000140BD2F50: mov     rbx, [rcx+rax]
 * 0000000140BD2F54: lea     rax, [rbp+8D0h+var_848]
 * 0000000140BD2F5B: mov     [rbp+8D0h+var_940], rbx
 * 0000000140BD2F5F: cmp     rax, r13
 * 0000000140BD2F62: ja      short loc_140BD2F7E
 * 0000000140BD2F64: mov     eax, [r12+5FCh]
 * 0000000140BD2F6C: mov     rcx, r13
 * 0000000140BD2F6F: sub     rcx, rax
 * 0000000140BD2F72: lea     rax, [rbp+8D0h+var_848]
 * 0000000140BD2F79: cmp     rax, rcx
 * 0000000140BD2F7C: jnb     short loc_140BD2FCD
 * 0000000140BD2F7E: mov     rax, [r12+650h]
 * 0000000140BD2F86: cmp     [r8+rax], r11b
 * 0000000140BD2F8A: jz      short loc_140BD2FBC
 * 0000000140BD2F8C: lea     rax, [rbp+8D0h+var_848]
 * 0000000140BD2F93: cmp     rax, rdx
 * 0000000140BD2F96: ja      short loc_140BD2FBC
 * 0000000140BD2F98: mov     eax, [r12+5F8h]
 * 0000000140BD2FA0: mov     rcx, rdx
 * 0000000140BD2FA3: sub     rcx, rax
 * 0000000140BD2FA6: lea     rax, [rbp+8D0h+var_848]
 * 0000000140BD2FAD: cmp     rax, rcx
 * 0000000140BD2FB0: jb      short loc_140BD2FBC
 * 0000000140BD2FB2: mov     r13, rdx
 * 0000000140BD2FB5: mov     [rsp+9D0h+var_968], rdx
 * 0000000140BD2FBA: jmp     short loc_140BD2FCD
 * 0000000140BD2FBC: mov     rax, [r12+688h]
 * 0000000140BD2FC4: mov     r13, [rbx+rax]
 * 0000000140BD2FC8: mov     [rsp+9D0h+var_968], r13
 * 0000000140BD2FCD: bt      r9d, 1Ah
 * 0000000140BD2FD2: jb      loc_140BD3658
 * 0000000140BD2FD8: test    dword ptr [r12+9DCh], 400000h
 * 0000000140BD2FE4: mov     [rbp+8D0h+var_908], r11
 * 0000000140BD2FE8: jnz     short loc_140BD2FFC
 * 0000000140BD2FEA: mov     rcx, cr0
 * 0000000140BD2FED: mov     rax, rcx
 * 0000000140BD2FF0: mov     [rbp+8D0h+var_908], rcx
 * 0000000140BD2FF4: btr     rax, 10h
 * 0000000140BD2FF9: mov     cr0, rax
 * 0000000140BD2FFC: mov     edi, [r12+0AE8h]
 * 0000000140BD3004: lea     rbx, [r12+0AF0h]
 * 0000000140BD300C: shl     rdi, 4
 * 0000000140BD3010: mov     edx, r11d
 * 0000000140BD3013: add     rdi, rbx
 * 0000000140BD3016: mov     [rsp+9D0h+var_978], rbx
 * 0000000140BD301B: mov     r9, rdi
 * 0000000140BD301E: mov     [rbp+8D0h+var_8F0], rdi
 * 0000000140BD3022: mov     [rbp+8D0h+var_8A8], rdi
 * 0000000140BD3026: cmp     [r12+0AECh], r11d
 * 0000000140BD302E: jbe     short loc_140BD3079
 * 0000000140BD3030: mov     esi, 10h
 * 0000000140BD3035: mov     rcx, [r9]
 * 0000000140BD3038: mov     rax, [r9+8]
 * 0000000140BD303C: mov     [rcx], rax
 * 0000000140BD303F: mov     rcx, cr4
 * 0000000140BD3042: test    rcx, 20080h
 * 0000000140BD3049: jz      short loc_140BD305B
 * 0000000140BD304B: mov     rax, rcx
 * 0000000140BD304E: btc     rax, 7
 * 0000000140BD3053: mov     cr4, rax
 * 0000000140BD3056: mov     cr4, rcx
 * 0000000140BD3059: jmp     short loc_140BD3061
 * 0000000140BD305B: mov     rax, cr3
 * 0000000140BD305E: mov     cr3, rax
 * 0000000140BD3061: add     r9, rsi
 * 0000000140BD3064: add     edx, r10d
 * 0000000140BD3067: cmp     edx, [r12+0AECh]
 * 0000000140BD306F: jb      short loc_140BD3035
 * 0000000140BD3071: mov     rsi, [rbp+8D0h+var_920]
 * 0000000140BD3075: mov     [rbp+8D0h+var_8A8], r9
 * 0000000140BD3079: mov     rcx, 7FFFFFFFF8h
 * 0000000140BD3083: cmp     rbx, rdi
 * 0000000140BD3086: jnb     loc_140BD32F7
 * 0000000140BD308C: mov     r13d, 4
 * 0000000140BD3092: test    dword ptr [r12+9DCh], 400000h
 * 0000000140BD309E: mov     esi, [rbx+8]
 * 0000000140BD30A1: mov     r8, [rbx]
 * 0000000140BD30A4: mov     dword ptr [rbp+8D0h+arg_8], esi
 * 0000000140BD30AA: jnz     short loc_140BD3109
 * 0000000140BD30AC: mov     edx, esi
 * 0000000140BD30AE: mov     rcx, r9
 * 0000000140BD30B1: cmp     esi, 8
 * 0000000140BD30B4: jb      short loc_140BD30DC
 * 0000000140BD30B6: mov     r10d, esi
 * 0000000140BD30B9: mov     edi, 1
 * 0000000140BD30BE: shr     r10, 3
 * 0000000140BD30C2: mov     rax, [rcx]
 * 0000000140BD30C5: add     edx, 0FFFFFFF8h
 * 0000000140BD30C8: mov     [r8], rax
 * 0000000140BD30CB: add     rcx, 8
 * 0000000140BD30CF: add     r8, 8
 * 0000000140BD30D3: sub     r10, rdi
 * 0000000140BD30D6: jnz     short loc_140BD30C2
 * 0000000140BD30D8: mov     rdi, [rbp+8D0h+var_8F0]
 * 0000000140BD30DC: test    edx, edx
 * 0000000140BD30DE: jz      loc_140BD32C1
 * 0000000140BD30E4: sub     r8, rcx
 * 0000000140BD30E7: mov     ebx, 0FFFFFFFFh
 * 0000000140BD30EC: mov     r10d, 1
 * 0000000140BD30F2: mov     al, [rcx]
 * 0000000140BD30F4: mov     [rcx+r8], al
 * 0000000140BD30F8: add     rcx, r10
 * 0000000140BD30FB: add     edx, ebx
 * 0000000140BD30FD: jnz     short loc_140BD30F2
 * 0000000140BD30FF: mov     rbx, [rsp+9D0h+var_978]
 * 0000000140BD3104: jmp     loc_140BD32C1
 * 0000000140BD3109: mov     rcx, r8
 * 0000000140BD310C: mov     [rbp+8D0h+var_8D8], r9
 * 0000000140BD3110: and     ecx, 0FFFh
 * 0000000140BD3116: lea     rdx, [rsi+0FFFh]
 * 0000000140BD311D: add     rdx, rcx
 * 0000000140BD3120: mov     r12d, esi
 * 0000000140BD3123: shr     rdx, 0Ch
 * 0000000140BD3127: test    edx, edx
 * 0000000140BD3129: jz      loc_140BD32BA
 * 0000000140BD312F: mov     rdi, [rbp+8D0h+arg_0]
 * 0000000140BD3136: mov     esi, 20080h
 * 0000000140BD313B: mov     eax, edx
 * 0000000140BD313D: mov     r9, 7FFFFFFFF8h
 * 0000000140BD3147: mov     [rbp+8D0h+var_8D0], rax
 * 0000000140BD314B: mov     r14d, 1
 * 0000000140BD3151: mov     r11, [rdi+5D8h]
 * 0000000140BD3158: lea     rcx, [rbp+8D0h+var_1D0]
 * 0000000140BD315F: mov     rax, r8
 * 0000000140BD3162: mov     rdx, r13
 * 0000000140BD3165: shr     rax, 9
 * 0000000140BD3169: mov     r10d, r13d
 * 0000000140BD316C: and     rax, r9
 * 0000000140BD316F: add     rax, r11
 * 0000000140BD3172: mov     [rcx], rax
 * 0000000140BD3175: lea     rcx, [rcx+8]
 * 0000000140BD3179: shr     rax, 9
 * 0000000140BD317D: and     rax, r9
 * 0000000140BD3180: add     rax, r11
 * 0000000140BD3183: sub     rdx, r14
 * 0000000140BD3186: jnz     short loc_140BD3172
 * 0000000140BD3188: mov     eax, 0FFFFFFFFh
 * 0000000140BD318D: add     r10d, eax
 * 0000000140BD3190: jz      short loc_140BD31A4
 * 0000000140BD3192: mov     rax, [rbp+r10*8+8D0h+var_1D0]
 * 0000000140BD319A: mov     ecx, [rax]
 * 0000000140BD319C: shr     cl, 7
 * 0000000140BD319F: test    r14b, cl
 * 0000000140BD31A2: jz      short loc_140BD3188
 * 0000000140BD31A4: mov     r15, [rbp+r10*8+8D0h+var_1D0]
 * 0000000140BD31AC: mov     [rbp+8D0h+var_950], r15
 * 0000000140BD31B0: mov     rax, [r15]
 * 0000000140BD31B3: or      rax, 62h
 * 0000000140BD31B7: mov     [r15], rax
 * 0000000140BD31BA: mov     rdx, cr4
 * 0000000140BD31BD: test    rsi, rdx
 * 0000000140BD31C0: jz      short loc_140BD31D2
 * 0000000140BD31C2: mov     rcx, rdx
 * 0000000140BD31C5: btc     rcx, 7
 * 0000000140BD31CA: mov     cr4, rcx
 * 0000000140BD31CD: mov     cr4, rdx
 * 0000000140BD31D0: jmp     short loc_140BD31D8
 * 0000000140BD31D2: mov     rcx, cr3
 * 0000000140BD31D5: mov     cr3, rcx
 * 0000000140BD31D8: mov     edx, 1000h
 * 0000000140BD31DD: mov     ecx, r8d
 * 0000000140BD31E0: and     ecx, 0FFFh
 * 0000000140BD31E6: mov     r10d, r12d
 * 0000000140BD31E9: sub     edx, ecx
 * 0000000140BD31EB: mov     r11, r8
 * 0000000140BD31EE: cmp     edx, r12d
 * 0000000140BD31F1: cmovb   r10d, edx
 * 0000000140BD31F5: mov     rdx, [rbp+8D0h+var_8D8]
 * 0000000140BD31F9: mov     r14d, r10d
 * 0000000140BD31FC: cmp     r10d, 8
 * 0000000140BD3200: jb      short loc_140BD3234
 * 0000000140BD3202: mov     r15d, r10d
 * 0000000140BD3205: mov     r9d, 1
 * 0000000140BD320B: shr     r15, 3
 * 0000000140BD320F: mov     rcx, [rdx]
 * 0000000140BD3212: add     r14d, 0FFFFFFF8h
 * 0000000140BD3216: mov     [r11], rcx
 * 0000000140BD3219: add     rdx, 8
 * 0000000140BD321D: add     r11, 8
 * 0000000140BD3221: sub     r15, r9
 * 0000000140BD3224: jnz     short loc_140BD320F
 * 0000000140BD3226: mov     r15, [rbp+8D0h+var_950]
 * 0000000140BD322A: mov     r9, 7FFFFFFFF8h
 * 0000000140BD3234: test    r14d, r14d
 * 0000000140BD3237: jz      short loc_140BD3266
 * 0000000140BD3239: sub     r11, rdx
 * 0000000140BD323C: mov     edi, 0FFFFFFFFh
 * 0000000140BD3241: mov     r9d, 1
 * 0000000140BD3247: mov     cl, [rdx]
 * 0000000140BD3249: mov     [rdx+r11], cl
 * 0000000140BD324D: add     rdx, r9
 * 0000000140BD3250: add     r14d, edi
 * 0000000140BD3253: jnz     short loc_140BD3247
 * 0000000140BD3255: mov     rdi, [rbp+8D0h+arg_0]
 * 0000000140BD325C: mov     r9, 7FFFFFFFF8h
 * 0000000140BD3266: mov     ecx, r10d
 * 0000000140BD3269: add     [rbp+8D0h+var_8D8], rcx
 * 0000000140BD326D: add     r8, rcx
 * 0000000140BD3270: sub     r12d, r10d
 * 0000000140BD3273: mov     [r15], rax
 * 0000000140BD3276: mov     rcx, cr4
 * 0000000140BD3279: test    rsi, rcx
 * 0000000140BD327C: jz      short loc_140BD328E
 * 0000000140BD327E: mov     rax, rcx
 * 0000000140BD3281: btc     rax, 7
 * 0000000140BD3286: mov     cr4, rax
 * 0000000140BD3289: mov     cr4, rcx
 * 0000000140BD328C: jmp     short loc_140BD3294
 * 0000000140BD328E: mov     rax, cr3
 * 0000000140BD3291: mov     cr3, rax
 * 0000000140BD3294: mov     r14d, 1
 * 0000000140BD329A: sub     [rbp+8D0h+var_8D0], r14
 * 0000000140BD329E: jnz     loc_140BD3151
 * 0000000140BD32A4: mov     r9, [rbp+8D0h+var_8A8]
 * 0000000140BD32A8: xor     r11d, r11d
 * 0000000140BD32AB: mov     rbx, [rsp+9D0h+var_978]
 * 0000000140BD32B0: mov     rdi, [rbp+8D0h+var_8F0]
 * 0000000140BD32B4: mov     esi, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BD32BA: mov     r12, [rbp+8D0h+arg_0]
 * 0000000140BD32C1: add     rbx, 10h
 * 0000000140BD32C5: mov     eax, esi
 * 0000000140BD32C7: add     r9, rax
 * 0000000140BD32CA: mov     [rsp+9D0h+var_978], rbx
 * 0000000140BD32CF: mov     [rbp+8D0h+var_8A8], r9
 * 0000000140BD32D3: cmp     rbx, rdi
 * 0000000140BD32D6: jb      loc_140BD3092
 * 0000000140BD32DC: mov     r13, [rsp+9D0h+var_968]
 * 0000000140BD32E1: mov     rcx, 7FFFFFFFF8h
 * 0000000140BD32EB: mov     rsi, [rbp+8D0h+var_920]
 * 0000000140BD32EF: mov     r14, [rbp+8D0h+var_910]
 * 0000000140BD32F3: mov     r15, [rbp+8D0h+var_930]
 * 0000000140BD32F7: test    dword ptr [r12+9DCh], 400000h
 * 0000000140BD3303: jnz     short loc_140BD331C
 * 0000000140BD3305: mov     rax, [r12+228h]
 * 0000000140BD330D: mov     byte ptr [rax], 0C3h
 * 0000000140BD3310: mov     rax, [rbp+8D0h+var_908]
 * 0000000140BD3314: mov     cr0, rax
 * 0000000140BD3317: jmp     loc_140BD3650
 * 0000000140BD331C: mov     [rbp+8D0h+arg_18], 0C3h
 * 0000000140BD3323: lea     r8, [rbp+8D0h+arg_18]
 * 0000000140BD332A: mov     r9, [r12+228h]
 * 0000000140BD3332: mov     r11d, 4
 * 0000000140BD3338: mov     rdx, [r12+5D8h]
 * 0000000140BD3340: mov     rax, r9
 * 0000000140BD3343: shr     rax, 9
 * 0000000140BD3347: mov     r10d, r11d
 * 0000000140BD334A: and     rax, rcx
 * 0000000140BD334D: mov     rbx, 7FFFFFFFF8h
 * 0000000140BD3357: add     rax, rdx
 * 0000000140BD335A: lea     rcx, [rbp+8D0h+var_1B0]
 * 0000000140BD3361: lea     edi, [r11-3]
 * 0000000140BD3365: mov     [rcx], rax
 * 0000000140BD3368: lea     rcx, [rcx+8]
 * 0000000140BD336C: shr     rax, 9
 * 0000000140BD3370: and     rax, rbx
 * 0000000140BD3373: add     rax, rdx
 * 0000000140BD3376: sub     r11, rdi
 * 0000000140BD3379: jnz     short loc_140BD3365
 * 0000000140BD337B: mov     eax, 0FFFFFFFFh
 * 0000000140BD3380: add     r10d, eax
 * 0000000140BD3383: jz      short loc_140BD3397
 * 0000000140BD3385: mov     rax, [rbp+r10*8+8D0h+var_1B0]
 * 0000000140BD338D: mov     ecx, [rax]
 * 0000000140BD338F: shr     cl, 7
 * 0000000140BD3392: test    dil, cl
 * 0000000140BD3395: jz      short loc_140BD337B
 * 0000000140BD3397: mov     r11, [rbp+r10*8+8D0h+var_1B0]
 * 0000000140BD339F: mov     rax, [r11]
 * 0000000140BD33A2: or      rax, 62h
 * 0000000140BD33A6: mov     [r11], rax
 * 0000000140BD33A9: mov     rdx, cr4
 * 0000000140BD33AC: mov     ebx, 20080h
 * 0000000140BD33B1: test    rbx, rdx
 * 0000000140BD33B4: jz      short loc_140BD33C6
 * 0000000140BD33B6: mov     rcx, rdx
 * 0000000140BD33B9: btc     rcx, 7
 * 0000000140BD33BE: mov     cr4, rcx
 * 0000000140BD33C1: mov     cr4, rdx
 * 0000000140BD33C4: jmp     short loc_140BD33CC
 * 0000000140BD33C6: mov     rcx, cr3
 * 0000000140BD33C9: mov     cr3, rcx
 * 0000000140BD33CC: mov     ecx, r9d
 * 0000000140BD33CF: mov     r10d, 1000h
 * 0000000140BD33D5: and     ecx, 0FFFh
 * 0000000140BD33DB: mov     edx, edi
 * 0000000140BD33DD: sub     r10d, ecx
 * 0000000140BD33E0: cmp     r10d, edi
 * 0000000140BD33E3: cmovb   edx, r10d
 * 0000000140BD33E7: cmp     edx, 8
 * 0000000140BD33EA: jb      short loc_140BD3409
 * 0000000140BD33EC: mov     r10d, edx
 * 0000000140BD33EF: shr     r10, 3
 * 0000000140BD33F3: mov     rcx, [r8]
 * 0000000140BD33F6: add     edx, 0FFFFFFF8h
 * 0000000140BD33F9: mov     [r9], rcx
 * 0000000140BD33FC: add     r8, 8
 * 0000000140BD3400: add     r9, 8
 * 0000000140BD3404: sub     r10, rdi
 * 0000000140BD3407: jnz     short loc_140BD33F3
 * 0000000140BD3409: test    edx, edx
 * 0000000140BD340B: jz      loc_140BD362F
 * 0000000140BD3411: sub     r9, r8
 * 0000000140BD3414: mov     r15d, 0FFFFFFFFh
 * 0000000140BD341A: mov     cl, [r8]
 * 0000000140BD341D: mov     [r8+r9], cl
 * 0000000140BD3421: add     r8, rdi
 * 0000000140BD3424: add     edx, r15d
 * 0000000140BD3427: jz      loc_140BD362B
 * 0000000140BD342D: jmp     short loc_140BD341A
 * 0000000140BD342F: test    dword ptr [r12+9D8h], 20000000h
 * 0000000140BD343B: jnz     short loc_140BD3499
 * 0000000140BD343D: cmp     dword ptr [rbp+8D0h+arg_8], r11d
 * 0000000140BD3444: jz      short loc_140BD3499
 * 0000000140BD3446: mov     ecx, [r12+944h]
 * 0000000140BD344E: sub     ecx, 1
 * 0000000140BD3451: jz      short loc_140BD346E
 * 0000000140BD3453: mov     eax, 2
 * 0000000140BD3458: cmp     ecx, eax
 * 0000000140BD345A: jnz     short loc_140BD3499
 * 0000000140BD345C: mov     rax, [r12+368h]
 * 0000000140BD3464: mov     [r12+108h], rax
 * 0000000140BD346C: jmp     short loc_140BD3499
 * 0000000140BD346E: add     qword ptr [r12+7E8h], 0FFFFFFFFFFFFFFF8h
 * 0000000140BD3477: mov     rcx, [r12+7E8h]
 * 0000000140BD347F: mov     edx, [rcx]
 * 0000000140BD3481: mov     [r12+7F0h], edx
 * 0000000140BD3489: mov     rcx, [r12+238h]
 * 0000000140BD3491: mov     [r12+108h], rcx
 * 0000000140BD3499: mov     rax, r12
 * 0000000140BD349C: add     rsp, 998h
 * 0000000140BD34A3: pop     r15
 * 0000000140BD34A5: pop     r14
 * 0000000140BD34A7: pop     r13
 * 0000000140BD34A9: pop     r12
 * 0000000140BD34AB: pop     rdi
 * 0000000140BD34AC: pop     rsi
 * 0000000140BD34AD: pop     rbx
 * 0000000140BD34AE: pop     rbp
 * 0000000140BD34AF: retn
 * 0000000140BD34B1: mov     r9d, 5; BugCheckParameter3
 * 0000000140BD34B7: mov     [rbp+8D0h+var_82C], 0E8000009h
 * 0000000140BD34C1: mov     ecx, [rbp+8D0h+var_82C]
 * 0000000140BD34C7: mov     r8, rbx; BugCheckParameter2
 * 0000000140BD34CA: rol     ecx, 65h; BugCheckCode
 * 0000000140BD34CD: mov     [rsp+9D0h+BugCheckParameter4], r13; BugCheckParameter4
 * 0000000140BD34D2: lea     edx, [r9+5]; BugCheckParameter1
 * 0000000140BD34D6: call    KeBugCheckEx
 * 0000000140BD34DC: mov     r9d, 7; BugCheckParameter3
 * 0000000140BD34E2: mov     [rbp+8D0h+var_828], 0E8000009h
 * 0000000140BD34EC: mov     ecx, [rbp+8D0h+var_828]
 * 0000000140BD34F2: mov     r8, r15; BugCheckParameter2
 * 0000000140BD34F5: rol     ecx, 65h; BugCheckCode
 * 0000000140BD34F8: mov     [rsp+9D0h+BugCheckParameter4], r13; BugCheckParameter4
 * 0000000140BD34FD: lea     edx, [r9+3]; BugCheckParameter1
 * 0000000140BD3501: call    KeBugCheckEx
 * 0000000140BD3507: xor     r9d, r9d; BugCheckParameter3
 * 0000000140BD350A: mov     [rbp+8D0h+var_824], 0E8000009h
 * 0000000140BD3514: mov     ecx, [rbp+8D0h+var_824]
 * 0000000140BD351A: mov     r8, r14; BugCheckParameter2
 * 0000000140BD351D: rol     ecx, 65h; BugCheckCode
 * 0000000140BD3520: mov     [rsp+9D0h+BugCheckParameter4], r11; BugCheckParameter4
 * 0000000140BD3525: lea     edx, [r9+0Ah]; BugCheckParameter1
 * 0000000140BD3529: call    KeBugCheckEx
 * 0000000140BD352F: mov     r9d, 1; BugCheckParameter3
 * 0000000140BD3535: mov     [rbp+8D0h+var_80C], 0E8000009h
 * 0000000140BD353F: mov     ecx, [rbp+8D0h+var_80C]
 * 0000000140BD3545: mov     r8, r14; BugCheckParameter2
 * 0000000140BD3548: rol     ecx, 65h; BugCheckCode
 * 0000000140BD354B: mov     [rsp+9D0h+BugCheckParameter4], r15; BugCheckParameter4
 * 0000000140BD3550: lea     edx, [r9+9]; BugCheckParameter1
 * 0000000140BD3554: call    KeBugCheckEx
 * 0000000140BD355A: mov     r9d, eax; BugCheckParameter3
 * 0000000140BD355D: mov     r8, r14; BugCheckParameter2
 * 0000000140BD3560: xor     eax, eax
 * 0000000140BD3562: mov     [rbp+8D0h+var_7F0], 0E8000009h
 * 0000000140BD356C: mov     ecx, [rbp+8D0h+var_7F0]
 * 0000000140BD3572: rol     ecx, 65h; BugCheckCode
 * 0000000140BD3575: mov     [rsp+9D0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140BD357A: lea     edx, [rax+0Ah]; BugCheckParameter1
 * 0000000140BD357D: call    KeBugCheckEx
 * 0000000140BD3583: mov     r9d, eax; BugCheckParameter3
 * 0000000140BD3586: xor     eax, eax
 * 0000000140BD3588: mov     [rbp+8D0h+var_7E8], 0E8000009h
 * 0000000140BD3592: mov     ecx, [rbp+8D0h+var_7E8]
 * 0000000140BD3598: rol     ecx, 65h; BugCheckCode
 * 0000000140BD359B: lea     edx, [rax+0Ah]; BugCheckParameter1
 * 0000000140BD359E: mov     [rsp+9D0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140BD35A3: call    KeBugCheckEx
 * 0000000140BD35A9: mov     r9d, 2; BugCheckParameter3
 * 0000000140BD35AF: mov     [rbp+8D0h+var_7E4], 0E8000009h
 * 0000000140BD35B9: mov     ecx, [rbp+8D0h+var_7E4]
 * 0000000140BD35BF: mov     r8, r14; BugCheckParameter2
 * 0000000140BD35C2: rol     ecx, 65h; BugCheckCode
 * 0000000140BD35C5: mov     [rsp+9D0h+BugCheckParameter4], r15; BugCheckParameter4
 * 0000000140BD35CA: lea     edx, [r9+8]; BugCheckParameter1
 * 0000000140BD35CE: call    KeBugCheckEx
 * 0000000140BD35D4: mov     r9d, 3; BugCheckParameter3
 * 0000000140BD35DA: mov     [rbp+8D0h+var_7EC], 0E8000009h
 * 0000000140BD35E4: mov     ecx, [rbp+8D0h+var_7EC]
 * 0000000140BD35EA: mov     r8, r14; BugCheckParameter2
 * 0000000140BD35ED: rol     ecx, 65h; BugCheckCode
 * 0000000140BD35F0: mov     [rsp+9D0h+BugCheckParameter4], r11; BugCheckParameter4
 * 0000000140BD35F5: lea     edx, [r9+7]; BugCheckParameter1
 * 0000000140BD35F9: call    KeBugCheckEx
 * 0000000140BD35FF: mov     r8, [rbp+8D0h+var_910]; BugCheckParameter2
 * 0000000140BD3603: mov     r9d, 6; BugCheckParameter3
 * 0000000140BD3609: mov     [rbp+8D0h+var_810], 0E8000009h
 * 0000000140BD3613: mov     ecx, [rbp+8D0h+var_810]
 * 0000000140BD3619: rol     ecx, 65h; BugCheckCode
 * 0000000140BD361C: lea     edx, [r9+4]; BugCheckParameter1
 * 0000000140BD3620: mov     [rsp+9D0h+BugCheckParameter4], r10; BugCheckParameter4
 * 0000000140BD3625: call    KeBugCheckEx
 * 0000000140BD362B: mov     r15, [rbp+8D0h+var_930]
 * 0000000140BD362F: mov     [r11], rax
 * 0000000140BD3632: mov     rcx, cr4
 * 0000000140BD3635: test    rbx, rcx
 * 0000000140BD3638: jz      short loc_140BD364A
 * 0000000140BD363A: mov     rax, rcx
 * 0000000140BD363D: btc     rax, 7
 * 0000000140BD3642: mov     cr4, rax
 * 0000000140BD3645: mov     cr4, rcx
 * 0000000140BD3648: jmp     short loc_140BD3650
 * 0000000140BD364A: mov     rax, cr3
 * 0000000140BD364D: mov     cr3, rax
 * 0000000140BD3650: mov     rbx, [rbp+8D0h+var_940]
 * 0000000140BD3654: mov     rdi, [rbp+8D0h+var_900]
 * 0000000140BD3658: xor     r9d, r9d
 * 0000000140BD365B: cmp     [r12+948h], r9d
 * 0000000140BD3663: jz      short loc_140BD3679
 * 0000000140BD3665: mov     rax, cr8
 * 0000000140BD3669: lea     ecx, [r9+2]
 * 0000000140BD366D: cmp     al, cl
 * 0000000140BD366F: jnb     short loc_140BD3679
 * 0000000140BD3671: mov     rax, cr8
 * 0000000140BD3675: mov     cr8, rcx
 * 0000000140BD3679: mov     ecx, [r12+948h]
 * 0000000140BD3681: test    ecx, ecx
 * 0000000140BD3683: jz      loc_140BD3753
 * 0000000140BD3689: sub     ecx, 1
 * 0000000140BD368C: jz      loc_140BD3745
 * 0000000140BD3692: sub     ecx, 1
 * 0000000140BD3695: jz      loc_140BD373B
 * 0000000140BD369B: sub     ecx, 1
 * 0000000140BD369E: jz      loc_140BD3731
 * 0000000140BD36A4: sub     ecx, 1
 * 0000000140BD36A7: jz      short loc_140BD36F1
 * 0000000140BD36A9: cmp     ecx, 1
 * 0000000140BD36AC: jz      short loc_140BD36C8
 * 0000000140BD36AE: mov     rax, [r12+5B0h]
 * 0000000140BD36B6: mov     ecx, 1
 * 0000000140BD36BB: lock or [rax+340h], rcx
 * 0000000140BD36C3: jmp     loc_140BD3753
 * 0000000140BD36C8: mov     rcx, gs:20h
 * 0000000140BD36D1: mov     rax, [r12+658h]
 * 0000000140BD36D9: mov     edx, [r12+9D8h]
 * 0000000140BD36E1: shr     edx, 9
 * 0000000140BD36E4: and     edx, 1Fh
 * 0000000140BD36E7: mov     rcx, [rax+rcx]
 * 0000000140BD36EB: lock bts [rcx], edx
 * 0000000140BD36EF: jmp     short loc_140BD3753
 * 0000000140BD36F1: mov     rcx, gs:20h
 * 0000000140BD36FA: mov     rax, [r12+658h]
 * 0000000140BD3702: mov     r8d, [r12+9D8h]
 * 0000000140BD370A: shr     r8d, 9
 * 0000000140BD370E: and     r8d, 1Fh
 * 0000000140BD3712: mov     rcx, [rax+rcx]
 * 0000000140BD3716: add     rcx, [r12+6B8h]
 * 0000000140BD371E: mov     rax, [r12+698h]
 * 0000000140BD3726: mov     rdx, [rcx+rax]
 * 0000000140BD372A: lock bts [rdx], r8d
 * 0000000140BD372F: jmp     short loc_140BD3753
 * 0000000140BD3731: mov     rax, [r12+558h]
 * 0000000140BD3739: jmp     short loc_140BD374D
 * 0000000140BD373B: mov     rax, [r12+550h]
 * 0000000140BD3743: jmp     short loc_140BD374D
 * 0000000140BD3745: mov     rax, [r12+540h]
 * 0000000140BD374D: lock bts qword ptr [rax], 0
 * 0000000140BD3753: mov     rax, [r12+6A0h]
 * 0000000140BD375B: mov     [rbx+rax], r9
 * 0000000140BD375F: mov     rax, [r12+6B0h]
 * 0000000140BD3767: mov     [rbx+rax], r9
 * 0000000140BD376B: mov     rcx, [r12+168h]
 * 0000000140BD3773: call    KeGuardCheckICall
 * 0000000140BD3778: lea     rax, [r13-8]
 * 0000000140BD377C: mov     r9, rsi
 * 0000000140BD377F: mov     [rsp+9D0h+var_9A0], rax
 * 0000000140BD3784: mov     r8, r14
 * 0000000140BD3787: mov     rax, [r12+168h]
 * 0000000140BD378F: mov     rdx, r15
 * 0000000140BD3792: mov     [rsp+9D0h+var_9A8], rax
 * 0000000140BD3797: mov     ecx, 109h
 * 0000000140BD379C: mov     [rsp+9D0h+BugCheckParameter4], rdi
 * 0000000140BD37A1: call    SdbpCheckDll
 */
